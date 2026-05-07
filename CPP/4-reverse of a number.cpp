#include<iostream>
using namespace std;

int main(){
    int num, reverse, rem;
    cout <<  "Enter a number to be reversed : ";
    cin >> num;
    while(num !=0){
        rem = num%10;
        reverse = reverse * 10 + rem;
        num /=10;
    }; // reverse logic
    cout << "The revered number is : " << reverse ;
    return 0;
}