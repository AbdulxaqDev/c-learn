#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char let;
    int letterRepetition;
} letter;

typedef struct {
    int wordLen;
    int wordRepetition;
} word;

typedef struct {
    letter* letters;
    word* words;
} pCharWord;



pCharWord  countCharWord();
void wordsLenHistogram(word*);
void letterHistogram(letter*);
void letterListInsert(letter[], char);
void wordListInsert(word[], int);


int main()
{
    pCharWord charWordList = countCharWord();
    letter* lettersList = charWordList.letters;
    word* wordsList = charWordList.words;

    wordsLenHistogram(wordsList);
    letterHistogram(lettersList);

    return (0);
}

void wordsLenHistogram(word* words)
{
    printf("\n\n -- Words histogram based on their length --\n");
    printf("\nFollowing graph shows repetition of words with");
    printf("\nsame length in bar and exact number. If words\nwith same legth repeats more, the bar becames\nmore long, at the end of bar the exact number\nof them is given:\n");
    printf("\n         [5]■■■■■■■■■■■■■■■■■■■■■■ x22");
    printf("\n         /             |             \\      ");
    printf("\nword length           bar       repetition number\n");


    for (int i = 0; i < 300; ++i) 
    {
        if(words[i].wordLen > 0)
        {
            printf("\n[%d]", words[i].wordLen);
            for (int j = 0; j < words[i].wordRepetition; ++j) 
            {
                printf("■");
            }
            printf(" x%d", words[i].wordRepetition);
        }
    }
    printf("\n");
}

void letterHistogram(letter* letters)
{
    printf("\n\n -- Ltters histogram based on their repetition --\n");
    printf("\nFollowing graph shows repetition of a letter");
    printf("\nin bar and its repetition in number. If letter");
    printf("\nrepeats more, the bar becames more long, at the");
    printf("\nend of bar the exact repetition number is given:\n");
    printf("\n         ['c']■■■■■■■■■■■■■■■■■■■■■■ x22");
    printf("\n          /             |             \\      ");
    printf("\n     letter         histogram    repetition number\n");




    for (int i = 0; i < 256; ++i) 
    {
        if(letters[i].let > 0)
        {

            if(letters[i].let == '\n')
                 printf("\n['\\n']");
            else
                printf("\n['%c']", letters[i].let);
            for (int j = 0; j < letters[i].letterRepetition; ++j) 
            {
                printf("■");
            }
            printf(" x%d", letters[i].letterRepetition);
        }
    }
    printf("\n");

}

pCharWord countCharWord()
{
    word* words = malloc(300 * sizeof(word));
    letter* letters = malloc(300 * sizeof(letter));

    int c, wordLen, wordIndex;
    pCharWord returnType;
    returnType.words = words;
    returnType.letters = letters;

    for (int i = 0; i < 300; i++) 
    {
        words[i].wordLen = 0;
        words[i].wordRepetition = 0;
    }


    for (int i = 0; i < 256; i++) 
    {
        letters[i].let = 0;
        letters[i].letterRepetition = 0;
    }

    wordLen = 0;
    wordIndex = 0;

    while((c = getchar()) != EOF)
    {   
        if(c == ' ' || c == '\n' || c == '\t')
        {   
            if(wordLen > 0)
                wordListInsert(words, wordLen);
            wordLen = 0;
        }   
        else
        {
            ++wordLen;
        }
        
        letterListInsert(letters, c);

    }
    wordListInsert(words, wordLen);


    return returnType;
}

void wordListInsert(word words[], int wordLen)
{
    int isInList = 0;
    for (int i = 0; i < 300; ++i)
    {
        if(words[i].wordLen == wordLen)
        {
            ++words[i].wordRepetition;
            isInList = 1;
        }
    }
    if(isInList == 0)
    {
        for (int i = 0; i < 300; ++i)
        {
            if(words[i].wordLen == 0)
            {
                word newWord;
                newWord.wordLen = wordLen;
                newWord.wordRepetition = 1;
                words[i] = newWord;
                break;
            }
        }
    }

}


void letterListInsert(letter letters[], char let)
{
    int isInList = 0;
    for (int i = 0; i < 256; ++i)
    {
        if(letters[i].let == let)
        {
            ++letters[i].letterRepetition;
            isInList = 1;
        }
    }

    if(isInList == 0)
    {
        for (int i = 0; i < 300; ++i)
        {
            if(letters[i].let == 0)
            {
                letter newLetter;
                newLetter.let = let;
                newLetter.letterRepetition = 1;
                letters[i] = newLetter;
                break;
            }
        }
    }
}





