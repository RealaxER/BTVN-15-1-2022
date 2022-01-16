#include<iostream>
using namespace std;

int So_chan(int n)
{
	while(n!=0)
	{
		int k = n%10;
		n = n/10;
		if(k%2==0)
		{
		  int cuoi_cung = k;	
		}
	}
	return cuoi_cung;
}

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	cout << So_chan(n);
	
}
