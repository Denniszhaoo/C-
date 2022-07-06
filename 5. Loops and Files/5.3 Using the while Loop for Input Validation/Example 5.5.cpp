#include <iostream>
using namespace std;

int main() {
    const int MIN_PLAYERS=9, MAX_PLAYERS=15;
    int players, teamPlayers, numTeams, leftOver;
    cout << "How many players do you wish per team? ";
    cin >> teamPlayers;
    while (teamPlayers<MIN_PLAYERS || teamPlayers>MAX_PLAYERS)
    {
        cout << "You should have at least " << MIN_PLAYERS << " but no more than " << MAX_PLAYERS << " per team.\n";
        cout << "How many players do you wish per team? ";
        cin >> teamPlayers;
    }
    cout << "How many players are available? ";
    cin >> players;
    while (players<0)
    {
        cout << "Please enter 0 or greater: ";
        cin >> players;
    }
    numTeams=players/teamPlayers;
    leftOver=players%teamPlayers;
    cout << "There will be " << numTeams << " teams with " << leftOver << " players left over.\n";
}

/*
 
 How many players do you wish per team? 4
 You should have at least 9 but no more than 15 per team.
 How many players do you wish per team? 12
 How many players are available? -142
 Please enter 0 or greater: 142
 There will be 11 teams with 10 players left over.

*/
