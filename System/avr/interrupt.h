/**
 * @file interrupt.h
 * @author Paul Nykiel
 * @date 22.12.22
 * @brief Description here TODO
 */
#ifndef MOCK_AVR_INTERRUPT_H
#define MOCK_AVR_INTERRUPT_H

void cli(void);
void sei(void);

#define ISR(name) void name(void)

ISR(TIMER0_OVF_vect);
ISR(TIMER2_OVF_vect);
ISR(TWI_vect);
ISR(SPI_STC_vect);
ISR(USART0_RX_vect);
ISR(USART0_TX_vect);
ISR(USART1_RX_vect);
ISR(USART1_TX_vect);
ISR(USART2_RX_vect);
ISR(USART2_TX_vect);
ISR(USART3_RX_vect);
ISR(USART3_TX_vect);

#endif // MOCK_AVR_INTERRUPT_H
