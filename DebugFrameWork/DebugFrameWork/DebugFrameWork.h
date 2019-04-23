#pragma once
#include <iostream>
using namespace std;

const string opening_brac = "[";
const string colsing_brac = "]";
const string colon = ":";

//making the all debug function as interface 

/*
***************************************************************************************************************************
					#Debug loglevel for Debug - 0
					#Debug loglevel for error - 1
					#Debug loglevel for warning- 2
					#Debug loglevel for exception - 3

					@Class debuglog is an interface.
					#it conatis four methods as belwo:
					#virtual void logdebug(string fun_name , string mesg)     = 0;
					#virtual void logerror(string fun_name, string mesg)      = 0;
					#virtual void logwarning(string fun_name, string mesg)    = 0;
					#virtual void logexception(string fun_name , string mesg) = 0;

					@function Arguments deatils :
					@ string fun_name : use for any function name , module name or etc 
					@ string mesg	  : use for printing any data or message
***************************************************************************************************************************
*/

class debuglog
{
public :

	virtual void logdebug(string fun_name = "", string mesg = "") = 0;
};

class Logdebug : public debuglog
{

public :
	void logdebug(string fun_name = "", string mesg = "");
		
};
class Logerror : public debuglog
{
public:
	void logdebug(string fun_name = "", string mesg = "");
	void logerror(string fun_name = "", string mesg = "");

};

class Logwarning : public debuglog
{
public:
	void logdebug(string fun_name = "", string mesg = "");
	void logerror(string fun_name = "", string mesg = "");
	void logwarning(string fun_name = "", string mesg = "");
};

class Logexception : public debuglog
{
public:
	void logdebug(string fun_name = "", string mesg = "");
	void logerror(string fun_name = "", string mesg = "");
	void logwarning(string fun_name = "", string mesg = "");
	void logexception(string fun_name = "", string mesg = "");
};

class debugloglevel
{
public:
	debuglog *Rfdebuglog;
	Logdebug *RfLogdebug;
	Logerror *RfLogerror;
	Logwarning *RfLogwarning;
	Logexception *RfLogexception;

~debugloglevel()
{
	delete Rfdebuglog;
	delete RfLogdebug;
	delete RfLogerror;
	delete RfLogwarning;
	delete RfLogexception;
}
public:

	static void Printdebuglevel(int debuglevel = 0, string funcname = "", string msg = "");
};



