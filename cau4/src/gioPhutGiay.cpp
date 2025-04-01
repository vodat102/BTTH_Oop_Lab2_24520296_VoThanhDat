#include "gioPhutGiay.h"
#include <bits/stdc++.h>
using namespace std;
bool kiemTra(gioPhutGiay a)
{
    if (a.getGio() >23 || a.getGio()<0) return false;
    if (a.getPhut()>59 || a.getPhut()<0) return false;
    if (a.getGiay()>59 || a.getGiay()<0) return false;
    return true;
}
 void gioPhutGiay::Nhap()
 {
     gioPhutGiay temp;
     cout << "Nhap gio: ";
     cin >> temp.iGio;
     cout << "Nhap phut: ";
     cin >> temp.iPhut;
     cout << "Nhap giay: ";
     cin >> temp.iGiay;
     if (kiemTra(temp))
     {
         this->iGio = temp.iGio;
         this->iPhut = temp.iPhut;
         this->iGiay = temp.iGiay;
     }
     else
     {
         cout << "Thoi gian khong hop le. Vui long nhap lai.\n";
         Nhap();
     }
 }
 void gioPhutGiay::Xuat()
 {
     cout << iGio << ":" << iPhut << ":" << iGiay;
     cout <<endl;
 }
gioPhutGiay gioPhutGiay::TinhCongThemMotGiay()
{
    gioPhutGiay temp;
    temp.iGio = getGio();
    temp.iPhut = getPhut();
    temp.iGiay = getGiay();
    ++temp.iGiay;
    if (temp.iGiay > 59)
    {
        temp.iGiay = 0;
        ++temp.iPhut;
        if (temp.iPhut > 59)
        {
            temp.iPhut = 0;
            ++temp.iGio;
            if (temp.iGio > 23)
                temp.iGio = 0;
        }
    }
    return temp;
}
