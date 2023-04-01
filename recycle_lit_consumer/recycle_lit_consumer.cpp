// recycle_lit_consumer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    string latitude;
    string choice;
    string longitude;
    int type;
    int weight;
    string description;
    int size;

    cout << "Welcome to Recycle Lit!" << endl;

    while (choice != "Y" && choice != "N")
    {
        cout << "Would you like to submit a request?\nIf yes, type 'Y', else, type 'N'" << endl;
        cin >> choice;
        if (choice != "Y" && choice != "N")
        {
            cout << "I'm sorry, please enter a valid response." << endl;
        }
    }

    if (choice == "N")
    {
        cout << "Understood, have a wonderful day" << endl;
        return 0;
    }
    else if (choice != "Y")
    {
        cout << "Error, application restarting." << endl;
        return 0;
    }
    else
    {
        cout << "Understood. Please enter the latitude of the location you are leaving your recycleables." << endl;
        cin >> latitude;
        cout << "Now, enter the longitude of the same location." << endl;
        cin >> longitude;
        cout << "Which of the following types of recycleables are you desposing of today?\nType '1' for plastics, '2' for paper, '3' for glass, '4' for metals, and '5' for multiple/all." << endl;
        cin >> type;

        bool valid = 0;
        while (valid == 0)
        {
            switch (type)
            {
            case 1:
            
                cout << "You selected plastics." << endl;
                valid = 1;
                break;
            
            case 2:

                cout << "You selected paper." << endl;
                valid = 1;
                break;

            case 3:

                cout << "You selected glass." << endl;
                valid = 1;
                break;

            case 4:

                cout << "You selected metals." << endl;
                valid = 1;
                break;

            case 5:

                cout << "You selected all of the above." << endl;
                valid = 1;
                break;

            default:
                cout << "Sorry, please enter a valid value." << endl;
                cin >> type;

            }
        }

        cout << "Now, please enter the approximate total weight (in pounds) of your desposables." << endl;
        cin >> weight;

        cout << "Now, which of the following best describes the size of what you're recycling?\nType '1' for small (shoebox or smaller), '2' for medium (plastic drawers or smaller), '3' for large (anything larger)" << endl;
        cin >> size;


        valid = 0;
        while (valid == 0)
        {
            switch (size)
            {
            case 1:

                cout << "You selected small." << endl;
                valid = 1;
                break;

            case 2:

                cout << "You selected medium." << endl;
                valid = 1;
                break;

            case 3:

                cout << "You selected large." << endl;
                valid = 1;
                break;

            default:
                cout << "Sorry, please enter a valid value." << endl;
                cin >> size;

            }
        }
        cout << "Please enter a description of the item or items/extra instructions for the pickup driver." << endl;
        cin >> description;

        cout << "Preparing to send your request..." << endl;
    }

    




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
