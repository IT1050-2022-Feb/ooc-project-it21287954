class Feedback
{
private:
int feedbackNo;
char email[40];
char feedbackmsg[40];
 
public:
Feedback(int fbNo, char mail[30], char fb[30]); 
void displayFeedback();
~Feedback();

}; 

