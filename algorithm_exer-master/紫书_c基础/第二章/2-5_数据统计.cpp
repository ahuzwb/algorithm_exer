//����һЩ������������ǵ���Сֵ�����ֵ��ƽ��ֵ��������λС�������������С��1000
//���� 2 8 3 5 1 7 3 6
//��� 1 8 4.375
#include <iostream>
using namespace std;

int main()
{
	int min = 1000, max = -1;
	int n;
	double sum = 0;
	int cnt = 0;
	while(scanf("%d", &n)){
		if(min>n)	min = n;
		if(max<n)	max = n;
		sum += n;
		cnt++;
	}
	printf("%d %d %.3f", min, max, sum/cnt);
	
	return 0;
}
