#include <iostream>
#include <string>

double deposit;
double withdraw;
double balance = 177.54;
double input;
int us;

int main() {

std::string username = "admin";
std::string password = "1234";

std::cout << "please enter your user name: ";
    std::cin >> username;
if (username == "admin") { 
    std::cout << "please enter your password: ";
    std::cin >> password;

if (password == "1234") {
    std::cout << "Login succesful";
    while (us != 4) { 
std::cout << "\nplease select an option:\n";
std::cout << "(1) Check Balance: \n";
std::cout << "(2) Deposit: \n";
std::cout << "(3) Withdraw: \n";
std::cout <<"(4) Exit\n";
std::cin >> us;

if (us == 1) {
    std::cout << "Your balance is: $" << balance;
}
else if(us == 2) {
    std::cout << "how much would you like to deposit: ";
    std::cin >> input;
 balance = (balance + input);
 std::cout << "Your balanced has increased too: $" << balance;
}
else if(us == 3) {
    std::cout << "How much do you want to withdraw: \n";
    std::cin >> input;
if (input <= balance){
    withdraw = (balance - input);
std::cout << "Amount left in balance: $ \n" << withdraw;
}
else {
    std::cout <<"Insufficient funds! \n";

}
std::cout <<"\nIf you want to go back press (4)\n";
std::cin >> us;
}
}
}
else if (password != "1234") {
    std::cout << "please enter a valid password";
}
}

else if (username != "admin")
{
    std::cout << "please enter a valid username";
}

}
