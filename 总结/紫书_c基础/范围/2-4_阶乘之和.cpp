//输入n，计算 S = 1! + 2! + 3! + ... + n! 的末六位(不含前导0) n<=1e6
//输入: 10
//输出：39713

#include <iostream>
using namespace std;

int factorial(int n)
{	
	if(n==0) return 1;
	if(n==1) return 1;
	else return (n*factorial(n-1)%1000000);                  //防溢出 
}


int main()
{
	int n;
	scanf("%d", &n);
	
	int sum = 0;
	const int mod = 1000000;
	for(int i=1; i<=n; i++){
		sum += factorial(i);
		sum %= 1000000;
		printf("%d\n", factorial(i)%1000000);
	}	
	
//	sum = sum%1000000;
	printf("%lld", sum);

	return 0;
}
