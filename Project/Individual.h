#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include "Date.h"
#include "Member.h"

using namespace std;

class Individual : public Member         //Derived Class
{
public:

	Individual(string first, string last, string id, string book, int  quantity, int price, Date dateOfHire, Date dateOfGive, int w, string t);


	void setWallet(int);
	int getWallet();

	void setType(string);
	string getType();

	void punishmentFunction();
	void extendRentedBookTime(string, int);

	virtual void creditNote();
	virtual void print();
	virtual void cost();

public:
	int day1;
	int day2;
	int wallet;
	string type;
	int month1;
	int month2;
	Date borrowTime;    //Composition
	Date giveTime;
	int credit;
    int  costIndividual;
};



#endif