#include <iostream>
#include <string>
using namespace std;



class Customer
{
private:
    string name;
    int age;
    string telephone_number;
    int customer_number;

public:
    void setName(string n) { name = n; }
    string getName() { return name; }

    void setAge(int a) { age = a; }
    int getAge() { return age; }

    void setTeleNum(string teleN) { telephone_number = teleN; }
    string getTeleNum() { return telephone_number; }

    void setCustNum(int custN) { customer_number = custN; }
    int getCustNum() { return customer_number; }

};
class Adult : public Customer
{
private:
    const double SAVING_INTREST;
    const double CHECK_INTREST;
    const double CHECK_CHARGE;
    const double OVERDRAFT_PENALTY;
public:

};

class Senior : public Customer
{
private:
    const double SAVING_INTREST;
    const double CHECK_INTREST;
    const double CHECK_CHARGE;
    const double OVERDRAFT_PENALTY;
public:

};


class Student : public Customer
{
private:
    const double SAVING_INTREST;
    const double CHECK_INTREST;
    const double CHECK_CHARGE;
    const double OVERDRAFT_PENALTY;
public:

};



class Account
{
private:
    Customer* customer;
    double balance;
    string account_number;
    Transaction transactions[100];

public:
    void setCustomer(Customer customer);
    Customer getCustomer();
    void setBalance(double bal) { balance = bal; }
    double getBalance() { return balance; }
    string toString(int num)
    {
        string stri = to_string(num);

        return stri;
    }
};

class Savings : public Account
{
public:
    void deposit(double amount)
    {
        double newBalance = Account::getBalance() + amount;

        Account::setBalance(newBalance);
    }
    bool withdrawal(double amount)
    {
        if (amount <= Account::getBalance()) {
            Account::setBalance(Account::getBalance() - amount);
            return true;
        }
        else {
            return false;
        }
    }
};

class Checking : public Account
{
public:
    void deposit(double amount)
    {
        double newBalance = Account::getBalance() + amount;

        Account::setBalance(newBalance);
    }
    bool withdrawal(double amount)
    {
        if (amount <= Account::getBalance()) {
            Account::setBalance(Account::getBalance() - amount);
            return true;
        }
        else {
            return false;
        }
    }
};

class Transaction
{
private:
    int account_number;
    string transaction_type;
    double amount;
    string fees;
public:
    void process_tran(Account* account);
};

class Bank
{
private:
    Account accounts[50];

public:
    void add_account(Account new_account);
    bool make_deposit(string account_number, double amount);
    bool make_withdrawl(string account_number, double amount);
    Account* get_account(string account_number);
};

int main() {


    return 0;
};
