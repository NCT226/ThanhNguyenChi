# include <iostream>
# include <stdbool.h>
# include <math.h>
using namespace std;
void input( float &a, float &b, float &c);
bool IsTriangle( float a, float b, float c);
void output(int check, float a, float b, float c);
int main()
{
	float a,b,c;
	input(a,b,c);
	int check = IsTriangle(a,b,c);
	output(check, a,b,c);
}
void input( float &a, float &b, float &c)
{
	cin>>a>>b>>c;
}

bool IsTriangle( float a, float b, float c)
{
	if (a+b>c && a+c>b && b+c>a)
		return true;
	return false;
}

void output(int check, float a, float b, float c)
{
	if(check==true)
	{
		if ((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
			cout<<"Isoceles Triangle";
		if (a==b&&b==c&&c==a)
			cout<<"Equilateral Triangle";
		if (pow(a,2)+pow(b,2)==pow(c,2)|| pow(b,2)+pow(c,2)==pow(a,2)||pow(a,2)+pow(c,2)==pow(a,2))
				cout<<"Right Triangle";
	}
	else 
		cout<<"Can't construct a Triangle";
}
