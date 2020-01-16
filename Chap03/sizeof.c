/* sizeof.c -- Program to tell the size of the C variable */
/*             type in bytes */

#include <stdio.h>

int main(void)
{
	printf("\nA char \t\t is %d bytes", sizeof(char));
	printf("\nAn int \t\t is %d bytes", sizeof(int));
	printf("\nA short \t\t is %d bytes", sizeof(short));
	printf("\nA long \t\t is %d bytes", sizeof(long));
	printf("\nA long long \t\t is %d bytes", sizeof(long long));
	printf("\nAn unsigned char \t\t is %d bytes", sizeof(unsigned char));
	printf("\nA unsgined int \t\t is %d bytes", sizeof(unsigned int));
	printf("\nA unsigned short \t\t is %d bytes", sizeof(unsigned short));
	printf("\nA unsinged long \t\t is %d bytes", sizeof(unsigned long));
	printf("\nA unsinged long long \t\t is %d bytes", sizeof(unsigned long long));

	printf("\nA float \t\t is %d bytes", sizeof(float));
	printf("\nA double \t\t is %d bytes", sizeof(double));
	printf("\nAn long double \t\t is %d bytes", sizeof(long double));

	printf("\n");
	return 0;
}
