avrdude -p m32 -c jtag1 -e -P /dev/ttyUSB0 -U flash:w:bin/led.hex -F