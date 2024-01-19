#include <stdio.h>

int main()

// 2-d array
{
    int nstudents = 3;
    int nsubjects = 5;

    int marks[3][5];
    for (int i = 0; i<nstudents; i++)
    {
        for (int j = 0; j<nsubjects; j++)
        {
            printf("Enter the marks of student %d in subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i <nstudents; i++)
    {
        for (int j = 0; j <nsubjects; j++)
        {
            printf("Enter the marks of student %d in subject %d is %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
        return 0;
    }