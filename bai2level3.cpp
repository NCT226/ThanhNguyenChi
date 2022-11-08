/*A = n.(n + 1).(2n + 1) : 6 */
# include <iostream> 
using namespace std;
void input (int &n);
int tinhTong(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int sum=tinhTong(n);
	output(sum);
	return 0;
}

void input (int &n)
{
	cin>>n;
}

int tinhTong(int n)
{
	int sum= (n*(n + 1)*(2*n + 1))/ 6;
	return sum;
}

void output(int kq)
{
	cout<<kq;
}
