# UAT-CSC215-Assignment-7 - Keywords2

# Background 
After graduating UAT, you are hired as a coder for the CIA.

The current automated programs that the CIA uses to decode enemy transmissions have always worked well until recently. Recently the enemy is using single scrambled low-tech keywords to signal other enemies to start attacks which our current code decryption programs have not been successful against.  At the CIA they are developing a new code breaking team which relies on human expertise to detect these low tech scrambled keywords. We are turning back the clock with this new team of human code breakers.  

The Code Breaker Training Simulation Program named Keywords for CIA recruits you built was a success. Now your bosses at the CIA want you to build a more challenging version for the CIA recruits. Those recruits which made it past the first round of cuts in their training.  You remember what that was like when you joined the CIA. This will be called Keywords II Code Breaker Training Simulation Program.

Hint: To do this, make sure you have read all of Chapter 4. Also in class we will be going over skills to help with this assignment. Go back and study the hangman program in Chapter 4 of your textbook. This is the program you will use to base your Code Breaker Training Simulation Program for CIA Recruits called "Keywords II" on. While from a user perspective this seem similar to your code breaking Keywords I program, from a code perspective it is very different. So be sure to study the hangman program in Chapter 4 of your textbook. Do not try to just modify your previous Keywords assignment, that won't work. Good luck Agent!

# Requirements
* By hand, choose 10 single code words of your choice, make them cool spy words.
* Create a new C++ project called Keywords2
* Copy and paste the following comments in your main() function. This is the outline of psudeo code you will use to create the structure of this C++ application. The indentions in the comments are there for a purpose to help you. Put code under each line of comments. Do not put all the comments at the top and have your code start under the last line of comments. 
```
// Display Title of program to user

// Ask the recruit to login using thier name

// Hold the recruit's name in a var, and address them by it throughout the simulation.

// Display an overview of what Keywords II is to the recruit 

// Display an directions to the recruit on how to use Keywords

 

// Create a collection of 10 words you had wrote down manually

// Create an int var to count the number of simulations being run starting at 1

// Display the simulation # is staring to the recruit. 

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
```
* Add more comments as you code, explaining your code. The more comments you have the higher your score on this assinment will be. 
* This Code Breaker Training Simulation Program should give the user directions and tell them what it is and how to use it based of the background description above. You will need to add more of an overview of what this program is and how to use it when the user starts it.
* Then your Code Breaker Training Simulation Program should randomly select 3 of the 10 words that are coded in your program.
* Unlike the first earlier version of Keywords I, you will not show the scrambled letters to the user. 
* The user gets no scrambled letters to look at.
* The user gets no hints. 
* Your code breaker will dislplay to the user
```
You have X# incorrect guesses left and keep track of them.

You've used the following letters:
```
* Now make the user try to solve each one of the three randomly picked coded words from your code list.
* After the user trys to solve the 3 randomly picked coded words from your list, you ask if the user would like another simulation. Each simulation solves 3 words. 
* Each turn you should give your user feedback on if they got the guess correct or not.
* After you have a project, publish your code to a new GitHub repository.
# Submission
* Print screen 1 play of your simulation and submit the image file.
* Print screen your GitHub repository after you have finished your project and submit it.
* Submit the .CPP file
* Do not zip these files.
* Do not submit the .sln file
* Do not submit other project files.
