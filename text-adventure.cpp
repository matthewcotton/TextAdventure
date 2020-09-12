#include <iostream>
#include <vector>
#include "my-functions.hpp"

int main()
{
  //Declare variables
  int chance_of_death = 0;
  std::string name;
  std::vector<int> responses(1);
  int input;
  bool dead;
  bool button;
  int desired_direction;
  bool keys = false;
  bool car_lock;

  //Wakeup
  name = wakeup();

  //Breakfast - porridge
  std::cout << "So what's for breaky:\n";
  std::cout << "Porridge?\n";
  //Function for printing Yes/No answers
  yes_no();
  //Function for getting and validating user input
  input = user_input(2);
  responses.push_back(input); //Response 1
  std::cout << ".\n";

  std::cout << chance_of_death << "\n"; //test line

  //add to chance of death if breakfast is not eaten
  mortality_rate(responses[1], 0, chance_of_death);

  //Breakfast - coffee
  std::cout << "Coffee?\n";
  yes_no();
  input = user_input(2);
  responses.push_back(input); //Response 2
  std::cout << ".\n";

  //add to chance of death if coffe is not drunk
  mortality_rate(responses[2], 0, chance_of_death);

  //Leave the apartment
  std::cout << "Are you ready to leave the appartment?\n";
  yes_no();
  input = user_input(2);
  std::cout << ".\n";
  desired_direction = 0;

  if (input == 1)
  {
    //Leave appartment
    std::cout << "OK. Time to get out of here\n\n";
    std::cout << ".\n";

    //Check if the desired direction was chosen.
    //Use elevator
    button = press_elevator_button(desired_direction);

    if (button == false)
    {
      //Wrong direction chosen
      dead = death(chance_of_death);
      if (dead == true)
      {
        //Died
        std::cout << "DEAD!\n";
        return 0;
        //Add better text
      }
      else if (dead == false)
      {

        //Survived
        std::cout << "Safe, this time.\n";
        //Add better text

        if (desired_direction == 0)
        {
          std::cout << "Let's get the elevator down to the parking gargage.\n.\n.\n";
          sleep(900);
          elevator_down();
        }
        else if (desired_direction == 1)
        {
          std::cout << "Let's get the elevator up to the apartment.\n.\n.\n";
          sleep(1500);
          elevator_up();
        }
        else
        {
          std::cout << "Error 1\n";
          return 0;
        }

        //Print car animation
        car();
        //Try to unlock car
        car_lock = unlock_car(keys);

        if (car_lock == false)
        {
          //Go back to apartment
          desired_direction = 1;
          button = press_elevator_button(desired_direction);

          if (button == false)
          {
            //Wrong direction chosen
            dead = death(chance_of_death);
            if (dead == true)
            {
              //Died
              std::cout << "DEAD!\n";
              return 0;
              //Add better text
            }
            else if (dead == false)
            {

              std::cout << "Back in your apartment again.\n.\n.\n";
              //Check for keys
              sleep(1500);
              std::cout << "Oh yes here are your keys. They'll be useful.\n.\n.\n";
              keys = true;
            }
          }
        }
      }
    }

    else if (button == true)
    {
      //Correct direction selected
      //Print car animation
      car();
      //Try to unlock car
      car_lock = unlock_car(keys);

      if (car_lock == false)
      {
        //Go back to apartment
        desired_direction = 1;
        button = press_elevator_button(desired_direction);

        if (button == false)
        {
          //Wrong direction chosen
          dead = death(chance_of_death);
          if (dead == true)
          {
            //Died
            std::cout << "DEAD!\n";
            return 0;
            //Add better text
          }
          else if (dead == false)
          {

            if (desired_direction == 0)
            {
              std::cout << "Let's get the elevator down to the parking gargage.\n.\n.\n";
              sleep(1500);
              elevator_down();
            }
            else if (desired_direction == 1)
            {
              std::cout << "Let's get the elevator up to the apartment.\n.\n.\n";
              sleep(1500);
              elevator_up();
            }
            else
            {
              std::cout << "Error 6\n";
              return 0;
            }
          }
        }

        std::cout << "Back in your apartment again.\n.\n.\n";
        //Check for keys
        sleep(1500);
        std::cout << "Oh yes here are your keys. They'll be useful.\n.\n.\n";
        keys = true;
      }
    }
  }


  else if (input == 0)
  {
    //Check for keys
    sleep(1500);
    std::cout << "Oh here are your keys. They'll be useful.\n.\n.\n";
    keys = true;
  }
  else
  {
    std::cout << "Error 3";
    return 0;
  }

  //Try leaving apparement again
  input = 0;
  while (input == 0)
  {
    std::cout << "Are you ready to leave the appartment?\n";
    yes_no();
    input = user_input(2);
    std::cout << ".\n.\n";
    desired_direction = 0;

    if (input == 0)
    {
      std::cout << "There is nothing else in here that you'll need today.\n.\n.\n";
    }
  }

  //Elevator down
  std::cout << "OK. Time to get out of here\n\n";

  desired_direction = 0;
  button = press_elevator_button(desired_direction);

  //Check if the desired direction was chosen.
  if (button == false)
  {
    dead = death(chance_of_death);
    if (dead == true)
    {
      std::cout << "DEAD!\n";
      //Add better text
      return 0;
    }
    else if (dead == false)
    {
      std::cout << "Safe, this time.\n";
      //Add better text
      if (desired_direction == 0)
      {
        std::cout << "Let's get the elevator down to the parking gargage.\n.\n.\n";
        sleep(1500);
        elevator_down();
      }
      else if (desired_direction == 1)
      {
        std::cout << "Let's get the elevator up to the apartment.\n.\n.\n";
        sleep(1500);
        elevator_up();
      }
      else
      {
        std::cout << "Error 1\n";
        return 0;
      }
    }
    else
    {
      std::cout << "Error 1\n";
      return 0;
    }
  }

  //Print car animation
  car();
  //Try to unlock car
  car_lock = unlock_car(keys);

  //Print unlock animation
  car_flash();

  //std::cout << "A vicious looking dog gets into the elevator";
}