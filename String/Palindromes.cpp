//回文串
//输入：NOTAPALINDROME
//		ISAPALINILAPASI
//输出：is not a palindrome
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

//循环全部判断完才能得到结果===>可设置flag变量 


//string
//size(),begin(),end() 
