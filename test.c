#include <stdio.h>
//���ִӴ�С����
//a�����ֵ
//b��֮
//c����Сֵ
int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	printf("�������������֣�");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b) {
		int tem = a;
		a = b;
		b = tem;
	}
	if (a < c) {
		int tem = a;
		a = c;
		c = tem;
	}
	if (b < c) {
		int tem = b;
		b = c;
		c = tem;
	}
	printf("�Ӵ�С���н��Ϊ��%d%d%d", a, b, c);

	return 0;
}