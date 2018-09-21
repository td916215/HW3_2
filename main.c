#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letterGrade;

    printf("Enter a letter grade: ");
    scanf("%c", &letterGrade);

    switch(letterGrade)
    {
    case 'F':
    case 'f':
        printf("0-59.9");
        break;
    case 'D':
    case 'd':
        printf("60-69.9");
        break;
    case 'C':
    case 'c':
        printf("70-79.9");
        break;
    case 'B':
    case 'b':
        printf("80-89.9");
        break;
    case 'A':
    case 'a':
        printf("90-100");
        break;
    }

    return 0;
}
