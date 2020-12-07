#ifndef MENADZERUZYTKOWNIKA_H
#define MENADZERUZYTKOWNIKA_H

#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include <windows.h>
#include <fstream>
#include <sstream>
#include "PilikZUzytkownikami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class MenadzerUzytkownika
{
    MetodyPomocnicze metodyPomocnicze;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;
    Uzytkownik zalogowanyUzytkownik;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    Uzytkownik podajDaneNowegoUzytkownika ();

public:
    MenadzerUzytkownika (string nazwaPlikuZUzytkownikami): plikZUzytkownikami(nazwaPlikuZUzytkownikami){
    zalogowanyUzytkownik.ustawId(0);
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika ();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika ();
    void wyloguj ();
    bool czyUzytkownikJestZalogowany();
    int pobierzIdZalogowanegoUzytkownika();



};
#endif
