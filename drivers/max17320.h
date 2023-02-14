
/**
 * @brief 
 * 
 */

#ifndef __MXC_H__
#define __MXC_H__

#include "nrfx_twim.h"
#include <stdint.h>
#include "max17320-register.h" //registers here to not confound things

/**@brief Addrsss of the MAX17320, but these might be shifted*/
#define MAX17320_ADDRESS                         0x6C
#define MAX17320_SBS_ADDRESS                     0x16 


/**@brief Function for initializing the MXC driver.
 *
 * @return NRF_SUCCESS    Only possible return value.
 */
void max17320_twi_init(void);

/**@brief Function for uninitializing the MXC driver.
 *
 * @return NRF_SUCCESS    Only possible return value.
 */
uint32_t max17320_twi_uninit(void);

uint32_t max17320_read_reg(uint8_t reg_addr, uint8_t * p_reg_val);

uint32_t max17320_write_reg(uint8_t reg_addr, uint8_t reg_val);

#endif

/** @} */
