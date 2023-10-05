#pragma once
#include <iostream>
using namespace std;

class Client
{
private:
	string name;
	double balance;
	double score;

public:
	Client(string name, double balance, double score);

	void deposit(int amount);
	void withDrawal();


	string getName();
	double getBalance();
	double getScore();

};


