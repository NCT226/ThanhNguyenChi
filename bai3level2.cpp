# include <iostream>
using namespace std; 
void input(int &a, int &b, int &c);
int findMin( int x, int y);
void output(int result);
int main()
{
	int a,b,c; 
	input(a,b,c);
	int min1=findMin(a,b);
	int minElement=findMin(min1,c);
	output(minElement);
}

void input(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}

int findMin( int x, int y)
{
	int min=x;
	if (min>y)
		min=y;
	return min;
}

void output(int result)
{
	cout<<result;
}
