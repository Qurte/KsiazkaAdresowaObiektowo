#ifndef PILIKZUZYTKOWNIKAMI_H
#define PILIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "MetodyPomocnicze.h"
#include "Uzytkownik.h"
using namespace std;

class PlikZUzytkownikami
{
    MetodyPomocnicze metodyPomocnicze;
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;

    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami(string nazwaPlikuzUzytkownikami): NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPlikuzUzytkownikami) {};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku ();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);
};
#endif
