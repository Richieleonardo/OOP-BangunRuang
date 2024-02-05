#ifndef _BANGUNRUANG_
#define _BANGUNRUANG_

class Bangunruang{
protected:
    float Luaspermukaan;
    float Volume;
public:
    //constructor
    Bangunruang();
    Bangunruang(float luas, float volume);
    ~Bangunruang();
    virtual void display_bangun();
};

class Kubus:public Bangunruang{
private:
    int Rusuk;
public:
    //constructor dan destructor
    Kubus();
    Kubus(float luas, float volume, int rusuk);
    ~Kubus();

    //getter
    int get_rusuk() const;
    float get_luaspermukaan() const;
    float get_volume() const;
    //setter
    void set_rusuk(int rusuk);
    float hitung_luaspermukaan(int rusuk);
    float hitung_volume(int rusuk);

    //prosedur display
    void display_bangun();
};

class Balok:public Bangunruang{
private:
    int Tinggi;
    int Panjang;
    int Lebar;
public:
    //constructor dan destructor
    Balok();
    Balok(float luas, float volume, int panjang, int lebar, int tinggi);
    ~Balok();

    //getter
    int get_tinggi() const;
    int get_panjang() const;
    int get_lebar() const;
    float get_luaspermukaan() const;
    float get_volume() const;

    //setter
    void set_tinggi(int height);
    void set_panjang(int length);
    void set_lebar(int width);
    void hitung_luaspermukaan(int panjang, int lebar, int tinggi);
    void hitung_volume(int panjang, int lebar, int tinggi);

    //prosedur display
    void display_bangun();
};

class Silinder:public Bangunruang{
private:
    int Tinggi;
    float Jarijari;
    bool Tutup;
public:
    //constructor dan destructor
    Silinder();
    Silinder(float luas, float volume, float jarijari, int tinggi, bool tutup);
    ~Silinder();

    //getter
    int get_tinggi() const;
    int get_jarijari() const;
    float get_luaspermukaan() const;
    float get_volume() const;
    bool get_tutup();

    //setter
    void set_tinggi(int height);
    void set_jarijari(int radius);
    void set_tutup(bool tutup);
    void hitung_luaspermukaan(float jarijari, int tinggi, bool Tutup);
    void hitung_volume(float panjang, int tinggi);

    //prosedur display
    void display_bangun();
    void Is_punyatutup();
};

#endif