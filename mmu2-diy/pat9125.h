//pat9125.h
#ifndef PAT9125_H
#define PAT9125_H

#include <inttypes.h>


#if defined(__cplusplus)
extern "C" {
#endif //defined(__cplusplus)


extern uint8_t pat9125_PID1;
extern uint8_t pat9125_PID2;

extern int16_t pat9125_x;
extern int16_t pat9125_y;
extern uint8_t pat9125_b; // brightness
extern uint8_t pat9125_s; // shutter

extern uint8_t pat9125_init(void);
extern uint8_t pat9125_update(void);
extern uint8_t pat9125_update_y(void);
extern uint8_t pat9125_update_y2(void);


#if defined(__cplusplus)
}
#endif //defined(__cplusplus)

#endif //PAT9125_H
