#include <iostream>
#include "Listy.h"

elisty::elisty(char val) : data(val), prev(nullptr), next(nullptr) {}

replisty::replisty() : head(nullptr), tail(nullptr), count(0) {}

replisty::~replisty() {
}
