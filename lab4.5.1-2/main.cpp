#include <ctime>
#include <iostream>
#include "data.h"
#include <time.h>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	string s1;

	DateTime t1(true);
	cout<< t1.number_week()<< endl;

	/*ofstream Data_file;
	Data_file.open("Data.txt");
	Data_file << t1;
	Data_file << t1;
	Data_file.close(); */

	ifstream Data_file("Data.txt");
	int i = 0;
	while (!Data_file.eof())
	{
		Data_file >> t1;
		++i;
	}
	Data_file.close();
	Data_file.open("Data.txt");
	DateTime * A =new DateTime[i];
	int n = i;
	while (!Data_file.eof())
	{
		Data_file >> A[i-1];
		--i;
	}
	Data_file.close();
	
	for (int i = 1; i < n; ++i) // пузырьковая сорт
		for (int r = 0; r < n - i; r++)
			if (A[r] < A[r + 1]) swap(A[r], A[r + 1]);
	time_interval Max = A[0] - A[n];
	cout << "Max Растояние = " <<Max.get_second()<<endl;
	time_interval Min = A[0] - A[1];
	for (int i = 1; i < n-1; ++i)
		if (Min > A[i] - A[i + 1]) Min = A[i] - A[i + 1];
	cout << "Min Растояние = " << Min.get_second()<<endl;
	
	system("pause");
}