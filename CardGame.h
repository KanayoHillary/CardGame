/**
 * @file cardgame.h
 * @brief Header file for the CardGame class
 * @author Okade Kanayo - 21143935
 * @date 12/17/2022
 */

#ifndef CARDGAME_H
#define CARDGAME_H
#include <iostream>
#include <vector>
using namespace std;

const int MAX_NUMBER_SETS = 10;
const int MAX_NUMBER_PLAYERS = 14;

/**
 * @class CardGame
 * @brief A class representing a card game
 */
class CardGame
{
public:
  /**
   * @brief Constructor for CardGame
   * @details Creates a new CardGame with the specified number of players and sets
   * @param numberPlayers The number of players in the game
   * @param numberSets The number of sets in the game
   */
  CardGame(int numberPlayers, int numberSets);

  /**
   * @brief Default constructor for CardGame
   * @details Creates a new CardGame with a default number of players and sets
   */
  CardGame();

  /**
   * @brief Destructor for CardGame
   * @details Deletes the CardGame object and frees any associated memory
   */
  ~CardGame();

  /**
   * @brief Displays the decks of all players
   * @details Iterates through the playersDeck vector and calls the display() method
   *          for each Deck object
   */
  void displayPlayerDecks();

  /**
   * @brief Plays the card game
   * @details Implements the logic for playing the game and returns the index of the winning player
   * @return The index of the winning player in the playersDeck vector
   */
  int playGame();

  /**
   * @brief Deals cards to the players
   * @details Distributes the cards in the shuffledDeck among the players in the playersDeck vector
   */
  void dealCards();

  /**
   * @brief Creates the players' decks
   * @details Initializes the playersDeck vector with empty Deck objects
   */
  void createPlayersDeck();

  /**
   * @var playersDeck
   * @brief Vector of Deck objects representing the decks of all players
   */
  vector<Deck> playersDeck;

  /**
   * @var shuffledDeck
   * @brief The beginning shuffled Deck
   */
  Deck shuffledDeck;

  /**
   * @var playedDeck
   * @brief The deck with cards already played
   */
  Deck playedDeck;

private:
  /**
   * @var numberPlayers
   * @brief The number of players in the game
   */
  int numberPlayers;

  /**
   * @var numberSets
   * @brief The number of sets in the game
   */
  int numberSets;
};
#endif
