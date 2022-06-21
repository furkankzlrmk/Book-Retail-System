#ifndef  MEMBER_H
#define  MEMBER_H
#include<string>
#include <iostream>
using namespace std;

class Member                 //Base Class   
{
public:
	
	 Member(string first, string last, string id, string book,int  quantity,int price);
	 ~Member();

	 void setFirstName(string first);
	 string getFirstName();

	 void setLastName(string last);
	 string getLastName();

	 void setBookName(string book);
	 string getBookName();

	 void setBookQuantity(int quantity);
	 int getBookQuantity();

	 void setIdNumber(string id);
	 string getIdNumber();
	 
	 void setBookPrice(int price);
	int  getBookPrice();


	virtual void print()=0;      //Pure Virtual 
	virtual void creditNote()=0;
	virtual void cost()=0;

public:
	int    bookPrice;
	string firstName;
	string lastName;
	string idNumber;
	string bookName;
	int  bookQuantity;
	
};



#endif // ! MEMBER_H