class Payment
{
private:
int payID; 
char payType[20];
double payAmount;

public:
Payment();
Payment(int pID, const char payType[], double payAmount); 
void checkPayment();
void confirmPayment();
void displayDetails();
void updateDetails();
~Payment();
};