#include "array.cpp"

int main()
{
    char opt;
    int choice;
    int position, element, lower, upper;
    array<int> arr;

    do
    {
        cout << "\n--- Menu ---\n";
        cout << "1. Create array\n";
        cout << "2. Insertion at beginning\n";
        cout << "3. Insertion specific position\n";
        cout << "4. Insertion at end\n";
        cout << "5. Deletion from beginning\n";
        cout << "6. Deletion at specific position\n";
        cout << "7. Deletion from end\n";
        cout << "8. Display the array elements\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the lower bound: ";
                cin >> lower;
                arr.setLB(lower);
                cout << "Enter the upper bound: ";
                cin >> upper;
                arr.setUB(upper);
                arr.create();
                break;

            case 2:
                cout << "Enter the element: \n";
                cin >> element;
                arr.insert_beg(element);
                break;

            case 3:
                cout << "enter the position(" << arr.getLB() << "--" << arr.getUB() << ")";
                cin >> position;
                cout << "Enter the element: \n";
                cin >> element;
                arr.insert_pos(position, element);
                break;

            case 4:
                cout << "Enter the element: \n";
                cin >> element;
                arr.insert_end(element);
                break;

            case 5:
                arr.delete_beg();
                break;

            case 6:
                cout << "Enter the position(" << arr.getLB() << "--" << arr.getUB() << ")";
                cin >> position;
                arr.delete_pos(position); 
                break;

            case 7:
                arr.delete_end();
                break;

            case 8:
                cout << arr;
                break;

            default:
                cout << "Invalid entry\n";
        }

        cout << "\nEnd program (y/n)\n";
        cin >> opt;

    } while (opt == 'n'|| opt == 'N');

    return 0;
}