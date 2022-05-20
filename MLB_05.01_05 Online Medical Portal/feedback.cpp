//MLB 05.01 05 Online Medical Portal IT21286650
#include "feedback.h"
#include<cstring>
#include<iostream>
using namespace std;

Feedback::Feedback(int fbNo, char mail[30], char fb[30])
{
feedbackNo = fbNo; 
strcpy(email, mail); 
strcpy(feedbackmsg, fb);
}

void Feedback::displayFeedback()
{
}

Feedback::~Feedback()
{
}
 
