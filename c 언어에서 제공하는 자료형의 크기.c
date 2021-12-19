#include <stdio.h>

main(void)
{
	printf("C언어에서 제공하는 자료형의 크기를 알아보자!!\n");
	printf("char 자료형의 크기는 ? : %d\n", sizeof(char));
	printf("unsigned char 자료형의 크기는 ? : %d\n", sizeof(unsigned char));
	printf("short 자료형의 크기는 ? : %d\n", sizeof(short));
	printf("unsigned short 자료형의 크기는 ? : %d\n", sizeof(unsigned short));
	printf("int 자료형의 크기는 ? : %d\n", sizeof(int));
	printf("unsigned int 자료형의 크기는 ? : %d\n", sizeof(unsigned int));
	printf("long 자료형의 크기는 ? : %d\n", sizeof(long));
	printf("unsigned long 자료형의 크기는 ? : %d\n", sizeof(unsigned long));
	printf("long long 자료형의 크기는 ? : %d\n", sizeof(long long));
	printf("unsigned long long 자료형의 크기는 ? : %d\n", sizeof(unsigned long long));
	printf("float 자료형의 크기는 ? : %d\n", sizeof(float));
	printf("double 자료형의 크기는 ? : %d\n", sizeof(double));
	printf("long double 자료형의 크기는 ? : %d\n", sizeof(long double));

	return 0;
}