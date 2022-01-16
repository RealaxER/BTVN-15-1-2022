#include<iostream>
using namespace std;

void so_mayman (int n)
{
	int kiemtra;
	bool dungsai;
	while(n!=0)
	{
		kiemtra = n%10;
		n = n/10;
		if((kiemtra ==4)||(kiemtra ==7))
		{
			dungsai = true;
			continue;
		}
		else
		{
			dungsai = false;
			break;
		}
	}
	if(dungsai == true)
	{
		cout << "La so may man ";
	}
	else
	{
		cout << "Khong la so may man ";
	}
}

int main()
{
	int n;
	cout <<"Nhap n: ";
	cin >>n;
	so_mayman (n);
}
