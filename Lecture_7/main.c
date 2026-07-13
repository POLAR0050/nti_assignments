#include <stdio.h>
#include "defines.h"


const u8 MAX_SPEED = 255;
const u32 DEVICE_ID = 987654321;

void PrintSensorValue(const u16 *ptr);

void PrintSensorValue(const u16 *ptr)
{
    // I cannot change the value using ptr
    // *ptr = 0;

    printf("The sensor temperature is: %u\n", *ptr);
}

int main()
{
    u16 temperature = 75;
    u8 PORTA_DATA = 0;

    printf("System Booting...\n");
    printf("Max Speed Configuration: %u\n", MAX_SPEED);

    // I cannot change MAX_SPEED because it is const
    // MAX_SPEED = 200;

    PrintSensorValue(&temperature);

    u8 *const hardware_ptr = &PORTA_DATA;

    *hardware_ptr = 100;
    *hardware_ptr = 255;

    // I cannot change the address of hardware_ptr
    // hardware_ptr = &temperature;

    printf("Port data is: %u\n", *hardware_ptr);

    const u32 *const id_ptr = &DEVICE_ID;

    // I cannot change the value using id_ptr
    // *id_ptr = 123;

    // I cannot change the address of id_ptr
    // id_ptr = &another_variable;

    printf("Device ID is: %u\n", *id_ptr);

    return 0;
}