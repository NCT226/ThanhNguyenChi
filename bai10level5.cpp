#include <iostream>
using namespace std; 
void kiemTraSoTichBangHaiTong();
void output(int element);
int main()
{
	int n=99;
	kiemTraSoTichBangHaiTong();
}

void kiemTraSoTichBangHaiTong()
{
	for(int i=10;i<100;i++)
	{
		int donVi=i%10;
		int hangChuc=i/10;
		int tich=donVi*hangChuc;
		int haiLanTong=2*(donVi+hangChuc);
		if (tich==haiLanTong)
			output(i);
	}
}

void output(int element)
{
	cout<<element<<" ";
}
