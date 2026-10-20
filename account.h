#pragma once        //stops the header from being included twice in one compilation
#include <string>


class Account {
    private:
        std::string owner_;
        double balance_;

    public:
        Account(const std::string& owner, double balance);

        void deposit(double amount);
        bool withdraw(double amount);

        const std::string& owner() const;
        double balance() const;
};