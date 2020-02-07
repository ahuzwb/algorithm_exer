//输入一些整数，求出他们的最小值，最大值和平均值（保留三位小数），输入的数小于1000
//输入包含多组数据，每组数据的第一行是整数个数n，第二行是n个整数，n=0为输入结束标记，程序应当忽略这组数据，相邻两组数据之间应输出一个空行 
//输入:		8 
//      	2 8 3 5 1 7 3 6
// 			4
//			-4 6 10 0
// 			0
//输出  	1  8 4.375
//			-4 10 3.000
#include <iostream>
#define INF 100000
using namespace std;

int main()
{	
	int num; 
	while(scanf("%d", &num) && num){   //读入num，且num为0时退出   &&num ==> num为0时退出 
		int min = INF, max = -INF;
		int n;
		double sum = 0;
		int cnt = 0;
		
		for(int i=0; i<num; i++){
			scanf("%d", &n);
			if(min>n)	min = n;
			if(max<n)	max = n;
			sum += n;
			cnt++;
		}
		printf("%d %d %.3f\n", min, max, sum/cnt);
	}
	
	return 0;
}

//数据要进行重置 
