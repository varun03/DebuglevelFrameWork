// DebugFrameWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "DebugFrameWork.h"

void Logdebug::logdebug(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() <<endl;
}

void Logerror::logdebug(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() << endl;
}

void Logerror::logerror(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() << endl;
}

void Logwarning::logdebug(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() << endl;
}

void Logwarning::logerror(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() << endl;
}
void Logwarning::logwarning(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() << endl;
}

void Logexception::logdebug(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() << endl;
}

void Logexception::logerror(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() << endl;
}
void Logexception::logwarning(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() << endl;
}
void Logexception::logexception(string fun_name , string mesg )
{
	string data = opening_brac + fun_name + colsing_brac + colon + mesg;
	cout << data.c_str() << endl;
}

void   debugloglevel::Printdebuglevel(int debuglevel, string funcname, string mesg)
{
	debugloglevel debugloglevelObject;

	if (debuglevel >= 0 || debuglevel <= 3)
	{
		switch (debuglevel)
		{
		case 0:
		default:
			debugloglevelObject.Rfdebuglog = new Logdebug();
			debugloglevelObject.Rfdebuglog->logdebug(funcname, mesg);
			break;
			/*
					case 1:
						return new Logerror();
						break;
					case 2:
						return new Logwarning();
						break;
					case 3:
						return new Logexception();
						break;
			*/
		}
	}

	else
	{
		cout << "Invalid debuglevel , must be lie the range (0 >= debuglevel <=3) " << debuglevel;
	}
}

int main()
{
	int level;

	cout << "input the debug level \n";

	cin >> level;

	debugloglevel::Printdebuglevel(level ,"module_name/function_name","message");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
