#include<stdio.h>
int main(){
 int firstnumber;
 int secondnumber;
 int sum;
 int difference;
 scanf("%d and %d",firstnumber,secondnumber);
 printf("Enter the first number \n%d\n",firstnumber);
 printf("Enter the second number \n%d\n",secondnumber);
 sum=firstnumber+secondnumber;
 difference=firstnumber-secondnumber;
 printf("The sum of %d and %d is %d\n",firstnumber,secondnumber,sum);
 printf("The difference between %d and %d is %d",firstnumber,secondnumber,difference);
 return 0;
}