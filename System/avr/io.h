/**
 * @file io.h
 * @author paul
 * @date 27.11.22
 * Description here TODO
 */
#ifndef MOCK_AVR_IO_H
#define MOCK_AVR_IO_H

#include <stdint.h>

// IO
extern uint8_t DDRA;
extern uint8_t DDRB;
extern uint8_t DDRC;
extern uint8_t DDRD;
extern uint8_t DDRE;
extern uint8_t DDRH;
extern uint8_t DDRL;
extern uint8_t PORTA;
extern uint8_t PORTB;
extern uint8_t PORTC;
extern uint8_t PORTD;
extern uint8_t PORTE;
extern uint8_t PORTH;
extern uint8_t PORTL;

// Reset
extern uint8_t MCUSR;
enum { WDRF, BORF };

// UART
extern uint8_t UCSR0A;
extern uint8_t UCSR0B;
extern uint8_t UCSR0C;
extern uint16_t UBRR0;
extern uint8_t UDR0;
extern uint8_t UCSR1A;
extern uint8_t UCSR1B;
extern uint8_t UCSR1C;
extern uint16_t UBRR1;
extern uint8_t UDR1;
extern uint8_t UCSR2A;
extern uint8_t UCSR2B;
extern uint8_t UCSR2C;
extern uint16_t UBRR2;
extern uint8_t UDR2;
extern uint8_t UCSR3A;
extern uint8_t UCSR3B;
extern uint8_t UCSR3C;
extern uint16_t UBRR3;
extern uint8_t UDR3;

// 16bit-Timer
extern uint8_t TCCR1A;
extern uint8_t TCCR1B;
extern uint8_t TCCR1C;
extern uint8_t TIMSK1;
extern uint8_t TIFR1;
extern uint16_t ICR1;
extern uint16_t TCNT1;
extern uint16_t OCR1A;
extern uint16_t OCR1B;
extern uint16_t OCR1C;
extern uint8_t TCCR3A;
extern uint8_t TCCR3B;
extern uint8_t TCCR3C;
extern uint8_t TIMSK3;
extern uint8_t TIFR3;
extern uint16_t ICR3;
extern uint16_t TCNT3;
extern uint16_t OCR3A;
extern uint16_t OCR3B;
extern uint16_t OCR3C;
extern uint8_t TCCR4A;
extern uint8_t TCCR4B;
extern uint8_t TCCR4C;
extern uint8_t TIMSK4;
extern uint8_t TIFR4;
extern uint16_t ICR4;
extern uint16_t TCNT4;
extern uint16_t OCR4A;
extern uint16_t OCR4B;
extern uint16_t OCR4C;
extern uint8_t TCCR5A;
extern uint8_t TCCR5B;
extern uint8_t TCCR5C;
extern uint8_t TIMSK5;
extern uint8_t TIFR5;
extern uint16_t ICR5;
extern uint16_t TCNT5;
extern uint16_t OCR5A;
extern uint16_t OCR5B;
extern uint16_t OCR5C;

// 8-bit timer
extern uint8_t TCCR0A;
extern uint8_t TCCR0B;
extern uint8_t TIMSK0;
extern uint8_t TCNT0;

#endif // MOCK_AVR_IO_H
