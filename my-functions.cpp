#include <iostream>
#include <string> 
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time
#include <chrono>
#include <thread>

//--------------------------------------------
//Clear terminal screen
void clear_page() {
  std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

//--------------------------------------------
//Sleep
void sleep(int milliseconds) {
  std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
//std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
}

//Print answer options for a yes or no question
void yes_no() {
  std::cout << "Yes - 1\n";
  std::cout << "No - 0\n";
  }

  //-------------------------------------------
  //Get user input and check that it is valid
  int user_input(int input_num)
  {
    int user_input;
    bool valid_input = false;
    while (valid_input == false)
    {
      //Get user input
      std::cout << "ANSWER: ";
      std::cin >> user_input;
      std::cout << ".\n";
      //Validate user input
      if (user_input <= (input_num - 1))
      {
        valid_input = true;
      }
      else
      {
        std::cout << "Invalid input. Please input a valid response.\n";
      }
    }
    return user_input;
  }

  //--------------------------------------------
  //Wakeup function
  std::string wakeup()
  {
    //Wakeup
    std::string name;
    std::cout << ".\n.\n.\n.\n.\n.\n.\n.\n.\n";
    std::cout << "Wakey wakey Bob!\n";
    std::cout << "Oh wait it's not Bob, is it? What's your name again?\n";
    std::cout << "NAME: ";
    std::getline (std::cin,name);
    std::cout << ".\n.\n";
    std::cout << "Oh right, yes I remember now it's " << name << ".\n";
    return name;
}

//--------------------------------------------
//Print man in elevator
void man_in_elevator() {
  
  std::cout << " ████████" << "\n";
  std::cout << " █   0  █" << "\n";
  std::cout << " █  /|\\ █" << "\n";
  std::cout << " █  / \\ █" << "\n";
  std::cout << " ████████" << "\n";
  
}

//--------------------------------------------
//Elevator down animation
void elevator_down() {
  
  int sleep_time = 300;
  clear_page();
  //Get in elevator part 1
  std::cout << " ████████          " << "\n";
  std::cout << " █      █     0    " << "\n";
  std::cout << " █      █    /|\\   " << "\n";
  std::cout << " █      █    / \\   " << "\n";
  std::cout << " ████████          " << "\n";
  std::cout << "\n\n\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  //Get in elevator part 2
  std::cout << " ████████          " << "\n";
  std::cout << " █            0    " << "\n";
  std::cout << " █           /|\\   " << "\n";
  std::cout << " █           / \\  " << "\n";
  std::cout << " ████████          " << "\n";
  std::cout << "\n\n\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page(); 
  //Get in elevator part 3
  std::cout << " ████████          " << "\n";
  std::cout << " █   0    " << "\n";
  std::cout << " █  /|\\   " << "\n";
  std::cout << " █  / \\   " << "\n";
  std::cout << " ████████          " << "\n";
  std::cout << "\n\n\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  
  sleep(sleep_time);
  clear_page();
  
  //Get out of elevator part 1
  std::cout << " ████████          " << "\n";
  std::cout << " █   0    " << "\n";
  std::cout << " █  /|\\   " << "\n";
  std::cout << " █  / \\   " << "\n";
  std::cout << " ████████          " << "\n";
  
  sleep(sleep_time);
  clear_page();
  
  //Get out of elevator part 2
  std::cout << " ████████          " << "\n";
  std::cout << " █            0    " << "\n";
  std::cout << " █           /|\\   " << "\n";
  std::cout << " █           / \\  " << "\n";
  std::cout << " ████████          " << "\n";
  
  sleep(sleep_time);
  clear_page();
  
  //Get out of elevator part 3
  std::cout << " ████████          " << "\n";
  std::cout << " █      █     0    " << "\n";
  std::cout << " █      █    /|\\   " << "\n";
  std::cout << " █      █    / \\   " << "\n";
  std::cout << " ████████          " << "\n";
  
  sleep(500);
}

//--------------------------------------------
//Elevator up animation
void elevator_up() {
  
  int sleep_time = 300;
  clear_page();
  //Get in elevator part 1
  std::cout << " ████████          " << "\n";
  std::cout << " █      █     0    " << "\n";
  std::cout << " █      █    /|\\   " << "\n";
  std::cout << " █      █    / \\   " << "\n";
  std::cout << " ████████          " << "\n";
  
  sleep(sleep_time);
  clear_page();
  //Get in elevator part 2
  std::cout << " ████████          " << "\n";
  std::cout << " █            0    " << "\n";
  std::cout << " █           /|\\   " << "\n";
  std::cout << " █           / \\  " << "\n";
  std::cout << " ████████          " << "\n";
  
  sleep(sleep_time);
  clear_page(); 
  //Get in elevator part 3
  std::cout << " ████████          " << "\n";
  std::cout << " █   0    " << "\n";
  std::cout << " █  /|\\   " << "\n";
  std::cout << " █  / \\   " << "\n";
  std::cout << " ████████          " << "\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  man_in_elevator();
  std::cout << "\n\n\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  //Get out of elevator part 1
  std::cout << " ████████          " << "\n";
  std::cout << " █   0    " << "\n";
  std::cout << " █  /|\\   " << "\n";
  std::cout << " █  / \\   " << "\n";
  std::cout << " ████████          " << "\n";
  std::cout << "\n\n\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  //Get out of elevator part 2
  std::cout << " ████████          " << "\n";
  std::cout << " █            0    " << "\n";
  std::cout << " █           /|\\   " << "\n";
  std::cout << " █           / \\  " << "\n";
  std::cout << " ████████          " << "\n";
  std::cout << "\n\n\n\n\n\n\n\n\n\n";
  
  sleep(sleep_time);
  clear_page();
  
  //Get out of elevator part 3
  std::cout << " ████████          " << "\n";
  std::cout << " █      █     0    " << "\n";
  std::cout << " █      █    /|\\   " << "\n";
  std::cout << " █      █    / \\   " << "\n";
  std::cout << " ████████          " << "\n";
  std::cout << "\n\n\n\n\n\n\n\n\n\n";
  
  sleep(500);
  
}

//--------------------------------------------
//Mortality rate used to calulate if mortiality rate should be increased
void mortality_rate(int input, int negative_answer, int &current_mortality_rate) {
  
  if (input == negative_answer) {
    current_mortality_rate++;
  }
}

//--------------------------------------------
//Random death function
bool death(int current_mortality_rate) {
  srand(time(NULL));
  if (rand() % 50 < current_mortality_rate) {
    return true;
  }
  else {
    return false;
  }
}

//--------------------------------------------
//Press elevator button
//0 for down
//1 for up
bool press_elevator_button(int desired_direction) {
  //Declare variables
  int input;
  bool reached_desired_destination;
  //Print elevator buttons
  std::cout << " ---------- " << "\n";
  std::cout << "|          | " << "\n";
  std::cout << "|  UP - 1  |" << "\n";
  std::cout << "|          |" << "\n";
  std::cout << " ---------- " << "\n";
  std::cout << "\n";
  std::cout << " ---------- " << "\n";
  std::cout << "|          | " << "\n";
  std::cout << "| DOWN - 0 |" << "\n";
  std::cout << "|          |" << "\n";
  std::cout << " ---------- " << "\n";
  std::cout << "\n";
  
  //Get user input
  input = user_input(2);
  //Select correct animation for selected direction
  if (input == 1) {
    std::cout << "Up we go!\n";
    std::cout << ".\n.\n";
    sleep(900);
    elevator_up();
  }
  else if (input == 0) {
    std::cout << "Ping! Going down.\n";
    std::cout << ".\n.\n";
    sleep(900);
    elevator_down();
  }
  else {
    std::cout << "Error 2";
  }
  //Determine is the selected direction is the desired direction
  if (input == desired_direction) { 
    reached_desired_destination = true;
  }
  else {
    reached_desired_destination = false;
    std::cout << "Oh it looks like you've gone the wrong way.\n";
    std::cout << ".\n.\n";
  }
  
  return reached_desired_destination;
}

//--------------------------------------------
//Unlock car request
bool unlock_car(bool keys) {
  //false == locked
  //true == unlocked
  bool lock_status = false;
  if (keys == false) {
    std::cout << "Oh bugger, you haven't got your keys with you.\n";
    std::cout << "Let's go back up to the apartment.\n.\n.\n";
    lock_status = false;
  }
  else if (keys == true) {
    std::cout << "Beep Beep!\n";
    std::cout << "Car unlocked.\n.\n.\n";
    lock_status = true;
  }
  else {
    std::cout << "Error 5";
  }
  
  return lock_status;
}

//--------------------------------------------
//Car animation
void car() {
  std::cout << "PRINT CAR\n.\n.\n";
}

//--------------------------------------------
//Car flash animation
void car_flash() {
  std::cout << "PRINT CAR FLASH\n.\n.\n";
}
