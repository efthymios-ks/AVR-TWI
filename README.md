# AVR TWI Library (Flag Polling)  

---

**Description:**  
A library to interface the TWI hardware of AVR microcontrollers using the flag polling method. The TWI protocol is also widely known as I2C.  
+ Functions include:  
  + Setting up.  
  + Sending START signal.  
  + Sending STOP signal.  
  + Checking TWI status.  
  + Transmitting single byte.  
  + Receiving single byte (+ returning ACK/NACK).  
  + Transmitting packet of bytes to given slave (SLA) and subaddress.  
  + Receiving packet of bytes from given slave (SLA) and subaddress.  
  + Setting up slave address (SLA).  
   _Read the bottom of "TWI.h" to see all functions available._   
+ All codes for TWI status are included and are used in error checking while tranceiving data.
+ My custom I/O macros are required and are included.  

---  

**Memory usage:**  
+ Program: 0 bytes  
+ Data: 0 bytes  
  
**Compiler:**  
AVR-GCC  
  
**Optimization Level:**  
Optimize (-O1)  
  
---
