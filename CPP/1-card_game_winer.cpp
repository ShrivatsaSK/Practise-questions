// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int cardvalue(string card){
    if(card=="A") return 1;
    if(card=="K") return 13;
    if(card=="Q") return 12;
    if(card=="J") return 11;
    return stoi(card);
}
int main() {
    int TC=0, MK=0, result=0;
    string card;
    cout << "Enter player 1 cards played (spae seperated):";
    for(int i=0; i<52; i++){
        cin >> card;
        TC += cardvalue(card);
    }
    cout << "Enter player 2 cards played (spae seperated):";
    for (int j=0; j<52; j++){
        cin>>card;
        MK += cardvalue(card);
    }
    result = TC - MK;
    if (result > 0) {
        cout << "Player 1 won the game by " << result << " points " <<endl;
    }
    else if (result < 0) {
        cout <<"Player 2 won the game by " << abs(result) << " points " << endl; // abs() is used to print negative number as positive
    }
    else if (result == 0) {
        cout <<" The game is a Tie" << endl;
    }
    return 0;
}