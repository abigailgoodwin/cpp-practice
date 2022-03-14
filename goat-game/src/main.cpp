#include "main.h"

int main()
{
    // Percent Win Rate (%)
    double noPickWinRate = 0.0;
    double pickAgainWinRate = 0.0;
    
    // Number of Games to Simulate (Each)
    const int NUM_GAMES_TO_SIMULATE = 1000;

    for (int gameNum = 0; gameNum < NUM_GAMES_TO_SIMULATE; gameNum++)
    {
        // Generate Game
        GameShow* game = new GameShow();

        // Simulate games
        noPickWinRate += (game->simulateGame(true) ? 1.0 : 0.0);
        pickAgainWinRate += (game->simulateGame(false) ? 1.0 : 0.0);

        // Delete Game
        delete game;
    }

    // Generate AVG for each Choice
    noPickWinRate /= NUM_GAMES_TO_SIMULATE;
    pickAgainWinRate /= NUM_GAMES_TO_SIMULATE;

    // Output Results
    printf("Win % If You Pick Again: %.2d%", pickAgainWinRate);
    printf("Win % If You Don't Pick Again: %.2d%", noPickWinRate);

    return 0;
}