//
//  main.cpp
//  rps.cpp
//
//  Created by shawn murray on 10/20/15.
//  Copyright © 2015 shawn murray. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    // declaring the variables
    string player1, player2;
    string rock, paper, scissors;
    
    string r = rock;
    string p = paper;
    string s = scissors;
    
    string play_again;
    string play_game;
    
    int player1_score = 0, player2_score = 0;
    int value = 0;
    
    
    //cout << "Would you like to play Rock, Paper or Scissors? ";
    //cin >> play_game;
    
    do {
        
        player1_score = player1_score + value;
        player2_score = player2_score + value;
        
        cout << "Player1's score: " << player1_score << endl;
        cout << "Player2's score: " << player2_score << endl;
        
        
        
        // Getting the input for player1
        cout << "Player 1, please enter either (R)ock, (P)aper or (S)cissors: " << player1;
        cin >> player1;
        
        // Getting player2's input
        cout << "Player 2, please enter either (R)ock, (P)aper or (S)cissors: " << player2;
        cin >> player2;
        
        // Making sure the players inputted the correct values
        if ((player1 != "r" && player1 != "p" && player1 != "s") || (player2 != "r" && player2 != "p" && player2 != "s")) {
            cout << "Thats an incorrect input. Please enter the designated values of R, P, or S.";
        }
        
        
        // Determining whether player two beats player one
        if (player1 == "r" && player2 == "p"){
            cout << "Player 2 wins this round.";
            player2_score++;
        }
        
        if (player1 == "p" && player2 == "s") {
            cout << "Player 2 wins this round.";
            player2_score++;
        }
        
        if (player1 == "s" && player2 == "r") {
            cout << "Player 2 wins this round.";
            player2_score++;
        }
        
        // Now determining whether player one beats player two
        if (player1 == "p" && player2 == "r"){
            cout << "Player 1 wins this round.";
            player1_score++;
        }
        
        if (player1 == "s" && player2 == "p") {
            cout << "Player 1 wins this round.";
            player1_score++;
        }
        
        if (player1 == "r" && player2 == "s") {
            cout << "Player 1 wins this round.";
            player1_score++;
        }
        
        if (player1 == player2) {
            cout << "Tie game";
        }
         
        
        cout << "Would you like to play again ";
        cin >> play_again;
        
        
    } while (play_again == "Y" || play_again == "y");
    
        if (play_again == "N" || play_again == "n") {
            if (player1 > player2) {
                cout << "Player1 wins!" << endl;
            }
            if (player1 < player2) {
                cout << "Player2 wins!" << endl;
            }
        }
    
    
    return 0;
}
