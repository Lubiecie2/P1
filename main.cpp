#include <iostream>
#include "Listy.h"

int main()
{
    replisty lista;

    lista.Lista_Dodanie_na_poczatek('1');
    lista.Lista_Dodanie_na_poczatek('2');


    lista.Lista_Dodanie_na_koniec('3');
    lista.Lista_Dodanie_na_koniec('4');

    std::cout << "Elementy listy od poczatku: ";
    lista.Lista_wyswietl();

};
