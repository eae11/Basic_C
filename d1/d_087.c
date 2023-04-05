#include <stdlib.h>
#include <stdio.h>

int main() {
    typedef struct car {
        char logo;
        short wheel;
        int price;

    } Car;
    Car a = {'a',1515,200};//C前面还得加struct
    Car b = {'b',1515,200};
    Car c = {'c',1515,200};

}