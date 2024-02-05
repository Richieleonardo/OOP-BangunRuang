#include <iostream>
#include "Bangunruang.hpp"

//constructor dan destructor
Balok::Balok() :Bangunruang(){
    Panjang = 0;
    Lebar = 0;
    Tinggi = 0;
}
Balok::Balok(float luas, float volume, int panjang, int lebar, int tinggi) :Bangunruang(luas, volume){
    Panjang = panjang;
    Lebar = lebar;
    Tinggi = tinggi;
}
Balok::~Balok(){}

//getter
int Balok::get_tinggi() const{return Tinggi;}
int Balok::get_panjang() const{return Panjang;}
int Balok::get_lebar() const{return Lebar;}
float Balok::get_luaspermukaan() const{return Luaspermukaan;}
float Balok::get_volume() const{return Volume;}

//setter
void Balok::set_tinggi(int height){
    this->Tinggi = height;
}
void Balok::set_panjang(int length){
    this->Panjang = length;
}
void Balok::set_lebar(int width){
    this->Lebar = width;
}
void Balok::hitung_luaspermukaan(int panjang, int lebar, int tinggi){
    this->Luaspermukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (tinggi * lebar));
}
void Balok::hitung_volume(int panjang, int lebar, int tinggi){
    this->Volume = panjang * tinggi * lebar;
}

//prosedur display
void Balok::display_bangun(){
    std::cout << "Balok memiliki : " << std::endl;
    std::cout << "Panjang : " << get_panjang() << " cm" << std::endl;
    std::cout << "Lebar : " << get_lebar() << " cm" << std::endl;
    std::cout << "Tinggi : " << get_tinggi() << " cm" << std::endl;
    std::cout << "Luas Permukaan : " << get_luaspermukaan() << " cm2" << std::endl;
    std::cout << "Volume Permukaan : " << get_volume() << " cm3" << std::endl;
}