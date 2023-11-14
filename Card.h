/**
 * @file card.h
 * @brief Header file for the Card class
 * @author Okade Kanayo - 21143935
 * @date 12/17/2022
 */

#ifndef CARD_H
#define CARD_H
#include <iostream>
using namespace std;

/**
 * @enum Rank
 * @brief Enum representing the rank of a card
 */
enum Rank
{
  Two,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eight,
  Nine,
  Ten,
  Jack,
  Queen,
  King,
  Ace
};

/**
 * @enum Suit
 * @brief Enum representing the suit of a card
 */
enum Suit
{
  SPA,
  HRT,
  CLB,
  DIA
};

/**
 * @class Card
 * @brief A class representing a playing card
 */
class Card
{
public:
  /**
   * @brief Default constructor for Card
   * @details Creates a blank Card object
   */
  Card();

  /**
   * @brief Constructor for Card
   * @details Creates a Card object with the specified rank and suit
   * @param rank The rank of the card
   * @param suit The suit of the card
   */
  Card(Rank rank, Suit suit);

  /**
   * @brief Destructor for Card
   * @details Deletes the Card object and frees any associated memory
   */
  ~Card();

  /**
   * @brief Gets the suit of the card
   * @details Returns the integer value representing the suit of the card
   * @return The suit of the card
   */
  int getSuit();

  /**
   * @brief Gets the rank of the card
   * @details Returns the integer value representing the rank of the card
   * @return The rank of the card
   */
  int getRank();

  /**
   * @brief Sets the suit of the card
   * @details Sets the integer value representing the suit of the card
   * @param suit The new suit of the card
   */
  void setSuit(int suit);

  /**
   * @brief Sets the rank of the card
   * @details Sets the integer value representing the rank of the card
   * @param rank The new rank of the card
   */
  void setRank(int rank);

  /**
   * @brief Displays the card
   * @details Outputs the rank and suit of the card to the console
   */
  void displayCard();

  /**
   * @brief Stream extraction operator overload for Card
   * @details Allows outputting a Card object to a stream (e.g. cout << card)
   * @param os The output stream to write to
   * @param card The Card object to output
   * @return The modified output stream
   */
  friend ostream &operator<<(ostream &os, const Card &card);

  /**
   * @var rank
   * @brief The rank of the card
   */
  Rank rank;

  /**
   * @var suit
   * @brief The suit of the card
   */
  Suit suit;
};
#endif