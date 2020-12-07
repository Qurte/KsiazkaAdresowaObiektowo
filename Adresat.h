#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{

    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string email;
    string nrTelefonu;
    string adres;

public:
    void ustawId(int noweId);
    void ustawIdUzytkownika (int noweIdUzytkownika);
    void ustawImie (string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawEmail(string nowyEmail);
    void ustawNrTelefonu(string nowyNrTelefonu);
    void ustawAdres(string nowyAdres);

    int pobierzId ();
    int pobierzIdUzytkownika ();
    string pobierzNazwisko ();
    string pobierzImie ();
    string pobierzEmail ();
    string pobierzNrTelefonu ();
    string pobierzAdres ();
};
#endif
