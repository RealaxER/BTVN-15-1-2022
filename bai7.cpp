#include<iostream>
#include<math.h>
using namespace std;

void chan_ltuc (int n)
{
	int dem;
	int temp = n;
	while(temp!=0)
	{
		temp = temp/10;
		dem++;
	}

	int sochan;
	for(int i=dem-1;i>0;i--)
	{
		temp = n/pow(10,i);
		temp = temp%10;
		if(temp%2==0)
		{
			cout << temp << " ";
		}
	}
	temp = n%10;
	if(temp%2==0)
	{
		cout << temp;
	}
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >>n;
	chan_ltuc(n);
}

