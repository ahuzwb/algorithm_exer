//开灯问题：n盏灯，第一个人开所有灯，第二个人关掉所有2的倍数的灯，第三个人关掉所有3的倍数的灯，以此类推
//一共k个人，问最后有哪些灯开着，输入n和k，输出开着灯的编号，k<=n<=1000
//输入：7 3 
//输出：1 5 6 7
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
