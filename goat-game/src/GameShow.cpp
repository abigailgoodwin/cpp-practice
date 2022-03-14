/**
 * @file GameShow.cpp
 * @author Abigail Goodwin (abby.goodwin@outlook.com)
 * @brief Class definitions for the GameShow class.
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "GameShow.h"
#include <stdlib.h> // rand() and srand()
#include <time.h> //time (for srand())

// Constructors & Destructors
GameShow::GameShow()
{
    this->intializeGame();
}

GameShow::~GameShow()
{
    int doorNum = 0;
    for (Door* door : this->doorList)
    {
        this->doorList[doorNum] = nullptr;
        delete door;
        doorNum++;
    }
}

// Class Methods
void GameShow::intializeGame()
{
    // Step 1: Randomly Generate the Winning Door
    int winningDoor = rand() % 3;

    // Step 2: Populate Door List with Doors
    for (int doorNum = 0; doorNum < 3; doorNum++)
    {
        if (doorNum == winningDoor)
        {
            doorList[doorNum] = new Door(false);
        }
        else
        {
            doorList[doorNum] = new Door(true);
        }
    }
}

bool GameShow::simulateGame(bool pickAgain)
{
    // Step 0: Seed Random
    srand (time(NULL));

    // Step 1: Have Player Pick a Random Door
    int playerDoorNum = rand() % 3;
    Door* playerDoor = doorList[playerDoorNum];

    // Step 2: Have Host Pick a Random Goat Door That Isn't the Player's
    int hostDoorNum = rand() % 3;
    Door* hostDoor = doorList[hostDoorNum];
    while (!hostDoor->hasGoat() && hostDoor == playerDoor)
    {
        hostDoorNum = rand() % 3;
        hostDoor = doorList[hostDoorNum];
    }

    // Step 3: Pick (or not) Again
    if (pickAgain)
    {
        // Find which door hasn't been picked
        for (int doorNum = 0; doorNum < 3; doorNum++)
        {
            if (doorNum != playerDoorNum && doorNum != hostDoorNum)
            {
                playerDoorNum = doorNum;
                break;
            }
        }

        playerDoor = doorList[playerDoorNum];
    }
    
    // Return loss or win
    return !playerDoor->hasGoat();
}