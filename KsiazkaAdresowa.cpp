#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika ()
{
   menadzerUzytkownika.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    menadzerUzytkownika.wypiszWszystkichUzytkownikow();
}
int KsiazkaAdresowa::logowanieUzytkownika ()
{
    return menadzerUzytkownika.logowanieUzytkownika();
}
