#ifndef COMPANY_H
#define COMPANY_h

#include "Date.h"
#include "Member.h"


class company :public Member
{
public:
	company(string first, string last, string id, string book, double quantity, double price, string company, string address);
     

	void setCompanyName(string);
	string getCompanyName();

	void setCompanyAddress(string);
	string getCompanyAddress();

	
	
    
    virtual  void print();
	virtual void creditNote();
	virtual void cost();


public:
	string companyName;
	string companyAddress;
	int costCompany;
	int creditCompany;
};



#endif // !COMPANY
