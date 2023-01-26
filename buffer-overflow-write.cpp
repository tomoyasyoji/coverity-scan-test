#include<cstdio>
#include<cstdlib>
#include<string>

#define ARRAY_SIZE	5

int g1[ARRAY_SIZE]; // .bss
int g2[ARRAY_SIZE] = {1, 2, 3, 4, 5}; // .data
static int g3[ARRAY_SIZE]; // .bss
static int g4[ARRAY_SIZE] = {6, 7, 8, 9, 10}; // .data

int main(int argc, char *argv[])
{
	int l1[ARRAY_SIZE]; // stack
	int l2[ARRAY_SIZE] = {11, 12, 13, 14, 15}; // stack
	static int l3[ARRAY_SIZE]; // .bss
	static int l4[ARRAY_SIZE] = {16, 17, 18, 19, 20}; // .data
	int idx;

	if (argc < 2) {
		return EXIT_FAILURE;
	}
	idx = std::stoi(argv[1]);
	printf("idx = %d\n", idx);

	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		g1[i] = 0xdeadbeef;
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		g2[i] = 0xdeadbeef;
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		g3[i] = 0xdeadbeef;
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		g4[i] = 0xdeadbeef;
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		l1[i] = 0xdeadbeef;
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		l2[i] = 0xdeadbeef;
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		l3[i] = 0xdeadbeef;
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		l4[i] = 0xdeadbeef;
	}

	g1[0xff] = 0xdeadbeef;
	g2[0xff] = 0xdeadbeef;
	g3[0xff] = 0xdeadbeef;
	g4[0xff] = 0xdeadbeef;
	l1[0xff] = 0xdeadbeef;
	l2[0xff] = 0xdeadbeef;
	l3[0xff] = 0xdeadbeef;
	l4[0xff] = 0xdeadbeef;

	g1[idx] = 0xdeadbeef;
	g2[idx] = 0xdeadbeef;
	g3[idx] = 0xdeadbeef;
	g4[idx] = 0xdeadbeef;
	l1[idx] = 0xdeadbeef;
	l2[idx] = 0xdeadbeef;
	l3[idx] = 0xdeadbeef;
	l4[idx] = 0xdeadbeef;

	return EXIT_SUCCESS;
}
