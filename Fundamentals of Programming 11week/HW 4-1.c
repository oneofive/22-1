#include <stdio.h>
void rectangle(int row, int column);
int main (void){
    int a=0;
    int b=0;
    printf("Enter sides: ");
    scanf("%d%d", &a, &b);
    rectangle(a, b);
}

void rectangle(int row, int column){
    for (int i = 1; i <= row; i++) {
        for (int p = 1; p <= column; p++) {
            printf("*");
        }
        printf("\n");
    }
 }