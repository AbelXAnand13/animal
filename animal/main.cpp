//abel anand
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "animal.h"
using namespace std;

int main() {
    animal moke;
    ofstream out;
    out.open("/Users/Abel/Desktop/Cpp/animal/animal/animalRecords.txt");
    vector <animal> monke;
    bool quit = false;
    
    
    while (!quit) {
        
        int choice;
        cout << "1. Add info for animals    2. Edit Info for animals    3. Exit\n";
        cin >> choice;
        string nam;
        string spec;
        int ag;
        int editRow;
        //menu
        switch (choice) {
            case 1:
                cout << "Enter the Animal's name\n";
                cin >> nam;
                moke.setName(nam);
                cout << "Enter the Species\n";
                cin >> spec;
                moke.setSpecies(spec);
                cout << "Enter the age\n";
                cin >> ag;
                moke.setAge(ag);
                monke.push_back(moke);
                break;
            case 2:
                if(monke.size() == 0) {
                    cout << "Nothing to modify\n";
                }
                else {
                    for (int i = 0; i < monke.size(); i++) {
                        cout << i+1 << ".\t\tName = " << monke[i].getName() << "\tSpecies = " << monke[i].getSpecies() << "\tAge = " << monke[i].getAge() << endl;
                    }
                    cout << "Which row would you like to edit\n";
                    cin >> editRow;
                    if (editRow > monke.size() || editRow < 1) {
                        cout << "Please follow directions\n";
                    }
                    else {
                    cout << "1. Edit name\t2. Edit species\t3. Edit age\n";
                    cin >> choice;
                    switch(choice) {
                        case 1:
                            cout << "Enter the new name\n";
                            cin >> nam;
                            monke[editRow-1].setName(nam);
                            break;
                        case 2:
                            cout << "Enter the new species\n";
                            cin >> spec;
                            monke[editRow-1].setSpecies(spec);
                            break;
                        case 3:
                            cout << "Enter the new age\n";
                            cin >> ag;
                            monke[editRow-1].setAge(ag);
                            break;
                        default:
                            cout << "You need to learn how to follow instruction <:(\n";
                    }
                }
            }
                break;
            case 3:
                if (monke.size() == 0) {
                    cout << "Bye\n";
                }
                else {
                    for (int i = 0; i < monke.size(); i++)
                        out << "Name = " << monke[i].getName() << "\tSpecies = " << monke[i].getSpecies() << "\tAge = " << monke[i].getAge() << endl;
                }
                quit = true;
                break;
            default:
                cout << "You are so basic\n";
                break;
        }
    }
}
