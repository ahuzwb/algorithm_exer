//已知鸡和兔的总数量为n，总腿数为m。输入n和m，依次输出鸡的数目和兔的数目。如果无解，则输出No answer
//输入: 14 32
//输出：12 2
//输入：10 16
//输出：No answer 

#include <iostream>
using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	if(n*2 - m/2>=0 && m/2 - n>=0)
		cout << n*2 - m/2 << " " << m/2 - n << endl; 
	else 
		cout << "No answer" << endl;
	
	return 0;
}

//x + y = n
//x + 2*y = m/2
//y = m/2 - n;
//x = n*2 - m/2;
