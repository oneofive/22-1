#include <stdio.h>
#include <string.h>

int main()
{
	//printf("%c(%d) %c(%d) %c(%d) %c(%d)\n", 'A', 'A', 'a', 'a', 'Z', 'Z', 'z', 'z');


	//char key;
	//printf("type a character: ");
	//scanf("%c", &key);
	//printf("the integer value of the character is %d\n", key);


	//char ch;
	//printf("Please type a character: ");
	//scanf("%c", &ch);
	//printf("typed character is %c\n", ch);


	//char message[81] = "Program";
	//for (int i = 0; i < 8; i++) {
	//	printf("Address=%d content=%c(%3d)\n", &message[i], message[i], message[i]);
	//}


	//char names[80] = { "Hong Gil Dong" };
	//for (int i = 0; i < 14; i++) {
	//	printf("Address=%d content=%c(%3d)\n", &names[i], names[i], names[i]);
	//}


	//char arr;
	//arr = getchar();
	//putchar(arr);


	//char  message[81];
	//char  c;
	//int   i, k;

	//printf("enter a string: ");
	//i = 0;
	//while (1)
	//{
	//	c = getchar();
	//	if (c == '\n' || i == 80)
	//		break;
	//	message[i] = c;  /* store string */
	//	i = i + 1;
	//}
	//message[i] = '\0';

	////printf("%s", message);
	//
	//k = 0;
	//while (k <= i){
	//	putchar(message[k]);
	//	k = k + 1;
	//}


	//char message[81];  /* 80 characters per line */

	//printf("type a sentence: ");
	//gets_s(message);
	//puts(message);

	//printf("type a sentence: ");
	//scanf("%s",&message);
	//puts(message);


	//char  message[81];
	//char  c;
	//int    i;

	//printf("enter a string: ");
	//i = 0;
	//while (1)
	//{
	//	c = getchar();
	//	if (c == '\n' || i == 80)
	//		break;
	//	message[i] = c;
	//	i = i + 1;
	//}
	//message[i] = '\0';
	//printf("the string just entered is \n");
	//puts(message);


	//char message[] = "I Love C Programming.";
	//printf("%s", message);
	//printf("%25s %25.4s\n",  message, message);
	//puts(message);


	//char  message[100];
	//int   i;
	//i = 0;

	//printf("enter a string: ");
	//gets_s(message);

	//while (message[i] != '\0') {
	//	i = i + 1;
	//}
	//printf("number of characters : % d\n", i);


	//char string1[81], string2[81];
	//int i = 0;

	//printf("enter a string: ");
	//gets_s(string2);

	//printf("\nBefore copying\n");
	//printf("string1:%s\n", string1);
	//printf("string2:%s\n", string2);

	///*  copy string2 to string 1  */
	////while (string2[i] != '\0')
	//while (string2[i])
	//{
	//	string1[i] = string2[i];
	//	i = i + 1;
	//}
	//string1[i] = '\0';   /* insert the end_of_string char */

	//printf("\nAfter copying\n");
	//printf("string1:%s\n", string1);
	//printf("string2:%s\n", string2);


	//char string1[81], string2[81];
	//int i = 0;

	//printf("enter a string: ");
	//gets_s(string2);

	//printf("\nBefore copying\n");
	//printf("string1:%s\n", string1);
	//printf("string2:%s\n", string2);

	///*  copy string2 to string 1  */
	//while (string1[i] = string2[i])
	//	i = i + 1;

	//printf("\nAfter copying\n");
	//printf("string1:%s\n", string1);
	//printf("string2:%s\n", string2);


	//char string1[81], string2[81];
	//int i = 0, result = 0;

	//printf("enter a string1: ");
	//gets_s(string1);
	//printf("enter a string2: ");
	//gets_s(string2);

	//while (string2[i] != '\0') {
	//	if (string1[i] > string2[i]) {
	//		result = 1;
	//		break;
	//	}
	//	if (string1[i] < string2[i]) {
	//		result = -1;
	//		break;
	//	}
	//	i++;
	//}
	//printf("result = %d\n", result);


	//char s1[81], s2[81];
	//char s[200];
	//int i = 0, j = 0;

	//printf("enter a string1: ");
	//gets_s(s1);
	//printf("enter a string2: ");
	//gets_s(s2);

	//while (s1[i] != 0) {
	//	s[i] = s1[i];
	//	i++;
	//}
	//while (s2[j] != 0) {
	//	s[i + j] = s2[j];
	//	j++;
	//}
	//s[i + j] = '\0';
	//printf("%s\n", s);


	//char line[81];
	//int i = 0;

	//printf("type a uppercase letters: ");
	//gets_s(line);
	//while (line[i] != '\0') {
	//	if (line[i] >= 65 && line[i] <= 90)
	//		line[i] = line[i] + 32;
	//	i++;
	//}
	//puts(line);


	//char str[81];
	//strcpy(str, "these ");
	//strcat(str, "strings ");
	//strcat(str, "are ");
	//strcat(str, "concatenated.");
	//puts(str);
	//printf("\nstr has% d characters\n", strlen(str));


	//char str1[81], str2[81];
	//gets_s(str1);
	//gets_s(str2);
	//printf("\nresult of comparing str1 and str2 = %d characters\n", strcmp(str1, str2));
	

	//char a[] = "happy birthday to you";
	//char b[25];
	//char c[15];

	//printf("String a: %s, String b(Copied): %s \n", a, strcpy(b, a));

	//strncpy(c, a, 5);
	//c[5] = NULL;

	//printf("String c: %s \n", c);



	//char a[100] = "happy ";
	//char b[100] = "birthday to you";
	//printf("String append: %s\n", strcat(a, b));


	//char a[100] = "happy";
	//char b[100] = "happy";
	//printf("String compare: %d\n", strcmp(a, b));


	return 0;
}