#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Player {
    string name, email, character;
    
};

//get player information
void registerPlayer(vector<Player> &players) {
    Player player;
    char decision;

    cout << "Enter player's name: ";
    getline(cin, player.name);

    cout << "Enter player's email: ";
    cin >> player.email;
    cin.ignore(); // To ignore the newline character left in the buffer
    cout<<endl;

    cout<<"Characters: "<<endl;
    cout<<"|| XWing || Tiefighter || Soullessone ||"<<endl;
    cout << "Enter character choice "<<endl;
    getline(cin,player.character);
    
    
    cout<<endl;

    players.push_back(player);
}

//display player information
void displayPlayer(const Player &player) {
    cout << "Registered Player Information:" << endl;
    cout << "Name: " << player.name << endl;
    cout << "Email: " << player.email << endl;
    cout << "Character: " << player.character <<endl;
}


int main() {
    vector<Player> players;
    char choice;

    //add players
    do {
        registerPlayer(players);

        cout << "Would you like to register more players? (y/n): ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character left in the buffer
        cout<<endl;
    } while (choice == 'y' || choice == 'Y');

    // Display all registered players
    for (const auto &player : players) {
        displayPlayer(player);
        cout <<endl;
    }

    return 0;
}
