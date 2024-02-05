#include <iostream>
#include "Bangunruang.hpp"

int main(){
    std::cout << "Test Bangun Ruang menggunakan satuan cm" << std::endl;
    Bangunruang a;
    a.display_bangun();

    Kubus c;
    int rusuk = 3;
    c.set_rusuk(rusuk);
    c.hitung_luaspermukaan(rusuk);
    c.hitung_volume(rusuk);
    Bangunruang *pc = &c;
    pc->display_bangun();

    std::cout << std::endl;
    Balok b;
    int tinggib = 3;
    int panjang = 2;
    int lebar = 4;
    b.set_lebar(lebar);
    b.set_panjang(panjang);
    b.set_tinggi(tinggib);
    b.hitung_luaspermukaan(panjang, tinggib, lebar);
    b.hitung_volume(panjang, tinggib, lebar);
    Bangunruang *pb = &b;
    pb->display_bangun();

    std::cout << std::endl;
    Silinder s;
    Bangunruang *ps = &s;
    ps->display_bangun();
    s.Is_punyatutup();
    std::cout<<std::endl;

    float jarijari = 14.0;
    float tinggis = 18.0;
    bool tutup = true;
    s.set_jarijari(jarijari);
    s.set_tinggi(tinggis);
    s.set_tutup(tutup);
    s.hitung_luaspermukaan(s.get_jarijari(), s.get_tinggi(), s.get_tutup());
    s.hitung_volume(s.get_jarijari(), s.get_tinggi());
    ps->display_bangun();
    s.Is_punyatutup();
    std::cout<<std::endl;

    s.set_tutup(false);
    s.hitung_luaspermukaan(s.get_jarijari(), s.get_tinggi(), s.get_tutup());
    s.hitung_volume(s.get_jarijari(), s.get_tinggi());
    ps->display_bangun();
    s.Is_punyatutup();
    return 0;
}