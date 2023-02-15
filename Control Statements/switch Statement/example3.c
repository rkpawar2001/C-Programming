// Program to whether entered character is vowel or consonant
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Alphabet");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Alphabet is a vowel\n");
        break;
    default:
        printf("Alphabet is consonant\n");
        break;
    }
    return 0;
}