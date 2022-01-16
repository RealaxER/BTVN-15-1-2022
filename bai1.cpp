#include<iostream>
#include<math.h>
using namespace std;

int Doc(int n)
{
	int bachuso = n ;
	int a;
	int b;
	int c;
		a = bachuso % 10;
		bachuso = bachuso / 10;
		b = bachuso % 10;
		bachuso = bachuso / 10;
		c = bachuso;
			// ham tram
			if(c==1)
			{
				cout << "Mot tram";
			}
			else if(c==2)
			{
				cout << "Hai tram ";
			}
			else if(c==3)
			{
				cout << "Ba tram ";
			}
			else if(c==4)
			{
				cout << "Bon tram ";
			}	
			else if(c==5)
			{
				cout << "Nam tram ";
			}
			else if(c==6)
			{
				cout << "Sau tram ";
			}
			else if(c==7)
			{
				cout << "Bay tram ";
			}
			else if(c==8)
			{
				cout << "Tam tram ";
			}	
			else if(c==9)
			{
				cout << "Chin tram ";
			}
			// ham chuc
			if(b==1)
			{
				cout << " Muoi ";
			}
			else if(b==2)
			{
				cout << " Hai muoi ";
			}
			else if(b==3)
			{ 
				cout << " Ba muoi ";
			}
			else if(b==4)
			{
				cout << " Bon muoi ";
			}	
			else if(b==5)
			{
				cout << " Nam muoi ";
			}
			else if(b==6)
			{
				cout << " Sau muoi";
			}
			else if(b==7)
			{
				cout << " Bay muoi ";
			}
			else if(b==8)
			{
				cout << " Tam muoi ";
			}	
			else if(b==9)
			{
				cout << " Chin muoi ";
			}
			
			// ham dvi 
			if((c>0)&&(b==0)&&(a>0))
			{
				cout << "Linh ";
			}
		
			if((a==0)&&(b==0)&&(c==0))
			{
				cout <<"Khong";
			}
			if(a==1)
			{
				cout << "Mot";
			}
			else if(a==2)
			{
				cout << "Hai";
			}
			else if(a==3)
			{
				cout << "Ba";
			}
			else if(a==4)
			{
				cout << "Bon";
			}	
			else if(a==5)
			{
				cout << "Nam";
			}
			else if(a==6)
			{
				cout << "Sau";
			}
			else if(a==7)
			{
				cout << "Bay";
			}
			else if(a==8)
			{
				cout << "Tam";
			}	
			else if(a==9)
			{
				cout << "Chin";
			}	
		return n;		
}


int main()
{
	int n;
	int temp;
	
	cout << "Nhap n: ";
	cin >> n;
	temp = n; //hoan vi cho n
	int k =0 ;// so luong so nhap vao
	while (temp!=0)
	{
		temp = temp/10;
		k++;
	}
	cout << k<<endl;
		if(k > 9)
		{
			temp = n/pow(10,9);
			Doc(temp);
			cout << " ty ";
			n = n % int(pow(10,9));
		}
		if(k>6)
		{
		temp = n/pow(10,6);
		Doc(temp);
		cout << "trieu ";
		}
		
		if(k>3)
		{
			n = n % int(pow(10,6));
		}
		temp = n /pow(10,3);
		Doc(temp);	
		cout << " nghin ";
		
		n = n%1000;
		Doc(n);
	
}
