#ifndef __MULTIROTOR_GEOMETRY_CTRL_H__
#define __MULTIROTOR_GEOMETRY_CTRL_H__

#include "imu.h"
#include "ahrs.h"
#include "debug_link.h"
#include "sbus_radio.h"

void geometry_ctrl_init(void);
void multirotor_geometry_control(radio_t *rc, float *desired_heading);

void get_total_thrust(float *total_thrust);    /* liu */

void send_geometry_moment_ctrl_debug(debug_msg_t *payload);
void send_geometry_tracking_ctrl_debug(debug_msg_t *payload);
void send_uav_dynamics_debug(debug_msg_t *payload);

#endif
