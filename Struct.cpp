#include <iostream>
#include <string>
using namespace std;

struct detailalamat
{
    string desa; 
    string kota;
};

struct orang
{
    string nama;
    detailalamat alamat;
    int umur;
}; 

int main () {
    orang mhs[3];

    for (int i = 0; i <= 2; i++)
    {
        cout << "Nama : " ;
        getline(cin, mhs[i].nama);
        cout << "Alamat Desa : " ;
        getline(cin, mhs[i].alamat.desa);
        cout << "Alamat kota : " ; 
        getline(cin, mhs[i].alamat.kota);
        cout << "umur : " ;
        cin>> mhs[i].umur;
        cout << endl;
        cin.ignore();
    }
}    