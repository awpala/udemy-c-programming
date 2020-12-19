#include <stdio.h>
#include <stdbool.h>

int main()
{
    enum gender { male, female };
    enum gender myGender = male;
    enum gender anotherGender = female;
    bool isMale = (myGender == anotherGender);

    char myCharacter = 'j';
    char escapeChar = '\n';
    printf("%c", escapeChar);

    return 0;
}