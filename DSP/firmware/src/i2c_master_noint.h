#ifndef I2C_MASTER_NOINT_H__
#define I2C_MASTER_NOINT_H__

// Header file for i2c_master_noint.c
// helps implement use I2C2 as a master without using interrupts
#define SL_WR 0b11010110
#define SL_RD 0b11010111
#define IMU_ADDR 0b11010110

void i2c_master_setup(void);              // set up I2C 1 as a master, at 100 kHz

void i2c_master_start(void);              // send a START signal
void i2c_master_restart(void);            // send a RESTART signal
void i2c_master_send(unsigned char byte); // send a byte (either an address or data)
unsigned char i2c_master_recv(void);      // receive a byte of data
void i2c_master_ack(int val);             // send an ACK (0) or NACK (1)
void i2c_master_stop(void);               // send a stop

void I2C_write(char addr, char data);
char I2C_read(char);
void I2C_read_multiple(unsigned char, unsigned char, unsigned char *, int);
short combine(unsigned char, unsigned char);
void IMU_multiRead(unsigned char address, unsigned char reg, short * compData, int length);
#endif