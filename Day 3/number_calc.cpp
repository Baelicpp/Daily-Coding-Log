#include <iostream>

int main() {
double fahrenheit;
double kelvin;
double celsius;
std::cout << "Please enter a valid degree in kelvin,celsius or fahrenheit:";
std::cin>> fahrenheit;
double celsius = (fahrenheit - 32)/1.8;
double celsius = (kelvin + 273.15)/1.8; // this needs to be kelvin
double celsius = (celsius - 32 * 5/9)/1.8; // this needs to be celsius


std::cout << "the degree in celsius is: " << celsius;
std::cout << "the degree in kelvin is: " << kelvin;
std::cout << "the degree in fahrenheit is: " << fahrenheit;
}
