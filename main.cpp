#include <iostream>
#include <string>
#include <vector>

#include "account.h"
#include "stack.h"
// #include <Account.h>

int main(){
    //account
    Account a("Thandi", 250.0);
    a.deposit(100);
    bool ok = a.withdraw(1000);
    std::cout << a.owner() << " balance: " << a.balance() << "\n";
    std::cout << "withdraw 1000 succeeded? " << std::boolalpha << ok << "\n\n";

    //Stack of int
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    std::cout << "pop: " << s.pop() << "\n";
    std::cout << "size: " << s.size() << "\n";
    s.clear();

    std::cout << "empty after clear? " << s.empty() << "\n";

    try{
        s.pop();
    }catch(const std::runtime_error& e){
        std::cout <<"caught: " <<e.what() << "\n\n";
    }
    return 0;
};