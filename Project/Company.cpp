#include "Company.h"
using namespace std;

company::company(string first, string last, string id, string book, double quantity, double price, string company, string address)
:Member(first,last,id,book,quantity,price)
{
	setCompanyName(company);
	setCompanyAddress(address);

}



void company::setCompanyName(string company)
{
	companyName = company;

}

string company::getCompanyName()
{

	return companyName;

}

void company::setCompanyAddress(string address)
{
	companyAddress = address;

}

string company::getCompanyAddress()
{

	return companyAddress;
}


void company::print()
{

	cout << "\nFirst Name :" << getFirstName() << endl;

	cout << "Last Name :" << getLastName() << endl;

	cout << "Id Number :" << getIdNumber() << endl;

	cout << "Book Name :" << getBookName() << endl;

	cout << "Book Quantity:" << getBookQuantity() << endl;

	cout << "Book Price :" << getBookPrice() << endl;

	cout << "Company Name :" << getCompanyName() << endl;

	cout << "Company Address : " << getCompanyAddress() << endl;
}

void company::creditNote()
{
	if (bookQuantity > 1000)
	{
		creditCompany = 50;
	 cout << creditCompany;
	}
	else
	{
		creditCompany == 1;
		cout << creditCompany;
	}
}

void company::cost()
{
	costCompany = bookPrice * bookQuantity;

	cout << endl;
	cout << costCompany;

	
}
