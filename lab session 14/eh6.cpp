// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex; //global object

int main () {
  try
  {
    throw myex;
  }
  catch (exception &e)
  {
    cout << e.what() << '\n';
  }
  return 0;
}
