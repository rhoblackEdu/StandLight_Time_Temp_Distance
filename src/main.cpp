#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Led.h"
#include "Listener.h"
#include "Controller.h"
#include "View.h"
#include "Service.h"
#include "LCD.h"
#include "ClockView.h"
#include "ClockService.h"
#include "ClockCheck.h"
#include "I2C.h"
#include "DHT11.h"
#include "TempHumidService.h"
#include "TempHumidView.h"

#include <wiringPi.h>
#include <softPwm.h>

int main()
{
    std::cout << "Hello World!" << std::endl;
    int bright;
    wiringPiSetup();
    softPwmCreate(26, 0, 100);

    // Button modeButton(27);
    // Button powerButton(28);
    // ClockCheck clockCheck;
    // Led led1(21);
    // Led led2(22);
    // Led led3(23);
    // Led led4(24);
    // Led led5(25);
    // DHT11 dht(7);
    // LCD lcd(new I2C("/dev/i2c-1", 0x27));
    // View view(&led1, &led2, &led3, &led4, &led5, &lcd);
    // TempHumidView tempHumidView(&lcd);
    // ClockView clockView(&lcd);
    // Service service(&view);
    // ClockService clockSerivce(&clockView);
    // TempHumidService tempHumidService(&tempHumidView);
    // Controller control(&service, &clockSerivce, &tempHumidService);
    // Listener listener(&modeButton, &powerButton, &control, &clockCheck, &dht);

    while (1)
    {
        // listener.checkEvent();
        // view.lightView();
        softPwmWrite(26, 10);
        delay(1000);
        softPwmWrite(26, 30);
        delay(1000);
        softPwmWrite(26, 50);
        delay(1000);
        softPwmWrite(26, 70);
        delay(1000);
        softPwmWrite(26, 90);
        delay(1000);
        softPwmWrite(26, 100);
        delay(1000);
    }

    return 0;
}