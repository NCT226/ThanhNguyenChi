# include <iostream> 
# include <math.h>
# include <iomanip>
using namespace std;
void input (int &n);
float tinhTongSoHuuTi(int n);
void output(float kq);
int main()
{
	int n;
	input(n);
	float sum=tinhTongSoHuuTi(n);
	output(sum);
	return 0;
}

void input (int &n)
{
	cin>>n;
}

float tinhTongSoHuuTi(int n)
{
	float tong=0;
	for(int i=1;i<=n;i++)
		tong=tong+(pow(i,-1));
	return tong;
}

void output(float kq)
{
	cout<<setprecision(2)<<fixed<<kq;
}
