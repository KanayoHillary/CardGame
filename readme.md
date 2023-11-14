# C++ CardGame

Overview:

Part 1: Class Card
The first part of this project is to develop a class for a card: 
• Develop a specification for your class Card – decide what “services” your class provides, 
i.e. what member methods your class should have. Make sure to write down (and submit!) 
your specification with your solution.
• Implement your class Card in C++ (make sure to distribute your code over suitable files 
and properly format and comment your code). Include constants to model the suit (Club, 
Spade, Heart, Diamond) and value (Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, 
Jack, Queen, King, Ace) of a card. I suggest to use an enumeration type for this purpose.

Part 2: Class CardDeck
The second part is to implement a class CardDeck. Please implement the outlined services
below. If you wish to add more functions to the class feel free to do so. However, the outlined 
services must be part of your class. Note: Your class CardDeck must support the use of an 
arbitrary number of sets of cards – you must use a dynamic STL container class.
CardDeck Services:
createEmptyCardDeck(): Creates an empty deck of cards, ie. deck of cards with no cards.
Pre: none
Post: Empty deck of cards exist.
createInitialisedCardDeck(setNum): Creates a deck of cards initialised with the specified 
number of sets of cards. Sets of cards are stored in an ordered fashion (see initialiseCardDeck)
Pre: none

The task is to write a simple card game. The rules of the game are as follows: Each player 
initially gets 7 cards – the remaining cards are put “face down” in a stack on the table (the 
hidden stack). The top card of the stack is turned face up next to the hidden stack. Each player 
puts down a card from his hand – this card must match the topmost open card either in suit 
or value – i.e. if the top card is Spade-Five a player can play any other card of suit Spade or any 
other suit with value Five (Club-Five, Heart-Five or Diamond-Five). If a player is unable to play 
any card, s/he is picking up a card from the hidden stack and the game moves to the next 
player. Players that pick up a card cannot play this card until it is their turn again. The game is 
finished if one of the players has no cards left on his/her hand. If the hidden stack is empty 
before any player has an empty hand, the played cards are taken, shuffled and then used as 
the new hidden deck.

Projects must compile (using g++, C++20 standard), run on Ubuntu Linux and must be 
developed using the Codelite IDE. 


Post: Initialised deck of card exist or an error is indicated if sufficient resources not available
deleteCardDeck(): Deletes a deck of cards.
Pre: deck is a valid instantiation of the CardDeck.
Post: The CardDeck deck is removed from memory.
initialiseCardDeck(setNum): initialises the CardDeck deck with setNum sets of cards (each set 
contains 52 cards). Sets of cards are stored in an ordered fashion, from club Ace down to club 
Two, Spade Ace down to spade Two, etc. (in order Club, Spade, Heart, Diamond and then Ace 
down to Two). If multiple sets are used, all cards of the first set are stored first, followed by all 
cards of the second set etc. If the set already contains any cards, these are discarded.
Pre: deck is a valid instantiation of CardDeck.
.............................................................................................................
Post: deck contains setNum ordered sets of cards or an error is indicated if sufficient resources 
not available.

getNumberOfCards(): Returns the number of cards in the deck.
Pre: deck is a valid instantiation of CardDeck.
Post: The CardDeck deck remains unchanged. The number of cards in the deck is returned.

getTopCard(): Returns (and removes) the topmost card of the deck.
Pre: deck is a valid instantiation of CardDeck.
Post: If cards are available on the deck, the topmost card is returned and removed from the 
deck. If the deck is empty, a “dummy” card is returned.

getACard(number): Returns (and removes) the number-th card of the deck (from the top).
Pre: deck is a valid instantiation of CardDeck.
Post: If deck contains more cards than number, the number-th card is returned and removed 
from the deck. If number refers to a non-existent card, an error is indicated.

lookAtCard(number): Returns (but leaves it in the deck) the number-th card of the deck.
Pre: deck is a valid instantiation of CardDeck.
Post: If deck contains more cards than number, the number-th card is returned from the deck. 
The returned card remains in the deck, i.e. the deck is not modified. If number refers to a nonexistent card, an error is indicated.

emptyCardDeck(): Removes all cards from the deck.
Pre: deck is a valid instantiation of the CardDeck.
Post: The CardDeck is empty.

moveAllCards(source, destination): Moves all cards from the CardDeck source to CardDeck 
destination.
Pre: source and destination are valid instantiations of CardDeck.
Post: All cards have been moved from source (which now is empty) to destination (which now 
contains additionally all cards previously in source)

addCard(card): Adds the card to the top of the deck.
Pre: deck is a valid instantiation of CardDeck, card is a valid Card.
Post: Card has been added to the top of deck (number of cards in deck has increased by one).

shuffleDeck(deck): Shuffles the content of a deck.
Pre: deck is a valid instantiation of CardDeck.
Post: The order of the cards in the deck is shuffled – no cards are removed or added.
Instructions
1. Create a folder for all your files and name it after your student ID (either one group 
member or a concatenation of all group members).
2. Define a class CardDeck – make sure you use a proper set of constructors/destructor. 
3. Your class CardDeck must support the use of an arbitrary number of sets of cards – thus, 
a static array is not sufficient to store the cards in the deck. You must use a dynamic 
container class from the Standard Template Library (STL) for this purpose. A single set of 
cards consists of 52 cards, one of each suit/value pair, i.e. Diamond Two up to Diamond 
Ace, Heart Two up to Heart Ace, Spade Two up to Spade Ace and Club Two up to Club Ace. 
4. Implement all services as per above specification. (Hint: creation of a shuffled deck can be 
obtained by using a second (empty) deck, removing random cards from the original deck 
and adding them to the second deck. Finally, just remove cards from the second deck back 
to the original deck).
5. You must use exception handling to deal with errors (e.g. negative number of decks, 
insufficient memory etc.).


Part 3: Card Game
Create a class (not a main() function!) that implements the game outlined above for two to 10
players (feel free to support a larger or a flexible upper limit) as follows (note that all players 
are simulated by the computer and that no “intelligence” is required): 
• Initially, prompt the user about the number of sets of cards that are used for the game. 
• Then prompt for the number of players that will play the game.
• Create an initialised and shuffled deck (with the requested number of sets of cards).
• Create several empty decks of cards (or create a player class that has a deck of cards), one 
for each player and one to hold the played cards. 
• Deal out 7 cards to each player by picking them from the beginning of the shuffled deck –
give one card to each player in turn, i.e. the first card in the shuffled deck goes to the first 
player, the second card to the second player, the third card again to the first player and so 
on (assuming two players). 
• Simulate game: Remove the topmost card from shuffled deck to the “played card deck”. 
o If player one has a matching card, let player one play this card (remove it from his 
hand and move it to the played card deck – there is no need for any intelligent 
behaviour: just use the first card in the hand that matches the played deck). 
o If player one has no matching card, s/he picks the topmost card from the shuffled 
deck and adds it to deck of cards modelling the player. 
o Also, print a message to the screen, either “Player one played card xxx” or “Player 
one takes a card from the shuffled deck”. If a player takes a card, also print all cards 
in the player’s hand. 
• Afterwards, do the same for all other players in turn. 
• Keep iterating until the game is over. 
• If at any point in the game the hidden deck is empty, transfer the played cards to the 
hidden deck and shuffle it. However, the last played card remains in the played card deck.

• The first player that is able to remove all cards from his/her hand wins the game. If no 
player is able to remove all cards after the hidden deck has been emptied five times, the 
game is a draw. 
• Add a main() that creates an object of your game class and calls the “play game” method.
