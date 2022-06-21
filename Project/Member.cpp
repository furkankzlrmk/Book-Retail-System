#include "Member.h"
#include <iostream>
using namespace std;

Member::Member(string first, string last, string id, string book, int quantity, int price )
{
	setFirstName(first);
	setLastName(last);
	setIdNumber(id);
	setBookName(book);
	setBookQuantity(quantity);
	setBookPrice(price);
	
}
Member::~Member()
{
	cout << "\n\n Object is deleted";
}

void Member::setFirstName(string first)
{
	firstName = first;
}

string Member::getFirstName()
{
	return firstName;
}

void Member::setLastName(string last)
{
	lastName = last;
}
string Member::getLastName()
{
	return lastName;
}

void Member::setBookName(string book)
{
	bookName = book;
}

string Member::getBookName()
{
	return bookName;
}

void Member::setBookQuantity(int quantity)
{
	bookQuantity = quantity;
}

int Member::getBookQuantity()
{
	return bookQuantity;
}

void Member::setIdNumber(string id)
{
	idNumber = id;
}

string Member::getIdNumber()
{
	return idNumber;

}

void Member::setBookPrice(int price)
{
	bookPrice = price;
}

int Member::getBookPrice()
{
	return bookPrice;
}

