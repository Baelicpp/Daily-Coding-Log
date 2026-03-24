#include <iostream>

int main() {
double fahrenheit;
std::cout << "Please enter a valid degree in fahrenheit:";
std::cin>> fahrenheit;
double celsius = (fahrenheit - 32)/1.8;
std::cout << "the degree in celsius is: " << celsius;
}