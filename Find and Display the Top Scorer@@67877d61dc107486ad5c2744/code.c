#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int N;
    
    scanf("%d", &N);
    
    struct Student students[N]; // Ensure your compiler supports VLAs, or use malloc()

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    int topper = 0; // Assume first student is the topper initially

    for (int i = 1; i < N; i++) {
        if (students[i].marks > students[topper].marks) { // Corrected comparison
            topper = i;
        }
    }

    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",
           students[topper].roll_number, students[topper].name, students[topper].marks);

    return 0;
}
