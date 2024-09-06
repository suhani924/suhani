#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("Enter a score:- ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' : 
            (score >= 80) ? 'B':
            (score >= 70) ? 'C': 
            (score >= 60) ? 'D':
     'F';

    printf("Your grade is: %c\n", grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent work!\n");
        break;
    case 'B':
        printf("Well done\n");
        break;
    case 'C':
        printf("Good job\n");
        break;
    case 'D':
        printf("You passed, but you could do better\n");
        break;
    case 'F':
        printf("Sorry, you failed\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }
    if (grade >= 'A' && grade <= 'D')
    {
        printf("Congratulations! You are eligible for the next level\n");
    }
    else
    {
        printf("Please try again next time\n");

        return 0;
    }
}