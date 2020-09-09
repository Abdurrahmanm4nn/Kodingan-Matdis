/*
Deskripsi program : menampilkan angka positif terkecil yang menjadi hasil dari operasi invers a(mod b) 
*/
#include<iostream>
#include<algorithm>
using namespace std;

int inversMod(int a, int b){
    for (int x=1; x<b; x++){ 
        if ((a*x) % b == 1){ 
          return x;
        } 
    }
}

int main(){
    int a, b;
    
    cout<<"program pencari hasil invers dari a(mod b)"<<endl;
    cout<<"masukkan angka yang menjadi a dan b dalam contoh di atas secara berurutan dipisahkan oleh spasi"<<endl;
    cin>>a>>b;
    cout<<"yang dicari adalah hasil invers dari "<<a<<"(mod "<<b<<")"<<endl;

    if(__gcd(a,b)==1){
        cout<<"Salah satu hasil inversnya adalah : "<<inversMod(a,b);
    }
    else{
        cout<<"Inversnya tidak ada karena "<<a<<" dan "<<b<<" tidak saling prima";
    }
}
