#include <stdio.h> /*21.11.14*/

/*���� ���� �����ϱ�*/
int main(void) /*c���� ������ ����̱⿡ ������� ���α׷��� ���ư��� �ݵ�� ���� �Լ�(������ �Լ�)�������� ���۵Ǿ�� �Ѵ�. */
{
	int x = 6;
	int y = 9;
	int z = 1;

	/*���� ����*/
	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d + %d = %d\n", x, z, x + z);
	printf("%d + %d = %d\n", y, z, y + z);

	/*�E�� ����*/
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d - %d = %d\n", x, z, x - z);
	printf("%d - %d = %d\n", y, z, y - z);

	/*���� ����*/
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d * %d = %d\n", x, z, x * z);
	printf("%d * %d = %d\n", y, z, y * z);

	/*������ ����*/
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d / %d = %d\n", x, z, x / z);
	printf("%d / %d = %d\n", y, z, y / z);

	/*�������� ����(mod)*/
	printf("%d %% %d = %d\n", x, y, x % y);
	printf("%d %% %d = %d\n", x, z, x % z);
	printf("%d %% %d = %d\n", y, z, y % z);

	return 0;/*�Լ� ��ħ*/
}