/**
  *  @file my_state_machine.c
 */

 #include <zephyr/smf.h>

 #include "LED.h"
 #include "my_state_machine.h"

 /*
    Function Prototypes
 */
 static void led_on_state_entry(void* o);
 static enum smf_state_result led_on_state_run(void* o);
 static void led_off_state_entry(void* o);
 static enum smf_state_result led_off_state_run(void* o);

 /*
    Typedefs
 */
 enum led_state_machine_states{
    LED_ON_STATE,
    LED_OFF_STATE
 };

 typedef stuct{
    //Context variable used by zephyr to track state machine state. Must be first
    struct smf_ctx ctx;

    uin16_t count;
 } led_state_object_t;

 /*
    Local Variables
 */
 static const struct smf_state led_states[]={
    [LED_ON_STATE] = SMF_CREATE_STATE(led_on_state_entry, led_on_state_run, NULL, NULL, NULL),
    [LED_OFF_STATE] = SMF_CREATE_STATE(led_off_state_entry, led_off_state_run, NULL, NULL, NULL)
 };

 static led_state_object_t led_state_object;

 void state_machine_init(){

 }

 int state_machine_run(){

 }