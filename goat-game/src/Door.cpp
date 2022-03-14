/**
 * @file Door.cpp
 * @author Abigail Goodwin (abby.goodwin@outlook.com)
 * @brief Definitions for the Door class.
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Door.h"

//////////////////////////////////////////////////////////////////////
/// Constructors/Destructors
//////////////////////////////////////////////////////////////////////
Door::Door(bool containsGoat)
{
    this->containsGoat = containsGoat;
}

Door::~Door()
{
    // Do nothing.
}

//////////////////////////////////////////////////////////////////////
/// Getters & Setters
//////////////////////////////////////////////////////////////////////
bool Door::hasGoat()
{
    return this->containsGoat;
}

void Door::setDoor(bool containsGoat)
{
    this->containsGoat = containsGoat;
}
