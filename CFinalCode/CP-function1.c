#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// void tempconvert(char, int);        /* function prototype */

// void main()
// {
// 	char forc = 'f';
// 	int  tmp = 106;
// 	tempconvert(forc, tmp);           /* function call */
// }

// void tempconvert(char fc, int temp) /* function definition */
// {
// 	float newtemp;
// 	if (fc == 'f')
// 		newtemp = (temp - 32) * 5.0 / 9;
// 	else
// 		newtemp = temp * 9.0 / 5 + 32;
// 	printf("new temperature = %f", newtemp);
// }



//void tempConvert(char, int);
//void main() { //1
//	char ForC = 'F'; //2
//	int  tmp = 106;  //3
//	printf("will call tempConvert\n");  //4
//	tempConvert(ForC, tmp);  // 5
//	printf("back from tempConvert\n"); //13
//}
//void tempConvert(char FC, int temp) {
//	float newTemp;  //6
//	printf("entered tempConvert\n"); //7
//	printf("FC = %c and temp = %d\n", FC, temp); //8
//	if (FC == 'F') // 9
//		newTemp = (temp - 32) * 5.0 / 9; //10
//	else
//		newTemp = temp * 9.0 / 5 + 32;
//	printf("new temperature = %f\n", newTemp); //1
//	printf("finished tempConvert\n"); //12
//}
//


//void comp_num(int, int);
//void main() {
//	int N1, N2;
//	printf("type two integers: ");
//	scanf("%d %d", &N1, &N2);
//	comp_num(N1, N2);
//}
//void comp_num(int n1, int n2) {
//	printf("n1 = %d and n2 = %d", n1, n2);
//}


//void tempConvert(char, float);
//void main() {
//	float temp, newTemp;
//	char FC;
//	printf("Enter menu(F: C->F, Any character : F->C): ");
//	scanf("%c", &FC);
//	printf("Enter current temperature: ");
//	scanf("%f", &temp);
//	tempConvert(FC, temp);
//}
//
//void tempConvert(char FC, float temp)
//{
//	float newTemp;
//	if (FC == 'F')
//		newTemp = (temp - 32) * 5.0 / 9;
//	else
//		newTemp = temp * 9.0 / 5 + 32;
//	printf("new temperature = %f\n", newTemp);
//}



//void tempConvert(char, float);
//void main() {
//	char FC;
//	float temp;
//	printf("Enter menu(F: C->F, Any character : F->C): ");
//	scanf("%c", &FC);
//	printf("Enter current temperature: ");
//	scanf("%f", &temp);
//	tempConvert(FC, temp);
//}
//
//void tempConvert(char FC, float temp)
//{
//	float newTemp;
//	if (FC == 'F')
//		newTemp = (temp - 32) * 5.0 / 9;
//	else
//		newTemp = temp * 9.0 / 5 + 32;
//	printf("new temperature = %f\n", newTemp);
//}


//void odd_even(int);
//void main(){
//	int num;
//	printf("type an integer: ");
//	scanf("%d", &num);
//	odd_even(num);
//}
//
//void odd_even(int n){ /* function definition */
//	if ((n % 2)==1)
//		printf("integer is odd\n");
//	else
//		printf("integer is even\n");
//}

//void comp_num(int, int);
//void main()
//{
//	int num1, num2;
//	printf("Type two integer values:");
//	scanf("%d %d", &num1, &num2);
//	comp_num(num1, num2);
//}
//void comp_num(int num1, int num2)
//{
//	if (num1 == num2)
//	{
//		printf("Result: %d\n", num1);
//	}
//	else if (num1 < num2)
//	{
//		printf("Result: %d %d\n", num1, num2);
//	}
//	else
//		printf("Result: %d %d\n", num2, num1);
//}




//void comp_num(int, int);
//void main() {
//	int num1, num2;
//	printf("Type num1:");
//	scanf("%d", &num1);
//	printf("Type num2:");
//	scanf("%d", &num2);
//
//	comp_num(num1, num2);
//}
//
//void comp_num(int n1, int n2) {
//	if (n1 == n2)
//		printf("The values are same to each other. value=%d\n",n1);
//	else if (n1 < n2)
//		printf("smaller one=%d lager one=%d\n", n1, n2);
//	else
//		printf("smaller one=%d lager one=%d\n", n2, n1);
//}


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
//
//void Fibo(int num)
//{
//	int n, first = 0, second = 1, next, k;
//	for (k = 0; k < num; k++)
//	{
//		if (k <= 1) {
//			next = k;
//			printf("%d ", next);
//		}
//		else
//		{
//			next = first + second;
//			first = second;
//			second = next;
//			printf("%d ", next);
//		}
//	}
//	printf("\n");
//}




//float tempConvert(char, int);          /* function prototype */
//void main() {
//	float newTemp; char FC; int temp;
//	printf("will call tempConvert (F:F2C , others:C3F):");
//	scanf("%c", &FC);
//	printf("tmp value:");
//	scanf("%d", &temp);
//	newTemp = tempConvert(FC, temp);  /* function call */
//	printf("back from tempConvert\n");
//	printf("converted temperature = %f", newTemp);
//}
//float tempConvert(char FC, int temp)  /* function definition */
//{
//	printf("entered tempConvert\n");
//	if (FC == 'F')
//		return ((temp - 32) * 5.0 / 9);
//	else
//		return (temp * 9.0 / 5 + 32);
//}


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


//int Fibo(int num);
//int main(){
//	int N;
//	printf("type an integer: ");
//	scanf("%d", &N);
//	printf("Result:%d\n",Fibo(N));
//	return 0;
//}
//
//int Fibo(int num)
//{
//	int n, first = 0, second = 1, next, k;
//	for (k = 0; k < num; k++)
//	{
//		if (k <= 1)
//			next = k;
//		else
//		{
//			next = first + second;
//			first = second;
//			second = next;
//		}
////		return next;
//	}
//	return next;
//}


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


//float volume(int, int);
//void main()
//{
//	int radius, height;
//	float vol;
//
//	printf("type radius and height:");
//	scanf("%d %d", &radius, &height);
//	vol = volume(radius, height);
//	printf("Volume: %f\n",vol);
//}
//float volume(int r, int h)
//{
//	return 3.14* r* r* h;
//}



//float volume(int, int);
//void main()
//{
//	// input
//	int radius, height;
//	float vol = 0.0;
//	printf("type radius and height:");
//	scanf("%d %d", &radius, &height);
//
//	// calc volume
//	vol = volume(radius, height);
//
//	// print
//	printf("the result=%f\n", vol);
//}
//float volume(int r, int h) {
//	return 3.14 * r * r * h;
//}


//float calc_volume(int r, int h);
//void main()
//{
//	int radius, height;
//	float vol;
//
//	printf("type radius and height:");
//	scanf("%d %d", &radius, &height);
//
//	// calc volume
//	vol = calc_volume(radius, height);
//	// print volume
//	printf("result=%f\n", vol);
//}
//float calc_volume(int r, int h) {
//	return 3.14 * r * r * h;
//}
