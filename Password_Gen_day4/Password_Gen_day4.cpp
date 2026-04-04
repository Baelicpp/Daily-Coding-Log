#include <iostream>
#include <string>
#include <ctime>  //this time the real time and updates it every second
#include <cstdlib> // this is used for srand and rand

int password; // this is used to call back to the password genareted so it can be printed out
int main() { //this executes the program
srand(time(0)); //this is used to change the seed of the password gen everytime

std::string pool = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%"; //this holds all the chocies of what the program can use for the password
std::string password = ""; //this takes the user input and stores it later for the password length
int length; // creates a interger to define length
std::cout <<"Please enter a password length to generate 1-50: "; //asks the user how long they want the password
std::cin >> length; //this lets the user type how long they want the password

if (length <= 50) { //if password is less then equal or less then 50 its runs the for loop
    for (int i = 0; i < length; i++){ //this is used for looping a program and the numbers inside are used to determen how many time it should loop
        int RandomIndex = rand() % pool.length(); //this is used to generate a random number and make sure its only aslong as the pool.length
password += pool[RandomIndex];
}
std::cout << "Password generated is: " << password << std::endl; // this is used to display the password generated
}

else {
    std::cout <<"please enter a valid number :("; //this prints the message if the password is above 50
}

return 0; //this is used to it doesnt loop mutiple times 
}