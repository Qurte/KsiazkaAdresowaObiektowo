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
    string nazwaPlikuZUzytkownikami;
    fstream plikTekstowy;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:
    PlikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku ();
};
#endif
