#pragma once
#include "iostream"
#include "fstream"
#include "string"
using namespace std;

class Transport {
private:
	string number;
	int wheels;
	int ageLimit;
public:
	Transport();
	Transport(string num, int whe, int agel);
	Transport(Transport& t);

	string getNumber();
	int getWheels();
	int getAgeLim();

	void inTransport(istream& i);
	void printTransport(ostream& o);

	friend istream& operator>>(istream& is, Transport& t);
	friend ostream& operator<<(ostream& os, Transport& t);
};