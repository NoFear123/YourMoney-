#include <iostream>
using namespace std;
int miesiac,rok,dniowka,nieobecnosc,sobota;
int miesiac1 = 20, miesiac2= 21, miesiac3 = 22, miesiac4 = 23;
float wyplata1,wyplata2,wyplata3,wyplata4,stawka,sob_godz;
int main()
{
    cout << "Witaj w Your Money, Tutaj dowiesz sie ile zarobisz!" << endl;
while(rok!=2020)
{
    cout << "Podaj obecny rok: ";
    cin >> rok;
}
        cout << "Menu glowne!" << endl;
        cout << "1. Styczen" << endl;
        cout << "2. Luty" << endl;
        cout << "3. Marzec" << endl;
        cout << "4. Kwiecien" << endl;
        cout << "5. Maj" << endl;
        cout << "6. Czerwiec" << endl;
        cout << "7. Lipiec" << endl;
        cout << "8. Sierpien" << endl;
        cout << "9. Wrzesien" << endl;
        cout << "10. Pazdzernik" << endl;
        cout << "11. Listopad" << endl;
        cout << "12. Grudzien" << endl;
while((miesiac) < 1 || (miesiac >12))
{
    cout << "Podaj numer miesiaca: " << endl;
    cin >> miesiac;
}
    switch (miesiac) {
        case 2:
        case 5:
        case 8:
        case 11:
            cout << "Podaj stawke: ";
            cin >> stawka;
            cout << "Podaj ile godzin trwa dniowka: ";
            cin >> dniowka;
            cout << "Podaj ile razy byles w sobote: ";
            cin >> sobota;
            cout << "Podaj ile masz lacznie godzin w soboty: ";
            cin >> sob_godz;
            cout << "Podaj ilosc nieobecnosci: ";
            cin >> nieobecnosc;
            while(nieobecnosc>miesiac1)
            {
                cout << "Blad, sproboj ponownie: " << endl;
                cout << "Podaj ilosc nieobecnosci: ";
                cin >> nieobecnosc;
            }
            wyplata1 = (stawka * (miesiac1-nieobecnosc) * dniowka) + (2*stawka*sob_godz) ;
            if((sobota>1) && (nieobecnosc == 0))
            {
                cout << "W tym miesiacu z dwoma bonusami zarobisz: " << wyplata1+200 << endl;
            }
            else if(((sobota>1)&&(nieobecnosc>0)) || ((sobota<=1)&&(nieobecnosc==0)))
            {
                cout << "W tym miesiac z jednym bonusem zarobisz: " << wyplata1+100 << endl;
            }
            else if((sobota<1) && (nieobecnosc>0))
            {
                cout << "W tym miesiacu bez bonusow zarobisz: " << wyplata1 << endl;
            }
            break;

        case 1:
        case 4:
        case 6:
        case 12:

            cout << "Podaj stawke: ";
            cin >> stawka;
            cout << "Podaj ile godzin trwa dniowka: ";
            cin >> dniowka;
            cout << "Podaj ile razy byles w sobote: ";
            cin >> sobota;
            cout << "Podaj ile masz lacznie godzin w soboty: ";
            cin >> sob_godz;
            cout << "Podaj ilosc nieobecnosci: ";
            cin >> nieobecnosc;
            while(nieobecnosc>miesiac2)
            {
                cout << "Blad, sproboj ponownie: " << endl;
                cout << "Podaj ilosc nieobecnosci: ";
                cin >> nieobecnosc;
            }
            wyplata2 = (stawka * (miesiac2-nieobecnosc) * dniowka) + (2*stawka*sob_godz);
            if((sobota>1) && (nieobecnosc == 0))
            {
                cout << "W tym miesiacu z dwoma bonusami zarobisz: " << wyplata2+200 << endl;
            }
            else if(((sobota>1)&&(nieobecnosc>0)) || ((sobota<=1)&&(nieobecnosc==0)))
            {
                cout << "W tym miesiac z jednym bonusem zarobisz: " << wyplata2+100 << endl;
            }
            else if((sobota<1) && (nieobecnosc>0))
            {
                cout << "W tym miesiacu bez bonusow zarobisz: " << wyplata2 << endl;
            }
            break;

        case 3:
        case 9:
        case 10:
            cout << "Podaj stawke: ";
            cin >> stawka;
            cout << "Podaj ile godzin trwa dniowka: ";
            cin >> dniowka;
            cout << "Podaj ile razy byles w sobote: ";
            cin >> sobota;
            cout << "Podaj ile masz lacznie godzin w soboty: ";
            cin >> sob_godz;
            cout << "Podaj ilosc nieobecnosci: ";
            cin >> nieobecnosc;
            while(nieobecnosc>miesiac3)
            {
                cout << "Blad, sproboj ponownie: " << endl;
                cout << "Podaj ilosc nieobecnosci: ";
                cin >> nieobecnosc;
            }
            wyplata3 = (stawka * (miesiac3-nieobecnosc) * dniowka) + (2*stawka*sob_godz);
            if((sobota>1) && (nieobecnosc == 0))
            {
                cout << "W tym miesiacu z dwoma bonusami zarobisz: " << wyplata3+200 << endl;
            }
            else if(((sobota>1)&&(nieobecnosc>0)) || ((sobota<=1)&&(nieobecnosc==0)))
            {
                cout << "W tym miesiac z jednym bonusem zarobisz: " << wyplata3+100 << endl;
            }
            else if((sobota<1) && (nieobecnosc>0))
            {
                cout << "W tym miesiacu bez bonusow zarobisz: " << wyplata3 << endl;
            }
            break;

        case 7:
            cout << "Podaj stawke: ";
            cin >> stawka;
            cout << "Podaj ile godzin trwa dniowka: ";
            cin >> dniowka;
            cout << "Podaj ile razy byles w sobote: ";
            cin >> sobota;
            cout << "Podaj ile masz lacznie godzin w soboty: ";
            cin >> sob_godz;
            cout << "Podaj ilosc nieobecnosci: ";
            cin >> nieobecnosc;
            while(nieobecnosc>miesiac4)
            {
                cout << "Blad, sproboj ponownie: " << endl;
                cout << "Podaj ilosc nieobecnosci: ";
                cin >> nieobecnosc;
            }
            wyplata4 = (stawka * (miesiac4-nieobecnosc) * dniowka) + (2*stawka*sob_godz);
            if((sobota>1) && (nieobecnosc == 0))
            {
                cout << "W tym miesiacu z dwoma bonusami zarobisz: " << wyplata4+200 << endl;
            }
            else if(((sobota>1)&&(nieobecnosc>0)) || ((sobota<=1)&&(nieobecnosc==0)))
            {
                cout << "W tym miesiac z jednym bonusem zarobisz: " << wyplata4+100 << endl;
            }
            else if((sobota<1) && (nieobecnosc>0))
            {
                cout << "W tym miesiacu bez bonusow zarobisz: " << wyplata4 << endl;
            }
            break;
    }

    return 0;

}