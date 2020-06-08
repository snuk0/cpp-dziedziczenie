#include <iostream>
using namespace std;


class osoba
{
    string imie, nazwisko;

public:
    void wprowadz();
    void wypisz();
};
void osoba::wprowadz() {
    cin >> imie >> nazwisko;
};
void osoba::wypisz() {
    cout << "Imie: " << imie << " Nazwisko: " << nazwisko << endl;
};



class uczen : public osoba
{
    string klasa;
    int numer_dziennika;
public:
    void wypisz_ucznia()
    {
        cout << "Klasa ucznia: " << klasa << " Numer w dzienniku: " << numer_dziennika << endl;
        wypisz();
    }
    void wprowadz_ucznia()
    {
        cin >> klasa >> numer_dziennika;
        wprowadz();
    }
};

class nauczyciel : public osoba {
    string nauczyciel_klasa, przedmiot;
public:
    void wypisz_nauczyciela()
    {
        cout << "Klasa nauczyciela: " << nauczyciel_klasa << " Przedmiot nauczyciela: " << przedmiot << endl;
        wypisz();
    }
    void wprowadz_nauczyciela()
    {
        wprowadz();
        cin >> nauczyciel_klasa >> przedmiot;
    }
};

int main()
{
    uczen u1;
    nauczyciel n;
    u1.wprowadz_ucznia();
    n.wprowadz_nauczyciela();
    u1.wypisz_ucznia();
    n.wypisz_nauczyciela();
}
