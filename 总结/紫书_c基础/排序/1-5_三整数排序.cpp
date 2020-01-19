//输入三个整数，从小到大排序后输出
//输入：20 7 33
//输出：7 20 33
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	//插入排序 （摸牌）                            	找到位置后交换（每轮只交换一次） （但也可以通过不断交换来实现） 
	 
	//冒泡排序 ==> 最后一个值是最大值 				比我小就交换（每轮会交换很多次） 
	if(a>b) swap(a,b);
	if(b>c)	swap(b,c);
	if(a>b) swap(a,b);
	cout << a << " " << b << " " << c << endl; 
	
	//选择排序 ==> 第一个值是最小值 				找到最小值后交换（每轮只交换一次） 
	
	return 0;
} 
