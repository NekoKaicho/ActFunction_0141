#include <iostream>
using namespace std;

float jarijari;
float phi=3.14159;

void input(){
    cout << "Masukkan jari-jari lingkaran : ";
    cin >> jarijari;
}
float luas_lingkaran (float jarijari, float phi){
    return phi * jarijari * jarijari;
}