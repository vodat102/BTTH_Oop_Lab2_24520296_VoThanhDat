#include "ngayThangNam.h"
#include <bits/stdc++.h>
using namespace std;
bool kiemTra(ngayThangNam a)
{
    if (a.getThang() > 12 || a.getThang()<1 || a.getNgay()>31 || a.getNgay()<1 || a.getNam()<1)
        return false;
    return true;
}
int soNgayTrongThang(ngayThangNam x)
{
    if (kiemTra(x))
    {
        if (x.getThang() == 1 || x.getThang() == 3 || x.getThang() == 5 || x.getThang() == 7 || x.getThang() == 8 || x.getThang() == 10 || x.getThang() == 12)
            return 31;
        else if (x.getThang() == 4 || x.getThang() == 6 || x.getThang() == 9 || x.getThang() == 11)
            return 30;
        else
        {
            if ((x.getNam() % 4 == 0 && x.getNam() % 100 != 0) || (x.getNam() % 400 == 0))
                return 29;
            else
                return 28;
        }
    }
    else
        return 0;
}
void ngayThangNam::Nhap()
{
    ngayThangNam temp; // Tạo một đối tượng tạm thời để lưu trữ dữ liệu nhập
    cout << "Nhap ngay: ";
    cin >> temp.iNgay;
    cout << "Nhap thang: ";
    cin >> temp.iThang;
    cout << "Nhap nam: ";
    cin >> temp.iNam;
    if (kiemTra(temp))
    {
        iNgay = temp.iNgay;
        iThang = temp.iThang;
        iNam = temp.iNam;
    }
    else
    {
        cout << "Ngay, thang hoac nam khong hop le. Vui long nhap lai." << endl;
        Nhap();
    }
}
void ngayThangNam::Xuat()
{
    cout << "Ngay, thang, nam vua nhap la: ";
    cout << iNgay << "/" << iThang << "/" <<iNam;
    cout <<endl;
}
void ngayThangNam::NgayThangNamTiepTheo()
{
    cout << "Ngay tiep theo se la: ";
    int currentDay = getNgay();
    int currentMonth = getThang();
    int currentYear = getNam();
    int ngayMax = soNgayTrongThang({currentDay,currentMonth,currentYear});//dung de so sanh voi so ngay trong thang vua nhap
    ++currentDay;
    if (currentDay > ngayMax)
    {
        currentDay = 1;
        ++currentMonth;
        if (currentMonth>12)
        {
            currentMonth = 1;
            ++currentYear;
        }
    }
    cout << currentDay << "/" << currentMonth << "/" << currentYear;
}
