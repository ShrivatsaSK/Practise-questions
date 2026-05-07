#include<iostream>
using namespace std;

int main(){
    int num, pal, reverse, rem;
    cout <<  "Enter a number to check palindrome : ";
    cin >> num;
    pal = num;
    while(num !=0){
        rem = num%10;
        reverse = reverse * 10 + rem;
        num /=10;
    }; // reverse logic

    if (pal == reverse){
        cout << "The provided number : " << pal << " is a palindrome number !";
    }
    else if ( pal != reverse){
        cout << "The provided number : " << pal << " is not a palindrome number ";
    }
    return 0;
}