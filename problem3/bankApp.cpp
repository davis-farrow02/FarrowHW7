// comment

#include "bankAccount.h"

int main(int argc, char* argv[]) {
	cout << "Showinging Jacks bank account" << endl;
	BankAccount jackAccount("Jack Smith",50);
	cout << "Customer name = " << jackAccount.getName() << endl;
	cout << "Current account balance = $" << jackAccount.getBalance() << endl;
	cout << endl;
	cout << "Showing Jills bank account" << endl;
	BankAccount jillAccount("Jill Brian",100);
	cout << "Customer name = " << jillAccount.getName() << endl;
	cout << "Current account balance = $" << jillAccount.getBalance() << endl;
	cout << endl;
	BankAccount bankArray[3] = {BankAccount("Ralph Kramden",10), BankAccount("Alice Kramden",20), BankAccount("Ed Norton",30)};
	for(int i=0;i<3;++i) {
		cout << "bankArray[" << i << "]: name is " << bankArray[i].getName() << ", balance " << bankArray[i].getBalance() << " dollars." << endl;
	}
	cout << endl;
	cout << "Deposit 30 dollars to each of 5 objects" << endl;
	jackAccount.deposit(30);
	cout << "Customer name is " << jackAccount.getName() << ", new balance is " << jackAccount.getBalance() << " dollars" << endl;
	jillAccount.deposit(30);
	cout << "Customer name is " << jillAccount.getName() << ", new balance is " << jillAccount.getBalance() << " dollars" << endl;
	for (int j=0;j<3;++j) {
		bankArray[j].deposit(30);
		cout << "Customer name is " << bankArray[j].getName() << ", new balance is " << bankArray[j].getBalance() << " dollars" << endl;
	}
	cout << endl;
	cout << "Withdraw 20 dollars from each of 5 objects" << endl;
	jackAccount.withdraw(20);			
	cout << "Customer name is " << jackAccount.getName() << ", new balance is " << jackAccount.getBalance() << " dollars" << endl;
	jillAccount.withdraw(20);
	cout << "Customer name is " << jillAccount.getName() << ", new balance is " << jillAccount.getBalance() << " dollars" << endl;

	for (int k=0;k<3;++k) {
		bankArray[k].withdraw(20);
		cout << "Customer name is " << bankArray[k].getName() << ", new balance is " << bankArray[k].getBalance() << " dollars" << endl;
	}
	cout << endl;
	cout << endl;
	cout << "FINAL BALANCES IN EACH BANK ACCOUNT" << endl;
	cout << jackAccount.getName() << ": $" << jackAccount.getBalance() << endl;
	cout << jillAccount.getName() << ": $" << jillAccount.getBalance() << endl;
	for (int l=0;l<3;++l) {
		cout << bankArray[l].getName() << ": $" << bankArray[l].getBalance() << endl;
	}
	cout << endl;	
}
