# include <iostream> 
# include <math.h>
using namespace std;
void input (int &a, int &b);
int findGCD(int a, int b);
void output(int kq);
int main()
{
	int a,b;
	input(a,b);
	int kq=findGCD(a,b);
	output(kq);
	return 0;
}

void input (int &a, int &b)
{
	cin>>a>>b;
}

int findGCD(int a, int b)
{
	int temp=0; 
	while(a>0)
	{
		temp=b;
		b=a%b;
		a=temp;
		break;
	}
	return a;
}

void output(int kq)
{
	cout<<kq;
}
