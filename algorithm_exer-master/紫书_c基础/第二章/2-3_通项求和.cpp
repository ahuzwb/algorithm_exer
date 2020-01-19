//计算1-1/3+1/5-1/7+...，直到最后一项小于10的-6次方

#include <iostream>
#include <cmath>
using namespace std;

//int main()
//{
//	double sum = 0.0;
//	int i = 1;
//	while(i*2-1<1000000){
//		if(i%2!=0)
//			sum += 1.0/(2*i-1);
//		else
//			sum -= 1.0/(2*i-1);
//		i++;
//	}
//	printf("%.6f\n", sum);
//	printf("%.6f\n", acos(-1)/4);
//	
//	return 0;
//} 

int main()
{
	double sum = 0;
	for(int i=0; ;i++){                       //for循环中判断，奇数一种处理，偶数另一种处理 
		double term = 1.0/(2*i+1);
		
		if(i%2==0) sum += term;
		else sum -= term;
		
		if(term<1e-6)	break;
	}
	printf("%.6f", sum);
	
	return 0;
} 




//1 3 5 7
//1 2 3 4

