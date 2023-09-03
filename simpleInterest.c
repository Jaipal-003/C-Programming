#include<stdio.h>
int main(){
    float principal,rate,time,si; // Four box are created
    printf("Enter Principal :");
    scanf("%f",&principal);
    printf("Enter Rate :");
    scanf("%f",&rate);
    printf("Enter Time :");
    scanf("%f",&time);
    si = (principal*rate*time)/100;
    printf("Your Simple Interest is : %f",si);
    return 0;
}