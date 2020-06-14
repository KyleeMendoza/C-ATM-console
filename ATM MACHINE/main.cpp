#include <iostream>

using namespace std;

class account {
    public:
        string username;
        int password;
        int money;
        account(string aUsername, int aPassword, int aMoney){
            username = aUsername;
            password = aPassword;
            money = aMoney;
        }
};
void Atm(int amoney){
    int money = amoney;
    int withdraw;
    int deposit;
    int pick;
    cout << "Choose Action: " << endl;
    cout << "1.Balance" << endl;
    cout << "2.Withdraw" << endl;
    cout << "3.Deposit" << endl;
    cout << "4.Exit" << endl;
    cin >> pick;
    switch(pick){
        case 1:
            cout << "Current Balance: " << money;
            break;
        case 2:
            cout << "Enter amount: " << endl;
            cin >> withdraw;
            if (withdraw % 100 == 0 && withdraw <= (money - 100)){
                money -= withdraw;
                cout << "Current Balance: " << money;
            }
            else{
                cout << "Invalid Amount";
            }
            break;
        case 3:
            cout << "Enter amount: " << endl;
            cin >> deposit;
            deposit += money;
            cout << "Current Balance: " << deposit;
            break;
        case 4:
            cout << "Thank You!";
            break;
        default:
            cout << "Invalid Entry";
    }
}




int main()
{
    account account1("kyle", 111,1000);
    account account2("matt", 222,2000);
    account account3("richard", 333,3000);
    string username;
    int password;
    int trial = 0;


    while (trial != 3){
        cout << "Welcome to ShacoATM"<< endl;
        cout << "==================="<< endl;
        cout << "Enter Username:"<< endl;
        cin >> username;
        cout << "Enter Password:"<< endl;
        cin >> password;
        if (username == account1.username && password == account1.password){
            Atm(account1.money);
        }
        else if (username == account2.username && password == account2.password){
            Atm(account2.money);
        }
        else if (username == account2.username && password == account2.password){
            Atm(account3.money);
        }
        else{
            trial++;
            cout << "Invalid Entry. Please Try Again";
        }
    };
    return 0;
};
