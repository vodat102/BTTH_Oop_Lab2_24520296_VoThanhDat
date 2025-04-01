#include "phanSo.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    phanSo a, b, c;
    cout << "Nhap vao phan so thu nhat: \n";
    a.Nhap();
    cout << "Nhap vao phan so thu hai: \n";
    b.Nhap();
    cout << "Phan so thu nhat la: ";
    a.Xuat();
    cout << "Phan so thu hai la: ";
    b.Xuat();
    cout << "Tong: ";
    c = a.Tong(b);
    c.Xuat();
    cout << "Hieu: ";
    c = a.Hieu(b);
    c.Xuat();
    cout << "Tich: ";
    c = a.Tich(b);
    c.Xuat();
    cout << "Thuong: ";
    c = a.Thuong(b);
    c.Xuat();
    cout << "Phan so co gia tri lon hon trong hai phan so nhap vao la: ";
    if (a.getTu() * b.getMau() == b.getTu() * a.getMau())
    {
        cout << "\nHai phan so bang nhau: ";
        a.Xuat();
        cout << " = ";
        b.Xuat();
    }
    else
    {
         c = a.SoSanh(b);
         c.Xuat();
    }
    return 0;
}
