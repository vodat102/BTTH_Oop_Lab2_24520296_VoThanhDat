#include "phanSo.h"
#include <bits/stdc++.h>
using namespace std;
void phanSo::Nhap()
{
    phanSo temp;
    cout << "Nhap tu so: ";
    cin >> temp.iTu;
    cout << "Nhap mau so: ";
    cin >> temp.iMau;
    if (temp.iMau == 0)
    {
        cout << "Phan so khong hop le. Vui long nhap lai.\n";
        Nhap();
    }
    else{
        this->iTu = temp.iTu;
        this->iMau = temp.iMau;
    }
}
void phanSo::RutGon()
{
    int temp;
    temp = __gcd(this->iTu, this->iMau);
    this->iTu /= temp;
    this->iMau/=temp;
    if (this->iTu == 0)
    {
        cout << 0;
        return;
    }
    if (this->iMau == -1)
    {
        cout << -this->iTu;
        return;
    }
    if (this->iMau == 1)
    {
        cout << this->iTu;
        return;
    }
    cout << this->iTu << "/" <<iMau;
}
void phanSo::Xuat()
{
    this->RutGon();
    cout << endl;
}
phanSo phanSo::Tong(const phanSo a) const
{
    phanSo temp;
    temp.iTu = this->iTu * a.iMau + a.iTu * this->iMau;
    temp.iMau = this->iMau * a.iMau;
    return temp;
}
phanSo phanSo::Hieu(const phanSo a) const
{
    phanSo temp;
    temp.iTu = this->iTu * a.iMau - a.iTu * this->iMau;
    temp.iMau = this->iMau * a.iMau;
    return temp;
}
phanSo phanSo::Tich(const phanSo a) const
{
    phanSo temp;
    temp.iTu = this->iTu * a.iTu;
    temp.iMau = this->iMau * a.iMau;
    return temp;
}
phanSo phanSo::Thuong(const phanSo a) const
{
    phanSo temp;
    if (a.iTu == 0)
    {
        cout << "khong thuc hien duoc phep toan.";
        exit(1);
    }
    temp.iTu = this->iTu * a.iMau;
    temp.iMau = this->iMau * a.iTu;
    return temp;
}
phanSo phanSo::SoSanh(const phanSo x) const
{
    if (this->iTu*x.iMau > x.iTu * this->iMau)
        return *this;
    else if (this->iTu*x.iMau < x.iTu * this->iMau)
        return x;
    else
    return *this;
}
