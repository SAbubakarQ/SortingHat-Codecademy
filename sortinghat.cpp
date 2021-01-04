//Bismillah-AbubakarQ
#include <iostream>
using namespace std;

int main() 
{
  // variables for houses
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  // variables points
  int answer1, answer2, answer3, answer4;

  cout << endl;
  cout << "You have begun The Sorting Hat Quiz!\n";
  cout << endl;


  // Question 1
  cout << " Question 1: \n";
  cout << "   When I pass this life, I want people to remember me as: \n";
  cout << "     1.) The Good\n";
  cout << "     2.) The Great\n";
  cout << "     3.) The Wise\n";
  cout << "     4.) The Bold\n";

  cout << endl;
  cout << " You chose number: ";
  cin >> answer1;
  cout << endl;
    if (answer1 == 1)
        hufflepuff = hufflepuff + 1;
    else if (answer1 == 2)
        slytherin++;
    else if (answer1 == 3)
        ravenclaw++;
    else if (answer1 == 4)
        gryffindor++;
    else 
        cout << " Invalid Output\n";


  // Question 2
  cout << endl;
  cout << " Question 2: \n";
  cout << "   Dawn or Dusk? \n";
  cout << "     1.) Dawn\n";
  cout << "     2.) Dusk\n";

  cout << endl;
  cout << " Choice: ";
  cin >> answer2;
  cout << endl;
    if (answer2 == 1)
    {
        gryffindor++;
        ravenclaw++;
    }
    else if (answer2 == 2)
    {
        hufflepuff++;
        slytherin++;
    }
    else 
        cout << " Invalid Output\n";


  // Question 3
  cout << endl;
  cout << " Question 3: \n";
  cout << "   Which kind of instrument most pleases your ear? \n";
  cout << "     1.) The violin\n";
  cout << "     2.) The trumpet\n";
  cout << "     3.) The piano\n";
  cout << "     4.) The drum\n";

  cout << endl;
  cout << " You chose number: ";
  cin >> answer3;
  cout << endl;
    if (answer3 == 1)
        slytherin++;
    else if (answer3 == 2)
        hufflepuff++;
    else if (answer3 == 3)
        ravenclaw++;
    else if (answer3 == 4)
        gryffindor++;
    else 
        cout << " Invalid Output\n";

  // Question 4
  cout << endl;
  cout << " Question 4: \n";
  cout << "   WWhich road tempts you most? \n";
  cout << "     1.) The wide, sunny grassy lane.\n";
  cout << "     2.) The narrow, dark, lantern-lit alley.\n";
  cout << "     3.) The twisting, leaf-strewn path through woods.\n";
  cout << "     4.) The cobbled street lined (ancient buildings).\n";

  cout << endl;
  cout << " You chose number: ";
  cin >> answer4;
  cout << endl;
    if (answer4 == 1)
        hufflepuff++;
    else if (answer4 == 2)
        slytherin++;
    else if (answer4 == 3)
        gryffindor++;
    else if (answer4 == 4)
        ravenclaw++;
    else 
        cout << " Invalid Output\n";

 // Questions finished
 // Answer Section
    // Answer Variables 
  string house;
  int max = 0;

  if (gryffindor > max)
  {
  max = gryffindor;
  house = "Gryffindor";
  }
  if (hufflepuff > max) 
  {
  max = hufflepuff;
  house = "Hufflepuff";
   }
  if (ravenclaw > max) 
  {
  max = ravenclaw;
  house = "Ravenclaw";
   }
  if (slytherin > max) 
  {
  max = slytherin;
  house = "Slytherin";
   }
 
  cout << " You are in house " << house << "!\n" << endl;

  
  //cout << gryffindor << endl << ravenclaw << endl << slytherin << endl << hufflepuff << endl;

}