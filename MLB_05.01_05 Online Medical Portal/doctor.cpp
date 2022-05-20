//MLB 05.01 05 Online Medical Portal IT21286650
#include "doctor.h"
#include<cstring>
#include<iostream>
using namespace std;

Doctor::Doctor(const char uName[], int doctorId)
{
strcpy(name, uName); 
docid = doctorId;
}

void Doctor::setDetails(char add[30], int cNo, char dEmail[30])
{
}

int Doctor::getDetails()
{
}

void Doctor::displayDoctDetails()
{
}

void Doctor::updateDoctDetails()
{
}
 
Doctor::~Doctor()
{
}
