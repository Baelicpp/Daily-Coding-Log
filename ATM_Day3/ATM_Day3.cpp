#include <iostream>
#include <string>
double deposit;
double withdraw;
double balance = 177.54;
int input;
int us;

int main() {

std::cout << "please select an option:\n";
std::cout << "(1) Check Balance: \n";
std::cout << "(2) Deposit: \n";
std::cout << "(3) Withdraw: \n";
std::cin >> us;


if (us == 1) {
    std::cout << "Your balance is: $" << balance;
}
else if(us == 2) {
    std::cout << "how much would you like to deposit:";
    std::cin >> input;
 deposit = (balance + input);
 std::cout << "Your balanced has increased too: $" << deposit;
}
else if(us == 3) {
    std::cout << "How much do you want to withdraw: ";
    std::cin >> input;
    withdraw = (balance - input);
std::cout << "Amount left in balance: $" << withdraw;
}
}