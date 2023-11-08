// implementation of BankAccount 

#include "bankAccount.h"

BankAccount::BankAccount(string n, float bal) {
	customerName = n;
	balance = bal;
}

void BankAccount::setName(string n) {
	customerName = n;
}

void BankAccount::setBalance(float bal) {
	balance = bal;
}

string BankAccount::getName() {
	return customerName;
}

float BankAccount::getBalance() {
	return balance;
}

void BankAccount::deposit(float dep) {
	float bal = getBalance();
	setBalance(bal+dep);	
}

void BankAccount::withdraw(float draw) {
	float bal = getBalance();
	setBalance(bal-draw);
}

BankAccount::~BankAccount() {
	cout << "Destroying the bank account objects before exiting." << endl;
}

