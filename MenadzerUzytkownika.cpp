#include "MenadzerUzytkownika.h"


void MenadzerUzytkownika::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}
Uzytkownik MenadzerUzytkownika::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;


    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());
    string login;
    do
    {
        cout << "Podaj login: ";
        cin >> login;
        uzytkownik.ustawLogin(login);
    }
    while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);
    string haslo;
    cout << "Podaj haslo: ";
    cin >> haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}

int MenadzerUzytkownika::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool MenadzerUzytkownika::czyIstniejeLogin(string login)
{

    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
            {
                cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
                return true;
            }
        }
        return false;
    }
}
void MenadzerUzytkownika::wypiszWszystkichUzytkownikow()
{
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        cout << "Id: " << uzytkownicy[i].pobierzId() << endl;
        cout << "Login: " << uzytkownicy[i].pobierzLogin() << endl;
        cout << "Haslo: " << uzytkownicy[i].pobierzHaslo() << endl;

    }
}
void MenadzerUzytkownika::wczytajUzytkownikowZPliku ()
{
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}
void MenadzerUzytkownika::logowanieUzytkownika()
{
    Uzytkownik uzytkownik;
    czyJestZalogowany = false;
    string login = "", haslo= "";

    cout << endl << "Podaj login: ";
    login = metodyPomocnicze.wczytajLinie();

    for (int i = 0 ; i < uzytkownicy.size(); i++)
    {
        if (login == uzytkownicy[i].pobierzLogin())
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = metodyPomocnicze.wczytajLinie();

                if (uzytkownicy[i].pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    zalogowanyUzytkownik.ustawLogin(uzytkownicy[i].pobierzLogin());
                    zalogowanyUzytkownik.ustawHaslo(uzytkownicy[i].pobierzHaslo());
                    zalogowanyUzytkownik.ustawId(uzytkownicy[i].pobierzId());
                    czyJestZalogowany = true;
                    return ;
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return ;
        }
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return ;
}
void MenadzerUzytkownika::zmianaHaslaZalogowanegoUzytkownika()
{
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = metodyPomocnicze.wczytajLinie();

    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzId() == zalogowanyUzytkownik.pobierzId())
        {
            uzytkownicy[i].ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }

    plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}
void MenadzerUzytkownika::wyloguj ()
{
    zalogowanyUzytkownik.ustawLogin("");
    zalogowanyUzytkownik.ustawHaslo("");
    zalogowanyUzytkownik.ustawId(0);
    czyJestZalogowany = false;
}
bool MenadzerUzytkownika::czyUzytkownikJestZalogowany()
{
    return czyJestZalogowany;
}
int MenadzerUzytkownika::pobierzIdZalogowanegoUzytkownika()
{
    return zalogowanyUzytkownik.pobierzId();
}



