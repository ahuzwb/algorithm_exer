//ÉßĞÎÌîÊı£¨ÂİĞıÌîÊı£© 
#include <iostream>
#define max 10
using namespace std;

int a[max][max];

int main()
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			a[i][j] = n*n+1;


//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cout << a[i][j] << "  ";
//		}
//		cout << endl;
//	}
	
	int cnt = 1, i = 0, j = n-1;
	while(cnt!=n*n){
		for(; i<n; i++){
			if(i==n-1 || a[i][j]>a[i+1][j])
				break;
			a[i][j] = cnt++;
		}
		for(j--; j>=0; j--){
			if(j==0 || a[i][j]>a[i][j-1])
				break;
			a[i][j] = cnt++;
		}
		
//		for(int i=0; i<n; i++){
//			for(int j=0; j<n; j++){
//				cout << a[i][j] << "  ";
//			}
//			cout << endl;
//		}
		
		for(i--; i<n; i++){
			if(i==0 || a[i][j]>a[i-1][j])
				break;
			a[i][j] = cnt++;	
		}
		for(j++; j<n; j++){
			if(j==n-1 || a[i][j]>a[i][j+1])
				break;
			a[i][j] = cnt++;
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	
	return 0;
}
