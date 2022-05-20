//MLB 05.01 05 Online Medical Portal IT21287954
#include "Medicine.h"
#include <cstring>
#include<iostream>
using namespace std;

Medicine::Medicine()
    {
    	expire_date = "";
    	medicine_name = "";
    	medicine_id = "";
    }

Medicine::Medicine(char expDate, char medName, char medID)
    {
    	expire_date = expDate;
    	medicine_name = medName;
    	medicine_id = medID;
    }

char Medicine::getDetails()
    {
    	
    }

void Medicine::displayDetails()
    {
    	
    }

Medicine::~Medicine()
    {
    	
    }