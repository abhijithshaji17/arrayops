#include "array.cpp"

int main()
{
    char repeat;
    int choice;
    int pos, ele, l, u;
    array<int> arr;

    do
    {
        cout << "---   Menu\t---\n";
        cout << "1. Create array\n";
        cout << "2. Insertion at beginning\n";
        cout << "3. Insertion specific position\n";
        cout << "4. Insertion at end\n";
        cout << "5. Deletion from beginning\n";
        cout << "6. Deletion at specific position\n";
        cout << "7. Deletion from end\n";
        cout << "8. Display the array elements\n";
        cout << "Enter your choice: \n";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the lower bound\n";
                cin >> l;
                arr.setLB(l);
                cout << "Enter the upper bound\n";
                cin >> u;
                arr.setUB(u);
                arr.create();
                break;

            case 2:
                cout << "Enter the element: \n";
                cin >> ele;
                arr.insert_beg(ele);
                break;

            case 3:
                cout << "enter the position(" << arr.getLB() << "--" << arr.getUB() << ")";
                cin >> pos;
                cout << "Enter the element: \n";
                cin >> ele;
                arr.insert_pos(pos, ele);
                break;

            case 4:
                cout << "Enter the element: \n";
                cin >> ele;
                arr.insert_end(ele);
                break;

            case 5:
                arr.delete_beg();
                break;

            case 6:
                cout << "enter the position(" << arr.getLB() << "--" << arr.getUB() << ")";
                cin >> pos;
                arr.delete_pos(pos); 
                break;

            case 7:
                arr.delete_end();
                break;

            case 8:
                cout << arr;
                break;

            default:
                cout << "Invalid entry" << endl;
        }

        cout << "Do you want to continue(y/n)" << endl;
        cin >> repeat;

    } while (repeat == 'y');

    return 0;
}