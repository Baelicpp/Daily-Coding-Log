#include <iostream>

int main() {
int baseunit;
int target;


double inputValue;
double tempinput;
double resultTemp;
std::cin >> baseunit;
    std::cout << "what temp value are you wanting to covert from?:\n";
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



if (baseunit == 1) { // this is what they choose for the first question 
}
    if (target == 2) { //this is what they want to convert too
        // calculate from c to f
    }
    else if (target == 3) {
        // calculate from c to k
    }
}

if (baseunit ==  1) {
    if (target == 1) { // this is used to see if the user picked celsuis
        std::cout << "No coversion needed :)"
    }
}


if (baseunit ==  1) { // this is used to see if the user picked celsuis
    if (target == 2) { // this is used to see if the user picked fahrenhiet
        resultTemp = (inputValue * 1.8) + 32; // this gets to results by getting the input value and * it by 1.8 + 32
        std::cout << "Result: " << resultTemp << "F" << std::endl; // "std::endl" is used to get the output from the process instantly
    }
    else if (target == 3) { // target is kevlin
        resultTemp = (inputValue - 273.15) * 1.8 + 32; // grabs the input value and does (273.15) * 1.8 + 32 to get the correct conversion 
        std::cout << "Result: " << resultTemp << "F" << std::endl // LEARN THIS, i copied this but i understand what is does, it prints "result:" then gets the temp output and lables it with F for Fahrenheit then does "std::endl to display the outcome instantly"
    }
}

/* figure out how to convert each one to celsuis then the proper conversion
for example, if the user wanted to go from fahrenheit to Kelvin you would convert the Fahrenheit to Celcius then Kevlin so the code doesnt get to long and so you dont need 18 "if" statments
*/