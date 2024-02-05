#include <iostream>
#include "bangunruang.hpp"

//constructor
Bangunruang::Bangunruang(){
    Luaspermukaan = 0;
    Volume = 0;
}
Bangunruang::Bangunruang(float luas, float volume){
    this->Luaspermukaan = luas;
    this->Volume = volume;
}
Bangunruang::~Bangunruang(){}

//display
void Bangunruang::display_bangun(){
    std::cout << "Bangun masih abstrak!" << std::endl;
}