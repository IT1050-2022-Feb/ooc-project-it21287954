/*MLB_05.01_05 Online Medical Portal (IT21287954,IT21286728,IT21289484,IT21286650,IT21286346)*/

#include "Admin.h" 
#include "Channel.h"
#include "doctor.h"
#include "feedback.h"
#include "Lab_report.h"
#include "Medicine.h"
#include "Patient.h"
#include "Supplier.h"
#include "Guest.h"
#include "Payment.h"

#include <iostream> 
using namespace std;  

int main()
{
  //creating objects
    
    Doctor* doctor;
    doctor= new Doctor("Dr.Wijerathna", 1990); //Create Doctor object
    
    Feedback fbc(35, "example@xyz.com", "feedback1"); //Create Feedback object
    
    Medicine* medicine;
    medicine= new medicine("12/4/2023", "oxygen", "146"); //Creating medicine object
    
    Lab_report* labReport;
    labReport= new labReport("35198", "lab198j"); //Creating lab report object
    
    Patient p1(23, "Kasun", 23, "fsdfds", "0712345678", "hasdsahbd@gmail.com");

    Channel c1(01, "Kasun", "4343432", 24, "4324", "DR can", "2022", "12.56");

    Guest* guest;
    guest = new guest("Perera", 1988); //Create Guest object

    Payment * pay;
    pay = new Payment("VISA" , "Nimal Perera",); //Create Payment object

    Admin *login = new Admin();
	login->Admin("IT","Walter","0712178345","Walterwhite@gmail.com"); //creating Admin object

  
  Supplier *details = new Supplier();
	
	details->Supplier("SID123","medicines","0712193303","1200"); //creating suppier object

   //calling methods
    
    doctor->setDetails("123/4, Kandy Rd, Warakapola", 0772341867, "example@abc.com"); //set details to attributes
    doctor->displayDoctDetails(); //display normal user details
    
    fbc.displayFeedback(); //display feedback
    
    labReport->setDetails("35198", "lab198j"); //seting details to attributes
    labReport->displayDetails(); //displaying the normal user's details
    
    medicine->setDetails("12/4/2023", "oxygen", "146"); //setting details to attributes
    medicine->displayDetails(); //displaying the normal user's details
    
    p1.displayDetails();
    
    c1.displayChannel();

    guest->setDetails("Main street, Mathara", 0775894875, "abcdehjf@xyzh.com"); //set details to attributes
    guest->displayDetails(); //display normal user details

  //display admin deatils
  login->displayAdminDetails();

  //display supplier details
  details->diplaySupplierDetails();
    
    //delete dynamic variables
    delete doctor;
    delete labReport; 
    delete medicine;
    delete guest;
    delete pay;
    delete Admin;
    delete c1;
    delete p1;
    delete fbc;
    delete supplier;
  return 0;
}
