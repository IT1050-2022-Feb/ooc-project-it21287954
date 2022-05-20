//MLB 05.01 05 Online Medical Portal IT21286346

#include "Guest.h"
#include<cstring>
#include<iostream>
using namespace std;

Guest::Guest(const char gName[], int gId)
{
  strcpy(name, gName); 
  gId = guestID;
}

void Guest::setDetails(char add, int cNo, char gEmail)
{
}

int Guest::getDetails()
{
}

void Guest::displayDetails()
{
}

void Guest::updateDetails()
{
}
 
Guest::~Guest()
{
}
