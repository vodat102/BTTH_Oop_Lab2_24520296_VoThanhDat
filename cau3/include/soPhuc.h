#ifndef SOPHUC_H
#define SOPHUC_H


class soPhuc
{
private:
    int iThuc, iAo;
public:
    void Nhap();
    void Xuat();
    soPhuc Tong (const soPhuc&) const;
    soPhuc Hieu (const soPhuc&) const;
    soPhuc Tich (const soPhuc&) const;
    soPhuc Thuong (const soPhuc&) const;
};

#endif // SOPHUC_H

