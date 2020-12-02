#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa()
{
    menadzerUzytkownika.wczytajUzytkownikowZPliku();
}
void KsiazkaAdresowa::rejestracjaUzytkownika ()
{
   menadzerUzytkownika.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    menadzerUzytkownika.wypiszWszystkichUzytkownikow();
}
