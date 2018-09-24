#pragma once

#include <iostream>
#include <ctime>
#include <math.h>
class time_interval;
class DateTime
{
private:
	unsigned long int second;
	int secont60;
	int min;
	int hour;
	int data;
	int month;
	int year;


	;
public:
	DateTime() {
		this->second = 0; this->secont60 = 0; this->min = 0, this->hour = 0; this->data = 0; this->month = 0;  this->year = 0;
	}
	DateTime(bool a);
	DateTime(int secont60, int min, int hour, int data, int month, int year);
	DateTime(unsigned long int second);
	unsigned long int const get_secont() { return second; }
	int const get_secont60() { return secont60; }
	int const get_min() { return min; }
	int const get_hour() { return hour; }
	int const get_data() { return data; }
	int const get_month() { return month; }
	int const get_year() { return year; }
	int week();
	int number_week();

	DateTime& operator ++();//Postfix
	DateTime operator ++(int); //Prefix 
	DateTime& operator --();//Postfix
	DateTime operator --(int); //Prefix 
	DateTime operator +=(time_interval a);
	DateTime operator -=(time_interval a);
	bool operator !=(DateTime a);
	bool operator ==(DateTime a);
	bool operator <(DateTime a);
	bool operator >(DateTime a);
	time_interval operator -(DateTime a);
	friend  time_interval operator+(time_interval a, DateTime b);
	friend  time_interval operator-(time_interval a, DateTime b);
	friend std::istream &operator>>(std::istream &is, DateTime &p);
	friend std::ostream &operator<<(std::ostream &os, const DateTime &p);
	friend class time_interval;


};

class time_interval
{
private:
	unsigned long int second;
public:
	time_interval() { second = 0; }
	time_interval(unsigned long int second) { this->second = second; }
	time_interval(DateTime A, DateTime B);
	unsigned long int get_second() { return second; }
	int const get_min() { return second / 60; }
	int const get_hour() { return second / 60/60; }
	int const get_data() { return second / 60/60/24; }
	int const get_week() { return second / 60 / 60 / 24/7; }
	bool operator <(time_interval a);
	bool operator >(time_interval a);
	friend std::istream &operator>>(std::istream &is, time_interval &p);
	friend std::ostream &operator<<(std::ostream &os,  time_interval &p);
	friend class DateTime;
	
};