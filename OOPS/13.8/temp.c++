#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
    double fahrenheit;
    double kelvin;

public:
    Temperature(double celsius = 0, double fahrenheit = 0, double kelvin = 0) {
        this->celsius = celsius;
        this->fahrenheit = fahrenheit;
        this->kelvin = kelvin;
    }

    void convert_to_celsius() {
        celsius = (fahrenheit - 32) * 5 / 9;
        kelvin = celsius + 273.15;
    }

    void convert_to_fahrenheit() {
        fahrenheit = (celsius * 9 / 5) + 32;
        kelvin = celsius + 273.15;
    }

    void convert_to_kelvin() {
        kelvin = celsius + 273.15;
        fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
    }
};