/**
 * @file Door.h
 * @author Abigail Goodwin (abby.goodwin@outlook.com)
 * @brief Defines the Door class.
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * @brief Defines a Door to be used on the game show, which contains either a goat or a prize.
 * 
 */
class Door
{
    public:
        //////////////////////////////////////////////////////////////////////
        /// Constructors
        //////////////////////////////////////////////////////////////////////

        /**
         * @brief Construct a new Door object.
         * 
         * @param containsGoat True if the door will contain a goat, false otherwise.
         */
        Door(bool containsGoat);


        //////////////////////////////////////////////////////////////////////
        /// Destructors
        //////////////////////////////////////////////////////////////////////

        /**
         * @brief Default destructor for the Door object.
         * 
         */
        ~Door();

        //////////////////////////////////////////////////////////////////////
        /// Getters
        //////////////////////////////////////////////////////////////////////
        
        /**
         * @brief Checks if the door contains a goat or not.
         * 
         * @return true The door contains a goat.
         * @return false The door doesn't contain a goat.
         */
        bool hasGoat();

        //////////////////////////////////////////////////////////////////////
        /// Setters
        //////////////////////////////////////////////////////////////////////

        /**
         * @brief Sets the door to contain (or not) a goat.
         * 
         * @param containsGoat True if the door will contain a goat; false otherwise.
         */
        void setDoor(bool containsGoat);

        //////////////////////////////////////////////////////////////////////
        /// Class Methods
        //////////////////////////////////////////////////////////////////////
    protected:

    private:
        bool containsGoat;
};