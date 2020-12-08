#ifndef MENADZERADRESATA_H
#define MENADZERADRESATA_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "PlikZAdresatami.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"


using namespace std;

class MenadzerAdresata
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;
    const string nazwaPlikuZAdresatami;
    const string nazwaTymczasowegoPlikuZAdresatami;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    int podajIdWybranegoAdresata();
    char wczytajZnak();
    void usunWybranaLinieWPliku(int idUsuwanegoAdresata);
    int wczytajLiczbeCalkowita();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void edytujWybranaLinieWPliku(string liniaZDanymiAdresataOddzielonePionowymiKreskami, int idEdytowanegoAdresata);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

public:
    MenadzerAdresata (string NAZWAPLIKUZADRESATAMI, int idZalogowanegoUzytkownika): plikZAdresatami(NAZWAPLIKUZADRESATAMI),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika), nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI), nazwaTymczasowegoPlikuZAdresatami("Tymczasowo_Adresaci.txt") {
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    void usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
};
#endif
