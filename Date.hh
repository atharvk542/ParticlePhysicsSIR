#ifndef DATE_HH
#define DATE_HH

class Date {

	public:
		Date(int day, int month, int year);
		~Date();

		int getYear();
		void setYear(int newYear);

		void advanceDate();

	private:
		int day;
		int month;
		int year;
};

#endif