//MLB 05.01 05 Online Medical Portal IT21287954
#include "Lab_report.h"
#include "Patient.h"
#include <cstring>
#include <iostream>
using namespace std;

Lab_report::Lab_report()
    {
    	user_id ="";
    	report_id ="";
    }
Lab_report::Lab_report(char uID, char repID)
    {
    	user_id =uID;
    	report_id =repID;
    }

char Lab_report::getDetails()
    {
	
    }

void Lab_report::displayDetails()
    {
	
    }

Lab_report::~Lab_report();
    {

    }