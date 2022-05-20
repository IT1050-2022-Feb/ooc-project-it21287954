#include "Admin.h"
#include <cstring>
#include<iostream>
using namespace std;

Admin::Admin()
{
	strcpy(admin_ID,"");
	strcpy(admin_name,"");
	strcpy(mobile_number,"000000000000000");
	strcpy(email_address,"");
}
Admin::Admin(char aID[], char adName[], char mobNum[], char eAdd[])
{
	strcpy(admin_ID,aID);
	strcpy(admin_name,adName);
	strcpy(mobile_number,mobNum);
	strcpy(email_address,eAdd);
}
void Admin::displayAdminDetails()
{
	
}
Admin::~Admin()
{
	
}