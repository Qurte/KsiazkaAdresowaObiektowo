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
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);
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
        cout << uzytkownicy[i].pobierzId() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;

    }
}
void MenadzerUzytkownika::wczytajUzytkownikowZPliku ()
{
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}
int MenadzerUzytkownika::logowanieUzytkownika()
{
    Uzytkownik uzytkownik;
    string login = "", haslo= "";

    cout << endl << "Podaj login: ";
    login = wczytajLinie();

    for (int i =0 ; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = wczytajLinie();

                if (uzytkownicy[i].pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    return uzytkownicy[i].pobierzId();
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
            system("pause");
            return 0;
        }
    }

}
string MenadzerUzytkownika::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}
