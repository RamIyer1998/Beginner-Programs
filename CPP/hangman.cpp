#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    char charGuess;
    int looper = 0;
    string guess = "Luck is a farce";
    string hangman(guess.size(), ' ');
    cout << guess.size() << endl;
    cout << hangman.size() << endl;
    cout << "You can get 5 incorrect char guesses to get the string! Good luck!" << endl;
    while(hangman != guess)
    {
      looper = 0;
      cout << "Enter your letter: ";
      cin >> charGuess;
      for(int i = 0; i < guess.size(); i++)
      {
        if(guess.at(i) == charGuess)
        {
          
          hangman.replace(i, 1, 1, charGuess);
          cout << hangman << endl;
          looper++;
        } 
      }
      cout << looper << endl;
      cout << hangman << endl;
      if(looper == 0)
      {
        count++;
        cout << "Nope! None of that here!" << endl;
      }
      if(count == 5)
      {
        cout << hangman << " Sorry! Try again next time!" << endl;
        return 0;
      }
    }
    cout << "Congrats!" << endl;
    return 0;

}
