#include <iostream>
# include <iomanip>
using namespace std;
void input(float &a, float &b);
float perimeter(float a, float b);
void output(float per);
int main()
{
	float a,b;
	input(a,b);
	float per=perimeter(a,b);
	output(per);
	return 0;
}

void input(float &a, float &b)
{
	cin>>a>>b;
}

float perimeter(float a, float b)
{
  float cv= ((a+b)*2);
  return cv;
}

void output(float per)
{
	cout<<setprecision(2)<<fixed<<per;
}

