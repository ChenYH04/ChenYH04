#include "Player.h"

int main() {
    std::vector<Player> players;
    char choice;

    // Add players
    do {
        players.push_back(Player::registerPlayer());

        std::cout << "Would you like to register more players? (y/n): ";
        std::cin >> choice;
        std::cin.ignore(); // To ignore the newline character left in the buffer
        std::cout << std::endl;
    } while (choice == 'y' || choice == 'Y');

    // Display all registered players
    for (const auto &player : players) {
        player.displayPlayer();
        std::cout << std::endl;
    }

    return 0;
}
