#include <iostream>
#include <stdio.h>
using namespace std;
double tinhCGPA(int chuyencan, double giuaki, double cuoiki ) {
    double hocphan = chuyencan*0.1+giuaki*0.3+cuoiki*0.6;
    return hocphan;
}
int main(){
    cout << "=================WELLCOME=================="<<endl;
    cout << "========== VUI LONG CHON TIEN ICH ========="<<endl;
    cout << "========= 1. Tinh diem GPA mon hoc ========" << endl;
    cout <<"Nhap tien ich: "<<endl;
        int y;
        cin >> y;
        if(y == 1) {
            cout << "Nhap chuyen can, giua ki, cuoi ki "<< endl;
            int a,b,c;
            cin >> a >> b >> c;
            float diemCGPA = tinhCGPA(a,b,c);
            cout << diemCGPA << endl;
            
                if( diemCGPA < 4) {
                    cout <<"F";
                } else if ( diemCGPA >= 4   && diemCGPA <= 5.4 ) {
                    cout <<"D";
                } else if ( diemCGPA >= 5.5 && diemCGPA <= 6.9) {
                    cout <<"C";
                } else if ( diemCGPA >= 7   && diemCGPA <= 8.4 ){
                    cout <<"B";
                }  else {
                    cout << "A";
                }
        }
    return 0;
}