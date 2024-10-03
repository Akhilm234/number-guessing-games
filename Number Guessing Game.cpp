#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); 
	num = rand() % 100 + 1; 
	cout << "This is a number guessing game \n\n";

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;
       
		 if(guess > num)
			cout << "u have guessed a high number ,retry once again!\n\n";
		else if (guess < num)
			cout << "u have guessed a low number ,retry once again!\n\n";
		else 
			cout << "\ncongratulations!,u reached it in \n";
			
			
	} while (guess!=num);

	return 0;
}
