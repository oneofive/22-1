#include <stdio.h>

//void main() 
//{
//	int *p;
//	int num = 12345;
//	p = &num;
//	printf("num is = %d\n", num);
//	printf("num address is = %p\n", &num);
//	printf("pointer value is = %p\n", p);
//	printf("pointer indicates value %d\n\n", *p);
//
//	*p = 23456;
//	// print again num and *p
//	printf("num is = %d\n", num);
//	printf("num address is = %p\n", &num);
//	printf("pointer value is = %p\n", p);
//	printf("pointer indicates value %d\n\n", *p);
//
//}


//void main()
//{
//	void newVal(float*);  /* function prototype */
//	float  testval;
//
//	printf("Enter a float number: ");
//	scanf("%f", &testval);
//
//	printf("Before testval:\t%f\n", testval);
//	newVal(&testval);      /* function call       */
//	printf("After testval:\t%f\n", testval);
//}
//
//void newVal(float* num) /* function definition */
//{
//	*num = *num + 20.2;
//}


//void exchange();
//int n1, n2;
//void main() 
//{
//	printf("n1 n2 : ");
//	scanf("%d %d", &n1, &n2);
//	printf("[Before]\tn1 : %d , n2 : %d\n", n1, n2);
//	exchange();
//	printf("[After]\t\tn1 : %d , n2 : %d\n", n1, n2);
//}
//void exchange() 
//{
//	int temp;
//	temp = n1;
//	n1 = n2;
//	n2 = temp;
//}


//void exchange(int* ptr1, int* ptr2);
//void main() 
//{
//	int n1, n2;
//	printf("n1 n2 : ");
//	scanf("%d %d", &n1, &n2);
//	printf("[Before]\tn1 : %d , n2 : %d\n", n1, n2);
//	exchange(&n1, &n2);
//	printf("[After]\t\tn1 : %d , n2 : %d\n", n1, n2);
//}
//void exchange(int* p, int* q) {
//	int temp;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//}


//void main()
//{
//	void swap(int*, int*);  /* function prototype */
//	int n1, n2;             /* read n1 and n2   */
//	printf("n1 n2 : ");
//	scanf("%d %d", &n1, &n2);
//	printf("[before]\tn1 : %d , n2 : %d\n", n1, n2);
//	swap(&n1, &n2);         /* function call       */
//	printf("[After]\t\tn1 : %d , n2 : %d\n", n1, n2);
//}
//void swap(int* p, int* q) /* function definition */
//{
//	int  tmp;
//	tmp = *p;
//	*p = *q;
//	*q = tmp;
//}


//void main()
//{
//    void newVal(int, int, float*, int*);
//    int n1 = 0, n2 = 0, f2 = 0;
//    float f1 = 0;
//    printf("n1 n2 : ");
//    scanf("%d %d", &n1, &n2);
//    printf("[before]\tn1:%d, n2:%d, f1:%8.5f , f2:%d\n", n1, n2, f1, f2);
//    newVal(n1, n2, &f1, &f2);
//    printf("[after]\t\tn1:%d, n2:%d, f1:%8.5f , f2:%d\n", n1, n2, f1, f2);
//}
//
//void newVal(int val1, int val2, float* sum, int* remain)
//{
//    *sum = val1+val2;
//    *remain = val1%val2;
//}


//void main()
//{
//    void minmax(int, int, int*, int*);
//    int n1 = 0, n2 = 0;
//    int min = 0, max = 0;
//    printf("n1 n2 : ");
//    scanf("%d %d", &n1, &n2);
//    printf("[before]\tn1:%d, n2:%d, min:%d, max:%d\n", n1, n2, min, max);
//    minmax(n1, n2, &min, &max);
//    printf("[after]\t\tn1:%d, n2:%d, min:%d, max:%d\n", n1, n2, min, max);
//}
//
//void minmax(int num1, int num2, int* min, int* max)
//{
//    if (num1 <= num2) {
//        *min = num1;
//        *max = num2;
//    }
//    else {
//        *min = num2;
//        *max = num1;
//    }
//}



//void main()
//{
//    void calc(int, int, int*, int*, int*, int*);
//    int n1 = 0, n2 = 0;
//    int mul = 0, div = 0, mod = 0, add = 0;
//    printf("n1 n2 : ");
//    scanf("%d %d", &n1, &n2);
//    printf("[before]\tmul:%5d div:%5d mod:%5d add:%5d\n",mul, div, mod, add);
//    calc(n1, n2, &mul, &div, &mod, &add);
//    printf("[after]\t\tmul:%5d div:%5d mod:%5d add:%5d\n", mul, div, mod, add);
//}
//
//void calc(int n1, int n2, int *mul, int*div, int *mod, int *add)
//{
//    *mul = n1 * n2;
//    *div = n1 / n2;
//    *mod = n1 % n2;
//    *add = n1 + n2;
//}


//#define SIZE 4
//void totpay(float[SIZE], float[SIZE], float[SIZE]);
//
//void main() {
//    /*  declarations   */
//    float base[SIZE], overtime[SIZE], total[SIZE];
//    int n;
//
//    for (n = 0; n < SIZE; n++) {
//        printf("Please type base salary for worker%d:", n);
//        scanf("%f", &base[n]);
//        printf("Please type overtime payment for worker%d:", n);
//        scanf("%f", &overtime[n]);
//        printf("\n");
//    }
//
//    /*  read and store values in array pay */
//    totpay(base, overtime, total);
//    /*  print total    */
//    for (n = 0; n < SIZE; n++)
//        printf("total pay for worker%d = %f\n", n, total[n]);
//}
//void totpay(float* b, float* o, float* t) {
//    int k;
//    /* compute and store total for each person  */
//    for (k = 0; k < SIZE; k++)
//        t[k] = b[k] + o[k];
//}


//#include <stdio.h>
//#define SIZE 10
//void copy1(char s1[], char s2[]);
//void copy2(char* s1, char* s2);
//
//void main() {
//	char string1[SIZE] = { 0, };
//	char string2[] = "Hello";
//	char string3[SIZE] = { 0, };
//	char string4[] = "Good Bye";
//
//	copy1(string1, string2);
//	printf("string1 = %s\n", string1);
//
//	copy2(string3, string4);
//	printf("string3 = %s\n", string3);
//}
//void copy1(char s1[], char s2[]) {
//	for (int i = 0; s2[i] != NULL; i++)
//		s1[i] = s2[i];
//}
//void copy2(char* s1, char* s2) {
//	// case 1
//	/*
//	while (*s2 != NULL)
//	*s1++ = *s2++;
//	*/
//	// case 2
//	for (*s1 = *s2; *s2 != NULL; s1++, s2++)
//		*s1 = *s2;
//}


//#include <stdio.h> 
//void reverse(char* a);
//int main() {
//	char a[20];
//	printf("Enter the strings: ");
//	gets_s(a);
//	reverse(a);
//	return 0;
//}
//void reverse(char* a) {
//	char c[20];
//	char* m = a;
//	char* n = c;
//	while (*m != '\0') {
//		m++;
//	}
//	m--;
//	while (m >= &a[0]) {
//		*n++ = *m--;
//	}
//	*n = '\0';
//	printf("After reverse: string = %s", c);
//}
