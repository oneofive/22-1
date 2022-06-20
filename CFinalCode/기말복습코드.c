#include <stdio.h>

/* 함수 피보나치 수열*/
//void Fibo(int);
//void main(){
//	int N;
//	printf("type an integer: ");
//	scanf("%d", &N);
//	Fibo(N);
//}
//
//void Fibo(int num)
//{
//	int arr[100];
//	int k = 0;
//
//	arr[0] = 0; arr[1] = 1;
//	for (k = 0; k < num; k++)
//	{
//		if (k == 0 || k == 1)
//			printf("%d ", arr[k]);
//		else
//		{
//			arr[k] = arr[k - 1] + arr[k - 2];
//			printf("%d ", arr[k]);
//		}
//	}
//	printf("\n");
//}

///////////////////////////////////////////////////////////////

/*함수 최대값 찾기*/
//int find_max(int, int, int);        /* function prototype */
//void main() {
//	int newmax;
//	newmax = find_max(30, 40, 15);   /* function call */
//	printf("max value:%d\n", newmax);
//}
//
//int find_max(int num1, int num2, int num3){  /* function definition */
//	int max;
//	max = num1;
//	if (num2 > max)
//		max = num2;
//	if (num3 > max)
//		max = num3;
//	return max;
//}

///////////////////////////////////////////////////////////////

//int add_num(int);
//void main()
//{		
//	int iteration = 0;
//	printf("Please type the iteration number:");
//	scanf("%d", &iteration);
//	printf("The result:%d\n", add_num(iteration));
//}
//
//int add_num(int num)
//{
//	int   i, n, total = 0;
//
//	for (i = 1; i <= num; i++)
//	{
//		printf("Type an integer: ");
//		scanf("%d", &n);
//
//		if (n < 3000)
//			total = total + n;
//		if (total > 200000)
//			break;
//	}
//	return total;
//}

///////////////////////////////////////////////////////////

/*지역변수랑 전역변수 구별하기 예제*/

//int num1;
//void newfun();
//void main() {
//	int num2;
//	num1 = 30;
//	num2 = 40;
//	newfun();
//	printf("num1=%d num2=%d\n", num1, num2);
//}
//
//void newfun() {
//	int num2 = 50;
//	num1 = 60;
//}

////////////////////////////////////////////////////////////////

/*랜덤함수*/

// #include <stdlib.h>

// int main() {
// 	int i;
// 	for (i = 1; i <= 20; i++)
// 	{
// 		printf("%d\t", 1 + (rand() % 6));
// 		if(i % 5 == 0)
// 			puts("");
// 	}
//     return 0;
// }

/*for문에 i를 srand(i)로 놓고 시드를 바꾸면 rand함수 아웃풋이 계속 초기화*/

////////////////////////////////////////////////////////////////////////////////////////////////////

/*재귀함수*/

/*팩토리얼^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
// #include <stdio.h>
// int factorial(int number);

// void main() {
// 	int count;
// 	printf("Type the number for factorial: ");
// 	scanf_s("%d", &count); // read values to compute
// 	printf("%d!=%d\n", count, factorial(count));
// }
// int factorial(int number)
// {
// 	if (number == 1) return 1;
// 	else return (number * factorial(number - 1));
// }

/*피보나치 수열^^^^^^^^^^^^^^^^^^^^^^^^ */
// #include <stdio.h>
// int Fibo(int number);
// void main() {
// 	int i, count;
// 	printf("Type the number for fibonacci: ");
// 	scanf_s("%d", &count);
// 	for (i = 0; i < count; i++)
// 		printf("%d ", Fibo(i));
// }
// int Fibo(int number) {
// 	if (number == 0)
// 		return 0;
// 	else if (number == 1)
// 		return 1;
// 	else
// 		return (Fibo(number - 2) + Fibo(number - 1));
// }

////////////////////////////////////////////////////////////////////////////////////////////////

/*정렬*/

// #include <stdio.h>
// void selection_sort(int a[], int num);
// void main()
// {
// 	int i; //counters
// 	int a[10] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
// 	int hold; // for swapping values
// 	printf("Data items in original order\n");
// 	for (i = 0; i < 10; ++i)
// 		printf("%4d", a[i]);
// 	selection_sort(a, 10);
// 	printf("\nData items in ascending order\n");
// 	for (i = 0; i < 10; ++i) printf("%4d", a[i]);
// }

// void selection_sort(int a[], int num) {
// 	int hold; // for swapping values
// 	int i, current_index, start_index, k; //counters
// 	// selection sort
// 	for (start_index = 0; start_index < num; start_index++) {
// 		int smallest_index = start_index; // smallest is the index
// 		for (current_index = start_index + 1; current_index < 10; current_index++) {
// 			if (a[current_index] < a[smallest_index]) smallest_index = current_index;
// 		}
// 		// Swap the elements
// 		hold = a[start_index];
// 		a[start_index] = a[smallest_index];
// 		a[smallest_index] = hold;
// 	}
// }

// /*버블 솔트*/

// #include <stdio.h>
// void main()
// {
// 	int a[10] = { 8, 2,4,2,5,1,6,3,6,10};
// 	int i, k;
// 	printf("Data items in original order\n");

// 	for (i = 0; i < 10; i++)
// 		printf("%4d", a[i]);

// 	int temp;
// 	printf("\n\nSorting process======\n");
// 	for (int i = 0; i < 10; i++) { 
// 		for (int j = 0; j < 10 - 1; ++j) {
// 			if (a[j] > a[j + 1]) {
// 				temp = a[j];
// 				a[j] = a[j + 1];
// 				a[j + 1] = temp;
// 			}
// 		}
// 	}
// 	printf("\nData items in ascending order\n");

// 	for (k = 0; k < 10; ++k) printf("%4d", a[k]);
// }

//////////////////////////////////////////////////////////////////////////////////////////////

/*포인터 문법*/

/*
(포인터 변수) = 메모리 주소

& : 주소 연산자

&(변수) = (변수)에 할당 된 메모리 주소

*(포인터 변수) = 포인터가 가르키는 '메모리 주소'의 '메모리 값'*/

////////////////////////////////////////////////////////////////////////////////////

/*포인터 배열*/

char *ptr, string[20] = "Programming";
ptr = string;
ptr = ptr + 3;
*ptr = 'k'
13포인터 ppt 참조 (메모리 그리기)
int x = 10, y = 20, z = [100];
int *iptr;

iptr = &x;  /*iptr은?*/
y = *iptr;  /*ㅛ는?*/
*iptr = 100;    /*x는?*/
iptr = &z[0];   /*iptr은?*/
// 13인터 ppt 참조 (메모리 그리기

// 이어서 쭉 ppt 참조)

    //int b[] = { 10, 20, 30,40 };
    //int* bPtr = b;

    //for (int i = 0; i < 4; i++)
    //{
    //    printf("b[%d]:\t\t%d\n", i, b[i]);
    //    printf("*(b+%d):\t\t%d\n", i, *(b + i));
    //    printf("bPtr[%d]:\t%d\n", i, bPtr[i]);
    //    printf("*(bPtr+%d):\t%d\n\n", i, *(bPtr + i));
    //}

    //////////////////////////////////////////////////////////////////////

    /*더블 포인터 ㅈㄴ 익숙하게 만드셈*/

//#include<stdio.h> 
//
//void main() {
//	int num = 45, *ptr, **ptr2ptr;
//	ptr = &num;
//	ptr2ptr = &ptr;
//	printf("%d\n", **ptr2ptr);
//}


// #include<stdio.h>
// void main() {
// 	char c1 = 'A';
// 	char *cp = NULL;
// 	char **cpp = NULL;

// 	cp = &c1;
// 	cpp = &cp;

// 	printf("%c %p %p\n", c1, cp, cpp);
// 	printf("%p %p %p\n", &c1, &cp, &cpp);
// 	printf("%c %c %c\n", c1, *cp, **cpp);
// }



//#include <stdio.h> 
//void main() {
//	int var[3] = { 10, 100, 200 };
//	int* ptr[3];
//	int i;
//	for (i = 0; i < 3; i++)
//		ptr[i] = &var[i];
//
//	for (i = 0; i < 3; i++)
//		printf("Value of var[%d] = %d\n", i, *ptr[i]);
//}


// #include <stdio.h>
// void main() {
// 	const char *names[4]= { "kim", "lee", "park", "choi"};
// 	int i = 0;
// 	for (i = 0; i < 4; i++) {
// 		printf("value of names[%d] = %s\n", i, names[i]);
// 	}
// }


//#include <stdio.h>
//void main(void) {
//	const char *months[13] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
//	int m; // integer month
//	int d; // integer day
//	int y; // integer year
//
//	printf("%s", "Enter a date in the form mm/dd/yyyy: ");
//	scanf("%d/%d/%d", &m, &d, &y);
//	printf("The date is: %s %d, %d\n", months[m], d, y);
//}