/* 학생들의 성적 기록표를 2차원 배열에 저장하고 각 학생의 최종 성적을
 계산하는 프로그램을 작성하시오 */

#include<stdio.h>

//char exam[6] = {"학번", "중간고사(30%)", "기말고사(40%"), "기말과제(20%)", "퀴즈점수(10%)", "결석횟수(감점)"};

int grade[3][5] = {{87,98,80,76,3},
    {99,89,90,90,0},
    {65,68,50,49,0}};
int main()
{
    int i, j;
//    for(i=0;i<6;i++)
//    {
//        printf(" %s", grade[i]);
//    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++)
            printf("%d ", grade[i][j]);
        printf("\n");
    }
    
    float student1 = (87*0.3)+(98*0.4)+(80*0.2)+(76*0.1)-3;
    float student2 = (99*0.3)+(89*0.4)+(90*0.2)+(90*0.1);
    float student3 = (65*0.3)+(68*0.4)+(50*0.2)+(49*0.1);
    
    printf("학생1의 최종성적 = %.2f\n", student1);
    printf("학생2의 최종성적 = %.2f\n", student2);
    printf("학생3의 최종성적 = %.2f\n", student3);
}

