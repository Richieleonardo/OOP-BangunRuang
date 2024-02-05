#include <iostream>
#include "Bangunruang.hpp"

//constructor dan destructor
Kubus::Kubus() :Bangunruang(){
    Rusuk = 0;
}
Kubus::Kubus(float luas, float volume, int rusuk) :Bangunruang(luas,volume){
    Rusuk = rusuk;
}
Kubus::~Kubus() {}
//getter
int Kubus::get_rusuk() const{
    return Rusuk;
}
float Kubus::get_luaspermukaan() const{
    return Luaspermukaan;
}
float Kubus::get_volume() const{
    return Volume;
}
//setter
void Kubus::set_rusuk(int rusuk){
    this->Rusuk = rusuk;
}
float Kubus::hitung_luaspermukaan(int rusuk){
    this->Luaspermukaan = 6 * Rusuk * Rusuk;
}
float Kubus::hitung_volume(int rusuk){
    this->Volume = Rusuk * Rusuk * Rusuk;
}

//prosedur display
void Kubus::display_bangun(){
    std::cout << "Kubus memiliki : " << std::endl;
    std::cout << "Panjang rusuk : " << get_rusuk() << " cm" << std::endl;
    std::cout << "Luas Permukaan : " << get_luaspermukaan() << " cm2" << std::endl;
    std::cout << "Volume : " << get_volume() << " cm3" << std::endl;
}