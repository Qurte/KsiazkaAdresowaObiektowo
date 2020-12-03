#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "MenadzerUzytkownika.h"

using namespace std;

class KsiazkaAdresowa
{
    MenadzerUzytkownika menadzerUzytkownika;
    public:
    KsiazkaAdresowa (string nazwaPlikuZUzytkownikami)
    :menadzerUzytkownika(nazwaPlikuZUzytkownikami)
    {
        menadzerUzytkownika.wczytajUzytkownikowZPliku();
    };

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika ();
};
#endif
