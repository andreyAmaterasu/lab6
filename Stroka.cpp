#include <iostream>
#include <cstring>
#include "Stroka.h"

using namespace std;

Stroka::Stroka(const char *string) {
    strcpy(str, string);
}

Stroka::Stroka(const Stroka &s) {
    strcpy(str, s.str);
}

Stroka::~Stroka() {

}

Stroka& Stroka::operator=(const Stroka &s) {
    if (this != &s) {
        strcpy(str, s.str);
    }
    return *this;
}

Stroka Stroka::operator+(const Stroka &s) const {
    Stroka temp;
    strcpy(temp.str, str);
    strcat(temp.str, s.str);
    return temp;
}

bool Stroka::operator==(const Stroka &s) const {
    return strcmp(str, s.str) == 0;
}

int Stroka::dlina() const {
    return strlen(str);
}

void Stroka::vvod() {
    cin >> str;
}

void Stroka::vyvod() const {  // const метод
    cout << str;
}
