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
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;
    Uzytkownik zalogowanyUzytkownik;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    Uzytkownik podajDaneNowegoUzytkownika ();
    string wczytajLinie();
    bool czyJestZalogowany;

public:
    MenadzerUzytkownika (string nazwaPlikuZUzytkownikami): plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
    void rejestracjaUzytkownika();
    void logowanieUzytkownika ();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku ();
    void zmianaHaslaZalogowanegoUzytkownika ();
    bool czyUzytkownikJestZalogowany();
    void wyloguj ();

};
#endif
