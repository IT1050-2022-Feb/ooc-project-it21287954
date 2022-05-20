class Doctor
{
private:
char name[50]; 
int docid; 
char address[30]; 
int contactNo; 
char email[30];

public:
Doctor(const char uName[], int doctorId); void setDetails(char add[30], int cNo, char dEmail[30]);
int getDetails();
virtual void displayDoctDetails();
virtual void updateDoctDetails();
~Doctor();
};
