#include <stdio.h>
#include <stdlib.h>

// 실습1
struct student {
    int ID;
    char name[100];
    double grade;
};

int main(void) {
    struct student s1 = {123, "MIJI", 4.3};

    s1.ID = 123456;
    s1.name[0] = 'c';
    s1.grade = 0.7; // 변수명을 score에서 grade로 수정

    printf("ID : %d\n", s1.ID); // 변수명을 s에서 s1로 수정
    printf("name : %s\n", s1.name); 
    printf("grade : %f\n", s1.grade); 

    return 0; // main 함수의 반환값을 0으로 설정  
}
