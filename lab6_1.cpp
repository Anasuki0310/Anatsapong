#include<iostream>
using namespace std;

int main(){
    int number = 100;
    int evenCount = 0,oddCount = 0;
     

    while ( number != 0) {
        cout << "Enter an integer: ";
        cin >> number;
        
        if(number == 0){
            break;
        }
        
        if (number % 2 == 0){
        evenCount++;
    } if (number % 2 == 1){
        oddCount++;
    }
    }

   
    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;
    return 0;
}
