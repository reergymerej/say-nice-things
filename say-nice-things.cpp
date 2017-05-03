// This is a command line program that will say nice things to you.
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

int getRandomInt(int max)
{
  srand(time(NULL));
  return rand() % (max + 1);
}

vector<string> getCompliments(int length)
{
  vector<string> compliments;
  compliments.push_back("You look handsome!");
  compliments.push_back("Today is going to be great!");
  compliments.push_back("I'm happy you're here.");
  compliments.push_back("Life is the best game ever played.");
  compliments.push_back("You're family is rad.");
  return compliments;
}

int main()
{
  int complimentsLength = 5;
  vector<string> compliments = getCompliments(complimentsLength);
  int index = getRandomInt(complimentsLength - 1);

  cout << compliments[index] << endl;

  return 0;
}
