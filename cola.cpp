#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i = 0;
    while (i <= 0){
    //Print menu for user to choose drink from
    puts("Please select your drink from the following menu");
    puts("1>>>      Coca Cola");
    puts("2>>>      Water");
    puts("3>>>      Tango Apple");
    puts("4>>>      Dr pepper");
    puts("5>>>      Fanta Orange");
    printf(">>>> ");

    int choice;

    //Take user input and assign to the choice variable
    cin >> choice;

    //Using If and If else statements check user input and the display corresponding message

    /*if (choice < 1 || choice > 5){
        puts("You have enteted an invalid choice, here is your money back and please try again");
    }else{
        if (choice == 1){
            puts("Here is your coca cola, thank you for using this Vending Machine and enjoy your drink");
        }else if( choice == 2){
            puts("Here is your Water, thank you for using this Vending Machine and enjoy your drink");
        }else if(choice == 3){
            puts("Here is your Tango Apple, thank you for using this Vending Machine and enjoy your drink");
        }else if(choice == 4){
            puts("Here is your Dr Pepper, thank you for using this Vending Machine and enjoy your drink");
        }else if(choice ==  5){
            puts("Here is your Fanta Orange, thank you for using this Vending Machine and enjoy your drink");
        }

    }*/


    //Using switch statements check user input and then display corresponding message
    int end = 0;
    switch(choice)
    {
      case 1:
          puts("Here is your coca cola, enjoy your drink");
          break;

      case 2:
          puts("Here is your Water, enjoy your drink");
          break;
      case 3:
          puts("Here is your Tango Apple, enjoy your drink");
          break;
      case 4:
          puts("Here is your Dr Pepper, enjoy your drink");
          break;
      case 5:
          puts("Here is your Fanta Orange, enjoy your drink");
          break;
      default:
          puts("You have enteted an invalid choice, here is your money back and please try again");
          end = 1;
    }
    if (end == 1){
      break;
    }else{
      cout << "Press 1 for another drink or press any other key to exit: ";
      int menu_choice = 0;
      cin >> menu_choice;
      if (menu_choice == 1){
        i = 0;
      }else{
        i = 1;
      }
    }
  }
  return 0;
}
