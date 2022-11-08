# include <iostream>
# include <math.h>
using namespace std;
void input(int &n, float &x);
void output(float kq);
float tinhTongCan(int n, float x);
int main()
{
	int n;
	float x;
	input(n,x);
	float tongCan=tinhTongCan(n,x);
	output(tongCan);
	return 0;
}

float tinhTongCan(int n, float x)
{
	float tong;
	for(int i=1; i<=n; i++)
		tong=sqrt(x+tong);
	return tong;
}

void input(int &n, float &x)
{
	cin>>n>>x;
}

void output(float kq)
{
	cout<<kq;
}
