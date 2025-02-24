#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int N,sum;
    float avg;
    
    scanf("%d", &N);
    
    struct Student students[N]; 

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        sum+=students[i].marks;
    }
    printf("Average Marks: %.2f",(float)sum/(float)N);

    return 0;
}
