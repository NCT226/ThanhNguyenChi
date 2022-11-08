# include <iostream>
using namespace std;
void input(int &a, int &b, int &c);
int CheckTriangle(int a, int b, int c);
void output(int kq);
int main()
{
	int a,b,c;
	input(a,b,c);
	int kq=CheckTriangle(a,b,c);
	output(kq);
	return 0;	
}

void input( int &a, int &b, int &c)
{
	cin>>a;
	cin>>b;
	cin>>c;
}
int CheckTriangle(int a, int b, int c)
{
	if( (a+b >c)&& (a+c>b) && (b+c>a)) 
		return 1;
	else
		return 0;	
}

void output(int kq)
{
	if(kq==0)
		cout<<"It's not a Triangle";
	else
		cout<<"It's a Triangle";
}


