#include "Bank.h"


Bank::Bank(string name, double totalBalance, vector<Client> clients){

	this->name = name;
	this->totalBalance = totalBalance;
	clients = vector<Client>();
}

string Bank::addKlient(Client client){

	clients.push_back(client);
	return  "The Client added successfully!\n";
}


string Bank::removeKlient(Client client){

	for (int i = 0; i < clients.size(); i++){
		if (client.getName() == clients[i].getName()
			&& client.getScore() == clients[i].getScore()
			&& client.getBalance() == clients[i].getBalance()){

			totalBalance -= clients[i].getBalance();
			clients.erase(clients.begin() + i);
			return "Client deleted successfully from the Bank base\n";
		}
	}
	return "There is no Client with this parameter\n";
}


string Bank::giveDeposit(int deposit, Client client){

	if (deposit < getTotalBalance()){
		for (int i = 0; i < clients.size(); i++){
			if (client.getName() == clients[i].getName()
				&& client.getScore() == clients[i].getScore()
				&& client.getBalance() == clients[i].getBalance()){

				totalBalance -= deposit;
				clients[i].deposit(deposit);
				return "The deposit has been successfully issued to the Client\n";
			}
		}
		return "There is no Client with this parametr\n";
	}
	return "There are no enough money in the Bank\n";
}


string Bank::payOffScore(Client client)
{
	for (int i = 0; i < clients.size(); i++)
	{
		if (client.getName() == clients[i].getName()
			&& client.getScore() == clients[i].getScore()
			&& client.getBalance() == clients[i].getBalance())
		{
			if (client.getBalance() >= client.getScore())
			{
				totalBalance += client.getScore();
				clients[i].withDrawal();
				return "The operation has been successfully done\n";
			}
			return "The Client hasn't enough money to paid off its score\n";
		}
	}
	return "There is no Client with this parametr\n";
}


void Bank::display()
{
	cout << getName() << " Bank:" << endl;
	cout << "Total Balance is: " << getTotalBalance() << endl;

	for (int i = 0; i < clients.size(); i++)
	{
		cout << "Client " << i + 1 << ": " << endl;
		cout << "Name: " << clients[i].getName() << endl;
		cout << "Balance: " << clients[i].getBalance() << endl;
		cout << "Score: " << clients[i].getScore() << endl;
	}
}

string Bank::getName()
{
	return name;
}

double Bank::getTotalBalance()
{
	return totalBalance;
}