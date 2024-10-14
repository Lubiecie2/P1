#include <iostream>
#include "Listy.h"

int main()
{
    replisty lista;

    lista.Lista_Dodanie_na_poczatek('1');
    lista.Lista_Dodanie_na_poczatek('2');

    std::cout << "Elementy listy od poczatku: ";
    lista.Lista_wyswietl();
};
