#include<bits/stdc++.h>
using namespace std;

struct Customer
{
    int account_no;
    string name;
    int balance;
};

void getCustomers(Customer data[], int n) {
    cout << "Enter the Customers Name, Account number and Balance";
    for(int i=0; i<n; i++) {
        cin >> data[i].account_no;
        cin >> data[i].name;
        cin >> data[i].balance;
    }
}

void BalanceLess100(Customer data[], int n) {
    cout << "\nCustomers who has Balance less than 100 " << endl;
    for(int i=0; i<n; i++) {
        if(data[i].balance > 100) {
            cout << data[i].account_no << "         " << data[i].name << "       " << data[i].balance << endl;
        }
    }
}

void Display(Customer data[], int n) {
    cout << "\nList of all the Customers " << endl;
    for(int i=0; i<n; i++)
        cout << data[i].account_no << "         " << data[i].name << "       " << data[i].balance << endl;
}

int search(Customer data[], int s, int number) {
    int i;
    for (i = 0; i < s; i++) {
        if (data[i].account_no == number)
            return i;
    }
    return  - 1;
}

void Withdraw(Customer data[], int n, int AC_num, int amt) {
    int i = search(data, n, AC_num);
    if(i == -1) {
        cout << "Record not found\n" ;
        return;
    }
    else if(data[i].balance < amt) {
        cout << "Insufficient Balance " << endl;
        return;
    }
    data[i].balance = data[i].balance - amt;
    cout << "Withdraw Successfull " << endl;
    cout << "Remaning Balance " << data[i].balance << endl;
}

void Deposit(Customer data[], int n, int AC_num, int amt) {
    int i = search(data, n, AC_num);
    if (i ==  - 1)
        cout << "Record not found\n";
    else {
        data[i].balance += amt;
        cout<< "\n Amount Deposited Successfull " << endl;
    }
}

int main() {
    int choice, n=3, AC_num, amt, index;
    cout<< "Enter Number of Customers ";
    cin >> n;
    Customer *data = (Customer *)malloc(n*sizeof(Customer));
    getCustomers(data, n);
    
    do {
        cout<<"<-----*  Banking System  *----->"<<endl;
        cout<<endl;
        cout<<"Enter"<<endl;
        cout<<"     1. Customers who has Balance greater than 100" << endl;
        cout<<"     2. List of all the Customers " << endl;
        cout<<"     3. Search amount " << endl;
        cout<<"     4. Withdraw amount " << endl;
        cout<<"     5. Deposit amount " << endl;
        cout<<"     0. Exit " << endl;
        cout<<"Enter You choice between (0-5) ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                BalanceLess100(data, n);
                break;
            case 2:
                Display(data, n);
                break;
            case 3:
                cout << "Enter account number to search : ";
                cin >> AC_num;
                index = search(data, n, AC_num);
                if (index ==  - 1) 
                    printf("Record not found : ");
                else 
                    cout << "A/c Number: %d\nName: %s\nBalance: %d\n",
                        data[index].account_no, data[index].name,
                        data[index].balance ;
                break;
            case 4:
                cout << "Enter the Account number ";
                cin >> AC_num;
                cout << "Enter the amout you want to Withdraw ";
                cin >> amt;
                Withdraw(data, n, AC_num, amt);
                break;
            case 5:
                cout << "Enter the Account number ";
                cin >> AC_num;
                cout << "Enter the amout you want to Deposit ";
                cin >> amt;
                Deposit(data, n, AC_num, amt);
                break;
        }
    } while (choice != 0);
    return 0;
}