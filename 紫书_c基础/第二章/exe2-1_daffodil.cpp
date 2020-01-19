//���100-999������ˮ�ɻ���������λ������ ABC = A^3 + B^3 + C^3�������Ϊˮ�ɻ���
#include <iostream>
#include <cmath>
using namespace std;

bool isDaffodil(int n)
{
	int sum = 0;
	int temp = n;         //��Ϊn�ں���������лᱻ�ı䣬���Ҫʹ��temp������n��ʼ��ֵ 
	for(int i=0; i<3; i++){
		sum += pow((temp%10),3);
		temp /= 10;
	}
	return (n==sum)?true:false;
}


int main()
{
	for(int i=100; i<1000; i++){
		if(isDaffodil(i))
			cout << i << endl;
	}	
	return 0;
} 
