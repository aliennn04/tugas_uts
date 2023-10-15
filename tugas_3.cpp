#include <iostream>
using namespace std;
int main() {
    int nilai_mahasiswa;
    string predikat;

    cout<<"==== program predikat nilai===="<<endl;
    cout<<"============================"<<endl;
    cout<<endl;
    cout<<"inputkan nilai akhir anda : ";
    cin>>nilai_mahasiswa;

    //menggunakan percabangan if/else/if
    if(nilai_mahasiswa >=91-100) {
        predikat = "A+";
    if(nilai_mahasiswa >=81-90) {
        predikat = "A";
    }else if (nilai_mahasiswa >=71-80) {
        predikat = " B+";
    }else if (nilai_mahasiswa >=51-70) {
        predikat = " B";
    }else if (nilai_mahasiswa >=41-50) {
        predikat = "C";
    }else if (nilai_mahasiswa>=31-40) {
        predikat = "D";
    }else if (nilai_mahasiswa>=20-30)  {
        predikat = "E";
    }else if (nilai_mahasiswa>=0-10) {
        predikat = "f";
    }else {
        predikat = "F";
    }

    cout<< " PREDIKAT ANDA :" <<predikat<<endl;
    cout<<"============================"<<endl;
   
}
}