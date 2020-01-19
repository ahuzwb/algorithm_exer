//输出100-999中所有水仙花数，若三位数满足 ABC = A^3 + B^3 + C^3，则称其为水仙花数
#include <iostream>
#include <cmath>
using namespace std;

bool isDaffodil(int n)
{
	int sum = 0;
	int temp = n;         //因为n在后面的运算中会被改变，因此要使用temp来保存n初始的值 
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
