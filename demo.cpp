#include "array.cpp"
template<typename T>
void menuBar(){
    array<T>arr
    char choice;
    T element;
    int pos, index;
    do{
        std::cout<<"\nMenu:\n";
        std::cout<<"a. Insertion at beginning\n";
        std::cout<<"b. Insertion at position\n";
        std::cout<<"c. Insertion at end\n";
        std::cout<<"d. Deletion at beginning\n";
        std::cout<<"e. Deletion at postion\n";
        std::cout<<"f. Deletion at end\n";
        std::cout<<"g. Exit\n";
        std::cout<<"Enter the desired array operation of your choice: ";
        std::cin>>choice;
    switch(choice){
        case 'a':
            std::cout<<"Enter the element to insert at beginning: ";
            std::cin>>element;
            arr.insert_beg(element);
            break;
        case 'b':
            std::cout<<"Enter the element to insert at position: ";
            std::cin>>element;
            arr.insert_pos(element,pos);
            break;
        case 'c':
            std::cout<<"Enter the element to insert at end: ";
            std::cin>>element;
            arr.insert_end(element);
            break;
        case 'd':
            arr.delete_beg();
            break;
        case 'e':
            std::cout<<"Enter the position to delete from: ";
            std::cin>>pos;
            arr.delete_pos(pos);
            break;
        case 'f':
            std::cout<<"Enter the element to delete at end: ";
            arr.delete_end();
            break;
        case 'g':
            std::cout<<"Exiting program.\n";
        default:
            std::cout<<"Invalid choice.\n";
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