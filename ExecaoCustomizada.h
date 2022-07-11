#ifndef EXECAOCUSTOMIZADA_H_INCLUDED
#define EXECAOCUSTOMIZADA_H_INCLUDED
#include <exception>
#include <string.h>
#include <fstream>
#include <stdexcept>

using namespace std;

class ExecaoCustomizada : public exception
{
protected:
	string msg;

public:
	ExecaoCustomizada(string e)
	{
		this->msg = e;
	}
	virtual const string what()
	{
		return msg;
	}
};

#endif // EXECAOCUSTOMIZADA_H_INCLUDED
