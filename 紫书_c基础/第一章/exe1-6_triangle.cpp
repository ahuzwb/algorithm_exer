//���������ε������ߵĳ��ȣ���Ϊ�����������ж��ܷ񹹳�ֱ�������Σ��������ԣ������yes��������ܣ����no����������޷����������Σ������not a triangle

//���������ε���������������֮�Ͷ�Ҫ���ڵ����� 

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	
	if((a+b>c) && (a+c>b) && (b+c>a)){
		if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
			printf("yes");
		else
			printf("no");
	}	
	else
		printf("not a triangle");
	
	return 0;
} 
