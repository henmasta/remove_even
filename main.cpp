#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "MainClass.h"

using namespace std;

int main() {
    
    int key, val, n;
    CListRemoveEveryN LREN;



    LREN.push(1);
    LREN.push(2);
    LREN.push(3);
    LREN.push(4);

    do {
        cout << "\n1 - Add element\n";
        cout << "2 - Print stack\n";
        cout << "3 - Clear stack\n";
        cout << "4 - Remove Even\n";
        cout << "ESC or 5 - Exit\n";
        cout << "Enter: ";
        
        key = cin.get();
        
        switch(key) {
            
            case '1':
            
                cout << "Enter element: ";
                cin >> val;
                LREN.push(val);
                cout << "New Stack: " << endl;
                LREN.print();
                break;

            case '2':

                LREN.print();
                break;
            case '3':
                LREN.ReleaseList();
                break;
            case '4':
                do {
                    cout << "Remove Even: ";
                    cin >> n;
                    if (!n && n < 2) cout << "UNCORRECT!";
                } while(!n && n < 2);

                LREN.remove_even(n);
                break;
            case '5':
                cout << "Goodbye)"<< endl;
                return 0;
                break;
            case '6':
                LREN.ReverseStack();
                break; 
            default:
                cout << "Invalid command";
                break;
        }
        cin.get();
        system("cls");
    } while(key != 27);

} 
