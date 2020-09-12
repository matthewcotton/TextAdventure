#include <string>

//Clear terminal screen
void clear_page();

//Print answer options for a yes or no question
void yes_no();

//Get user input and check that it is valid
int user_input(int user_input);

//wakeup
std::string wakeup();

//Mortality rate used to calulate if mortiality rate should be increased
void mortality_rate(int input, int negative_answer, int &current_mortality_rate);

//Random death function
bool death(int current_mortality_rate);

//Press elevator button
bool press_elevator_button(int desired_direction);
//0 for down
//1 for up

//Elevator up animation
void elevator_down();

//Elevator up animation
void elevator_up();

//Print man in elevator
void man_in_elevator();

//Sleep
void sleep(int milliseconds);

//Unlock car
bool unlock_car(bool keys);

//Car animation
void car();

//Car flash animation
void car_flash();