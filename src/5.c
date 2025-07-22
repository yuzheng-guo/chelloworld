#include<stdio.h>
int main() {
	float a = 0;
	float b = 0;
	printf("输入身高英尺英寸");
	scanf("%f %f", &a, &b);
	printf("身高是%f米。\n", ((a + b / 12) * 0.3048));
	return 0;
}
//float 用%f
//double 用%lf
