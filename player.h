#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>

class Player {
private:
    std::string name;
    std::string email;
    std::string character;

public:
    // Constructor
    Player(const std::string &name, const std::string &email, const std::string &character);

    // Function to display player information
    void displayPlayer() const;

    // Static function to register a player
    static Player registerPlayer();
};

#endif // PLAYER_H
 
