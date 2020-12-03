#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;
int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    while (true)
    {
        char wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

        switch (wybor)
        {
        case '1':
            ksiazkaAdresowa.rejestracjaUzytkownika();
            break;
        case '2':
            ksiazkaAdresowa.logowanieUzytkownika();
            break;
        case '9':
            exit(0);
            break;
        default:
            cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
            system("pause");
            break;
        }

    }

    return 0;
}
