//输入底面半径r和高h，输出圆柱体的表面积，保留3位小数，格式见样例
//输入: 3.5 9
//输出：Area = 274.889

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	const double pi = acos(-1);
	double r, h, Area;
	scanf("%lf %lf", &r, &h);      //scanf读double需要使用%lf
	Area = pi*r*r*2 + 2*pi*r*h;
	printf("Area = %.3f", Area);
		
	return 0;
} 
