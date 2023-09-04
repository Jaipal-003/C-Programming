#include<stdio.h>
int main(){
    float principal,rate,time,simpleInterest; // Four box are created
    printf("Enter Principal :");
    scanf("%f",&principal);
    printf("Enter Rate :");
    scanf("%f",&rate);
    printf("Enter Time :");
    scanf("%f",&time);
    simpleInterest = (principal*rate*time)/100;
    printf("Your Simple Interest is : %f",simpleInterest);
    return 0;
}