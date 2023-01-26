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
	int idx, x;

	if (argc < 2) {
		return EXIT_FAILURE;
	}
	idx = std::stoi(argv[1]);
	printf("idx = %d\n", idx);

	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		x += g1[i];
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		x += g2[i];
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		x += g3[i];
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		x += g4[i];
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		x += l1[i];
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		x += l2[i];
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		x += l3[i];
	}
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		x += l4[i];
	}

	x += g1[0xff];
	x += g2[0xff];
	x += g3[0xff];
	x += g4[0xff];
	x += l1[0xff];
	x += l2[0xff];
	x += l3[0xff];
	x += l4[0xff];

	x += g1[idx];
	x += g2[idx];
	x += g3[idx];
	x += g4[idx];
	x += l1[idx];
	x += l2[idx];
	x += l3[idx];
	x += l4[idx];

	printf("x = %d\n", x);

	return EXIT_SUCCESS;
}
