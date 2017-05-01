// This is a command line program that will say nice things to you.
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string compliments [5];
  compliments[0] = "You look handsome!";
  compliments[1] = "Today is going to be great!";
  compliments[2] = "I'm happy you're here.";
  compliments[3] = "Life is the best game ever played.";
  compliments[4] = "You're family is rad.";
  cout << compliments[0] << endl;
  cout << compliments[1] << endl;
  cout << compliments[2] << endl;
  cout << compliments[3] << endl;
  cout << compliments[4] << endl;
  return 0;
}
