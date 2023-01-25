#include<cstdio>
#include<cstdlib>

int main()
{
	char a[5];
	char *p;

	p = (char *)malloc(sizeof(char) * 5);

	printf("%s\n", a);
	printf("%s\n", p);

	return EXIT_SUCCESS;
}
