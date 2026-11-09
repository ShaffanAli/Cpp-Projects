#include <iostream>
#include <string>
using namespace std;

double totalIncome = 0;
double totalExpenses = 0;

void recordTransaction(){
    string category;
    double amount;
    cout << "Enter Category: ";
    cin >> category;
    cout << "Enter Amount (+Income / -Expense): ";
    cin >> amount;
    cout << "\nTransaction Details\n";
    cout << "Category: " << category << endl;
    cout << "Amount: " << amount << endl;
    if (amount > 0)
    {
        totalIncome+= amount;
        cout << "Type: Income" << endl;
    }
    else
    {
        totalExpenses+= -amount;
        cout << "Type: Expense" << endl;
    }
}
void viewExpenses(){
    cout << "\nTotal Expenses: " << totalExpenses << endl;
}
void viewIncome(){
    cout << "\nTotal Income: " << totalIncome << endl;
}
void viewBudget(){
    double budget = totalIncome - totalExpenses;

    cout << "\nTotal Income: " << totalIncome << endl;
    cout << "Total Expenses: " << totalExpenses << endl;
    cout << "Budget: " << budget << endl;
}
int main(){
    int choice;

    do{
        cout << "\n===== Personal Finance Tracker =====" << endl;
        cout << "1. Record Transaction" << endl;
        cout << "2. View Expenses" << endl;
        cout << "3. View Income" << endl;
        cout << "4. View Budget" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            recordTransaction();
            break;

        case 2:
            viewExpenses();
            break;

        case 3:
            viewIncome();
            break;

        case 4:
            viewBudget();
            break;

        case 5:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}