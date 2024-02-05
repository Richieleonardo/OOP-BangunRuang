#include <iostream>
#include "Bangunruang.hpp"

const int pi = 3.14;

//constructor dan destructor
Silinder::Silinder() :Bangunruang(){
    Jarijari = 0;
    Tinggi = 0;
    Tutup = false;
}
Silinder::Silinder(float luas, float volume, float jarijari, int tinggi, bool tutup) :Bangunruang(luas, volume){
    this->Jarijari = jarijari;
    this->Tinggi = tinggi;
    this->Tutup = tutup;
}
Silinder::~Silinder(){}

//getter
int Silinder::get_tinggi() const{return Tinggi;}
int Silinder::get_jarijari() const{return Jarijari;}
float Silinder::get_luaspermukaan() const{return Luaspermukaan;}
float Silinder::get_volume() const{return Volume;}
bool Silinder::get_tutup() {return Tutup;}

//setter
void Silinder::set_tinggi(int height){
    this->Tinggi = height;
}
void Silinder::set_jarijari(int radius){
    this->Jarijari = radius;
}
void Silinder::set_tutup(bool tutup){
    this->Tutup = tutup;
}
void Silinder::hitung_luaspermukaan(float jarijari, int tinggi, bool tutup){
    if(tutup){
        this->Luaspermukaan = (2* (pi * jarijari * jarijari)) + (2 * pi * jarijari * tinggi);
    }
    else{
        this->Luaspermukaan = (pi * jarijari * jarijari) + (2 * pi * jarijari * tinggi); //pi *r2 + 2pi * r * t
    }
}
void Silinder::hitung_volume(float jarijari, int tinggi){
    this->Volume = pi * jarijari * jarijari * tinggi;
}

//prosedur display
void Silinder::display_bangun(){
    std::cout << "Silinder memiliki : " << std::endl;
    std::cout << "Jari-jari : " << get_jarijari() << " cm" << std::endl;
    std::cout << "Tinggi : " << get_tinggi() << " cm" << std::endl;
    std::cout << "Luas Permukaan : " << get_luaspermukaan() << " cm2" << std::endl;
    std::cout << "Volume : " << get_volume() << " cm3" << std::endl;
}

void Silinder::Is_punyatutup(){
    if(Tutup){
        std::cout << "Silinder memiliki tutup!" << std::endl;
    }
    else{
        std::cout << "Silinder tidak memiliki tutup!" << std::endl;
    }
}