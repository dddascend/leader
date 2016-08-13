/*******************************Copyright (c)***************************
**
** Porject name:	leader
** Created by:	zhuzheng<happyzhull@163.com>
** Created date:	2016/04/05
** Modified by:
** Modified date:
** Descriptions:
**
***********************************************************************/
#pragma once
#include "leader_type.h"
#include "leader_misc.h"

#include "uart.h"
#include "packet.h"

#include "accel.h"
#include "gyro.h"
#include "magn.h"
#include "baro.h"

using namespace driver;

namespace app {

class niming
{
public:
    niming(void);
    ~niming(void);

public:
    uart *_uart;

public:
    void attach(uart *puart);
    void detach(void);

    void report_status(data_attitude_t *atti);
	void report_sensor(bool type_raw, struct accel_report *accel,
		struct gyro_report *gyro, struct mag_report *mag);

    void report_rc(data_rc_t *rc);
};

}



/***********************************************************************
** End of file
***********************************************************************/

