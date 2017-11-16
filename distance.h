/* distance.h
 *
 *  Created on: Oct 29, 2017
 *      Author: esdev
 */

#ifndef DISTANCE_H_
#define DISTANCE_H_

#include "libsoc_gpio.h"
#include <unistd.h>
#include <sys/time.h>
#include <math.h>
#include <stdio.h>
#include <pthread.h>
#include <poll.h>
#include <stdlib.h>

/**This function initializes the ultrasonic sensor
 * @param integer number representing BBB output pin
 * @param integer number representing BBB input pin
 * @return void
**/
void sensor_init(int trigger, int echo, struct gpio_pins *IO);
/**
 * Calulate distance to object in front of sensor
 * @return Returns distance as a float
**/
double distance(struct gpio_pins *IO);

/**Sleeps for user specified number of nanoseconds.
 * @param integer number representing nanoseconds
 * @return no output
**/
void wait(int nanosec);


#endif /* DISTANCE_H_ */
