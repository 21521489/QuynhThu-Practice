
#include <iostream>
#include <iomanip>//thu vien
using namespace std; //1 so ham, cin, cout...//
int main()
{
    cout << "BAI 1: KIEU DU LIEU, TEN BIEN, CIN-COUT \n";
    cout << "can nho: n bit->2^(n-1)->2^(n-1)-1 \n";
    cout << "kieu du lieu\n";
    cout << "So nguyen\n"; //ko luu duoc so thuc
    cout << "int: 4byte:2^31->(2^31)-1\n";
    cout << "long long: 8byte : 2 ^ 63->(2 ^ 63) - 1 \n";
    cout << "So thuc\n"; //luu duoc so nguyen
    cout << "float: 4byte\n";//luu 6-7 so sau dau phay
    cout << "double: 8byte\n"; //luu 14 so sau dau phay
    cout << "Ki tu \n";
    cout << "char:1byte:0->255\n";//luu 1 ki tu
    cout << "Kieu dung sai\n";
    cout << "bool:chi co true va false\n" << endl;
    cout << "Bien \n";
    cout << "cach dat ten: Kieu_Du_Lieu Ten_Bien \n";
    cout << "VD: int DienTich\n";//Day la 1 gia tri trash;0 duoc cap bo nho 4byte
    cout << "Nho: Ten_Bien ko duoc bat dau bang so, co dau cach, trung voi keyword \n ";
    /*day la chu thich
    cho nhieu dong*/
    //\n hay endl la xuong dong
    float a;
    int b = 100;
    int c, d;
    int e = 200, f = 300;
    cout << "nhap du lieu cho a:";
    cin >> a;
    cout << b << endl;
    cout << "nhap du lieu cho c,d:";
    cin >> c >> d;//nhap tung so nhan enter hay nhap 1 hang deu duoc
    cout << c<<" " << d << endl;
    cout << "nhap so qua lon so voi dung luong cua int se ra ket qua sai\n";
    cout << "muon sau dau phay xuat hien n so thap phan, dung: fixed<<setprecision(n)<<cai_so_do\n";
    cout << fixed << setprecision(4) <<a<< endl;
    bool ok=true;
    cout << "gia tri cua bool ok=true " << ok << endl;
    char kitu = 'a';//cach nhap du lieu cho char. xau la "a"
    /*toan tu: %: chia lay phan du
    toan tu so sanh: ==, !=(khac)
    */
    int a = 100, b = 200;
    bool ok = a == b;
    cout << ok << endl;
}

