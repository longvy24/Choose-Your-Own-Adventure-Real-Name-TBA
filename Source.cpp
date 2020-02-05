#include <iostream>
#include <string>

using namespace std;

int story,
    type;

string quest [4] = {"", "Slay the Dragon", "Stop the Thieves Guild", "Investigate the Tower"},
       Cclass [4] = {"" ,"Warrior", "Rogue", "Sorcerer"},
       correct,
       name;


int main ()
{
do{
      do{
          cout << "************************************" << endl;
          cout << "*                                  *" << endl;
          cout << "*    1. Slay the Dragon            *" << endl;
          cout << "*    2. Stop the Thieves Guild     *" << endl;
          cout << "*    3. Investigate the Tower      *" << endl;
          cout << "*                                  *" << endl;
          cout << "************************************" << endl << endl;


          cout << "Which story would you like to play?: ";
          cin >> story;
        
          /*if statementchoosing options 1, 2, or 3*/
          if (story == 1)
          {
            cout << endl;
            cout << "You have chosen the quest to " << quest[1] << endl << endl << endl;
          }
          else if (story == 2)
          {
            cout << endl;
            cout << "You have chosen the quest to " << quest[2] << endl << endl << endl;
          }
          else if (story == 3)
          {
            cout << endl;
            cout << "You have chosen the quest to " << quest [3] << endl << endl << endl;
          }
          else
          {
            
            cout << endl;
            cout << "Please choose a quest." << endl << endl << endl;
            //return 0;
          }

      }while (story != 1 && story != 2 && story != 3);


      do{
          cout << "************************************" << endl;
          cout << "*                                  *" << endl;
          cout << "*          1. Warrior              *" << endl;
          cout << "*          2. Rogue                *" << endl;
          cout << "*          3. Sorcerer             *" << endl;
          cout << "*                                  *" << endl;
          cout << "************************************" << endl << endl;

          cout << "Choose your class: ";
          cin >> type;

          /*if statementchoosing options 1, 2, or 3*/
          if (type == 1)
          {
            cout << endl;
            cout << "You have chosen to be the " << Cclass[1] << endl << endl << endl;
          }
          else if (type == 2)
          {
            cout << endl;
            cout << "You have chosen to be the " << Cclass[2] << endl << endl << endl;
          }
          else if (type == 3)
          {
            cout << endl;
            cout << "You have chosen to be the " << Cclass[3] << endl << endl << endl;
          }
          else
          {
            cout << endl;
            cout << "Please choose a class." << endl << endl;
            //return 0;
          }
      }while(type != 1 && type != 2 && type != 3);

cout << "Please enter your adventurer's name: ";
cin >> name;

cout << endl;
cout << "Quest: " << quest[story] << endl;
cout << "Class: " << Cclass[type] <<endl; 
cout << "Name: " << name << endl << endl;

cout << "Is this correct? (Yes/No): ";
cin >> correct;

}while(correct != "Y" && correct != "Yes" && correct != "yes" && correct != "y" && correct != "YES");






return 0;
}
