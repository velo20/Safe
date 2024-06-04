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
  INPUT_3_ACCEPTED
} Event_t;

State_t state = LEVEL_1_UNLOCKED

void state_maschine(Event_t event) {
  switch(state){
    case SAFE_LOCKED:
    if ()
  }
}
