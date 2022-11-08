#include <iostream>
# include <math.h>
using namespace std;
void input (int &d1, int &m1, int &y1, int &d2,int &m2, int &y2);
void output(int khoangCachGiuaHaiNgay );
int tinhKhoangCachGiuaHaiNgay(int d1, int m1, int y1, int d2,int m2, int y2);
int tinhSoNgay(int d, int m, int y);
bool laNamNhuan(int y);
int soNgayConLai(int d, int m, int y);
int soNgayTrongThang(int d,int m,int y);
int main()
{
	int d1,m1,y1,d2,m2,y2;
	input(d1,m1,y1,d2,m2,y2);
	int khoangCachGiuaHaiNgay=tinhKhoangCachGiuaHaiNgay(d1,m1,y1,d2,m2,y2);
	output(khoangCachGiuaHaiNgay);
	return 0;
}

void input (int &d1, int &m1, int &y1, int &d2,int &m2, int &y2)
{
	cin>>d1>>m1>>y1;
	cin>>d2>>m2>>y2;
}

bool laNamNhuan(int y)
{
	if((y%4==0 && y%100!=0) || (y%400==0))
		return true;
	return false;
}

int soNgayTrongThang(int d,int m,int y)
{
	if(m==2)
	{
		if(laNamNhuan(y))
			return 29;
		else
			return 28;
	}
	else  
	{
		if( m==4|| m==6 || m==9|| m==11 )
			return 30;
		else
			return 31;
	}
}

int soNgayConLai(int d, int m, int y)
{
	int day=d; 
	for(int i=1; i<m; i++)
		day=day+soNgayTrongThang(d,m,y);
	return day;
}

int tinhSoNgay(int d, int m, int y)
{
	int soNgay=0;
	for(int i=1; i<y; i++)
		if(laNamNhuan(i))
			soNgay=soNgay+366;
		else
			soNgay=soNgay+365;
	soNgay=soNgay+soNgayConLai(d,m,y);
	return soNgay;
}

int tinhKhoangCachGiuaHaiNgay(int d1, int m1, int y1, int d2,int m2, int y2)
{
	int kc1,kc2,khoangCach;
	kc1=tinhSoNgay(d1, m1, y1);
	kc2=tinhSoNgay(d2, m2, y2);
	khoangCach=abs(kc1-kc2);
	return khoangCach;
}

void output(int khoangCachGiuaHaiNgay )
{
	cout<<khoangCachGiuaHaiNgay;
}
