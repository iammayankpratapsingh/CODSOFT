/*Task 1 : Create a program that generates a random number and asks the user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

/*This software asks the user to predict a random number between 1 and 1000 once it has generated it.
Feedback on the user's predictions is provided, and the game continues until the user correctly guesses the number.*/

#include <iostream>
#include <time.h>                   //Provides the srand() function for generating random numbers.
using namespace std;

int main()
{
    int num, userNum, count = 1;
    srand(time(0));                  //the random number generator with the current time.
    num = rand() % 1000 + 1;         //Generate a random number between 1 and 1000.

    cout << "------------------------------Guess The Number Betwee 1 T0 1000 !!!---------------------------------------------" << endl;
    do                               //Do-while loop that continues until the user guesses the correct number.
    {
        cout << "Enter Input Here : ";
        cin >> userNum;

        if (userNum > num)           //Verify to see if the user's guess is greater or less than the random number
        {
            cout << "Lower Number Please !!!\n\n";
        }
        else if (userNum < num)
        {
            cout << "Higher Number Please !!!\n\n";
        }
        else
        {
            cout << "You Guessed The Number In " << count << " Attempts...\n";
        }
        count++;
    } while (userNum != num);
}