#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "MenadzerUzytkownika.h"

using namespace std;

class KsiazkaAdresowa
{
    MenadzerUzytkownika menadzerUzytkownika;
    char wczytajZnak ();
    public:
    KsiazkaAdresowa (string nazwaPlikuZUzytkownikami)
    :menadzerUzytkownika(nazwaPlikuZUzytkownikami)
    {
        menadzerUzytkownika.wczytajUzytkownikowZPliku();
    };

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika ();
    void zmianaHaslaZalogowanegoUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika ();
    bool czyUzytkownikJestZalogowany();
    void wyloguj ();
};
#endif
