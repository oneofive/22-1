//#include <stdio.h>
//int maximum(int[], int);
//void main()
//{
//	int values[5], i, max;
//
//	printf("Enter 5 numbers\n");
//	for (i = 0; i < 5; ++i)
//		scanf_s("%d", &values[i]);
//
//	max = maximum(values, 5);
//
//	printf("\nMaximum value is %d\n", max);
//}
//int  maximum(int values[], int N)
//{
//	int  max_value, i;
//	max_value = values[0];
//	for (i = 0; i < N; ++i)
//		if (values[i] > max_value)
//			max_value = values[i];
//
//	return max_value;
//}

//#include <stdio.h>
//int maximum(int[], int);
//void main()
//{
//	int values[5], i, max;
//
//	printf("Enter 5 numbers\n");
//	for (i = 0; i < 5; ++i)
//		scanf_s("%d", &values[i]);
//	
//	printf("Before calling maximum\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", values[i]);
//	}
//	printf("\n");
//
//	max = maximum(values, 5);
//
//	printf("After calling maximum\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", values[i]);
//	}
//	printf("\n");
//
//	printf("\nMaximum value is %d\n", max);
//}
//int  maximum(int values[], int N)
//{
//	int  max_value, i;
//	max_value = values[0];
//	for (i = 0; i < N; ++i)
//		if (values[i] > max_value)
//			max_value = values[i];
//
//	for (i = 0; i < 5; i++) {
//		values[i] = 100;
//	}
//
//	return max_value;
//}


//#include <stdio.h>
//int maximum(int[]);
//void main()
//{
//	int values[5], i, max;
//
//	printf("Enter 5 numbers\n");
//	for (i = 0; i < 5; ++i)
//		scanf_s("%d", &values[i]);
//
//	max = maximum(values);
//	printf("\nMaximum value is %d\n", max);
//}
//int  maximum(int values[5])
//{
//	int  max_value, i;
//
//	max_value = values[0];
//	for (i = 0; i < 5; ++i)
//		if (values[i] > max_value)
//			max_value = values[i];
//
//	return max_value;
//}


//#include <stdio.h>
//void printArray(int input[],int len);
//
//void main() {
//    int arr1[3] = { 1,2,3 };
//    int arr2[5] = { 1,2,3,4,5 };
//
//    printArray(arr1, 3);
//    printArray(arr2, 5);
//}
//void printArray(int input[], int len) {
//    for (int i = 0; i < len; i++)
//        printf("%d ", input[i]);
//    printf("\n");
//}


//#include <stdio.h>
//void printArray(int input[], int len);
//void addArray(int input[], int len, int value);
//void main() {
//    int arr1[3] = { 1,2,3 };
//    int arr2[5] = { 1,2,3,4,5 };
//
//    printArray(arr1, 3);
//    addArray(arr1, 3, 5);
//    printArray(arr1, 3);
//}
//void printArray(int input[], int len) {
//    for (int i = 0; i < len; i++)
//        printf("%d ", input[i]);
//    printf("\n");
//}
//
//void addArray(int input[], int len, int value) {
//    for (int i = 0; i < len; i++)
//        input[i] = input[i] + value;
//}


//#include <stdio.h>
//void printArray(int input[], int len);
//void add2Array(int len, int a[], int b[], int c[]);
//void main() {
//	int arr1[5] = { 1,2,3,6,1 };
//	int arr2[5] = { 1,2,3,4,5 };
//	int arr3[5] = { 0, };
//	printArray(arr3, 5);
//	add2Array(5, arr1, arr2, arr3);
//	printArray(arr3, 5);
//}
//
//void printArray(int input[], int len) {
//    for (int i = 0; i < len; i++)
//        printf("%3d ", input[i]);
//    printf("\n");
//}
//
//void  add2Array(int len, int a[], int b[], int c[]) {
//	for (int i = 0; i < len; i++)
//		c[i] = a[i] + b[i];
//}


//#include <stdio.h>
//#define MAXNUM 5
//void mile2km(float[], int);
//void main()
//{
//	float miles[MAXNUM] = { 10, 20, 30, 40, 50, };
//	/*  store into the miles array  */
//	mile2km(miles, MAXNUM);
//}
//
//void mile2km(float local_array[], int size)
//{
//	for (int i = 0; i < size; i = i + 1)
//		printf("%8.2f", local_array[i] * 1.6093);
//}

//
//#include <stdio.h>
//#define MAXNUM 3
//void abs_arr(double [], int);
//
//void main()
//{
//	double miles[MAXNUM] = { 38.4, -101.7, -2.1 };
//	abs_arr(miles, 3);
//	for (int i = 0; i < MAXNUM; i++) {
//		printf("%lf\n", miles[i]);
//	}
//}

//void abs_arr(double local_array[], int size) {
//	int  i = 0;
//	for (i = 0; i < size; i++) {
//		if (local_array[i] >= 0)
//			local_array[i] = local_array[i];
//		else
//			local_array[i] = -local_array[i];
//	}
//}

//void abs_arr(double local_array[]) {
//	int  i = 0;
//	for (i = 0; i < MAXNUM; i++) {
//		local_array[i] = (local_array[i] > 0) ? local_array[i] : -local_array[i];
//	}
//}

//double abs_arr(double val) {
//	return (val > 0) ? val : -val;
//}


//#include <stdio.h>
//#define MAX 100
//int word_count(char[MAX]);
//void main() {
//	char  message[MAX];
//	int num_words = 0;
//	printf("enter a string : \n");
//	gets_s(message);
//	num_words = word_count(message);
//
//	printf("The number of words: %d\n", num_words);
//}
//
//int word_count(char string[]) {
//	int    i = 0, flag = 0, count = 0;
//	while (string[i] != '\0') {
//		if (string[i] == ' ')  flag = 1;
//		else {
//			if (flag == 1) {
//				count++;
//				flag = 0;
//			}
//		}
//		i = i + 1;
//	} 
//	return (count + 1);
//}

//
//
//#include <stdio.h>
//void main()
//{
//	int a[10] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
//	int hold; // for swapping values
//	int i, current_index, start_index, k; //counters
//	printf("Data items in original order\n");
//
//	for (i = 0; i < 10; ++i)
//		printf("%4d", a[i]);
//
//	// selection sort
//	for (start_index = 0; start_index < 10; start_index++) {
//		int smallest_index = start_index; // smallest is the index
//		for (current_index = start_index + 1; current_index < 10; current_index++) {
//			if (a[current_index] < a[smallest_index]) smallest_index = current_index;
//		}
//		// Swap the elements
//		hold = a[start_index];
//		a[start_index] = a[smallest_index];
//		a[smallest_index] = hold;
//	}
//	printf("\nData items in ascending order\n");
//
//	for (k = 0; k < 10; ++k) printf("%4d", a[k]);
//}

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

//
//#include <stdio.h>
//void printArray(int input[], int len);
//void main()
//{
//	int a[10] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
//	int hold; // for swapping values
//	int i, current, start, k; //counters
//	printf("Data items in original order\n");
//
//	for (i = 0; i < 10; ++i)
//		printf("%4d", a[i]);
//
//	// selection sort
//	for (start = 0; start < 10; start++) {
//
//		// printt starting point
//		printf("\n\n%d-index Starting point\n", start);
//		printArray(a, 10);
//		printf("================\n");
//
//		int smallest = start; // smallest is the index
//		for (current = start + 1; current < 10; current++) {
//			if (a[current] < a[smallest]) smallest = current;
//		}
//		// Swap the elements
//		hold = a[start];
//		a[start] = a[smallest];
//		a[smallest] = hold;
//
//		printf("%d-index swapped result\n", start);
//		printArray(a, 10);
//		printf("================\n");
//
//	}
//	printf("\nData items in ascending order\n");
//
//	for (k = 0; k < 10; ++k) printf("%4d", a[k]);
//}
//
//void printArray(int input[], int len) {
//    for (int i = 0; i < len; i++)
//        printf("%4d ", input[i]);
//    printf("\n");
//}


//
//#include <stdio.h>
//void main()
//{
//	int a[10] = { 8, 2,4,2,5,1,6,3,6,10};
//	int i, k;
//	printf("Data items in original order\n");
//
//	for (i = 0; i < 10; i++)
//		printf("%4d", a[i]);
//
//	int temp;
//	printf("\n\nSorting process======\n");
//	for (int i = 0; i < 10; i++) { 
//		for (int j = 0; j < 10 - 1; ++j) {
//			if (a[j] > a[j + 1]) {
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	printf("\nData items in ascending order\n");
//
//	for (k = 0; k < 10; ++k) printf("%4d", a[k]);
//}


//
//#include <stdio.h>
//void main()
//{
//	int a[10] = { 8, 2,4,2,5,1,6,3,6,10 };
//	int i, k;
//	printf("Data items in original order\n");
//
//	for (i = 0; i < 10; i++)
//		printf("%4d", a[i]);
//
//	int temp;
//	printf("\n\nSorting process======\n");
//	for (int i = 0; i < 10 - 1; i++) {
//		for (int j = 0; j < 10 - 1 - i; ++j) {
//			if (a[j] > a[j + 1]) {
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	printf("\nData items in ascending order\n");
//
//	for (k = 0; k < 10; ++k) printf("%4d", a[k]);
//}


//#include <stdio.h>
//void main()
//{
//	int a[10] = { 8, 2,4,2,5,1,6,3,6,10 };
//	int i, k;
//	int flag = 0;
//	printf("Data items in original order\n");
//
//	for (i = 0; i < 10; i++)
//		printf("%4d", a[i]);
//
//	int temp;
//	printf("\n\nSorting process======\n");
//	for (int i = 0; i < 10 -1; i++) {
//		flag = 0;
//		for (int j = 0; j < 10 - 1 - i; ++j) {
//			if (a[j] > a[j + 1]) {
//				flag = 1;
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//		if (flag == 0) {
//			break;
//		}
//	}
//	printf("\nData items in ascending order\n");
//
//	for (k = 0; k < 10; ++k) printf("%4d", a[k]);
//}
//

//
//#include <stdio.h>
//#define MAX 10
//
//int main(void) {
//	int a[MAX] = { 1, 2, 3, 4, 5, 10, 9, 8, 7, 6 };
//	int i, pass, hold, swap;
//	for (int pass = 1; pass < MAX; pass++) {
//		swap = 0;
//		for (i = 0; i < MAX - pass; i++) {
//			if (a[i] > a[i + 1]) {
//				swap = 1;
//				hold = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = hold;
//			}
//		}
//		printf("After Pass %d: ", pass);
//		for (i = 0; i <= MAX - pass; i++)  printf("  %d", a[i]);
//		printf("\n");
//		if (!swap) break;
//	}
//	puts("\nData items in ascending order");
//	for (i = 0; i < 10; i++) printf("%4d", a[i]);
//	puts("");
//}


//
//
//#include <stdio.h>
//#define SIZE 10
//
//// function prototypes
//void mean(unsigned int answer[]);
//void median(unsigned int answer[]);
//void mode(unsigned int freq[], unsigned int answer[]);
//void bubbleSort(unsigned int a[]);
//void printArray(unsigned int a[]);
//
//int main(void) {
//	unsigned int frequency[10] = { 0 };
//	// initialize array response
//	unsigned int response[SIZE] = { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9 };
//	// process responses
//	mean(response);
//	median(response);
//	mode(frequency, response);
//}
//
//void mean(unsigned int answer[]) {
//	unsigned int total = 0;
//	// total response values
//	for (size_t j = 0; j < SIZE; ++j) {
//		total += answer[j];
//	}
//	printf("The mean value is: %u / %u = %.4f\n\n",
//		total, SIZE, (double)total / SIZE);
//}
//
//void median(unsigned int answer[]) {
//	printArray(answer); // output unsorted array
//	bubbleSort(answer); // sort array
//	printf("%s", "\nThe sorted array is: ");
//	printArray(answer); // output sorted array
//	// display median element
//	printf("\n\nThe median is %u\n\n", answer[SIZE / 2]);
//}
//
//void mode(unsigned int freq[], unsigned int answer[]) {
//	for (int rating = 1; rating <= 9; rating++)
//		freq[rating] = 0;
//	for (int j = 0; j < SIZE; ++j)
//		freq[answer[j]]++; // summarize frequencies
//	 // output results
//	unsigned int largest = 0; // represents largest frequency
//	unsigned int modeValue = 0; // represents most frequent response
//	for (int rating = 1; rating <= 9; ++rating) {
//		printf("%8u%11u          ", rating, freq[rating]);
//		if (freq[rating] > largest) {// find largest value
//			largest = freq[rating];
//			modeValue = rating;
//		}
//		// output histogram bar representing frequency value
//		for (unsigned int h = 1; h <= freq[rating]; ++h) {
//			printf("%s", "*");
//		}
//		puts(""); // being new line of output
//	}
//	printf("The mode is %u (occurred %u times).", modeValue, largest);
//}
//
//void bubbleSort(unsigned int a[]) {
//	int i, pass, hold, swap;
//	for (int pass = 1; pass < SIZE; pass++) {
//		swap = 0;
//		for (i = 0; i < SIZE - pass; i++) {
//			if (a[i] > a[i + 1]) {
//				swap = 1;
//				hold = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = hold;
//			}
//		}
//		if (!swap) break;
//	}
//}
//
//void printArray(unsigned int a[]) {
//	for (int i = 0; i < SIZE; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//
//
//
//#include <stdio.h>
//#define SIZE 10
//// function prototypes
//void median(unsigned int answer[]);
//void mode(unsigned int freq[], unsigned int answer[]);
//void bubbleSort(unsigned int a[]);
//void printArray(unsigned int a[]);
//
//int main(void) {
//	unsigned int frequency[10] = { 0 };
//	// initialize array response
//	unsigned int response[SIZE] = { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9 };
//	// process responses
//	//mean(response);
//	median(response);
//	mode(frequency, response);
//}
//void median(unsigned int answer[]) {
//	printArray(answer); // output unsorted array
//	bubbleSort(answer); // sort array
//	printf("\nThe sorted array is: ");
//	printArray(answer); // output sorted array
//	// display median element
//	printf("\n\nThe median is %u\n\n", answer[SIZE / 2]);
//}
//
//void mode(unsigned int freq[], unsigned int answer[]) {
//	// initialize freq array
//	for (int rating = 1; rating <= 9; rating++)
//		freq[rating] = 0;
//	for (int j = 0; j < SIZE; ++j)
//		freq[answer[j]]++; // summarize frequencies
//
//	int max_index = 0;
//	for (int i = 0; i < SIZE; i++) {
//		if (freq[i] > freq[max_index]) max_index = i;
//	}
//	printf("The mode is %d (occurred %d times)", max_index, freq[max_index]);
//}
//void bubbleSort(unsigned int a[]) {
//	int i, pass, hold, swap;
//	for (int pass = 1; pass < SIZE; pass++) {
//		swap = 0;
//		for (i = 0; i < SIZE - pass; i++) {
//			if (a[i] > a[i + 1]) {
//				swap = 1;
//				hold = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = hold;
//			}
//		}
//		if (!swap) break;
//	}
//}
//
//void printArray(unsigned int a[]) {
//	for (int i = 0; i < SIZE; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}

//
//void mode(unsigned int freq[], unsigned int answer[]) {
//	for (int rating = 1; rating <= 9; rating++)
//		freq[rating] = 0;
//	for (int j = 0; j < SIZE; ++j)
//		freq[answer[j]]++; // summarize frequencies
//	 // output results
//	unsigned int largest = 0; // represents largest frequency
//	unsigned int modeValue = 0; // represents most frequent response
//	for (int rating = 1; rating <= 9; ++rating) {
//		printf("%8u%11u          ", rating, freq[rating]);
//		if (freq[rating] > largest) {// find largest value
//			largest = freq[rating];
//			modeValue = rating;
//		}
//		// output histogram bar representing frequency value
//		for (unsigned int h = 1; h <= freq[rating]; ++h) {
//			printf("%s", "*");
//		}
//		puts(""); // being new line of output
//	}
//	printf("The mode is %u (occurred %u times).", modeValue, largest);
//}

//#include  <stdio.h>
//#define LBUFSIZE  81
//int main()
//{
//	char message[LBUFSIZE];
//
//	printf("Enter a string: ");
//	gets_s(message);
//	printf("The string just entered is: ");
//	puts(message);
//
//	return 0;
//}
