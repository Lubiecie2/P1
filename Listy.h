#pragma once

class elisty {
public:
    char data;      ///< Zmienna przechowujaca dane elementu.
    elisty* prev;   ///< Wskaznik na poprzedni element listy.
    elisty* next;   ///< Wskaznik na nastepny element listy.

    // @brief Konstruktor nowego obiektu elisty.
    // @param val Wartosc znakowa do przechowania w elemencie.
    elisty(char val);
};
// @brief Klasa reprezentujaca podwojna liste powiazana.
class replisty {
public:
    elisty* head;     ///< Wskaznik do pierwszego elementu listy.
    elisty* tail;     ///< Wskaznik do ostatniego elementu listy.
    int count;        ///< Zmienna przechowujaca liczbe elementow w liscie.

    // @brief Konstruktor nowego obiektu replisty.
    replisty();

    // @brief Zniszczenie obiektu replisty i zwolnienie przydzielonej pamieci.
    ~replisty();

    // @brief Dodaje nowy element na poczatku listy.
    // @param v Wartosc znakowa do dodania.
    void Lista_Dodanie_na_poczatek(char v);


    // @brief Dodaje nowy element na koncu listy.
    // @param v Wartosc znakowa do dodania.
    void Lista_Dodanie_na_koniec(char v);

    // @brief Wyswietla elementy listy od poczatku do konca.
    void Lista_wyswietl();

    // @brief Wyswietla elementy listy od konca do poczatku.
    void Lista_wyswietl_od_konca();

    // @brief Dodaje nowy element na wskazanym indeksie w liscie.
    // @param v Wartosc znakowa do dodania.
    // @param index Pozycja, w ktorej nalezy wstawic nowy element.
    void Lista_Dodanie_do_srodka(char v, int index);

    // @brief Usuwa pierwszy element listy.
    void Lista_Usuwanie_pierwszego_elementu();

    // @brief Usuwa ostatni element listy.
    void Lista_usuwanie_ostatniego_elementu();

    // @brief Wyswietla nastepny element w stosunku do danego indeksu.
    // @param index Pozycja, z ktorej nalezy wyswietlic nastepny element.
    void Lista_Wyswietlanie_Nastepnego_elementu(int index);

};
