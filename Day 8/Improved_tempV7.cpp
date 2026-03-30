#include <iostream>

int main() {
int baseunit;
int target;

double tempInCelsius;
double inputValue;
double tempinput;
double resultTemp;
std::cout << "What unit are you converting to? (1-3): ";
std::cin >> baseunit;
    std::cout << "celsuis - 1 \n";
    std::cout << "fahrenheit - 2 \n";
    std::cout << "Kelvin - 3 \n";
std::cin >> target;
        std::cout << "Enter the temperature value: \n";
std::cin >> inputValue;
    std::cout << "what temp value would you like to convert too?: \n";
    std::cout << "celsuis - 1 \n";
    std::cout << "fahrenheit - 2 \n";
    std::cout << "Kelvin - 3 \n";


if (target == 1) {
    tempInCelsius = inputValue;
} else if (target == 2) { // this is used to see if the user picked fahrenhiet
    tempInCelsius = (inputValue - 32) /1.8; // this gets to results by getting the input value
} else if (target == 3) {
    tempInCelsius = inputValue - 273.15; // this converts it into kelvin 
}

if (baseunit == 1) {
    resultTemp = tempInCelsius;
}
else if (baseunit == 2) {
    resultTemp = (tempInCelsius * 1.8) + 32;
}
else if (baseunit == 3) {
    resultTemp = tempInCelsius + 273.15;
}
std::cout << "final result: " << resultTemp << std::endl;
return 0;
}