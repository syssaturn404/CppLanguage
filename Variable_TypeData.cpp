#include <iostream>
using namespace std;

int main(){
 
  // deklarasi tipe data variabel
  string nama;
  int umur;
  char jenis_kelamin;
 
  // --- proses input ---
  cout << "Siapakah namamu ? " << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  getline(cin,nama);
 
  cout << "Berapa umurmu? " << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  cin >> umur;
 
  cout << "Jenis kelamin [L/P]: ";
  // menyimpan data ke variabel
  cin >> jenis_kelamin;
 
  // --- proses output ---
  cout << "Salam kenal : " << nama <<"\nUsiamu : ";
  cout << umur << "\nKelaminmu : "<< jenis_kelamin << endl;
 
  return 0;

}
