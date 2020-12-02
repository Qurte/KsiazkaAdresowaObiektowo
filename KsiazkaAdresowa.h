#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "KsiazkaAdresowa.h"
#include "MenadzerUzytkownika.h"

using namespace std;

class KsiazkaAdresowa
{
    MenadzerUzytkownika menadzerUzytkownika;
    public:
    KsiazkaAdresowa ();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif
