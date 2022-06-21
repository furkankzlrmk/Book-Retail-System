
#include "Individual.h"
#include <iostream>
using namespace std;



Individual::Individual(string first, string last, string id, string book, int quantity, int price, Date dateOfHire, Date dateOfGive, int w, string t)
	:Member(first, last, id, book, quantity,price),borrowTime(dateOfHire), giveTime(dateOfGive)
{
	setWallet(w);
	setType(t);

	dateOfHire.day = day1;
	dateOfGive.day = day2;
	dateOfHire.month = month1;
	dateOfGive.month = month2;
}


void Individual::setWallet(int w)
{
	wallet = w;
}

int Individual::getWallet()
{
	return wallet;
}


void Individual::setType(string t)
{
	type = t;
}

string Individual::getType()
{
	return type;
}


void Individual::punishmentFunction()
{
	if (month1 == month2 && day2 - day1 >= 15)
		wallet = wallet - 5;
	else if (month2 - month1 != 1 || day1 - day2 <= 16 && day1 - day2 >= 29)
		wallet = wallet - 5;
	else
		cout << "No Punishment";
}

void Individual::creditNote()
{
	if (month1 == month2 && day2 - day1 <= 15)
	{
		credit = 2;
		cout<< credit;
	}
	else if (month2 - month1 == 1 && day1 - day2 >= 16 && day1 - day2 <= 29)
	{
		credit = 2;
		cout<<credit;
	}
	else
		cout << "There is no credit";
}


void Individual::print()
{
	cout << "\nFirst Name :" << getFirstName() << endl;

	cout << "Last Name :" << getLastName() << endl;

	cout << "Id Number :" << getIdNumber() << endl;

	cout << "Book Name :" << getBookName() << endl;

	cout << "Book Quantity:" << getBookQuantity() << endl;

	cout << "Book Price :" << getBookPrice();
	
	cout << "\nWallet Amount: "<<getWallet();

	cout << "\nRetail Type: "<<getType();
}


void Individual::cost()
{   
	costIndividual = bookPrice * bookQuantity;

	cout << costIndividual;
}