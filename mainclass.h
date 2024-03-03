#pragma once
#include "iostream"
#include "fstream"
#include "string"
using namespace std;

class Transport {
protected:
	string number;
	size_t wheels;
	int ageLimit;
	public:
	Transport(string num = 0, size_t whe = 0, int agel = 0) : number(num), wheels(whe), ageLimit(agel) {}

	string getNumber() const { return number; }
	size_t getWheels() const { return wheels; }
	int getAgeLim() const { return ageLimit; }

	void setNumber(string num) { number = num; }
	void setWheels(size_t whe) { wheels = whe; }
	void setAgeLim(int agel) { ageLimit = agel; }
};