//�������⣺nյ�ƣ���һ���˿����еƣ��ڶ����˹ص�����2�ı����ĵƣ��������˹ص�����3�ı����ĵƣ��Դ�����
//һ��k���ˣ����������Щ�ƿ��ţ�����n��k��������ŵƵı�ţ�k<=n<=1000
//���룺7 3 
//�����1 5 6 7
#include <iostream>
#define maxn 1005
using namespace std;

int a[maxn];

int main()
{
	int n, k;
	cin >> n >> k;
	bool light[n+1] = {false};
	
	for(int i=1; i<=k; i++){
		for(int j=i; j<=n; j=j+i){
//			cout << i << ": " << j << endl;
//			if(flag){
//				a[j] = 1;
//				flag[j] = ~flag[j];
//			}
//			else{
//				a[j] = 0;
//				flag[j] = ~flag[j];
//			}
			light[j] = !light[j];
		}
	}
	for(int i=1; i<=n; i++){
		if(light[i])
			cout << i << " ";
	}
	
	return 0;
} 
