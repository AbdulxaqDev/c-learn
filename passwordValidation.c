#include <stdio.h>  //stdio.h is needed for printf() and scanf()
#include <string.h> // sring.h is needed for strlen()
#include <ctype.h>  // ctype.h is needed for isdigit, isupper and islower
int main()
{

    int i;
    int hasUpper, hasLower, hasDigit, hasSpecialChar, isLongEnough, passwordLen;
    char user[26], password[129];

    // Initial all three test variables are 0, false

    hasUpper = hasLower = hasDigit = hasSpecialChar = isLongEnough = 0;
    passwordLen = 13;

    printf("what is your username?\n");
    scanf(" %s", user);

    printf("Please create a password: ");
    scanf(" %s", password);

    // The loop goes through each character of the password and
    // test

    for (i = 0; i < strlen(password); i++)
    {
        if (isdigit(password[i]))
        {
            hasDigit = 1;
            continue;
        }
        if (isupper(password[i]))
        {
            hasUpper = 1;
            continue;
        }
        if (islower(password[i]))
        {
            hasLower = 1;
            continue;
        }
        if (!hasSpecialChar)
        {
            hasSpecialChar = 1;
        }
    }

    if (sizeof(password) > 12)
    {
        isLongEnough = 1;
    }

    if (!isLongEnough)
    {
        printf("You must enter at least 12 chracters");
    }

    if ((hasDigit) && (hasLower) && (hasSpecialChar) && (hasUpper))
    {
        printf("Excelent work, %s\n\n", user);
        printf("Your password meets with all requirements\n");
    }
    else
    {
        printf("\nYou shoudl consider a new password %s\n\n", user);
        printf("Make shure you include upper and lower case\n\n");
        printf("letters, digits and special charackters\n\n");
    }

    return (0);
}
