#include <iostream>
using namespace std;
void input(int &a, int &b, int &c);
int IsMinSec(int a, int b, int c);
void output(int result);
int main()
{
	int a, b, c;
	input(a,b,c);
	int minSec=IsMinSec(a,b,c);
	output(minSec);
}

void input(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}

int IsMinSec(int a, int b, int c)
{
	int minsec=b;
	if ((minsec<a && a<c) || (c<a && a<minsec))
		minsec=a;
	if ((minsec<c && c<a) || (a<c && c<minsec))
		minsec=c;
	return minsec;
}
void output(int result)
{
	cout<<result;
}

