//
// Created by Lao·Zhu on 2021/8/24.
//

#ifndef MINIFOC__CONFIG_H_
#define MINIFOC__CONFIG_H_

#define VBUS            8.4f                    // Bus voltage is 8.4V
#define POLAR_PAIRS     7                       // BLDC motor has 7 polar pairs
#define ENCODER_RESO    4096                    // Encoder resolution is 2^8=4096
#define CALI_TORQUE     0.3f                    // Calibrating torque is 0.3
#define DEFAULT_MODE    TORQUE_LOOP_CONTROL     // Default mode is torque control loop

#define UART_BAUDRATE   115200                  // UART baudrate set to 115200
#define PWM_FREQUENCY   20                      // PWM frequency set to 20kHz
#define TIM2_FREQUENCY  8                       // timer2 interrupt frequency set to 8kHz
#define TIM13_FREQUENCY 200                     // timer13 interrupt frequency set to 200Hz
#define SPEED_UP_FREQ   200                     // speed update frequency set to 200Hz
#define SPI_PRESCALE    SPI_PSC_16              // SPI frequency is 72 / 16 = 4.5MHz

#define UART_PRIORITY   1                       // UART preemption priority set to 1
#define TIM2_PRIORITY   2                       // TIMER2 preemption priority set to 3
#define TIM13_PRIORITY  3                       // TIMER13 preemption priority set to 2

#define FMC_WRITE_START_ADDR    ((uint32_t)0x08007C00U)

#endif //MINIFOC__CONFIG_H_
