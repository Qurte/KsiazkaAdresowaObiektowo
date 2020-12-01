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

public:
    void rejestracjaUzytkownika();
    int logowanieUzytkownika ();
    void wypiszWszystkichUzytkownikow();
    Uzytkownik podajDaneNowegoUzytkownika ();

};
#endif
