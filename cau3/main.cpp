#include "soPhuc.h"
#include <iostream>

using namespace std;

int main()
{
    soPhuc a, b, c;
    cout<<"Nhap so phuc a: ";
    a.Nhap();
    cout<<"\nNhap so phuc b: ";
    b.Nhap();
    cout<<"\nTong a+b=";
    c=a.Tong(b);
    c.Xuat();
    cout<<"\nHieu a-b=";
    c=a.Hieu(b);
    c.Xuat();
    cout<<"\nTich a*b=";
    c=a.Tich(b);
    c.Xuat();
    cout<<"\nThuong a/b=";
    c=a.Thuong(b);
    c.Xuat();
    return 0;
}
