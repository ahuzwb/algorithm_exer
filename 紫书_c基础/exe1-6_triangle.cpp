//输入三角形的三条边的长度（均为正整数），判断能否构成直角三角形，若果可以，则输出yes，如果不能，输出no，如果根本无法构成三角形，则输出not a triangle

//构成三角形的条件：任意两边之和都要大于第三边 

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	
	if((a+b>c) && (a+c>b) && (b+c>a)){
		if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
			printf("yes");
		else
			printf("no");
	}	
	else
		printf("not a triangle");
	
	return 0;
} 
