#include "stdio.h"
// int level; ประกาศตัวแปร (declare Global variable) ใช้ตรงไหนก็ได้
int main (){
    
    int level;  //ประกาศตัวแปร (declare Local variable) ใช้ในปีกกาเท่านั้น

    printf("--------------------------------\n");
    printf("\twelcome student\n");
    printf("--------------------------------\n");
    printf("enter your level : ");
    scanf("%d",&level);

    if (level == 1)
        printf ("hello you are freshman\n");
    else if (level == 2)
        printf ("hello you are sophomore\n");
    else if (level == 3)
        printf ("hello you are junior\n");
    else if (level == 4)
        printf ("hello you are senior\n");
    else
        printf ("hello T_T\n");
    return 0;
}