#include <stdio.h>

int main() {
	// task 2, I counted 1-4 using different variable types at each number, and d in place of 4.
	int i = 1;
	float f = 2.00f;
	double d = 3.00000000;
	char ch = 'd';
	
	printf("int: %d\nfloat: %f\ndouble: %lf\nchar: %c\n\n", i, f, d, ch);
	/* task 3, I did variables one at a time but I got tired of that and realized that would take forever, 
	so then I found out I could do 
	multiple variables at the same time in one line if they are the same type */ 
	char a = 'a';
 	char b = 'b';
 	char c = 'c';
 	char x = 'x';
	char y = 'y';
	char z = 'z';
	char A = 'A', B = 'B', C = 'C', X = 'X', Y = 'Y', Z = 'Z';
	char aascii = 97, bascii = 98, cascii = 99, xascii = 120;
	char Aascii = 65, Bascii = 66, Cascii = 67, Xascii = 88;
	printf("characters: %c %c %c %c %c %c %c %c %c %c %c %c\n", a, b, c, x, y, z, A, B, C, X, Y, Z);
	printf("ASCII values: %c %c %c %c %c %c %c %c\n\n", aascii, bascii, cascii, xascii, Aascii, Bascii, Cascii, Xascii);
	// task 4, nothing of note really
	float scientificfloat = 1.23e3f;
	double scientificdouble = 4.56e-2;
	printf("scientific float: %e\nscientific double: %e\n\n", scientificfloat, scientificdouble);
 	// task 5,
	float oddlyspecificfloat = 6.76767676f;
	printf("specific float precisions: %.1f %.2f %.4f %.6f\n\n", oddlyspecificfloat, oddlyspecificfloat, oddlyspecificfloat, oddlyspecificfloat);
	// task 6
	printf("Size of int: %lu\n", sizeof(int));
	printf("Size of float: %lu\n", sizeof(float));
	printf("Size of double: %lu\n", sizeof(double));
	printf("Size of char: %lu\n\n", sizeof(char));
	// task 7 
	int a1 = 7, b1 = 2;
	float result = (float)a1 / b1;
	printf("Float result: %.3f\n", result);
	printf("Percentage: %.2f%%\n\n", result * 100);
	// task 8, short for wasting my time
	int normalInt = 1000;
	double normalDouble = 3.14;
	short int small = -100;
	unsigned int count = 25;
	long int big = 1234567890;
	long long int veryBig = 9223372036854775807;
	unsigned long long int huge = 18446744073709551615U;
 	long double precise = 3.141592653589793238L;
	printf("normalInt: %d\n", normalInt);
	printf("normalDouble: %lf\n", normalDouble);
	printf("small: %hd\n", small);
	printf("count: %u\n", count);
	printf("big: %ld\n", big);
	printf("veryBig: %lld\n", veryBig);
	printf("huge: %llu\n", huge);
	printf("precise: %Lf\n", precise);
return 0;
}
