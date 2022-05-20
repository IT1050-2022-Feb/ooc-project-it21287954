//MLB 05.01 05 Online Medical Portal IT21287954
class Lab_report{
	  private:
		        char user_id;
		        char report_id;
		
	  public:
		        Lab_report();
		        Lab_report(char uID, char repID);
		        char getDetails();
		        void displayDetails();
          ~Lab_report();
};