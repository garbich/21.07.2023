#include "Client.h"

Client::Client(string name, double balance, double score){
	this->name = name;
	this->balance = balance;
	this->score = score;
}

void Client::deposit(int deposit){
	balance += deposit;
	score += deposit;
}

void Client::withDrawal(){
	balance -= score;
	score = 0;
}

string Client::getName(){
	return name;
}

double Client::getBalance()
{
	return balance;
}

double Client::getScore(){
	return score;
}