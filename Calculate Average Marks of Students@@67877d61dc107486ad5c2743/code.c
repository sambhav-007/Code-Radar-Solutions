#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int N;
    float avg,sum;
    
    scanf("%d", &N);
    
    struct Student students[N]; 

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        sum+=(float)students[i].marks;
    }
    printf("Average Marks: %.2f",sum/N;

    return 0;
}
