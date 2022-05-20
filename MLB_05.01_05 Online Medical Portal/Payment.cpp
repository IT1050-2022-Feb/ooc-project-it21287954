//MLB 05.01 05 Online Medical Portal IT21286346

#include "Payment.h"
#include<cstring>
#include<iostream>
using namespace std;

Payment::Payment(int pID, const char ppayType[], double ppayAmount)
{
payID = pID; 
strcpy (payType, ppayType); 
payAmount = ppayAmount; 

    }

void Payment::checkPayment()
{

}

void Payment::confirmPayment()
{

}
void Payment::displayDetails()
{

}


Payment::~Payment()
{

}