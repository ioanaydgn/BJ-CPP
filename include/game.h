#ifndef GAME_H
#define GAME_H


#include "deck.h"
#include "dealer.h"
#include "player.h"
#include "print.h"
#include "statistics.h"
#include <string>

class Game{

    private:
        Player player;   // Player in the game (user)
        Dealer dealer;   // Dealer in the game
        Deck deck;       // Deck of cards in the game
        Statistics s;    // Leaderboard

    public:
        Game();
        bool dealDealer();
        char compareSum();
        bool checkWins();
        char checkEnd();
        bool startBet();
        bool startGame();
        void beginGame();
        void beginMenu(bool rep, std::string message);
        void saveGame();
        void loadGame();
        void printStatistics();
        void printInstructions();
        void printTop();
        void printBody();
};

#endif // GAME_H
