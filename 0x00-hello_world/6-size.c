#input <stdio.h>
/**
 * main - A program that prints the various size of various computer types
 * Return 0(Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)size(a));
printf("size of init: %lu byte(s)\n", (unsigned long)size(b));
printf("size of long init: %lu byte(s)\n", (unsigned long)size(c));
printf("size of long long init: %lu byte(s)\n", (unsigned long)size(d));
printf("size of float: %lu byte(s)\n", (unsigned long)size(f));
return (0);
}
