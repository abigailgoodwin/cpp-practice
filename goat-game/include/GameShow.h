/**
 * @file Gameshow.h
 * @author Abigail Goodwin (abby.goodwin@outlook.com)
 * @brief Defines the Gameshow class.
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Door.h"

/**
 * @brief Defines the GameShow, which will simulate a given "Goat Game".
 * 
 */
class GameShow
{
    public:
        // Constructors
        GameShow();
        ~GameShow();

        // Class Methods
        /**
         * @brief Simulates the game and returns if the player won or not.
         * 
         * @param pickAgain Whether or not the player will pick another door.
         * @return true The player picked the right door.
         * @return false The player lost by picking a goat door.
         */
        bool simulateGame(bool pickAgain);

    protected:

    private:
        // Attributes
        /**
         * @brief Each game will hold three doors, 2 of which hold goats.
         * 
         */
        Door* doorList[3];

        // Methods
        /**
         * @brief Generates the three doors for the game.
         * 
         */
        void intializeGame();
};