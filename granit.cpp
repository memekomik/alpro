#include <iostream>

using namespace std;

int main() {
       const float Lgranit = 0.6 * 0.6;
       const int gaji = 27500;
       int pRT;
       int lRT;
       int LuasRT;
       int pRK;
       int lRK;
       int LuasRK;
       int tGranit;
       const int kGranit = 3;
       int tkGranit;
       int tgaji;
       const int hkGranit = 185000;
       int thkGranit;
       
       //Input nilai-nilai dalam kasus
       cout<<"Tugas Alpro Granit";
       cout<<"\n panjang ruang tamu:";
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
       tGranit=(LuasRT+LuasRK)/Lgranit;
       tkGranit=tGranit/kGranit;
       tgaji=(LuasRT+LuasRK)*gaji;
       thkGranit=tkGranit*hkGranit;
       
       //Menampilkan output
       cout<<"Luas ruang tamu:";
       cout<<LuasRT<< endl;
       cout<<"Luas ruang keluarga:";
       cout<<LuasRK<< endl;
       cout<<"Total kotak granit yang dibutuhkan:";
       cout<<tkGranit<< endl;
       cout<<"Gaji yang diperoleh Pak Nitgra:";
       cout<<tgaji<< endl;
       cout<<"Biaya total granit yang diperlukan:";
       cout<<thkGranit<< endl;
       
       return 0;
       
}
