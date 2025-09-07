
#include <stdio.h>

int main (){
    //ประกาศตัวแปร (declare variable)
    double money , money_share ;
    int person ;

    printf("----------------------------------------\n");
    printf("\tMoney share");
    printf("\n----------------------------------------\n");

    printf("input money : ");
    scanf("%lf",&money);

    printf("input person : ");
    scanf("%d",&person);

    money_share = money / person ;
    printf("----------------------------------------\n");
    printf("money share : %.2lf baht\n",money_share);
    printf("----------------------------------------\n");
    
    return 0;

}