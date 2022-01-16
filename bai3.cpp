#include<iostream>
using namespace std;

int sohoanhao(int n)
{
	int s = 0;
	for(int i = 1;i<n;i++)
	{
		if(n%i==0)
		{
		s = s +i;
		}
	}
	if(s==n)
	{
		cout << "so hoan hao";
	}
	else
	{
		cout << " khong la so hoan hao";	
	}
}
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	sohoanhao(n);
}
