/*****Header files*****/

#include <RH_ASK.h>

// Not actually used but needed to compile
#include <SPI.h> 

// create driver object.
RH_ASK driver;

void setup()
{
    // for Debugging purpose 
    Serial.begin(9600); 
      
    if (!driver.init())
         Serial.println("init failed");
}

void loop()
{
    // char pointer which is constant
    const char *msg = "Hello World!";
    
    driver.send((uint8_t *)msg, strlen(msg));
    driver.waitPacketSent();
    
    delay(1000);
}
