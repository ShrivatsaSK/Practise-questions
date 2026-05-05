#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int a, n, sum;
    cout <<"Enter start number : ";
    cin >> a;
    cout<<"Enter end number : ";
    cin >> n;
    for (int i=a+1; i<=n; i++){
        sum += i;
    }
    cout << "Sum of numbers until N : " << sum <<endl;
    return 0;
}