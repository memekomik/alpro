#include <iostream>

using namespace std;

int main() {
       const float Lgranit = 0.6 * 0.6;
       const int gaji = 27500;
       int pRT,lRT,LuasRT,pRK,lRK,LuasRK,LuasTotal,tgaji,thkGranit,tbiaya;
       const int kGranit = 3;
       const int hkGranit = 185000;
       float tGranit,tkGranit;
       
       //Input nilai-nilai dalam kasus
       cout<<"Tugas Alpro Granit";
       cout<<"\npanjang ruang tamu:";
       cin>>pRT;
       cout<<"lebar ruang tamu:";
       cin>>lRT;
       cout<<"panjang ruang keluarga:";
       cin>>pRK;
       cout<<"lebar ruang keluarga:";
       cin>>lRK;
       
       //Proses
       LuasRT=pRT*lRT;
       LuasRK=pRK*lRK;
       LuasTotal=LuasRT+LuasRK;
       tGranit=LuasTotal/Lgranit;
       tkGranit=tGranit/kGranit;
       tgaji=LuasTotal*gaji;
       thkGranit=tkGranit*hkGranit;
       tbiaya=tgaji+thkGranit;
       
       //Menampilkan output
       cout<<"Luas ruang tamu:"<<LuasRT<< endl;
       cout<<"Luas ruang keluarga:"<<LuasRK<< endl;
       cout<<"Luas yang perlu dipasang granit:"<<LuasTotal<<endl;
       cout<<"Total kotak granit yang dibutuhkan:"<<tkGranit<< endl;
       cout<<"Gaji yang diperoleh Pak Nitgra:"<<tgaji<< endl;
       cout<<"Biaya granit yang diperlukan:"<<thkGranit<< endl;
       cout<<"Biaya total yang harus dikeluarkan oleh Pak Ali:"<<tbiaya<< endl;
       
       return 0;
       
}
