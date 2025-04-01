#ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H


class gioPhutGiay
{
private:
    int iGio;
    int iPhut;
    int iGiay;
public:
    gioPhutGiay()
    {
        iGio = 0;
        iPhut = 0;
        iGiay = 0;
    }
    gioPhutGiay(int iGio, int iPhut, int iGiay)
    {
        this->iGio = iGio;
        this->iPhut = iPhut;
        this->iGiay = iGiay;
    }
    ~gioPhutGiay()
    {
        //
    }
    int getGio(){return iGio;}
    int getPhut(){return iPhut;}
    int getGiay(){return iGiay;}
    void Nhap();
    void Xuat();
    gioPhutGiay TinhCongThemMotGiay();
};

#endif // GIOPHUTGIAY_H
