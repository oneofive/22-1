#include <stdio.h>

//void func(int, int);
//void main(){
//	int num1, num2;
//	printf("Type num1:");
//	scanf("%d", &num1);
//	printf("Type num2:");
//	scanf("%d", &num2);
//	func(num1, num2);
//}
//
//void func(int n1, int n2) {
//	if (n1 == n2) {
//		printf("Num1 is same to Num2 as %d\n",n1);
//	}
//	else if (n1 > n2) {
//		printf("%d is greater than %d\n",n2,n1);
//	}
//	else {
//		printf("%d is less than %d\n", n1, n2);
//	}
//}


//int func(int, int);
//void main() {
//	int num1, num2, result;
//	printf("Type num1:");
//	scanf("%d", &num1);
//	printf("Type num2:");
//	scanf("%d", &num2);
//	result = func(num1, num2);
//	printf("%d is the greater number\n", result);
//}
//
//int func(int n1, int n2) {
//	if (n1 > n2) {
//		return n1;
//	}
//	else {
//		return n2;
//	}
//}

//
//void func1(int, int);
//void func2(int, int);
//void main() {
//	int num1, num2;
//	printf("Type num1:");
//	scanf("%d", &num1);
//	printf("Type num2:");
//	scanf("%d", &num2);
//
//	func1(num1, num2);
//	func2(num1, num2);
//}
//
//void func1(int n1, int n2) {
//	if (n1 == n2) {
//		printf("Num1 is same to Num2 as %d\n", n1);
//	}
//	else if (n1 < n2) {
//		printf("%d %d\n", n1, n2);
//	}
//	else {
//		printf("%d %d\n", n2, n1);
//	}
//}
//
//void func2(int n1, int n2) {
//	if (n1 == n2) {
//		printf("Num1 is same to Num2 as %d\n", n1);
//	}
//	else if (n1 < n2) {
//		printf("%d %d\n", n2, n1);
//	}
//	else {
//		printf("%d %d\n", n1, n2);
//	}
//}

//
//void func1(int, int);
//void func2(int, int);
//void main() {
//	int num1, num2;
//	printf("Type num1:");
//	scanf("%d", &num1);
//	printf("Type num2:");
//	scanf("%d", &num2);
//
//	power(num1, num2);
//	func2(num1, num2);
//}
//
//void power(int n1, int n2) {
//	int result = n2;
//
//	for (int i = 0; i < n1; i++) {
//		if (i == 0) continue;
//		result *= n2;
//	}
//	printf("%d raised to the power of %d: %d\n", n1, n2, result);
//}
//
//void func2(int n1, int n2) {
//	if (n1 == n2) {
//		printf("Num1 is same to Num2 as %d\n", n1);
//	}
//	else if (n1 < n2) {
//		printf("%d is greater than %d\n", n2, n1);
//	}
//	else {
//		printf("%d is less than %d\n", n1, n2);
//	}
//}

//
//int func1(int, int, int);
//int func2(int, int);
//int func3(int, int);
//int main() {
//	int num1, num2, p, result;
//	printf("Type num1:");
//	scanf("%d", &num1);
//	printf("Type num2:");
//	scanf("%d", &num2);
//	printf("Type p value for the power of p:");
//	scanf("%d", &p);
//
//	result = func1(num1, num2, p);
//	printf("result:%d\n", result);
//	return 0;
//}
//
//int func1(int n1, int n2, int p) {
//	int big, result;
//	big = func2(n1, n2);
//	result = func3(big, p);
//	return result;
//}
//
//int func2(int n1, int n2) {
//	if (n1 > n2) {
//		return n1;
//	}
//	else {
//		return n2;
//	}
//}
//
//int func3(int n1, int n2) { 
//	int result = n2;
//
//	for (int i = 0; i < n1; i++) {
//		if (i == 0) continue;
//		result *= n2; // result = result * n2;
//	}
//	return result;
//}


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

//int num1;   // 30
//int num2;   // 40
//void newfun();
//void main() {
//	int num1 = 10;
//	int num2 = 20;
//	newfun();
//	printf("num1=%d num2=%d\n", num1, num2);
//}
//
//void newfun() {
//	num1 = 30;
//	num2 = 40;
//}


int num1, num2;
void exchange();
void main()
{
	printf("Type num1: ");
	scanf_s("%d", &num1);
	printf("Type num2: ");
	scanf_s("%d", &num2);
	printf("Before: num1=%d num2=%d\n", num1, num2);
	exchange();
	printf("After:  num1=%d num2=%d\n", num1, num2);
}
void exchange(){
	int tmp;
	tmp = num1;
	num1 = num2;
	num2 = tmp;
}


//int square(int y);
//void main() {
//	int x;
//	for (x = 1; x <= 10; ++x)
//		printf("%d ", square(x));
//	printf("\n");
//}
//
//int square(int y){
//	return (y * y);
//}


//int maximum(int, int, int);
//void main() {
//	// define three integers
//	int num1, num2, num3;
//	// read three integers
//	printf("Type three values: ");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	// call maximum values using three inputted integers
//	// print result
//	printf("result = %d\n", maximum(num1, num2, num3));
//}
//
//// define maximum function & computation
//int maximum(int x, int y, int z) {
//	int max = x;
//	if (y > max) max = y;
//	if (z > max) max = z;
//	return max;
//}


//#include <string.h>
//void main()
//{
//	char str[81];
//	strcpy(str, "these ");
//	strcat(str, "strings ");
//	strcat(str, "are ");
//	strcat(str, "concatenated.\n");
//	puts(str);
//	printf("str has %d characters\n", strlen(str));
//}

//#include <stdlib.h>
//#include <stdio.h>
//
//void main()
//{
//	int num;
//	double dnum;
//
//	num = atoi("30000");
//	num = num / 1000;
//
//	printf("num = %d\n", num);
//
//	dnum = atof("333.99");
//	dnum = dnum / 3.0;
//
//	printf("dnum = %f\n", dnum);
//}

//#include <math.h>
//void main()
//{
//	int sum = 0.0;
//	int num[10] = { 0, };
//	int numSize = 10;
//	int diff = 0;
//	float mean = 0;
//	float std = 0;
//
//	for (int i = 0; i < numSize; i++) {
//		printf("[%d] type value: ", i);
//		scanf_s("%d", &num[i]);
//	}
//
//	for (int j = 0; j < numSize; j++) {
//		sum += num[j];
//	}
//	mean = sum / numSize;
//
//	// compute std
//	for (int k = 0; k < numSize; k++) {
//		diff = num[k] - mean;
//		std = std + pow(diff, 2);
//	}
//	std = sqrt(std / numSize);
//	printf("mean=%f std=%f\n", mean, std);
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void main() {
//	int i;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%d\t", 1 + (rand() % 6));
//		if(i % 5 == 0)
//			puts("");
//	}
//}


//#include <stdio.h>
//int factorial(int number);
//void main() {
//	int count;
//	printf("Type the number for factorial: ");
//	scanf_s("%d", &count); // read values to compute
//	printf("%d!=%d\n", count, factorial(count));
//}
//int factorial(int number)
//{
//	int result = 1;
//	for (int i = number; i >= 1; i--) {
//		result *= i;
//	}
//	return result;
//}

//
//#include <stdio.h>
//int factorial(int number);
//
//void main() {
//	int count;
//	printf("Type the number for factorial: ");
//	scanf_s("%d", &count); // read values to compute
//	printf("%d!=%d\n", count, factorial(count));
//}
//int factorial(int number)
//{
//	if (number == 1) return 1;
//	else return (number * factorial(number - 1));
//}

// 5 -->  5* fac(4) --> 5*4*fac(3) --> 5*4*3*fac(2) --> 5*4*3*2*fac(1) --> 5*4*3*2*1

//
//#include <stdio.h>
//int Fibo(int number);
//void main() {
//	int i, count;
//	printf("Type the number for fibonacci: ");
//	scanf_s("%d", &count);
//	for (i = 0; i < count; i++)
//		printf("%d ", Fibo(i));
//}
//int Fibo(int number) {
//	if (number == 0)
//		return 0;
//	else if (number == 1)
//		return 1;
//	else
//		return (Fibo(number - 2) + Fibo(number - 1));
//}
//

// 0: 0
// 1: 1
// 2: f(0) + f(1) --> 0 + 1 = 1
// 3: f(1) + f(2) --> 1 + f(0) + f(1) --> 1 + 0 + 1 = 2
// 4: f(2) + f(3) --> f(0) + f(1) + f(1) + f(2) --> 0 + 1 + 1 + f(0) + f(1) --> 0 + 1 + 1 + 0 + 1 =3 