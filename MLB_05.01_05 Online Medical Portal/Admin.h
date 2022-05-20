class Admin{
	
	private:
		char admin_ID[20];
		char admin_name[50];
		char mobile_number[15];
		char email_address[50];
		
	public:
		Admin();
		Admin(char aID[], char adName[], char mobNum[], char eAdd[]);
		void displayAdminDetails();
		~Admin();
		
};