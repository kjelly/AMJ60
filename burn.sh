#! /bin/bash
sudo dfu-programmer atmega32u4 flash gh60.hex --debug 5
sudo dfu-programmer atmega32u4 flash-eeprom gh60.epp --debug 5
sudo dfu-programmer atmega32u4 start --debug 5
