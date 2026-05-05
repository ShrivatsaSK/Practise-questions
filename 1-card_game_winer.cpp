#include <iostream>
#include <stdio.h>
using namespace std;

//Creating a dictionary
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
    for(int i=0; i<52; i++){
        cin >> card;
        TC += cardvalue(card);
    }
    for (int j=0; j<52; j++){
        cin>>card;
        MK += cardvalue(card);
    }
    result = TC - MK;
    cout << result <<endl;
    return 0;
}