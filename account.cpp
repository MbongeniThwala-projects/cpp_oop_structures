#include "account.h"

//our constructor which belongs to the account.h class
Account::Account(const std::string& owner, double balance):
    owner_(owner), balance_(balance) {}

void Account::deposit(double amount){
    if(amount > 0) balance_ += amount;
}

bool Account::withdraw(double amount){
    if(amount <= 0 || amount > balance_) return false;
    balance_ -= amount;
    return true;
}

const std::string& Account::owner() const {return owner_;};
double Account::balance() const{return balance_;}