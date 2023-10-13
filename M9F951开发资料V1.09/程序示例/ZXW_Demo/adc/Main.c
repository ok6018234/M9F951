#include"zc.h"
#include"ADMgr.h"



void main()
{
	ADMgr_Init();
	ADMgr_Calibration();
	while(1)
	{
		volatile unsigned int advalue;
		advalue = ADMgr_GetValue(CHS_AIN0);
		NOP();
	}
}

