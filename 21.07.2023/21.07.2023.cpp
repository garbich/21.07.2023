#include <iostream>
#include "Bank.h"
#include "Client.h"
#include <vector>

using namespace std;




int main()
{
	vector<Client> Clients;
	string name;
	double balance = 0.0;
	double score = 0.0;

	Bank bank("National", 4500, Clients);

	cout << "Enter the parametrs for 1 Klient: " << endl;
	cout << "Enter the Client's name: ";
	cin >> name;

	cout << "Enter the Client's balance: ";
	cin >> balance;

	cout << "Enter the Client's score: "; 
	cin >> score;
	cout << endl;

	Client client1(name, balance, score);
	cout << bank.addKlient(client1);
	cout << endl;

	cout << "Enter the parametrs for 2 Client: " << endl;
	cout << "Enter the Client's name: ";
	cin >> name;

	cout << "Enter the Client's balance: ";
	cin >> balance;

	cout << "Enter the Client's score: ";
	cin >> score;
	cout << endl;

	Client klient2(name, balance, score);
	cout << bank.addKlient(klient2);
	cout << endl;

	int amount = 0;
	cout << "Enter the parametrs about Client to give deposit: " << endl;
	cout << "Enter the Client's name: ";
	cin >> name;

	cout << "Enter the Client's balance: ";
	cin >> balance;

	cout << "Enter the Client's score: ";
	cin >> score;

	cout << "Enter the amount of deposit: ";
	cin >> amount;
	cout << endl;

	Client someKlient(name, balance, score);
	cout << bank.giveDeposit(amount, someKlient);
	cout << endl;



	cout << "Enter the parametrs about Client to pay off the score: " << endl;
	cout << "Enter the Client's name: ";
	cin >> name;

	cout << "Enter the Client's balance: ";
	cin >> balance;

	cout << "Enter the Client's score: ";
	cin >> score;
	cout << endl;

	Client payOffScore(name, balance, score);
	cout << bank.payOffScore(payOffScore);
	cout << endl;



	cout << "Enter the parametrs about Client to remove his from the Bank:" << endl;
	cout << "Enter the Client's name: ";
	cin >> name;

	cout << "Enter the Client's balance: ";
	cin >> balance;

	cout << "Enter the Client's score: ";
	cin >> score;
	cout << endl;

	Client removeKlient(name, balance, score);
	cout << bank.removeKlient(removeKlient);
	cout << endl;

	bank.display();

}

































