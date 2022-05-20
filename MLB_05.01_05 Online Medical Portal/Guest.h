class Guest
{
private:
char name[50]; int guestID; char address[50];
char email[20]; int contactNo; 
public:
Guest(const char gName[], int gId); 
void setDetails(char add, int cNo, char gEmail); int getDetails();
virtual void displayDetails(); virtual void updateDetails();
~Guest();
};
