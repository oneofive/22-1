#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, d;
    float root1, root2;
 
    printf("The coefficients of ax^2+bx+c=0 are a, b and c\n");
    printf("Enter values of a,b and c: \n");
    scanf("%d %d %d", &a, &b, &c);
    d = (b*b) - 4*a*c;

    if( d>1 ){
    root1 = (-b+sqrt(d)) / 2*a;
    root2 = (-b-sqrt(d)) / 2*a;
    printf("Two real and distinct roots\n");
    printf("Roots are %f and %f\n", root1, root2);
    }
    else if(d==0){
    root1 = root2 = -b/2*a;
    printf("Two real and equal roots\n");
    printf("Roots are %f and %f\n", root1, root2);
    }
    else{
    printf("Roots are imaginary");
    }
}