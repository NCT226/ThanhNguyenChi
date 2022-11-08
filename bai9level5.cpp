# include<iostream>
using namespace std; 
void input(int &a, int &b, int &c, int &d);
int findGCD(int a, int b, int c, int d);
void output(int a, int b, int c, int d);
int main()
{
	int a,b,c,d;
		input(a,b,c,d);
	output(a,b,c,d);
}
void input(int &a, int &b, int &c, int &d)
{
	do{
		cin>>a>>b>>c>>d;
	}while(b==0 || d==0);
}
int findGCD(int a, int b, int c, int d)
{
	
	int temp=0; 
	int x,y;
	x=(a*d)+(b*c);
	y=b*d;
	while(x!=y)
	{
		if(x>y)
			x=x-y;
		else
			y=y-x;
	}
	return x;
}
void output(int a, int b, int c, int d)
{
	int GCD=findGCD(a,b,c,d);
	int x,y;
	x=((a*d)+(b*c))/GCD;
	y=(b*d)/GCD;
	cout<<x<<"/"<<y;
}
