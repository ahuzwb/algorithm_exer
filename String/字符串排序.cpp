//���������ַ�����Ҫ����ĸ����С�����˳�����
//���Ƚ��ַ���������������� 
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
