#include<stdio.h>
int total(int num, int sum);
int main(){
    int num, sum = 0;
    printf("Enter a number between 1 and 9999: ");
    scanf("%d",&num);  
    printf("The sum of the digits of the number %d is %d",num,total(num, sum));
    return 0;
}
int total(int num, int sum){   
    if(num == 0)
        return sum;
    sum += num % 10;
    return total(num/10, sum);
}