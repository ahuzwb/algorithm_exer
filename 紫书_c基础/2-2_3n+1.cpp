// 3n+1 ����
//����Ϊ987654321������� 
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	long long n;
	scanf("%d", &n);
	int cnt = 0;
	
	while(n>1){
		if(n%2!=0){
			n = n*3 + 1;
//			printf("%lld\n", n);   printf("%I64d\n", n); 
//			cout << n << endl;
		}
		else 
			n = n/2;
		cnt++;	
	}
	cout << cnt << endl;
//	cout << setiosflags(ios::fixed) << setprecision(10) << (double)clock()/CLOCKS_PER_SEC << endl;
//	printf("%.2f", (double)clock()/CLOCKS_PER_SEC);
	
	return 0;
}
