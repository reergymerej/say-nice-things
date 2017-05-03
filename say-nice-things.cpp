// This is a command line program that will say nice things to you.
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
  int complimentsLength = 5;
  string compliments [complimentsLength];
  compliments[0] = "You look handsome!";
  compliments[1] = "Today is going to be great!";
  compliments[2] = "I'm happy you're here.";
  compliments[3] = "Life is the best game ever played.";
  compliments[4] = "You're family is rad.";

  // Which will we choose?
  // seed randomizer
  srand(time(NULL));
  // get some randomness
  int index = rand() % complimentsLength;

  cout << compliments[index] << endl;

  return 0;
}
