#include <stdio.h>

// 🔹 Function: Calculate the average marks of one student
float calculate_average(int marks[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += marks[i];
    return sum / (float)n;
}

// 🔹 Function: Print the grade of a student based on average
void print_grade(char name[], float average)
{
    printf("Student: %-5s | ", name);  // formatted name output
    printf("Average: %.2f | ", average);

    if (average >= 80)
        printf("Grade: A\n");
    else if (average >= 60)
        printf("Grade: B\n");
    else if (average >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");
}

// 🔹 Function: Find topper (returns index of topper student)
int find_topper(int marks[][3], int total_students, int total_subjects)
{
    int maximum = 0, position = 0;

    for (int i = 0; i < total_students; i++)
    {
        int total = 0;
        for (int j = 0; j < total_subjects; j++)
            total += marks[i][j];

        if (total > maximum)
        {
            maximum = total;
            position = i;
        }
    }
    return position;
}

// 🔹 Main Function
int main()
{
    // Student marks: 3 students × 3 subjects
    int student_marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };

    // Student names
    char students_name[3][10] = {"Ali", "Bob", "Cat"};

    float averages[3];
    int topper_index;

    printf("========= STUDENT REPORT =========\n\n");
    printf("Name     | Average | Grade\n");
    printf("---------------------------------\n");

    // 🔹 Calculate average and print grade for each student
    for (int i = 0; i < 3; i++)
    {
        averages[i] = calculate_average(student_marks[i], 3);
        print_grade(students_name[i], averages[i]);
    }

    // 🔹 Find topper using separate function
    topper_index = find_topper(student_marks, 3, 3);

    // 🔹 Calculate topper's total marks
    int topper_total = 0;
    for (int j = 0; j < 3; j++)
        topper_total += student_marks[topper_index][j];

    printf("\n---------------------------------\n");
    printf("🏆 Topper: %s with total %d marks\n", students_name[topper_index], topper_total);
    printf("=================================\n");

    return 0;
}
