//�������뾶r�͸�h�����Բ����ı����������3λС������ʽ������
//����: 3.5 9
//�����Area = 274.889

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	const double pi = acos(-1);
	double r, h, Area;
	scanf("%lf %lf", &r, &h);      //scanf��double��Ҫʹ��%lf
	Area = pi*r*r*2 + 2*pi*r*h;
	printf("Area = %.3f", Area);
		
	return 0;
} 
