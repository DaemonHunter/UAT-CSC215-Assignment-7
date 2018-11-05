// UAT CSC 215 - Assignment 7 - Keywords 2
// Josh Sharrer

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{

	// Display Title of program to user
	printf("\nKeywords 2\n");
	printf("UAT CSC-215 - Assignment 7\n");
	printf("Designed and Written by Josh Sharrer\n");
	printf("________________________________________\n\n");
	
	// Ask the recruit to login using thier name
	char recruitName[100];
	printf("Hello Recruit. What is your name?\n");
	
	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cin.getline(recruitName,sizeof(recruitName));
	
	// Display an overview of what Keywords II is to the recruit 
	cout << "\n\nHello " << recruitName << "!" << endl;
	cout << "Welcome to Keywords 2!\n\n" << endl;
	cout << "Congratulations gettting into the CIA!\n" << endl;
	cout << "The current automated programs that the CIA uses to decode enemy transmissions have always worked well until recently." << endl;
	cout << "Recently the enemy is using single scrambled low-tech keywords to signal other enemies to start attacks which our" << endl;
	cout << "current code decryption programs have not been successful against.  At the CIA they are developing a new code breaking" << endl;
	cout << "team which relies on human expertise to detect these low tech scrambled keywords. We are turning back the clock with" << endl;
	cout << "this new team of human code breakers.\n" << endl;
	
	// Display directions to the recruit on how to use Keywords
	cout << "Instructions:\n" << endl;

	// Create a collection of 10 words you had wrote down manually
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"keyword", "A word or identifier that has a particular meaning to the programming language."},
		{"encryption", "A method of scrambling the data so that it is unreadable without the key."},
		{"scramble", "The act of making (something) jumbled or muddled."},
		{"training", "The action of teaching a person or animal a particular skill or type of behavior."},
		{"simulation", "The action of pretending."},
		{"cryptography", "The practice and study of techniques for secure communication in the presence of third parties called adversaries."},
		{"code", "A system of rules to convert information."},
		{"recruit", "A person newly enlisted, and not yet fully trained."},
		{"transmission", "The process of sending and propagating an analogue or digital information signal."},
		{"decode", "The reverse process of encoding, converting code symbols back into a form that the recipient understand, such as English or Spanish."},
	};

	// Create an int var to count the number of simulations being run starting at 1
	int simNumber = 0;
	   
	// Display the simulation # is staring to the recruit. 
	simNumber++;
	cout << "Starting Simulation # " << simNumber << ".\n" << endl;       
	
	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 
	for (int i = 0; i < 3; ++i)
	{
		int words = (rand() % NUM_WORDS);
		string theWord = WORDS[words][WORD];  // word to guess
		string theHint = WORDS[words][HINT];  // hint for word
		string jumble = theWord;  // jumbled version of word
		int length = jumble.size();

		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	
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
	system("pause");
}