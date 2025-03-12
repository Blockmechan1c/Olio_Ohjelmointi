#include "game.h"
#include <ctime>

Game::Game(int mn)
{
    maxNumber = mn;
    cout << "maxNumber on "
        << maxNumber
         << endl;
}

Game::~Game()
{

}

void Game::play()
{
    srand(std::time(0));
    randomNumber = (rand()%maxNumber)+1;  //otetaan jakojäännös, nyt pitäisi olla välillä 1-20
    bool stayInLoop = true;
    numOfGuesses = 0;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;
        if(playerGuess == randomNumber)
        {
            cout<<"Arvasit oikein luku = "<<playerGuess<<endl;
            stayInLoop = false;
        }
        else if(playerGuess<randomNumber)
        {
            cout<<"Lukusi on liian pieni "<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri "<<endl;
        }
    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "Oikea vastaus on "
        << randomNumber
         << endl;
    cout << "Tarvitsit "
         << numOfGuesses
         << " arvausta "
         << endl;
}
