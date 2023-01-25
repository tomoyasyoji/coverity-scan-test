#include<cstdio>
#include<cstdlib>

int main()
{
	char a[5];
	char *p;

	p = (char *)malloc(sizeof(char) * 5);
	if (p == nullptr) {
		return EXIT_FAILURE;
	}

	printf("%s\n", a);
	printf("%s\n", p);

	free(p);

	return EXIT_SUCCESS;
}
