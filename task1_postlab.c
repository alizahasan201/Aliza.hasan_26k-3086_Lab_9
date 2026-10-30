#include <stdio.h>
int main()
{
    int marks[2][3][4];
    int tot[2][3];
    float avg[2][3];
    int sectot[2], highstu[2];
    float secavg[2];
    int i, j, k, count, highsec;

    count = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            tot[i][j] = 0;

            printf("\nSection %d, Student %d\n", i + 1, j + 1);

            for (k = 0; k < 4; k++)
            {
                printf("Enter marks of subject %d: ", k + 1);
                scanf("%d", &marks[i][j][k]);

                tot[i][j] = tot[i][j] + marks[i][j][k];
            }

            avg[i][j] = tot[i][j] / 4.0;

            if (avg[i][j] >= 50)
            {
                count++;
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        highstu[i] = 0;
        sectot[i] = 0;

        for (j = 0; j < 3; j++)
        {
            sectot[i] = sectot[i] + tot[i][j];

            if (tot[i][j] > tot[i][highstu[i]])
            {
                highstu[i] = j;
            }
        }

        secavg[i] = sectot[i] / 12.0;
    }

    highsec = 0;

    if (secavg[1] > secavg[0])
    {
        highsec = 1;
    }

    printf("\n===== STUDENT RESULTS =====\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nSection %d:\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            printf("Student %d: Total = %d, Average = %.2f\n",
                   j + 1, tot[i][j], avg[i][j]);
        }

        printf("Highest-scoring student: Student %d\n",
               highstu[i] + 1);
    }

    printf("\nStudents with average at least 50: %d\n", count);

    printf("Section with highest overall average: Section %d\n",
           highsec + 1);

    return 0;
}
