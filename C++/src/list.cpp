#include "include/list.h"

void List::print_menu() {
    int choice;

    cout << "*********************\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete fron list.\n";
    cout << " 4 - Quit.\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    if(choice == 4) {
        cout << ".....Exiting.....\n";
        return;
    }
    else if (choice == 2){
        add_item();
    }
    else if (choice == 3){
        delete_item();
    }
    else if (choice == 1){
        print_list();
    }
    else {
        cout << "Sorry choice not implemented yet!!!.\n";
    }
}


void List::add_item() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "****Add Item****\n";
    cout << "Type in an item and press Enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successfully added an item to the list\n\n:)\n\n\n";
    cin.clear();

    print_menu();
}

void List::delete_item() {
    cout << "****Delete Item****\n";
    cout << "Select an Item index Number to Delete:\n";
    if(list.size()){
        for(int i=0; i < (int)list.size(); i++){
            cout<< i << ": " << list[i] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin() + choiceNum);
    }
    else{
        cout<< "No items to Delete\n";
    }
    print_menu();
}

void List::print_list() {
    cout<< "\n\n\n\n\n\n";
    cout<< "****Printing list****\n";

    for(int list_index=0; list_index < (int)list.size(); list_index++) {
        cout<< " * " << list[list_index] << "\n";
    }
    cout<< "M - Menu \n";
    char choice;
    cin>> choice;

    if(choice == 'M' || choice == 'm'){
        print_menu();
    }
    else{
        cout << "Invalid entry.Quiting...\n";
    }
}