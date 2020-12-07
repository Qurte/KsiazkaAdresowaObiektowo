#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "MenadzerUzytkownika.h"
#include "MenadzerAdresata.h"

using namespace std;

class KsiazkaAdresowa
{
    MenadzerUzytkownika menadzerUzytkownika;
    MenadzerAdresata *menadzerAdresata;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

    char wczytajZnak ();

    public:
    KsiazkaAdresowa (string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI)
    :menadzerUzytkownika(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(NAZWAPLIKUZADRESATAMI)
    {
        menadzerAdresata = NULL;
    }
    ~KsiazkaAdresowa()
    {
        delete menadzerAdresata;
        menadzerAdresata = NULL;
    };

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika ();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wyloguj ();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika ();
    bool czyUzytkownikJestZalogowany();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata ();

};
#endif
