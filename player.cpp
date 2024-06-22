#include "Player.h"

// Constructor implementation
Player::Player(const std::string &name, const std::string &email, const std::string &character)
    : name(name), email(email), character(character) {}

// Function to display player information
void Player::displayPlayer() const {
    std::cout << "Registered Player Information:" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Character: " << character << std::endl;
}

// Static function to register a player
Player Player::registerPlayer() {
    std::string name, email, character;

    std::cout << "Enter player's name: ";
    std::getline(std::cin, name);

    std::cout << "Enter player's email: ";
    std::cin >> email;
    std::cin.ignore(); // To ignore the newline character left in the buffer
    std::cout << std::endl;

    std::cout << "Characters: " << std::endl;
    std::cout << "|| XWing || Tiefighter || Soullessone ||" << std::endl;
    std::cout << "Enter character choice: ";
    std::getline(std::cin, character);

    std::cout << std::endl;

    return Player(name, email, character);
}
