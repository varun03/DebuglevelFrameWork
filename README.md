# DebuglevelFrameWork

Project Overview : This is a Debuglogframe work and this log frame work has four log level .

Four log level as follow:
					#Debug loglevel for Debug - 0
					#Debug loglevel for error - 1
					#Debug loglevel for warning- 2
					#Debug loglevel for exception – 3

You can consider the Default Debug level is Debug.
While using this frame work if you pass the highest log level then all the log level get enable and print all the.

Any programmer can use this log frame work with there project (only C++ language is applicable).

Technical Details :

Language support  : Only C++(any version  (started version C++98 to latest)).

USE :  You have to add the code in (global scope) your module.

Then you have to call the function using class name and provide the argument list  as below :
1st  -log level (int type)
2nd – module /function name (string type)
3rd –  message to be print (string type)

Example :
debugloglevel::Printdebuglevel(level ,"module_name/function_name","message");

Good Luck !!!!!

