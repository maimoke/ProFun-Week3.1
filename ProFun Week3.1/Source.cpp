#include<stdio.h>
int main()
{
	char a;
	scanf_s("%c", &a);
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') printf("There is vowel");
	else printf("There is not vowel");
	return 0;
}