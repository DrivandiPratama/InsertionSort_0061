#include <iostream>
using namespace std;

int arr[20]; // Membuat array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // Procedure Input
while (true)
{
cout <<"Masukkan Jumlah Data Pada Array : "; //Membuat Inputam jumlah element Array
cin >> n; // Memanggil Variable Inputan n

if (n <= 20)
{ // Memabuat Kondisi n Tidak Lebih Dari 20
break;
}
else
{
    cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan pesan jika data lebih dari 20
}
}
cout << endl; // Membuat jarak perbaris program
cout << "======================" << endl; // Membuat tampilan susunan data element array
cout << "Masukkan Element Array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++)
{
cout << "Data ke-" << (i + 1) << ": "; // Memasukkan atau menginputkan nilai data n
cin >> arr[i]; // Menyimpan nilai data n kedalan array arr
}
}

void insertionSort()
{ // Procedure InsertionSort

    int temp; // Membuat variable data temporer atau menyimpan sementara
    int j, i; // Membuat variable j sebagai penanda
    
    for (i = 1; i <= n - 1; i++)
    { // Step 1
    
    temp = arr[i]; // Step 2
    
    j = i - 1; // Step 3
    
