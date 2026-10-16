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
  printk("Hello World!");
  if (0 > BTN_init()) {
    return 0;
  }
 
  printk("I workin' like a dawg day and night");
  if (0 > LED_init()) {
    return 0;
  }
  printk("Sup mann");
  while (1) {
    k_msleep(SLEEP_MS);
  }
  return 0;
}
