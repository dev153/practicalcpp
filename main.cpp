#include <iostream>
#include <cstdlib>
#include "Singleton.hpp"
using std::cout;
using std::endl;

int main() {
    cout << "pdCalc" << endl;
    Singleton & theInstance1 = Singleton::Instance();
    Singleton & theInstance2 = Singleton::Instance();
    theInstance1.foo();
    theInstance2.foo();
    cout << &theInstance1 << endl;
    cout << &theInstance2 << endl;
    return EXIT_SUCCESS;
}
