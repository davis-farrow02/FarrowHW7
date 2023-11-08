// header file for CPE 422 homework 7 problem 3

#include<iostream>
#include<string>
using namespace std;

class BankAccount {
	private:
		string customerName;
		float balance;

		void setName(string n);
		void setBalance(float bal);
	public:
		BankAccount(string n, float bal);
		string getName();
		float getBalance();
		void deposit(float dep);
		void withdraw(float draw);
		~BankAccount();
};
