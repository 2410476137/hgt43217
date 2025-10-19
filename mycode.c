#include <stdio.h>

float calculate_average(int marks[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += marks[i];
    return sum / (float)n;
}


void print_grade(char name[], float average)
{
    if (average >= 80)
        printf("%s Grade A avg = %.2f\n", name, average);
    else if (average >= 60)
        printf("%s Grade B avg = %.2f\n", name, average);
    else if (average >= 40)
        printf("%s Grade C avg = %.2f\n", name, average);
    else
        printf("%s Fail avg = %.2f\n", name, average);
}

int main()
{
    int student_marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char students_name[3][10] = {"Ali", "Bob", "Cat"};

    float averages[3];
    int i, j;
    int total, maximum = 0, position = 0;

    for (i = 0; i < 3; i++)
    {
        averages[i] = calculate_average(student_marks[i], 3);
        print_grade(students_name[i], averages[i]);
    }

    for (i = 0; i < 3; i++)
    {
        total = 0;
        for (j = 0; j < 3; j++)
            total += student_marks[i][j];

        if (total > maximum)
        {
            maximum = total;
            position = i;
        }
    }

    printf("\nTopper: %s with total %d\n", students_name[position], maximum);
    return 0;
}
