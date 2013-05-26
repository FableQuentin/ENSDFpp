using namespace std;
#include "CommandLineException.h"

CommandLineException::CommandLineException(string m)
  :msg(m)
{

}

CommandLineException::~CommandLineException() throw()
{

}

const char* CommandLineException::what() const throw()
{
  return msg.c_str();
}
