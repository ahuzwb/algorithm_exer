//输入三个字符串，要求将字母按由小到大的顺序输出
//可先将字符串进行排序再输出 
#include <iostream>
#include <string>
//using namespace std;

int main()
{
	std::string str1,str2,str3;
	std::cin >> str1 >> str2 >> str3;
	//1st round 
	if(str1>str2)
		swap(str1,str2);
	if(str2>str3)
		swap(str2,str3);
	//2nd round	
	if(str1>str2) 
		swap(str1,str2);
	
	std::cout << str1 << std::endl << str2 << std::endl << str3;
	
	return 0;
} 
