// Week 4 Programming Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
	//Decalares Variables
	ifstream inFile;
	char letter;
	int a_Counter = 0;
	int e_Counter = 0;
	int i_Counter = 0;
	int o_Counter = 0;
	int u_Counter = 0;
	int m_Counter = 0;
	int s_Counter = 0;
	int t_Counter = 0;

	//Program Title
	cout << setfill('*') << setw(100) << "*" << endl;
	cout << setw(70) << "Welcome to my letter counting program" << setw(30) << right << "*" << endl;
	cout << setw(100) << "*" << endl << endl;

	//Checks To See If Two Arguments Are Passed Into The Command Line
	if (argc < 2)
	{
		cout << "Error with input args..." << endl;
		return 1;
	}

	//Determines If File Is Valid
	inFile.open(argv[1]);
	if (!inFile)
	{
		cout << "Error with file name..." << endl;
		return 1;
	}

	//Uses A Loop To Count The Number Of Vowels In A File
	while (inFile)
	{
		inFile.get(letter); //Gets Letter To Be Analyzed

		//Determines If Letter Is A Vowel, M, S, T
		if (letter == 'a' || letter == 'A')
		{
			a_Counter += 1; // Adds 1 To a_Counter
		}
		else if (letter == 'e' || letter == 'E')
		{
			e_Counter += 1; //Adds 1 To e_Counter
		}
		else if (letter == 'i' || letter == 'I')
		{
			i_Counter += 1; //Adds 1 To i_Counter
		}
		else if (letter == 'o' || letter == 'O')
		{
			o_Counter += 1; //Adds 1 To o_Counter
		}
		else if (letter == 'u' || letter == 'U')
		{
			u_Counter += 1; //Adds 1 To u_Counter
		}
		else if (letter == 'm' || letter == 'M')
		{
			m_Counter += 1; //Adds 1 To m_Counter
		}
		else if (letter == 's' || letter == 'S')
		{
			s_Counter += 1; //Adds 1 To s_Counter
		}
		else if (letter == 't' || letter == 'T')
		{
			t_Counter += 1; //Adds 1 To t_Counter
		}
	}

	//Calculates Total Number Of Vowels
	const int TOTAL_LETTERS = a_Counter + e_Counter + i_Counter + o_Counter + u_Counter + m_Counter + s_Counter + t_Counter;

	//Tells User File Is Being Analyzed
	cout << "Analyzing File '" << argv[1] << "'..." << endl << endl;

	//Ouputs Results
	cout << setw(50) << left << "The number of A's:" << a_Counter << endl;
	cout << setw(50) << left << "The number of E's:" << e_Counter << endl;
	cout << setw(50) << left << "The number of I's:" << i_Counter << endl;
	cout << setw(50) << left << "The number of O's:" << o_Counter << endl;
	cout << setw(50) << left << "The number of U's:" << u_Counter << endl;
	cout << setw(50) << left << "The number of M's:" << m_Counter << endl;
	cout << setw(50) << left << "The number of S's:" << s_Counter << endl;
	cout << setw(50) << left << "The number of T's:" << t_Counter << endl;
	cout << setw(50) << left << "The letter count is:" << TOTAL_LETTERS << endl;

	//Closes File
	inFile.close();

	//For Debugging Purposes Only
	//for (int i = 0; i < argc; i++)
	//{
		//cout << i << ":" << argv[i] << endl;
	//}
}