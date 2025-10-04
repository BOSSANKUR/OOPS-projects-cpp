#include <iostream>
using namespace std;
class BankAccount
{
private:
  int accountNumber;
  string name;
  float balance;

public:
  BankAccount(int accountNumber, string name, float balance)
  {
    this->accountNumber = accountNumber;
    this->name = name;
    this->balance = balance;
  }
  void deposit(float amount)
  {
    balance += amount;
    cout << " Deposited : " << amount << endl;
  }
  void withdraw(float amount)
  {
    if (balance >= amount)
    {
      balance -= amount;
      cout << " withdrawn: " << amount << endl;
    }
    else
    {
      cout << "insufficient balance" << endl;
    }
  }
  void display()
  {
    cout << " The account number is :" << accountNumber << endl;
    cout << " The Name of customer is :" << name << endl;
    cout << " The balance  is :" << balance << endl;
  }
};
int main()
{
  BankAccount c1(324255123, " Balajee", 10000);
  cout << " Account Created" << endl;
  c1.deposit(1000);
  c1.withdraw(100);
  c1.display();
}
