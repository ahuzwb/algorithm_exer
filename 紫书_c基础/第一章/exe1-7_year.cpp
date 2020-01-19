//输入年份，判断是否为闰年，如果是，则输出yes，否则输出no
//提示：简单地判断除以4的余数是不够的

//四年一闰，百年不闰，    四百年又闰。       --->     二月有29天 

#include <iostream>
using namespace std;

int main()
{
	int year;
	scanf("%d", &year);
	if(year%4==0&&year%100!=0 || year%400==0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	
	return 0;
}
