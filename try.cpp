#include <iostream>
#include <string>
#include <vector>

struct Player {
    std::string name;
    int age;
    std::string position;
};

void registerPlayer(std::vector<Player> &players) {
    Player player;

    std::cout << "Enter player's name: ";
    std::getline(std::cin, player.name);

    std::cout << "Enter player's age: ";
    std::cin >> player.age;
    std::cin.ignore(); // To ignore the newline character left in the buffer
    std::cout<<std::endl;

    players.push_back(player);
}

void displayPlayer(const Player &player) {
    std::cout << "Player Information:" << std::endl;
    std::cout << "Name: " << player.name << std::endl;
    std::cout << "Age: " << player.age << std::endl;
}

int main() {
    std::vector<Player> players;
    char choice;

    do {
        registerPlayer(players);

        std::cout << "Do you want to add another player? (y/n): ";
        std::cin >> choice;
        std::cin.ignore(); // To ignore the newline character left in the buffer
        std::cout<<std::endl;
    } while (choice == 'y' || choice == 'Y');

    // Display all registered players
    for (const auto &player : players) {
        displayPlayer(player);
        std::cout << std::endl;
    }

    return 0;
}