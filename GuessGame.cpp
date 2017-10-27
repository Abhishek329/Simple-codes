// GuessGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
     srand(static_cast<unsigned int>(time(0)));    //seed random number generator

     int secretNumber;          // random number between 1 and 100
     int tries = 0;
     int guess;

	 cout << "User's secret number\n";                // getting user input as secret number
	 cin >> secretNumber;

     cout << "\tWelcome to Guess My Number\n\n";

do
   {
       cout << "computer's guess: \n";
       guess= rand() % 100 + 1;                  //allowing computer to guess the number using random number generator
	   cout << guess;
       ++tries;
  
       if (guess > secretNumber)
       {
           cout << "Too high!\n\n";
       }
       else if (guess < secretNumber)
       {
           cout << "Too low!\n\n";
       }
       else
       {
           cout << "\nThat’s it! You got it in " << tries << " guesses!\n";
       }
   } while (guess != secretNumber);

    return 0;
}


