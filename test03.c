#include <stdio.h> // หรือ <stdio.h>

int main (){

    //python ==>>> name = input("Enter your name: ")

    //declare variable
    char name[50];
    int age;  //long int หลักพันล้าน

    int n1 , n2 , n3 ;
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d %d %d\n", n1, n2, n3);

    printf("Enter your name: ");
    scanf("%s", &name); //&name คือ ที่เก็บข้อมูล

    printf("Enter your age: ");
    scanf("%d", &age);

    return 0;
}