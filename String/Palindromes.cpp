//���Ĵ�
//���룺NOTAPALINDROME
//		ISAPALINILAPASI
//�����is not a palindrome
//		is a regular palindrome

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	bool flag = true;
	for(int i=0; i<=str.length()/2; i++){
		if(str[i]!=str[str.length()-i-1])
			flag = false;
	}
	if(flag) cout << "is a regular palindrome";
	else cout << "is not a palindrome";
	
	return 0;
}

//ѭ��ȫ���ж�����ܵõ����===>������flag���� 


//string
//size(),begin(),end() 
