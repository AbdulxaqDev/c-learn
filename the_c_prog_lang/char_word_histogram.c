#include <stdio.h>

typedef struct {
    char let;
    int charRepetition;
} letter;

typedef struct {
    int wordLen;
    int wordRepetition;
} word;

word* coutnWords();
void wordsLenHistogram(word*);


void charListInsert(letter[], letter);
void wordListInsert(word[], int);


int main(){
    word* lenOfWords = coutnWords();

    wordsLenHistogram(lenOfWords);

    return (0);
}

void wordsLenHistogram(word* words){
    printf("\n\nWords histogram based on their length");

    for (int i = 0; i < 10; ++i) 
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

word* coutnWords(){
    word words[300] = {0, 0};
    word* pWords = words;
    int c, wordLen, wordIndex;

    wordLen = 0;
    wordIndex = 0;

    while((c = getchar()) != EOF)
    {   
        if(c == ' ' || c == '\n' || c == '\t')
        {   
            wordListInsert(words, wordLen);
            wordLen = 0;
        }   
        else
        {
            ++wordLen;
        }
    }
    wordListInsert(words, wordLen);

    return pWords;
}

void wordListInsert(word words[], int wordLen){
    int isInList = 0;
    for (int i = 0; i < 300; ++i) {
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
