//����һ����λ������������İ�λ��ʮλ�͸�λ����ת�����
//����: 127
//�����721

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	queue<int> que;
	while(n>0){
		que.push(n%10);
		n /= 10;
	}
	
	while(!que.empty()){
		printf("%d", que.front());
		que.pop();
	}
	
	return 0;
} 

//��ջ(��) ��ջ(��) �п�   pop(front back) 
