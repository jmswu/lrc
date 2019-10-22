#ifndef LRC_H_INCLUDED
#define LRC_H_INCLUDED

#include <stdint.h>

/* Calculate The Longitudinal Redundancy Check (LRC)
 *
 * @param uint8_t *data     pointer to data
 * @param uint8_t len       the size of the data in bytes
 * @return uint8_t          calculated LRC value
 */

uint8_t LRC(uint8_t *data, uint8_t len);


#endif // LRC_H_INCLUDED
