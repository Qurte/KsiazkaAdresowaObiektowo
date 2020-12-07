#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "MenadzerUzytkownika.h"
#include "MenadzerAdresata.h"

using namespace std;

class KsiazkaAdresowa
{
    MenadzerUzytkownika menadzerUzytkownika;
    MenadzerAdresata menadzerAdresata;

    int idOstatniegoAdresata;

    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdZalogowanegoUzytkownika ();
    char wczytajZnak ();

    public:
    KsiazkaAdresowa (string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI)
    :menadzerUzytkownika(nazwaPlikuZUzytkownikami), menadzerAdresata(NAZWAPLIKUZADRESATAMI)
    {
        menadzerUzytkownika.wczytajUzytkownikowZPliku();
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
