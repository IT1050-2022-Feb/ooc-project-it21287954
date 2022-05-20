	
	private:
		string supplier_id;
		string medical_item;
		int mobile_Number;
		int cost;
	public:
		Supplier();
		Supplier(string sID, string medItem, int Mn, int co);
		void displayDetails();
		~Supplier();
};
