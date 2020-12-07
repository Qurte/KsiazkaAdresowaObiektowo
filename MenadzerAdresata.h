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
    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;
    string nazwaPlikuZAdresatami;
    vector <Adresat> adresaci;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void dopiszAdresataDoPliku(Adresat adresat);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);


public:
    MenadzerAdresata (string NAZWAPLIKUZADRESATAMI): plikZAdresatami(NAZWAPLIKUZADRESATAMI), nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wyloguj();
    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
};
#endif
