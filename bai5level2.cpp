# include <iostream>
using namespace std;
void input(int &a, int &b, int &c, int &d);
int findMax(int x, int y);
void output(int result);
int main()
{
	int a,b,c,d;
	input(a,b,c,d);
	int max1=findMax(a,b);
	int max2=findMax(c,d);
	int kq=findMax(max1,max2);
	output(kq);
}

void input(int &a, int &b, int &c, int &d)
{
	cin>>a>>b>>c>>d;
}
int findMax(int x, int y)
{
	int max=x;
	if (max<y)
		max=y;
	return max;
}

void output(int result)
{
	cout<<result;
}
