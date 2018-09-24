#include "data.h"
#include <ctime>

int Data¹(int month, int year)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) return 31;
	else
		if (month == 2)
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return 29;
			else
				return 28;
	return 30;

}
DateTime::DateTime(bool a)
{
	if (a)
	{
		time_t tm = time(nullptr);
		unsigned long  t = tm;
		second = tm;
		year = t / (365 * 24 * 60 * 60 + (6 * 60 * 60)) + 1970;
		year;

		t = t % (365 * 24 * 60 * 60 + (6 * 60 * 60));
		int data1 = t / (24 * 60 * 60);
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			if (data1 <= 31) {
				month = 1; data = data1;
			}
			else
				if (data1 <= 60) {
					month = 2; data = data1 - 31;
				}
				else
					if (data1 <= 91) { month = 3; data = data1 - 60; }
					else
						if (data1 <= 121) { month = 4; data = data1 - 91; }
						else
							if (data1 <= 152) {
								month = 5; data = data1 - 121;
							}
							else
								if (data1 <= 182) {
									month = 6; data = data1 - 152;
								}
								else
									if (data1 <= 213) {
										month = 7; data = data1 - 182;
									}
									else
										if (data1 <= 244) {
											month = 8; data = data1 - 213;
										}
										else
											if (data1 <= 274) {
												month = 9; data = data1 - 244;
											}
											else
												if (data1 <= 305) {
													month = 10; data = data1 - 274;
												}
												else
													if (data1 <= 335) {
														month = 11; data = data1 - 305;
													}
													else
													{
														month = 12; data = data1 - 355;
													}
		else
			if (data1 <= 31) {
				month = 1; data = data1;
			}
			else
				if (data1 <= 60 - 1) {
					month = 2; data = data1 - 31;
				}
				else
					if (data1 <= 91 - 1) { month = 3; data = data1 - 60 - 1; }
					else
						if (data1 <= 121 - 1) { month = 4; data = data1 - 91 - 1; }
						else
							if (data1 <= 152 - 1) {
								month = 5; data = data1 - 121 - 1;
							}
							else
								if (data1 <= 182 - 1) {
									month = 6; data = data1 - 152 - 1;
								}
								else
									if (data1 <= 213 - 1) {
										month = 7; data = data1 - 182 - 1;
									}
									else
										if (data1 <= 244 - 1) {
											month = 8; data = data1 - 213 - 1;
										}
										else
											if (data1 <= 274 - 1) {
												month = 9; data = data1 - 244 - 1;
											}
											else
												if (data1 <= 305 - 1) {
													month = 10; data = data1 - 274 - 1;
												}
												else
													if (data1 <= 335 - 1) {
														month = 11; data = data1 - 305 - 1;
													}
													else
													{
														month = 12; data = data1 - 355 - 1;

													}
		data = data + 3;
		t = t % (24 * 60 * 60);
		hour = t / 60 / 60 + 3;
		t = t % (60 * 60);
		min = t / 60;
		secont60 = t % 60;

	}
}
DateTime::DateTime(int secont60, int min, int hour, int data, int month, int year) :secont60(secont60), min(min), hour(hour), data(data), month(month), year(year)
{
	second = (year - 1970) * 365 * 24 * 60 * 60 + (6 * 60 * 60) + Data¹(month - 1, year) * 24 * 60 * 60 + hour * 60 * 60 + min * 60 + secont60;

}

DateTime::DateTime(unsigned long int second)
{
	unsigned long  t = second;
	
	year = t / (365 * 24 * 60 * 60 + (6 * 60 * 60)) + 1970;
	

	t = t % (365 * 24 * 60 * 60 + (6 * 60 * 60));
	int data1 = t / (24 * 60 * 60);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		if (data1 <= 31) {
			month = 1; data = data1;
		}
		else
			if (data1 <= 60) {
				month = 2; data = data1 - 31;
			}
			else
				if (data1 <= 91) { month = 3; data = data1 - 60; }
				else
					if (data1 <= 121) { month = 4; data = data1 - 91; }
					else
						if (data1 <= 152) {
							month = 5; data = data1 - 121;
						}
						else
							if (data1 <= 182) {
								month = 6; data = data1 - 152;
							}
							else
								if (data1 <= 213) {
									month = 7; data = data1 - 182;
								}
								else
									if (data1 <= 244) {
										month = 8; data = data1 - 213;
									}
									else
										if (data1 <= 274) {
											month = 9; data = data1 - 244;
										}
										else
											if (data1 <= 305) {
												month = 10; data = data1 - 274;
											}
											else
												if (data1 <= 335) {
													month = 11; data = data1 - 305;
												}
												else
												{
													month = 12; data = data1 - 355;
												}
	else
		if (data1 <= 31) {
			month = 1; data = data1;
		}
		else
			if (data1 <= 60 - 1) {
				month = 2; data = data1 - 31;
			}
			else
				if (data1 <= 91 - 1) { month = 3; data = data1 - 60 - 1; }
				else
					if (data1 <= 121 - 1) { month = 4; data = data1 - 91 - 1; }
					else
						if (data1 <= 152 - 1) {
							month = 5; data = data1 - 121 - 1;
						}
						else
							if (data1 <= 182 - 1) {
								month = 6; data = data1 - 152 - 1;
							}
							else
								if (data1 <= 213 - 1) {
									month = 7; data = data1 - 182 - 1;
								}
								else
									if (data1 <= 244 - 1) {
										month = 8; data = data1 - 213 - 1;
									}
									else
										if (data1 <= 274 - 1) {
											month = 9; data = data1 - 244 - 1;
										}
										else
											if (data1 <= 305 - 1) {
												month = 10; data = data1 - 274 - 1;
											}
											else
												if (data1 <= 335 - 1) {
													month = 11; data = data1 - 305 - 1;
												}
												else
												{
													month = 12; data = data1 - 355 - 1;

												}
	data = data + 3;
	t = t % (24 * 60 * 60);
	hour = t / 60 / 60 + 3;
	t = t % (60 * 60);
	min = t / 60;
	secont60 = t % 60;
}

int DateTime::week()
{
	int kod_month;
	if (month == 1 || month == 10) kod_month = 1;
	else
		if (month == 5) kod_month = 2;
		else
			if (month == 8) kod_month = 3;
			else
				if (month == 6) kod_month = 5;
				else
					if (month == 12 || month == 9) kod_month = 6;
					else
						if (month == 4 || month == 7) kod_month = 0;
						else
							kod_month = 4;

	int kod_year;
	if (year >= 2000) kod_year = (6 + year % 100 + (year % 100) / 4) % 7;
	else
	{
		kod_year = (6 + year % 100 + year % 100 % 4) / 6;
	}
	int kod=(data+kod_month+kod_year)%7;
	if (kod > 1) return kod - 1;
	else
		return kod + 6;
}

int DateTime::number_week()
{
	DateTime A(1, 2, 2,1, 1, year);
	unsigned long int t = second;
		t = t % (365 * 24 * 60 * 60 + (6 * 60 * 60));
	int data1 = t / (24 * 60 * 60);

	return (data1+A.week()-1)/7;

}

DateTime &DateTime::operator++()
{
	secont60++; min++; hour++; data++; month++; year++;
	second = (year - 1970) * 365 * 24 * 60 * 60 + (6 * 60 * 60) + Data¹(month - 1, year) * 24 * 60 * 60 + hour * 60 * 60 + min * 60 + secont60;
	return *this;
}

DateTime DateTime::operator++(int)
{
	++secont60; ++min; ++hour; ++data; ++month; ++year;
	second = (year - 1970) * 365 * 24 * 60 * 60 + (6 * 60 * 60) + Data¹(month - 1, year) * 24 * 60 * 60 + hour * 60 * 60 + min * 60 + secont60;
	return *this;
}

DateTime &DateTime::operator--()
{
	secont60--; min--; hour--; data--; month--; year--;
	second = (year - 1970) * 365 * 24 * 60 * 60 + (6 * 60 * 60) + Data¹(month - 1, year) * 24 * 60 * 60 + hour * 60 * 60 + min * 60 + secont60;
	return *this;
}

DateTime DateTime::operator--(int)
{
	--secont60; --min; --hour; --data; --month; --year;
	second = (year - 1970) * 365 * 24 * 60 * 60 + (6 * 60 * 60) + Data¹(month - 1, year) * 24 * 60 * 60 + hour * 60 * 60 + min * 60 + secont60;
	return *this;
}

DateTime DateTime::operator+=(time_interval a)
{

	return DateTime(second+a.get_second());
}

DateTime DateTime::operator-=(time_interval a)
{
	return DateTime(second - a.get_second());
}

bool DateTime::operator!=(DateTime a)
{
	if (second != a.second) return true;
	return false;
}

bool DateTime::operator==(DateTime a)
{
	if (second == a.second) return true;
	return false;
}

bool DateTime::operator<(DateTime a)
{
	if (second < a.second) return true;
	return false;
}

bool DateTime::operator>(DateTime a)
{
	if (second > a.second) return true;
	return false;
}

time_interval DateTime::operator-(DateTime a)
{
	return time_interval(this,a);
}

time_interval operator+(time_interval a, DateTime b)
{
	return  time_interval(b.second+a.get_second());
}

time_interval operator-(time_interval a, DateTime b)
{
	return  time_interval(b.second - a.get_second());
}

std::istream & operator>>(std::istream & is, DateTime & p)
{
	is >> p.data >> p.month>>p.year>>p.hour>>p.min>>p.secont60;
	p.second = (p.year - 1970) * 365 * 24 * 60 * 60 + (6 * 60 * 60) + Data¹(p.month - 1, p.year) * 24 * 60 * 60 + p.hour * 60 * 60 + p.min * 60 + p.secont60;
	return is;
}

std::ostream & operator<<(std::ostream & os, const DateTime & p)
{
	//os << p.data << "." << p.month << "." << p.year <<"_" << p.hour << ":" << p.min << ":" << p.secont60<<" ";
	os << p.data << " " << p.month << " " << p.year << " " << p.hour << " " << p.min << " " << p.secont60 << " ";

	return os;
}




std::istream & operator>>(std::istream & is, time_interval & p)
{
	int week, data, hour, min;
	is >>week>> data >>  hour >> min;
	p.second = min * 60 + hour * 60 * 60 + data * 24 * 60 * 60 + week * 7 * 24 * 60 * 60;
	return is;
}

std::ostream & operator<<(std::ostream & os,  time_interval & p)
{
	
	os << "Íåäåëü " << p.get_week() << " Äíåé " << p.get_data() << " ×àñîâ " << p.get_hour() << " Ìèíóò " << p.get_min();

	return os;
}

time_interval::time_interval(DateTime A, DateTime B)
{
	if (A>B)  second = (A.second - B.second);
	else
	
		second = (B.second - A.second);
}

bool time_interval::operator<(time_interval a)
{
	if (second < a.second) return true;
	return false;
}

bool time_interval::operator>(time_interval a)
{
	if (second > a.second) return true;
	return false;
}
