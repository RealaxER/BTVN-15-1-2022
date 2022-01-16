#include<iostream>
using namespace std;

void So_tang_dan(int n)
{
	bool kiemtra;
	int a;
	int b;
	a = n%10;
	n =n/10;
	while(n!=0)
	{
		b = n%10;
		if(a>=b)
		{
			n = n/10;
			kiemtra = true;
			continue;
		}
		else
		{
			kiemtra = false;
			break;
		}
	}
	if(kiemtra == true)
	{
		cout << "So do la so tang dan ";
	}
	else
	{
		cout << "Khong tang dan";
	}
}
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	So_tang_dan(n);
}

