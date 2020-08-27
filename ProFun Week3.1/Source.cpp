#include<stdio.h>
int main()
{
	bool vowel = 0;
	int i;
	char a[1000];
	scanf_s("%s", &a,1000);
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') 
			vowel =1;
	}
	if (vowel == 0) printf("There is no vowel"); else printf("There is vowel");
	return 0;
}