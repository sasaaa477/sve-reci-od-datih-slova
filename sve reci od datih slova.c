#include <bits/stdc++.h>
using namespace std;

string slova; //deklarišemo string slova koji sadrži dozvoljena slova od kojih se prave reči     
int duzinaReci; //deklarišemo promenljivu koja predstavlja dužinu reči koja se traži 

void napraviReci(string trenutnaRec, int trenutnaDuzina) {  //rekurzivna funkcija koja pravi sve moguće reči određene dužine koristeći slova iz stringa slova
    if (trenutnaDuzina == duzinaReci) {  //ispitujemo da li dužina trenutne reči odgovara zadatoj dužini
        cout << trenutnaRec << endl;	 //ukoliko odgovara ispisujemo trenutnu reč i završavamo poziv
        return;
    }

    for (char slovo : slova) {	//petlja prolazi kroz svako slovo iz stringa slova 
        napraviReci(trenutnaRec + slovo, trenutnaDuzina + 1);	//dodaje ga na kraj trenutne reči i poziva funkciju ponovo sa povećanom dužinom
    }                                                             
}

int main() {
    cin >> slova; //unosimo slova
    cin >> duzinaReci; //unosimo traženu dužinu

    napraviReci("", 0); //pozivamo funkciju sa početnim vrednostima (prazna reč i dužina 0)

    return 0;
}
