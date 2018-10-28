// UAT CSC 215 - Assignment 7 - Keywords 2
// Josh Sharrer

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{

	// Display Title of program to user
	printf("\nKeywords 2\n");
	printf("UAT CSC-215 - Assignment 7\n");
	printf("Designed and Written by Josh Sharrer\n");
	printf("________________________________________\n\n");
	
	// Ask the recruit to login using thier name
	string recruitName;
	printf("Hello Recruit. What is your name?\n");
	
	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cin >> recruitName;
	
	// Display an overview of what Keywords II is to the recruit 
	cout << "\n\nHello " << recruitName << "!" << endl;
	cout << "Welcome to Keywords 2!\n\n" << endl;
	cout << "Congratulations gettting into the CIA!\n" << endl;
	cout << "The current automated programs that the CIA uses to decode enemy transmissions have always worked well until recently." << endl;
	cout << "Recently the enemy is using single scrambled low-tech keywords to signal other enemies to start attacks which our" << endl;
	cout << "current code decryption programs have not been successful against.  At the CIA they are developing a new code breaking" << endl;
	cout << "team which relies on human expertise to detect these low tech scrambled keywords. We are turning back the clock with" << endl;
	cout << "this new team of human code breakers.\n" << endl;
	// Display an directions to the recruit on how to use Keywords
	// Create a collection of 10 words you had wrote down manually
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"test1", "Test Hint"},
		{"test2", "Test Hint"},
		{"test3", "Test Hint"},
		{"test4", "Test Hint"},
		{"test5", "Test Hint"},
		{"test6", "Test Hint"},
		{"test7", "Test Hint"},
		{"test8", "Test Hint"},
		{"test9", "Test Hint"},
		{"test10", "Test Hint"},
	};

	// Create an int var to count the number of simulations being run starting at 1
	int GameNumber = 0;
	   
	// Display the simulation # is staring to the recruit. 
	GameNumber++;
	cout << "Starting Game # " << GameNumber << ".\n" << endl;       
	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 

	
	// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word

	//     Tell recruit how many incorrect guesses he or she has left

	//     Show recruit the letters he or she has guessed

	//     Show player how much of the secret word he or she has guessed

	//     Get recruit's next guess

	//     While recruit has entered a letter that he or she has already guessed

	//          Get recruit ’s guess

	//     Add the new guess to the group of used letters

	//     If the guess is in the secret word

	//          Tell the recruit the guess is correct

	//          Update the word guessed so far with the new letter

	//     Otherwise

	//          Tell the recruit the guess is incorrect

	//          Increment the number of incorrect guesses the recruit has made

	// If the recruit has made too many incorrect guesses

	//     Tell the recruit that he or she has failed the Keywords II course.

	// Otherwise

	//     Congratulate the recruit on guessing the secret words

	// Ask the recruit if they would like to run the simulation again

	// If the recruit wants to run the simulation again

	//     Increment the number of simiulations ran counter

	//     Move program execution back up to // Display the simulation # is staring to the recruit. 

	// Otherwise 

	//     Display End of Simulations to the recruit

	//     Pause the Simulation with press any key to continue
	system("PAUSE");
}