//������ݣ��ж��Ƿ�Ϊ���꣬����ǣ������yes���������no
//��ʾ���򵥵��жϳ���4�������ǲ�����

//����һ�򣬰��겻��    �İ�������       --->     ������29�� 

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
