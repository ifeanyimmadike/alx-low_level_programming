#include <stdio.h>
int main(void)
{
	char c;
	int d;
	long int e;
	long long int f;
	float g;

	printf("size of a char  %lu\n", sizeof(c));
	printf("size of an  int %lu\n", sizeof(d));	
	printf("size of a long int %lu\n", sizeof(e));	
	printf("size of a long long int %lu\n", sizeof(f));
	printf("size of a float %lu\n", sizeof(g));
	return (0);
}
