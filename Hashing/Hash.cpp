#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *f = fopen("Encryped.txt", "w");
    char input[100];
    char store[100];
    int i;

    int key;
    printf("Enter some text to encrpt:");
    gets(input);
    printf("enter the key:");
    scanf("%", &key);
}