#include <stdio.h> /*21.11.14*/

/*여러 가지 연산하기*/
int main(void) /*c언어는 절차적 언어이기에 순서대로 프로그램이 돌아가고 반드시 메인 함수(진입점 함수)에서부터 시작되어야 한다. */
{
	int x = 6;
	int y = 9;
	int z = 1;

	/*덧셈 연산*/
	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d + %d = %d\n", x, z, x + z);
	printf("%d + %d = %d\n", y, z, y + z);

	/*뺼셈 연산*/
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d - %d = %d\n", x, z, x - z);
	printf("%d - %d = %d\n", y, z, y - z);

	/*곱셈 연산*/
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d * %d = %d\n", x, z, x * z);
	printf("%d * %d = %d\n", y, z, y * z);

	/*나눗셈 연산*/
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d / %d = %d\n", x, z, x / z);
	printf("%d / %d = %d\n", y, z, y / z);

	/*나머지값 연산(mod)*/
	printf("%d %% %d = %d\n", x, y, x % y);
	printf("%d %% %d = %d\n", x, z, x % z);
	printf("%d %% %d = %d\n", y, z, y % z);

	return 0;/*함수 마침*/
}