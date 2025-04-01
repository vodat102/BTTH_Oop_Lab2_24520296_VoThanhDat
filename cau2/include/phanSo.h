#ifndef PHANSO_H
#define PHANSO_H

class phanSo
{
private:
       int iTu;
       int iMau;
public:
    phanSo()
    {
        iTu = 0;
        iMau = 1;
    }
    phanSo(int a, int b)
    {
        iTu = a;
        iMau = b;
    }
    ~phanSo()
    {
        //
    }
    void Nhap();
    void Xuat();
    void RutGon();
    phanSo Tong (const phanSo x) const;
    phanSo Hieu (const phanSo x) const;
    phanSo Tich (const phanSo x) const;
    phanSo Thuong (const phanSo x) const;
    phanSo SoSanh (const phanSo x) const;
    int getTu(){return iTu; }
    int getMau(){return iMau; }
};

#endif // PHANSO_H
