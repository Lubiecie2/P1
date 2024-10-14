﻿#include <iostream>
#include "Listy.h"

elisty::elisty(char val) : data(val), prev(nullptr), next(nullptr) {}

replisty::replisty() : head(nullptr), tail(nullptr), count(0) {}

replisty::~replisty() {
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

/*---Wyswietlanie listy---*/
void replisty::Lista_wyswietl() {
    elisty* obecny_element = head;

    while (obecny_element != 0) {
        std::cout << obecny_element->data << " ";
        obecny_element = obecny_element->next;
    }
    std::cout << std::endl;
}