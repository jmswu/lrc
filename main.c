#include <stdio.h>
#include <stdlib.h>
#include "lrc.h"

int main()
{
    printf("Hello world! This a LRC test.\n");


    uint8_t data[] = {0xF7, 0x03, 0x13, 0x89, 0x00, 0x0A};
    uint16_t lrc;

    lrc = LRC(data, sizeof(data)/sizeof(uint8_t));

    /* calculated LRC should be 0x60 */
    printf("LRC is: %04X\n", lrc);

    return 0;
}
