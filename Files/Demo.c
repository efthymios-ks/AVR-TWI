#include "TWI.h"

//Device's TWI slave address and subaddress for data
#define clock_sla     0x11
#define clock_seconds 0x0F

int main(void)
{
	//Seconds, minutes, hours
	uint8_t data[3] = {30, 30, 3};
  
	TWI_Setup();
  
	TWI_PacketTransmit(clock_sla, clock_seconds, data, 3);
  
	while (1 == 1)
	{
		TWI_ReceivePacket(clock_sla, clock_seconds, data, 3);
		if (TWI_Status == TWI_Ok)
		{
			//Do something
		}
	}
	
	return 0;
}
