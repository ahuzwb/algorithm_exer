//��֪�����õ�������Ϊn��������Ϊm������n��m���������������Ŀ���õ���Ŀ������޽⣬�����No answer
//����: 14 32
//�����12 2
//���룺10 16
//�����No answer 

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
