#include <stdio.h>
//数字从大到小排序
//a放最大值
//b次之
//c放最小值
int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	printf("请输入三个数字：");
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
	printf("从大到小排列结果为：%d%d%d", a, b, c);

	return 0;
}