//
//  Singleton.cpp
//  pdCalc
//

#include "Singleton.hpp"
#include <iostream>
using std::cout;
using std::endl;

Singleton& Singleton::Instance() {
    static Singleton instance;
    return instance;
}

void Singleton::foo() {
    cout << __FUNCTION__ << endl;
    return;
}
