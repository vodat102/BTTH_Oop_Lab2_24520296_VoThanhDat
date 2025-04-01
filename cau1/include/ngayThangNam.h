#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H


class ngayThangNam
{
private:
    int iNgay, iThang, iNam;
public:

    ngayThangNam()
    {
        iNgay = 1;
        iThang = 1;
        iNam = 1970;
    }
    ngayThangNam(int iNgay, int iThang,int iNam)
    {
        this->iNgay = iNgay;
        this->iThang = iThang;
        this->iNam = iNam;
    }
    ~ngayThangNam(){     }
    void Nhap();
    void Xuat();
    void NgayThangNamTiepTheo();
    getNgay(){return iNgay; }
    getThang(){return iThang; }
    getNam(){return iNam; }
};

#endif // NGAYTHANGNAM_H
