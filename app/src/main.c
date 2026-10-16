/**
 * @file main.c
 */

#include <inttypes.h>

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "BTN.h"
#include "LED.h"

#define SLEEP_MS 1

int main(void) {
  if (0 > BTN_init()) {
    return 0;
  }
  if (0 > LED_init()) {
    return 0;
  }

  /*printk("Start blinking");
  LED_blink(LED0,LED_1HZ);

  LED_set(LED1, LED_ON);
  uint8_t duty_cycle = 0;*/

  while (1) {
    /*LED_pwm(LED2, duty_cycle);

    if (duty_cycle == 100){
      duty_cycle = 0;
      LED_toggle(LED3);
    }
    else{
      duty_cycle++;
    }
    k_msleep(50);*/
    
    if(BTN_check_clear_pressed(BTN0)){
      LED_toggle(LED0);
      printk("Button 0 pressed!\n");
    }
    if(BTN_check_clear_pressed(BTN1)){
      LED_toggle(LED1);
      printk("Button 1 pressed!\n");
    }
    if(BTN_check_clear_pressed(BTN2)){
      LED_toggle(LED2);
      printk("Button 2 pressed!\n");
    }
    if(BTN_check_clear_pressed(BTN3)){
      LED_toggle(LED3);
      printk("Button 3 pressed!\n");
    }
    k_msleep(SLEEP_MS);
  }
  return 0;
}
