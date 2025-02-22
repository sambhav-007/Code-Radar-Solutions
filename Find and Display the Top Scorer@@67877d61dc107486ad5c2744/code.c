#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int N;
    int topper=0;

    scanf("%d", &N);
    
    struct Student students[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    

    for (int i = 1; i < N; i++) {
        if (students[i].marks>=student[i-1].marks)
        topper=i;
    }

    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %f",students[topper].roll_number,students[topper].name,students[topper].marks);
    
    return 0;
}
