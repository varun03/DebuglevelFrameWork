#pragma once
#include <iostream>
using namespace std;

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

	virtual void logdebug(string fun_name , string mesg)     = 0;
	virtual void logerror(string fun_name, string mesg)     = 0;
	virtual void logwarning(string fun_name, string mesg)   = 0;
	virtual void logexception(string fun_name , string mesg) = 0;
};



