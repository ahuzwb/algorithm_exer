//����������n(n<360)�����n�ȵ����ң����Һ���ֵ

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	const double pi = acos(-1);
	
	printf("sin:%lf  cos:%lf", sin(n*(pi/180)), cos(n*(pi/180)));
	
	return 0;
 } 
