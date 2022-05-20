//MLB 05.01 05 Online Medical Portal IT21287954
class Medicine{
    	private:
          		char expire_date;
          		char medicine_name;
          		char medicine_id;
    	public:
          		Medicine();
          		Medicine(char expDate, char medName, char medID);
          		char getDetails();
          		void displayDetails();
    		    ~Medicine();
};