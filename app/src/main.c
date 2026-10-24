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
  int count = 0;
  int rem = 0;

  while (1) {
    if(BTN_check_clear_pressed(BTN0)){
      count++;
    }
    if (count/8 == 1)
    

    k_msleep(SLEEP_MS);
  }
  return 0;
}
