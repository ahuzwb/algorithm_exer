//����һЩ������������ǵ���Сֵ�����ֵ��ƽ��ֵ��������λС�������������С��1000
//��������������ݣ�ÿ�����ݵĵ�һ������������n���ڶ�����n��������n=0Ϊ���������ǣ�����Ӧ�������������ݣ�������������֮��Ӧ���һ������ 
//����:		8 
//      	2 8 3 5 1 7 3 6
// 			4
//			-4 6 10 0
// 			0
//���  	1  8 4.375
//			-4 10 3.000
#include <iostream>
#define INF 100000
using namespace std;

int main()
{	
	int num; 
	while(scanf("%d", &num) && num){   //����num����numΪ0ʱ�˳�   &&num ==> numΪ0ʱ�˳� 
		int min = INF, max = -INF;
		int n;
		double sum = 0;
		int cnt = 0;
		
		for(int i=0; i<num; i++){
			scanf("%d", &n);
			if(min>n)	min = n;
			if(max<n)	max = n;
			sum += n;
			cnt++;
		}
		printf("%d %d %.3f\n", min, max, sum/cnt);
	}
	
	return 0;
}

//����Ҫ�������� 
