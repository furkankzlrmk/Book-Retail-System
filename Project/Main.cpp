#include "Date.h"
#include "Member.h"
#include "Individual.h"
#include "Company.h"
#include <iostream>
#include <iomanip>

using namespace  std;

int x;

int main()
{
   int button=0;
   int button2=0;
   int button3=0;
   int button4=0;
   int button5=0;
   int button6=0;
   int button7=0;


    Date dateOfHire(5, 11, 2012);  // Composition Class
    Date dateOfGive(10, 11, 2012);
    
    Individual customer1("furkan", "Kizilirmak", "181005009", "Programming", 15 , 5 , dateOfHire, dateOfGive, 50, "Rented");
    company wholesaler("Ayberk", "halic", "1919191919", "Management Science", 15000, 15, "Bakircay", "Izmir");



  Individual *customer1Ptr =0;  //Polymorphism

  customer1Ptr = &customer1;



   company  *wholesalerPtr = 0;   //Polymorphism

   wholesalerPtr = &wholesaler;     
   
   
  
  


   cout << "   Welcome to library Member Information system";
    cout << endl;
    cout << "\n            1.Delete Member";
    cout << "\n            2.Update Member";
    cout << "\n            3.Calculate Punishment";
    cout << "\n            4.Calculate Credit Note";
    cout << "\n            5.Calculate Cost";
    cout << "\n            6.Print Member";
    cout << "\n            7.Extend Time";
    cout << endl;


    cout << "Please Press the button";
    cin >> button;

    if (button == 1)
    {
        cout << "\nWhich object you want to delete ? ";
        cout << "\n1.Customer1 ";
        cout << "\n2.Wholesaler";
        cout << "\nPlease Press the Button";
        cin >> button2;
        if (button2 == 1)
            customer1.~Individual();
        else if (button2 == 2)
            wholesaler.~company();
        else
            cout << "\nPlease Enter a Valid Number";
    }

    else if (button == 2)
    {
        cout << "\nWhich Object Do You Want to Change ? ";
        cout << "\n   1.Customer1 ";
        cout << "\n   2.Wholesaler";
        cout << "\nPlease Press the Button";

        cin >> button2;

        if (button2 == 1)
        {
            cout << "\nWhich Member Do You Want to Change ? ";
            cout << "\n   1.First Name:";
            cout << "\n   2.last Name :";
            cout << "\n   3.Id Number :";
            cout << "\n   4.Book Name :";
            cout << "\n   5.Book Quantity :";
            cout << "\n   6.Book Price :";
            cout << "\n   7.Wallet Amount :";
            cout << "\n   8.Buyer Type :";

            cout << "\nPlease Press the Button:";
            cin >> button3;
            if (button3 == 1)
                cin >> customer1.firstName;
            else if (button3 == 2)
                cin >> customer1.lastName;
            else if (button3 == 3)
                cin >> customer1.idNumber;
            else  if (button3 == 4)
                cin >> customer1.bookName;
            else if (button3 == 5)
                cin >> customer1.bookQuantity;
            else  if (button3 == 6)
                cin >> customer1.bookPrice;
            else if (button3 == 7)
                cin >> customer1.wallet;
            else if (button3 == 8)
                cin >> customer1.type;
        }
        else if (button2 == 2)
        {
            cout << "\nWhich Member Do You Want to Change ? ";
            cout << "\n   1.First Name:";
            cout << "\n   2.last Name :";
            cout << "\n   3.Id Number :";
            cout << "\n   4.Book Name :";
            cout << "\n   5.Book Quantity:   ";
            cout << "\n   6.Book Price:      ";
            cout << "\n   7.Company Name:    ";
            cout << "\n   8.Company Address: ";

            cout << "\nPlease Press the Button:";
            cin >> button3;
            if (button3 == 1)
                cin >> wholesaler.firstName;
            else if (button3 == 2)
                cin >> wholesaler.lastName;
            else if (button3 == 3)
                cin >> wholesaler.idNumber;
            else  if (button3 == 4)
                cin >> wholesaler.bookName;
            else if (button3 == 5)
                cin >> wholesaler.bookQuantity;
            else  if (button3 == 6)
                cin >> wholesaler.bookPrice;
            else if (button3 == 7)
                cin >> wholesaler.companyName;
            else if (button3 == 8)
                cin >> wholesaler.companyAddress;
        }
    }
       else if (button == 3)
            customer1.punishmentFunction();
        else if (button == 4)
        {
            cout << "Which Account's Credit Note You Want to learn:";
            cout << "\n   1.Customer1 ";
            cout << "\n   2.Wholesaler";
            cout << "\nPlease Press the Button";
            cin >> button4;
            if (button4 == 1)
                customer1Ptr->creditNote();
            else if (button4 == 2)
                wholesalerPtr->creditNote();
            else
                cout << "\nPlease enter a valid number.";
        }
        else if (button == 5)
        {
            cout << "Which Account's cost You Want to learn:";
            cout << "\n   1.Customer1 ";
            cout << "\n   2.Wholesaler";
            cout << "\nPlease Press the Button";
            cin >> button5;
            if (button5 == 1)
                customer1Ptr->cost();
            else if (button5 == 2)
                wholesalerPtr->cost();
            else
                cout << "\nPlease enter a valid number.";
        }
        else if (button == 6)
        {
            cout << "Which Account Do You Want to See :";
            cout << "\n   1.Customer1 ";
            cout << "\n   2.Wholesaler";
            cout << "\nPlease Press the Button";
            cin >> button6;
            if (button6 == 1)
                customer1Ptr->print();
            else if (button6 == 2)
                wholesalerPtr->print();
            else
                cout << "\nPlease enter a valid number.";
        }
        else if (button == 7)
        {
            cout << "\nHow many days you want to extend the time";
            cout << "\n   1. 5 days";
            cout << "\n   1. 10 days";
            cout << "\n   1. 15 days";
            cout << "\n Please Press the Button";
            cin >> button7;
            if (button7 == 1)
            {
                customer1.wallet = customer1.wallet - 5;
                cout << "\n 5 dollars charged from your wallet for 5 more days.";
            }
            else if (button7 == 2)
            {
                customer1.wallet = customer1.wallet - 10;
                cout << "\n 5 dollars charged from your wallet for 10 more days.";
            }
            else  if (button7 == 3)
            {
                customer1.wallet = customer1.wallet - 15;
                cout << "\n 5 dollars charged from your wallet for 15 more days.";
            }
        }
        else
            cout << "Please Enter a valid Number";

    }
