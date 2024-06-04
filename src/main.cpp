#include <Arduino.h>

typedef enum 
{
  SAFE_LOCKED,
  LEVEL_1_UNLOCKED,
  LEVEL_2_UNLOCKED,
  LEVEL_3_UNLOCKED,
  SAFE_OPEN
} State_t;

typedef enum 
{
  INPUT_1_ACCEPTED,
  INPUT_2_ACCEPTED,
  INPUT_3_ACCEPTED,
  INPUT_REFUSED,
  CLOSED_DOOR
} Event_t;

State_t state = LEVEL_1_UNLOCKED;

void state_maschine(Event_t event) {
  switch(state){
   
  case SAFE_LOCKED:
    if (INPUT_1_ACCEPTED == event)
    {
      state = LEVEL_1_UNLOCKED;
    }
    break;

  case LEVEL_1_UNLOCKED:
    if (INPUT_2_ACCEPTED == event)
    {
      state = LEVEL_2_UNLOCKED;
    }
    else if (INPUT_REFUSED)
    {
      state = SAFE_LOCKED;
    }
    break;

  case LEVEL_2_UNLOCKED:
    if (INPUT_3_ACCEPTED == event)
    {
      state = LEVEL_3_UNLOCKED;
    }
    else if (INPUT_REFUSED)
    {
      state = SAFE_LOCKED;
    }
    break;
  case LEVEL_3_UNLOCKED:
  state = SAFE_OPEN;

  }
}

void setup()
{

}
void loop()
{

}