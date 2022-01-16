#include<iostream>
using namespace std;

void tamgiac(int h)
{
	int temp = 0;
	while(h!=0)
	{
		
		temp ++;
		for(int j = 0;j<temp;j++)
		{
			cout << " ";
		}
		for(int i=0;i<(2*h-1);i++) // lap *
		{
			cout << "*";
		}
		cout << "" << endl;
		h--;
	}
}

int main()
{
	int h;
	cout << "Nhap h: ";
	cin >> h;
	tamgiac(h);
}
