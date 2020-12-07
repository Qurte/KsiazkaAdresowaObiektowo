#include "Adresat.h"

    void Adresat::ustawId(int noweId)
    {
        id = noweId;
    }
    void Adresat::ustawIdUzytkownika (int noweIdUzytkownika)
    {
        idUzytkownika = noweIdUzytkownika;
    }
    void Adresat::ustawImie (string noweImie)
    {
        imie = noweImie;
    }
    void Adresat::ustawNazwisko(string noweNazwisko)
    {
        nazwisko = noweNazwisko;
    }
    void Adresat::ustawEmail(string nowyEmail)
    {
        email = nowyEmail;
    }
    void Adresat::ustawNrTelefonu(string nowyNrTelefonu)
    {
        nrTelefonu = nowyNrTelefonu;
    }
    void Adresat::ustawAdres(string nowyAdres)
    {
        adres = nowyAdres;
    }

    int Adresat::pobierzId ()
    {
        return id;
    }
    int Adresat::pobierzIdUzytkownika ()
    {
        return idUzytkownika;
    }
    string Adresat::pobierzNazwisko ()
    {
        return nazwisko;
    }
    string Adresat::pobierzImie ()
    {
        return imie;
    }
    string Adresat::pobierzEmail ()
    {
        return email;
    }
    string Adresat::pobierzNrTelefonu ()
    {
        return nrTelefonu;
    }
    string Adresat::pobierzAdres ()
    {
        return adres;
    }
