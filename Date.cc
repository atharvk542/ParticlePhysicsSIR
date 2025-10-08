#include "Date.hh"

Date::Date(int iday, int imonth, int iyear) :
	year(iyear),
	month(imonth),
	day(iday)
{}

Date::~Date() {}

int Date::getYear() {
	return year;
}

void Date::setYear(int newYear) {
	year = newYear;
}

void Date::advanceDate() {
	day++; // i'm not oding allat
}