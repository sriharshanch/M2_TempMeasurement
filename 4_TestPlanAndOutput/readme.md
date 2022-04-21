
|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID_01  | Is Pasenger seated  | push button=1| push button=1| PASS  |
| TID_02  | Is Pasenger not seated | push button=0| push button=0 | PASS  |
| TID_03  | Temperature Request Low | Temp=0| heater=Off | PASS  |
| TID_04  | Temperature Request High | Temp=20| heater=On  | PASS  |
| TID_05  | Temperature Request | Temp=25| heater=25  | PASS  |
| TID_06  | Temperature Request | Temp=33| heater=33 degree generation | FAIL  |
| TID_07  | LED ON | Button=1 && Heater=1| LED=1 | PASS  |
| TID_08  | LED OFF | Button=0 && Heater=0| LED=0 | PASS  |
| TID_09  | LCD Display | Temperature 20 deg Cel| Temperature  deg Cel| PASS  |
