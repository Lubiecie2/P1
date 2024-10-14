#include <iostream>
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
