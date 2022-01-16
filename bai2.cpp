#include<iostream>
using namespace std;

bool So_nguyen_to(int n)
{
	bool kiemtra = true ;
		if(n==1)
		{
			kiemtra = false;
		}
		else
		{
			for(int i = 2;i<n;i++)
			{
				if(n%i==0)
				{
					kiemtra =false;
					break;
				}
			}
		}
	return kiemtra;
}
bool So_sieu_to(int n)
{	
	bool kiemtra;
	// kiemtra so nt
	int k = n;
	
	while(n!=0)
	{
		kiemtra = So_nguyen_to(n);
		if(kiemtra ==true)
		{
			n = n/10;
			continue;
		}
		else
		{
			break;
		}
	}
	return kiemtra;
}
int main()
{
	int n;
	
	cout << "Nhap n: ";
	cin >>n;
	bool kiemtra = So_sieu_to(n);
	if(kiemtra == true)
	{
		cout << "So do la so sieu nguyen to ";
	}
	else
	{
		cout <<"Khong la so sieu nguyen to";
	}
}
