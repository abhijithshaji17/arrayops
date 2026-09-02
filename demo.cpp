#include "array.cpp"
template<typename T>
void menuBar(){
    array<T>arr
    char choice;
    T element;
    int pos, index;
    do{
        cout<<"\nMenu:\n";
        cout<<"a. Insertion at beginning\n";
        cout<<"b. Insertion at position\n";
        cout<<"c. Insertion at end\n";
        cout<<"d. Deletion at beginning\n";
        cout<<"e. Deletion at postion\n";
        cout<<"f. Deletion at end\n";
        cout<<"g. Exit\n";
        cout<<"Enter the desired array operation of your choice: ";
        cin>>choice;
    switch(choice){
        case 'a':
            cout<<"Enter the element to insert at beginning: ";
            cin>>element;
            arr.insert_beg(element);
            break;
        case 'b':
            cout<<"Enter the element to insert at position: ";
            cin>>element;
            arr.insert_pos(element,pos);
            break;
        case 'c':
            cout<<"Enter the element to insert at end: ";
            cin>>element;
            arr.insert_end(element);
            break;
        case 'd':
            arr.delete_beg();
            break;
        case 'e':
            cout<<"Enter the position to delete from: ";
            cin>>pos;
            arr.delete_pos(pos);
            break;
        case 'f':
            cout<<"Enter the element to delete at end: ";
            arr.delete_end();
            break;
        case 'g':
            cout<<"Exiting program.\n";
        default:
            cout<<"Invalid choice.\n";
    }while(choice!='g');
    }
}

int main(){
    int dtype;
    std::cout<<"Choose the datatype:\n";
    std::cout<<"1. Integer, 2. Float, 3. Double, 4. Char\n";
    std::cin>>dtype;
    switch(dtype){
        case 1:
            menuBar<int>();
            break;
        case 2:
            menuBar<float>();
            break;
        case 3:
            menuBar<double>();
            break;
        case 4:
            menuBar<char>();
            break;
        default:
            std::cout<<"Invalid datatype\n";
    }
    return 0;
}