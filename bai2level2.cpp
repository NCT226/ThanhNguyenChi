//Slove a Linear Equation//
# include <iostream>
# include <math.h>
using namespace std;
void input( int &a, int &b);
float calculate( int a, int b, float &result);
void output(int point, float result);
int main()
{
	int a,b;
	input(a,b);
	float x;
	int point= calculate (a,b,x);
	output(point,x);
	return 0;
}

void input( int &a, int &b)
{
	cin>>a>>b;
}

float calculate( int a, int b, float &result)
 {
	if (a==0)
		if(b==0)
			return 2;
		else 
			return 0;
	else 
	{
		result=float(-b)/a;
		return 1;
	}
 }
 
void output(int point, float result)
{
	if(point==0)
		cout<<"NO SOLUTION !";
	else
		if (point==1)
			cout<<"Result of equation is:"<<result;
		else 
			cout<<"INIFINITE SOLUTION";
}
