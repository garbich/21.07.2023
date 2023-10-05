#pragma once
#include <iostream>
#include "Client.h"
#include <vector>
using namespace std;

class Bank
{
private:
	string name;
	double totalBalance;
	vector<Client> clients;

public:
	Bank(string name, double totalBalance, vector<Client> clients);

	string addKlient(Client client);

	string removeKlient(Client client);
	string giveDeposit(int amount, Client client);
	string payOffScore(Client client);
	void display();

	string getName();
	double getTotalBalance();
};