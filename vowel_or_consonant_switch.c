#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alpahabet to check if its a vowel or consonant: ");
    scanf("%c",&ch);
    switch(ch)
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
        printf("%c is a vowel",ch);
        break;
        default:
        printf("%c is a consonant",ch);
    }
}