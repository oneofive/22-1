#include <stdio.h>

void asterisksDisplay (int row, int column, char character);
int main (void){
    int a=0;
    int b=0;
    char c;
    printf("please enter a character to fill the rectangle: ");
    scanf("%c", &c);
    printf("Enter sides: ");
    scanf("%d%d", &a, &b);
    printf("\n");
    asterisksDisplay(a, b, c);
}

void asterisksDisplay (int row, int column, char character){
    for (int i = 1; i <= row; i++){
        for (int p = 1; p <= column; p++){
            printf("%c", character);
        }
        printf("\n");
    }
}