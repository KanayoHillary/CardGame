/**
 * @file carddeck.h
 * @brief Header file for the Deck class
 * @author Okade Kanayo - 21143935
 * @date 12/17/2022
 */

#ifndef __DECK_H
#define __DECK_H

#include "card.h"
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * @class Deck
 * @brief A class representing a deck of cards
 */
class Deck
{
private:
  /**
   * @var deckSize
   * @brief The size of the deck (52 cards)
   */
  enum
  {
    deckSize = 52
  };

  /**
   * @var deck
   * @brief Vector of Card objects representing the deck of cards
   */
  vector<Card> deck;

  /**
   * @var setNumber
   * @brief The set number of the deck
   */
  int setNumber = 1;

  /**
   * @var MIN_SET_CARDS
   * @brief The minimum number of cards in a set
   */
  int MIN_SET_CARDS = 1;

  /**
   * @var MAX_SET_CARDS
   * @brief The maximum number of cards in a set
   */
  int MAX_SET_CARDS = 10;

public:
  /**
   * @brief Constructor for Deck
   * @details Creates a new empty Deck object
   */
  Deck();

  /**
   * @brief Constructor for Deck with set number
   * @details Creates a new Deck object with the specified set number
   * @param setNumber The set number of the deck
   */
  Deck(int setNumber);

  /**
   * @brief Copy constructor for Deck
   * @details Creates a new Deck object as a copy of the specified Deck object
   * @param otherDeck The Deck object to copy
   */
  Deck(const Deck &otherDeck);

  /**
   * @brief Destructor for Deck
   * @details Deletes the Deck object and frees any associated memory
   */
  ~Deck();

  /**
   * @brief Shuffles the deck of cards
   * @details Uses the std::random_shuffle function to shuffle the cards in the deck
   */
  void shuffleDeck();

  /**
   * @brief Displays the deck of cards
   * @details Iterates through the deck and calls the display() method for each Card object
   */
  void displayDeck();

  /**
   * @brief Creates an empty deck of cards
   * @details Initializes the deck vector with empty Card objects
   */
  void createEmptyCardDeck();

  /**
   * @brief Creates an initialized deck of cards
   * @details Initializes the deck vector with Card objects representing a full set of cards
   * @param setNumber The set number of the deck
   */
  void createInitialisedCardDeck(int setNumber);

  /**
   * @brief Initializes the deck with cards from another deck
   * @details Copies the cards from the specified deck into this deck
   * @param setNumber The set number of the deck
   * @param duck The deck to copy cards from
   */
  void initialiseCardDeck(int setNumber, Deck deck);

  /**
   * @brief Moves all cards from one deck to another
   * @details Copies all the cards from the mainDeck into the copyDeck, and then clears the mainDeck
   * @param mainDeck The deck to copy cards from
   * @param copyDeck The deck to copy cards to
   */
  void moveAllCards(Deck &mainDeck, Deck &copyDeck);

  /**
   * @brief Deletes the deck of cards
   * @details Clears the deck vector and frees any associated memory
   */
  void deleteCardDeck();

  /**
   * @brief Gets the number of cards in the deck
   * @details Returns the size of the deck vector
   * @return The number of cards in the deck
   */
  int const getNumberOfCards();

  /**
   * @brief Gets the top card in the deck
   * @details Returns the top card in the deck (the last element in the deck vector)
   * @return The top card in the deck
   */
  Card getTopCard();

  /**
   * @brief Gets a card from the deck
   * @details Returns the card at the specified index in the deck vector
   * @param number The index of the card to get
   * @return The card at the specified index
   */
  Card getACard(int number);

  /**
   * @brief Looks at a card in the deck without removing it
   * @details Returns the card at the specified index in the deck vector without removing it from the deck
   * @param number The index of the card to look at
   * @return The card at the specified index
   */
  Card lookAtCard(int number);

  /**
   * @brief Adds a card to the deck
   * @details Appends the specified card to the end of the deck vector
   * @param card The card to add to the deck
   */
  void addCard(Card card);

  /**
   * @brief Gets the deck of cards
   * @details Returns the vector of Card objects representing the deck of cards
   * @return The deck of cards
   */
  vector<Card> getDeck();

  /**
   * @brief Sets the deck of cards
   * @details Replaces the current deck of cards with the specified vector of Card objects
   * @param deck The new deck of cards
   */
  void setDeck(vector<Card> deck);
};
#endif