#include "soPhuc.h"
#include<iostream>
using namespace std;


void soPhuc::Nhap()
{
    cin>>iThuc>>iAo;
}

void soPhuc::Xuat()
{
    cout<<'('<<iThuc<<','<<iAo<<')';
}

soPhuc soPhuc::Tong (const soPhuc &a) const
{
    soPhuc temp;
    temp.iThuc=this->iThuc+a.iThuc;
    temp.iAo=this->iAo+a.iAo;
    return temp;
}

soPhuc soPhuc::Hieu (const soPhuc &a) const
{
    soPhuc temp;
    temp.iThuc=this->iThuc-a.iThuc;
    temp.iAo=this->iAo-a.iAo;
    return temp;
}

soPhuc soPhuc::Tich (const soPhuc &a) const
{
    soPhuc temp;
    temp.iThuc=this->iThuc*a.iThuc-this->iAo*a.iAo;
    temp.iAo=this->iThuc*a.iAo+this->iAo*a.iThuc;
    return temp;
}

soPhuc soPhuc::Thuong (const soPhuc &a) const
{
    if(a.iThuc==0 && a.iAo==0)
    {
        cout<<"Khong the chia cho so phuc (0,0)!";
        exit(0);
    }
    soPhuc temp;
    temp.iThuc=(this->iThuc*a.iThuc+this->iAo*a.iAo)/(a.iThuc*a.iThuc+a.iAo*a.iAo);
    temp.iAo=(a.iThuc*this->iAo-this->iThuc*a.iAo)/(a.iThuc*a.iThuc+a.iAo*a.iAo);
    return temp;
}
