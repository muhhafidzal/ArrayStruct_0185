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

    for (int i = 0; i <= 2; i++)
    {
    // tampilkan
    cout << "Data Penduduk : " << endl;
    cout << "Nama : " << mhs[i].nama << endl;
    cout << "Desa: " << mhs[i].alamat.desa << endl;
    cout << "Kota: " << mhs[i].alamat.kota << endl;
    cout << "Umur : " << mhs[i].umur << endl;
    cout << endl;
    }
} 