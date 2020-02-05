//输入一个三位数，分离出它的百位，十位和个位，反转后输出
//输入: 127
//输出：721

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

//入栈(队) 出栈(队) 判空   pop(front back) 

//解法二
// #include <iostream>
// using namespace std;

// int a[5];

// int main()
// {
// 	int n;
// 	cin >> n;
// 	for(int i=0; i<3; i++){ 
// 		a[i] = n%10;
// 		n /= 10;
// 	} 
	
// 	for(int i=0; i<3; i++) 
// 		cout << a[i];
	
// 	return 0;
// }
