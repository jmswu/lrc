#include "lrc.h"

uint8_t LRC(uint8_t *data, uint8_t len){
    /* LRC result */
    uint8_t lrc = 0;

    /* pass through all the data */
    while(len--){
        lrc = lrc + *data++;
    }

    /* produce the two's-complement */
    lrc = (0xFF - lrc) + 0x01;

    return lrc;
}
