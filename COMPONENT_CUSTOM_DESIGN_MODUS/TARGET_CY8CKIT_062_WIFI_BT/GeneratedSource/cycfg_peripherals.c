/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Device Configurator: 2.0.0.1483
* Device Support Library (../../../mbed-os/targets/TARGET_Cypress/TARGET_PSOC6/psoc6pdl): 1.4.0.1889
*
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_peripherals.h"

cy_stc_csd_context_t cy_csd_0_context = 
{
	.lockKey = CY_CSD_NONE_KEY,
};
const cy_stc_scb_ezi2c_config_t CYBSP_CSD_COMM_config = 
{
	.numberOfAddresses = CY_SCB_EZI2C_ONE_ADDRESS,
	.slaveAddress1 = 8U,
	.slaveAddress2 = 0U,
	.subAddressSize = CY_SCB_EZI2C_SUB_ADDR16_BITS,
	.enableWakeFromSleep = true,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_COMM_obj = 
	{
		.type = CYHAL_RSC_SCB,
		.block_num = 8U,
		.channel_num = 0U,
	};
#endif //defined (CY_USING_HAL)


void init_cycfg_peripherals(void)
{
	Cy_SysClk_PeriphAssignDivider(PCLK_CSD_CLOCK, CY_SYSCLK_DIV_8_BIT, 3U);

	Cy_SysClk_PeriphAssignDivider(PCLK_SCB8_CLOCK, CY_SYSCLK_DIV_8_BIT, 1U);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_COMM_obj);
#endif //defined (CY_USING_HAL)
}
