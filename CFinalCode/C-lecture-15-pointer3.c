//#include<stdio.h> 
//
//void main() {
//	int num = 45, *ptr, **ptr2ptr;
//	ptr = &num;
//	ptr2ptr = &ptr;
//	printf("%d\n", **ptr2ptr);
//}


#include<stdio.h>
void main() {
	char c1 = 'A';
	char *cp = NULL;
	char **cpp = NULL;

	cp = &c1;
	cpp = &cp;

	printf("%c %p %p\n", c1, cp, cpp);
	printf("%p %p %p\n", &c1, &cp, &cpp);
	printf("%c %c %c\n", c1, *cp, **cpp);
}


//#include <stdio.h> 
//void main() {
//	int var[3] = { 10, 100, 200 };
//	int i;
//	for (i = 0; i < 3; i++) {
//		printf("Value of var[%d] = %d\n", i, var[i]);
//	}
//}


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


#include <stdio.h> 
void main() {
	const char *names[4]= { "kim", "lee", "park", "choi"};
	int i = 0;
	for (i = 0; i < 4; i++) {
		printf("value of names[%d] = %s\n", i, names[i]);
	}
}


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

//
//#include <stdio.h> 
//#include <string.h>
//
//void main() 
//{
//    char *s;
//    char buf[81] = "This is a test";
//    s = strchr(buf, 'h');   /*  s is NOT int  */
//    if (s != NULL)
//        printf("found a 'T' at %p\n", s);
//}`



//#include <stdio.h> 
//#include <string.h>
//
//void main()
//{
//    char* s;
//    char buf[81] = "This is a test";
//    s = strchr(buf, 'T');   /*  s is NOT int  */
//    if (s != NULL)
//        printf("found a 'T' at %p\n", s);
//
//    s = strchr(buf, 't');   /*  s is NOT int  */
//    if (s != NULL)
//        printf("found a 't' at %p\n", s);
//
//}


//#include <stdio.h> 
//char* strchr1(char [], char);
//void main()
//{
//    char *s;
//    char buf[81] = "This is a test";
//    s = strchr1(buf, 'T');   /*  s is NOT int  */
//    if (s != NULL)
//        printf("found a 'T' at %p\n", s);
//
//    s = strchr1(buf, 't');   /*  s is NOT int  */
//    if (s != NULL)
//        printf("found a 't' at %p\n", s);
//}
//char* strchr1(char buf[], char c){
//    int k = 0;
//    while (buf[k] != NULL) {
//        if (buf[k] == c)
//            return (char*)&buf[k];
//        k++;
//    }
//    return NULL;
//}


//#include <stdio.h> 
//char* strchr2(char*, char);
//void main()
//{
//    char* s;
//    char buf[81] = "This is a test";
//    s = strchr2(buf, 'T');   /*  s is NOT int  */
//    if (s != NULL)
//        printf("found a 'T' at %p\n", s);
//
//    s = strchr2(buf, 't');   /*  s is NOT int  */
//    if (s != NULL)
//        printf("found a 't' at %p\n", s);
//}
//
//char* strchr2(char* s, char c){
//    while (*s != c) {
//        s++;
//        if (*s == NULL)
//            return NULL;
//    }
//    return (char*)s;
//}


// #include <stdio.h> 
// #include <stdlib.h>
// #include <time.h>
// int* getRandom() {
// 	static int r[10], i;
// 	srand(time(NULL));
// 	for (i = 0; i < 10; ++i) {
// 		r[i] = rand();
// 		printf("r[%d] = %d\n", i, r[i]);
// 	}
// 	return r;
// }
// void main() {
// 	int* p; int i;
// 	p = getRandom();
// 	for (i = 0; i < 10; i++)
// 		printf("*(p + %d) : %d\n", i, *(p + i));
// }
