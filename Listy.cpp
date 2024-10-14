#include <iostream>
#include "Listy.h"

elisty::elisty(char val) : data(val), prev(nullptr), next(nullptr) {}

replisty::replisty() : head(nullptr), tail(nullptr), count(0) {}

replisty::~replisty() {
    Lista_Czyszczenie();
}
/*---Dodanie elementu na początek listy---*/
void replisty::Lista_Dodanie_na_poczatek(char v) {
    elisty* nws = new elisty(v);
    nws->next = head;
    head = nws;
    if (count == 0) {
        tail = nws;
    }
    else {
        nws->next->prev = nws;
    }
    count++;
}

/*---Dodanie elementu na koniec listy---*/
void replisty::Lista_Dodanie_na_koniec(char v) {
    elisty* nws = new elisty(v);
    nws->next = 0;
    nws->prev = tail;

    if (tail) {
        tail->next = nws;
    }
    else {
        head = nws;
    }
    tail = nws;
    count++;
}

/*---Wyswietlanie listy---*/
void replisty::Lista_wyswietl() {
    elisty* obecny_element = head;

    while (obecny_element != 0) {
        std::cout << obecny_element->data << " ";
        obecny_element = obecny_element->next;
    }
    std::cout << std::endl;
}

/*---Wyswietlanie listy od konca---*/
void replisty::Lista_wyswietl_od_konca() {
    elisty* obecny_element = tail;
    while (obecny_element != 0) {
        std::cout << obecny_element->data << " ";
        obecny_element = obecny_element->prev;
    }
    std::cout << std::endl;
}

/*---Dodanie elementu pod wskazany indeks---*/
void replisty::Lista_Dodanie_do_srodka(char v, int index) {
    if (index == 0) {
        Lista_Dodanie_na_poczatek(v);
        return;
    }
    if (index == count) {
        Lista_Dodanie_na_koniec(v);
        return;
    }
    elisty* obecny_element = head;

    for (int i = 0; i < index; i++) {
        obecny_element = obecny_element->next;
    }

    elisty* temp_prev = obecny_element->prev;

    elisty* nws = new elisty(v);

    nws->next = obecny_element;
    nws->prev = temp_prev;

    if (temp_prev != 0) {
        temp_prev->next = nws;
    }
    obecny_element->prev = nws;

    ++count;
}

/*---Usuwanie pierwszego elementu listy---*/
void replisty::Lista_Usuwanie_pierwszego_elementu() {
    if (head == 0) {
        std::cout << "Lista jest pusta";
    }
    if (count > 1) {
        elisty* nws = head->next;
        delete head;
        head = nws;
        head->prev = 0;
    }
    if (count == 1) {
        delete head;
        head = 0;
        tail = 0;
    }
    --count;
}

/*---Usuwanie ostatniego elementu listy---*/
void replisty::Lista_usuwanie_ostatniego_elementu() {
    if (tail == 0) {
        std::cout << "Lista jest pusta";
    }
    if (count > 1) {
        elisty* nws = tail->prev;
        delete tail;
        tail = nws;
        tail->next = 0;
    }
    if (count == 1) {
        delete tail;
        head = 0;
        tail = 0;
    }
    --count;
}

/*---wyswietlanie elementu po wskazanym indeksie---*/
void replisty::Lista_Wyswietlanie_Nastepnego_elementu(int index) {
    elisty* obecny_element = head;

    for (int i = 1; i < index; i++) {
        obecny_element = obecny_element->next;
    }
    if (obecny_element->next != 0) {
        std::cout << obecny_element->next->data << std::endl;
    }
    else {
        std::cout << "Brak następnego elementu\n";
    }
}

/*---wyswietlanie elementu przed wskazanym indeksem---*/
void replisty::Lista_Wyswietlanie_poprzedniego_elementu(int index) {
    elisty* obecny_element = head;

    for (int i = 1; i < index; i++) {
        obecny_element = obecny_element->next;
    }
    if (obecny_element->prev != 0) {
        std::cout << obecny_element->prev->data << std::endl;
    }
    else {
        std::cout << "Brak poprzedniego elementu\n";
    }
}

/*---Usuwanie wybranego elemetnu z listy---*/
void replisty::Lista_Usuwanie_wybranego_elementu(int index) {
    elisty* obecny_element = head;

    for (int i = 1; i < index; i++) {
        obecny_element = obecny_element->next;
    }

    if (obecny_element->prev != 0) {
        obecny_element->prev->next = obecny_element->next;
    }
    else {
        head = obecny_element->next;
    }

    if (obecny_element->next != 0) {
        obecny_element->next->prev = obecny_element->prev;
    }
    else {
        tail = obecny_element->prev;
    }

    delete obecny_element;
    --count;
}
/*---Czyszczenie listy---*/
void replisty::Lista_Czyszczenie() {
    elisty* obecny_element = head;

    while (obecny_element != 0) {
        elisty* nws = obecny_element;
        obecny_element = obecny_element->next;
        delete nws;
    }

    head = 0;
    tail = 0;
    count = 0;
}