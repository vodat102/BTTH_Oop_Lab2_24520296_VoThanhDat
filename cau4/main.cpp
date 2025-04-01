#include "gioPhutGiay.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Hay nhap vao thoi gian: \n";
    gioPhutGiay a, c;
    a.Nhap();
    cout << "Thoi gian vua nhap la: ";
    a.Xuat();
    cout << "Thoi gian sau khi duoc tang len 1s la: ";
    c = a.TinhCongThemMotGiay();
    c.Xuat();
    return 0;
}
