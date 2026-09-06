#include "array.h"
#include <iostream>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

template<typename T>
void menuBar() {
    array<T> arr;
    char choice;
    T element;
    int pos;
    int main() {
    int a[20], size;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++){
        cin >> a[i];
    }
    printarr(a, size);

    do {
        cout << "\nMenu:\n";
        cout << "a. Insertion at beginning\n";
        cout << "b. Insertion at position\n";
        cout << "c. Insertion at end\n";
        cout << "d. Deletion at beginning\n";
        cout << "e. Deletion at position\n";
        cout << "f. Deletion at end\n";
        cout << "g. Exit\n";
        cout << "Enter your choice: ";
        if (!(cin >> choice)) break;

        switch (choice) {
            case 'a':
                cout << "Enter element to insert: ";
                if (cin >> element) {
                    arr.insert_beg(element);
                    arr.display();
                } else {
                    cout << "Invalid element input!\n";
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                break;
            case 'b':
                cout << "Enter element: ";
                if (cin >> element) {
                    cout << "Enter 1-based position (" << arr.getLB() << " to " << arr.getUB() + 1 << "): ";
                    if (cin >> pos) {
                        arr.insert_pos(element, pos);
                        arr.display();
                    } else {
                        cout << "Invalid position input!\n";
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                } else {
                    cout << "Invalid element input!\n";
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                break;
            case 'c':
                cout << "Enter element to insert: ";
                if (cin >> element) {
                    arr.insert_end(element);
                    arr.display();
                } else {
                    cout << "Invalid element input!\n";
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                break;
            case 'd':
                arr.delete_beg();
                arr.display();
                break;
            case 'e':
                if (arr.getUB() < arr.getLB()) {
                    cout << "Array is empty!\n";
                } else {
                    cout << "Enter 1-based position to delete (" << arr.getLB() << " to " << arr.getUB() << "): ";
                    if (cin >> pos) {
                        arr.delete_pos(pos);
                        arr.display();
                    } else {
                        cout << "Invalid position input!\n";
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                break;
            case 'f':
                arr.delete_end();
                arr.display();
                break;
            case 'p':
                arr.display();
                break;
            case 'g':
                cout << "Exiting menu.\n";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
    } while (choice != 'g');
}

int main() {
    int dtype;
    cout << "Choose the datatype:\n";
    cout << "1. Integer\n2. Float\n3. Double\n4. Char\n";
    cout << "Choice: ";
    if (cin >> dtype) {
        switch (dtype) {
            case 1: menuBar<int>(); break;
            case 2: menuBar<float>(); break;
            case 3: menuBar<double>(); break;
            case 4: menuBar<char>(); break;
            default: cout << "Invalid datatype selection.\n"; break;
        }
    } else {
        cout << "Invalid input.\n";
    }

    return 0;
}
