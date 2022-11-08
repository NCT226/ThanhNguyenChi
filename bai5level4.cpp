# include <iostream>
# include <math.h>
using namespace std;
void input(int &n);
int findMaxElement(int n);
void output(int max);
int main()
{
	int n;
	input(n);
	int max=findMaxElement(n);
	output(max);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

int findMaxElement(int n)
{
	int max=0;
	while (n>0)
	{
		int surplus=n%10;
		if(max<surplus)
			max=surplus;
		n=n/10;
	}
	return max;
}
void output(int max)
{
	cout<<max;
}
