#ifndef MENADZERUZYTKOWNIKA_H
#define MENADZERUZYTKOWNIKA_H

#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include <windows.h>
#include <fstream>
#include <sstream>
#include "PilikZUzytkownikami.h"

using namespace std;

class MenadzerUzytkownika
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    Uzytkownik podajDaneNowegoUzytkownika ();
    string wczytajLinie();

public:
    MenadzerUzytkownika (string nazwaPlikuZUzytkownikami): plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
    void rejestracjaUzytkownika();
    void logowanieUzytkownika ();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku ();
    void zmianaHaslaZalogowanegoUzytkownika ();



};
#endif
