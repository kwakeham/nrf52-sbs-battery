/**
 * @file max17320.c
 * @author Keith Wakeham (keith@titanlabc.co)
 * @brief This acts as a driver for the MAX17320 with SBS for nordic devices
 * @version 0.1
 * @date 2023-02-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "max17320.h"
#include "nrf_error.h"
// #define  NRF_LOG_MODULE_NAME mxc
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "app_error.h"
#include "boards.h"
#include "nrf_delay.h"
#include "nrf_pwr_mgmt.h"


/* TWI instance ID. */
#define TWIM_INSTANCE_ID     0


bool twim_mxc_xfer_done = true; //is the transfer done

static const nrfx_twim_t m_twi = NRFX_TWIM_INSTANCE(TWIM_INSTANCE_ID);

/* Setting the config const so we can initialize it and de-init it to sleep it if needed in future*/
const nrfx_twim_config_t twi_config = {
       .scl                = ARDUINO_SCL_PIN,
       .sda                = ARDUINO_SDA_PIN,
       .frequency          = NRF_TWIM_FREQ_400K,
       .interrupt_priority = 5, //TODO: change this to default? This was raised from the other project I used
    };

/**
 * @brief the event handler for the twim driver. This generally just needs to make sure that the transfer is done so we don't launch new ones
 * 
 * @param p_event 
 * @param p_context 
 */
static void twim_max17320_event_handler(nrfx_twim_evt_t const *p_event,void *p_context)
{
    twim_mxc_xfer_done = true;
}

/**
 * @brief TWI initialization.
 */
void max17320_twi_init (void)
{
    ret_code_t err_code;

    err_code = nrfx_twim_init(&m_twi, &twi_config, twim_max17320_event_handler, NULL);
    APP_ERROR_CHECK(err_code);

    nrfx_twim_enable(&m_twi);
}



/**@brief Function for reading a sensor register.
 *
 * @param[in]  reg_addr            Address of the register to read.
 * @param[out] p_reg_val           Pointer to a buffer to receive the read value.
 *
 * @retval NRF_SUCCESS             If operation was successful.
 * @retval NRF_ERROR_BUSY          If the TWI drivers are busy.
 */
uint32_t max17320_read_reg(uint8_t reg_addr, uint8_t * p_reg_val)
{
    // uint32_t err_code;

    // twim_mxc_xfer_done = false;
    // err_code = nrfx_twim_tx( &m_twi,MAX17320_ADDRESS,&reg_addr,1,true );
    // APP_ERROR_CHECK(err_code);
    // // NRF_LOG_INFO("app transfer %d", err_code);
    // drv_mxc_wait_twim_clear();

    // twim_mxc_xfer_done = false;
    // err_code = nrfx_twim_rx( &m_twi,MAX17320_ADDRESS,p_reg_val,1 );
    // APP_ERROR_CHECK(err_code);
    // drv_mxc_wait_twim_clear();

    return NRF_SUCCESS;
}


/**@brief Function for writing to a sensor register.
 *
 * @param[in]  reg_addr            Address of the register to write to.
 * @param[in]  reg_val             Value to write to the register.
 *
 * @retval NRF_SUCCESS             If operation was successful.
 * @retval NRF_ERROR_BUSY          If the TWI drivers are busy.
 */
// uint32_t max17320_write_reg(uint8_t reg_addr, uint8_t reg_val)
// {
//     // uint32_t err_code;

//     // uint8_t buffer[2] = {reg_addr, reg_val};

//     // twim_mxc_xfer_done = false;
//     // err_code = nrfx_twim_tx( &m_twi,MAX17320_ADDRESS,buffer,MAX17320_ADDRESS2,false );
//     // APP_ERROR_CHECK(err_code);
//     // drv_mxc_wait_twim_clear();

//     // return NRF_SUCCESS;
// }

void drv_mxc_wait_twim_clear(void)
{
    while (!twim_mxc_xfer_done)
    {
        if (NRF_LOG_PROCESS() == false)
        {
            nrf_pwr_mgmt_run();
        }
    }
    return;
}


//Not needed for now
// void drv_mxc_task_execute(void)
// {
//      if (_mxc_readdata_flag)
//      {
//         drv_mxc_readall();
//         _mxc_readdata_flag = false;
//      }
// }

