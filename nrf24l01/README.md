## NRF24L01

There's no magic with this module.
It only needs to be connected the right way. Forget anything you have seen on the internet.

#### Wiring
The module have 8 pins, form which one will not be used when connected to arduino.
So, first things first. There's a VCC, GND, MOSI and MISO pins. Connect to the respetive pins in the arduino, does not matter the module! The VCC should receive 3.3v and there's a current it's variable, see [here](https://www.itead.cc/wiki/NRF24L01_Module)!
Only two are missing, the port CE and CSN. Well, use any two free ports.
In arduino micro I used D9 and D10 respectively and in NodeMCU I used D2 and D4 respectively!
The NRF package from tmrh20 is initialized using *RF24 (uint8_t _cepin, uint8_t _cspin)*

#### The example running
Any example from the package downloaded!
Sometimes there's problems associated to the package to be downloaded and added manually!
Install it using the arduino IDE.
**IMPORTANT NOTES** You can use the same example code from the package to both arduinos, only have to change the *bool radioNumber = 0;* which identifies the two radios!

#### Useful links
* http://tmrh20.github.io/RF24/
* https://diyprojects.io/mysensors-v2-increase-range-nrf24l01-hardware-configuration/#.W4rI8hjxDeQ
* https://www.avrfreaks.net/comment/1622591#comment-1622591
* https://electronics.stackexchange.com/a/36043

**NO MAGIC!**
