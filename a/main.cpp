#include "a.hpp"
#include "b.hpp"

#include <iostream>

int main(void){

    a a;
    a.foo();
    b::bar();
    return 0;
}