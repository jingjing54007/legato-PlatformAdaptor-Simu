/** @file pa_sim_simu.h
 *
 * Legato @ref pa_sim_simu include file.
 *
 * Copyright (C) Sierra Wireless Inc.
 */

#ifndef PA_SIM_SIMU_H_INCLUDE_GUARD
#define PA_SIM_SIMU_H_INCLUDE_GUARD

#include "pa_sim.h"

#define PA_SIMU_SIM_DEFAULT_MCC     "01"
#define PA_SIMU_SIM_DEFAULT_MNC     "001"

//--------------------------------------------------------------------------------------------------
/**
 * This function must be called to set the Home Network MCC MNC.
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetHomeNetworkMccMnc
(
    const char *mccPtr,
    const char *mncPtr
);

//--------------------------------------------------------------------------------------------------
/**
 * Report the Sim state
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_ReportSimState
(
    le_sim_States_t state
);

//--------------------------------------------------------------------------------------------------
/**
 * Select the Sim
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetSelectCard
(
    le_sim_Id_t simId
);

//--------------------------------------------------------------------------------------------------
/**
 * SIM Stub initialization.
 *
 * @return LE_OK           The function succeeded.
 */
//--------------------------------------------------------------------------------------------------
le_result_t pa_simSimu_Init
(
    void
);

//--------------------------------------------------------------------------------------------------
/**
 * This function set the International Mobile Subscriber Identity (IMSI).
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetIMSI
(
    pa_sim_Imsi_t imsi   ///< [OUT] IMSI value
);

//--------------------------------------------------------------------------------------------------
/**
 * This function set the card identification (ICCID).
 *
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetCardIdentification
(
    pa_sim_CardId_t iccid
);

//--------------------------------------------------------------------------------------------------
/**
 * This function set the International Mobile Subscriber Identity (IMSI).
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetIMSI
(
    pa_sim_Imsi_t imsi   ///< [OUT] IMSI value
);

//--------------------------------------------------------------------------------------------------
/**
 * Set the SIM Phone Number.
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetSubscriberPhoneNumber
(
    const char* phoneNumberStr
);

//--------------------------------------------------------------------------------------------------
/**
 * This function must be called to set the Home Network Name information.
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetHomeNetworkOperator
(
    const char* nameStr
);

//--------------------------------------------------------------------------------------------------
/**
 * Set the Pin code
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetPin
(
    const char* pin
);

//--------------------------------------------------------------------------------------------------
/**
 * Set the Puk code
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetPuk
(
    const char* puk
);

//--------------------------------------------------------------------------------------------------
/**
 * Report the Stk event
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_ReportStkEvent
(
    le_sim_StkEvent_t  stkEvent
);

//--------------------------------------------------------------------------------------------------
/**
 * This function must be called to set the expected confirmation command.
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetExpectedStkConfirmationCommand
(
    bool  confirmation ///< [IN] true to accept, false to reject
);

//--------------------------------------------------------------------------------------------------
/**
 * Set SimAccessTest variable
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_simSimu_SetSimAccessTest
(
    bool testInProgress
);

#endif // PA_SIM_SIMU_H_INCLUDE_GUARD

