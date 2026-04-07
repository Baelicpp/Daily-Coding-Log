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
    std::cin >> us;

}
else if(us == 3) {
    withdraw = (deposit - input);
    std::cout << "How much do you want to withdraw: ";
    std::cin >> us;
std::cout << "You have withdrawn:" << withdraw << balance;
}
} 

//now i need to link the withdraw with the balance and take the amount based on the input
//withdraw equals balance minus input