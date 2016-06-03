/**
 * @file pa_simu.c
 *
 * Copyright (C) Sierra Wireless Inc. Use of this work is subject to license.
 */

#include "legato.h"

#include "interfaces.h"
#include "pa_simu.h"
#include "pa_sim_simu.h"
#include "pa_mdc_simu.h"
#include "pa_mcc_simu.h"
#include "pa_ips_simu.h"
#include "pa_temp.h"
#include "pa_antenna.h"


//--------------------------------------------------------------------------------------------------
/**
 * Component initializer automatically called by the application framework when the process starts.
 *
 * This is not used because the PA component is shared by two different processes (the Modem Daemon
 * and the Positioning Daemon), and each needs different QMI services initialized.
 **/
//--------------------------------------------------------------------------------------------------
COMPONENT_INIT
{
    le_result_t res;

    LE_INFO("PA Init");

    /* Mark as active */
    le_cfg_QuickSetBool(PA_SIMU_CFG_MODEM_ROOT "/active", true);

    /* Init sub-PAs */
    res = mrc_simu_Init();
    LE_FATAL_IF(res != LE_OK, "PA MRC Init Failed");

    res = mcc_simu_Init();
    LE_FATAL_IF(res != LE_OK, "PA MCC Init Failed");

    res = pa_simSimu_Init();
    LE_FATAL_IF(res != LE_OK, "PA SIM Init Failed");

    res = sms_simu_Init();
    LE_FATAL_IF(res != LE_OK, "PA SMS Init Failed");

    res = pa_mdcSimu_Init();
    LE_FATAL_IF(res != LE_OK, "PA MDC Init Failed");

    res = ecall_simu_Init();
    LE_FATAL_IF(res != LE_OK, "PA eCall Init Failed");

    res = pa_temp_Init();
    LE_FATAL_IF(res != LE_OK, "PA Temperature Failed");

    res = pa_ipsSimu_Init();
    LE_FATAL_IF(res != LE_OK, "PA Input Power Supply Failed");

    res = pa_antenna_Init();
    LE_FATAL_IF(res != LE_OK, "PA Antenna Failed");
}
