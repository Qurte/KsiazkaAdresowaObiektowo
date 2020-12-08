#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika ()
{
   menadzerUzytkownika.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    menadzerUzytkownika.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika ()
{
   menadzerUzytkownika.logowanieUzytkownika();
   if(czyUzytkownikJestZalogowany() == true)
   {
      menadzerAdresata = new MenadzerAdresata (NAZWA_PLIKU_Z_ADRESATAMI, menadzerUzytkownika.pobierzIdZalogowanegoUzytkownika());
   }

}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika ()
{
    menadzerUzytkownika.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wyloguj ()
{
    menadzerUzytkownika.wyloguj();
    delete menadzerAdresata;
    menadzerAdresata = NULL;
}
char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = wczytajZnak();

    return wybor;
}
char KsiazkaAdresowa::wczytajZnak()
{
    string wejscie = "";
    char znak  = {0};

    while (true)
    {
        getline(cin, wejscie);

        if (wejscie.length() == 1)
        {
            znak = wejscie[0];
            break;
        }
        cout << "To nie jest pojedynczy znak. Wpisz ponownie." << endl;
    }
    return znak;
}
bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return menadzerUzytkownika.czyUzytkownikJestZalogowany();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    menadzerAdresata -> wyswietlWszystkichAdresatow();
}
void KsiazkaAdresowa::dodajAdresata()
{
    menadzerAdresata -> dodajAdresata ();
}
void KsiazkaAdresowa::usunAdresata()
{
    menadzerAdresata -> usunAdresata();
}
void KsiazkaAdresowa::edytujAdresata()
{
    menadzerAdresata -> edytujAdresata();
}
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    menadzerAdresata -> wyszukajAdresatowPoImieniu();
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    menadzerAdresata -> wyszukajAdresatowPoNazwisku();
}



