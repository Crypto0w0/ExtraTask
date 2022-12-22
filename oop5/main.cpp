#include <iostream>
using namespace std;

class Account{
    char* surname;
    char* number;
    double percent;
    double sum;
public:
    ~Account(){
        delete[] surname;
        delete[] number;
    }
    Account(){
        surname = nullptr;
        number = nullptr;
        percent = 0;
        sum = 0;
    }
    void Init(){
        char buf[20];
        cout << "Enter surname: ";
        cin >> buf;
        if (surname != nullptr){
            cout << "delete!!!";
        }
        surname = new char[strlen(buf) + 1];
        strcpy(surname, buf);
        
        cout << "Enter account number: ";
        cin >> buf;
        if (number != nullptr){
            cout << "delete!!!";
        }
        number = new char[strlen(buf) + 1];
        strcpy(number, buf);
        
        cout << "Enter percents: ";
        cin >> percent;
        
        cout << "Enter sum (in UAH): ";
        cin >> sum;
    }
    void changeOwner(Account& acc){
        char buf[20];
        cout << "Enter surname";
        strcpy(acc.surname, buf);
    }
    void takeCash(Account& acc){
        int userask;
        cout << "Enter how much cash you want to take: ";
        cin >> userask;
        if(userask <= acc.sum){
            acc.sum -= userask;
        }
        else cout << "Error";
    }
    void putCash(){
        int userask;
        cout << "Enter how much cash you want to put: ";
        cin >> userask;
        if(userask >= 0){
            sum += userask;
        }
        else cout << "Error";
    }
    void putPercent(){
        sum += sum / 100 * percent;
    }
    void toDollar(){
        sum /= 37;
    }
    void toEuro(){
        sum /= 40;
    }
    double toNumeral(){
        return sum;
    }
};

int main() {
    
}
