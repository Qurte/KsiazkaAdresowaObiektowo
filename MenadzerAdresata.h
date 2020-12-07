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
    string nazwaPlikuZAdresatami;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:
    MenadzerAdresata (string NAZWAPLIKUZADRESATAMI, int idZalogowanegoUzytkownika): plikZAdresatami(NAZWAPLIKUZADRESATAMI),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika), nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
};
#endif
