#include "Supplier.h"
#include <cstring>
#include<iostream>
using namespace std;

Supplier::Supplier()
{
	supplier_id = "";
	medical_item = "";
	mobile_Number = 0;
	cost = 0;
}

 Supplier::Supplier(string sID, string medItem, int Mn, int co)
{
	supplier_id = sID;
	medical_item = medItem;
	mobile_Number = Mn;
	cost = co;
}

void Supplier::displayDetails()
{
   
}

Supplier::~Supplier()
{
	
}