#include <iostream> 
using namespace std;

void showMenu(){
    cout << "**********MENU**********\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "************************\n";

}

int main(){

    // check balance, deposit, withdraw, show menu
    int option; 
    double balance = 500;

    do{
    showMenu();
    cout << "Enter Choice: ";
    cin >> option;
    system("clear");
    
    switch(option){
        case 1:
            cout << "Balance is $" << balance << "\n";
            break;
        case 2:
            cout << "Deposit amount: $";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            cout << "Withdraw amount: $";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance){
                balance -= withdrawAmount;
            } else{
                cout << "Not enough money\n";
            }
            
            break;
    }
    } while (option!= 4);


    system("pause>0");
}