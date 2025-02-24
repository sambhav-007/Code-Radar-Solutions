#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int N,a;
    float sum=0;
    
    scanf("%d", &N);
    
    
    struct Student students[N]; 

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    scanf("%d",&a);
    for(int i=0;i<N;i++){
        if(students[i].roll_number==a)
        printf("Roll Number: %d, Name: %s, Marks: %.2f",students[i].roll_number,students[i].name,students[i].marks);
        else:
        printf("Student not found");
    }

    return 0;
}
