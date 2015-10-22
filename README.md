# blink

This is just a reminder, how to program without arduino (ide).

In this example I blink pin 5(ic), PB0.

The upload can be used also for arduino ide built hex files. Usualy you can find those
in /tmp (GNU/linux). eg:

```bash

avrdude -p attiny45 -c stk500 -e -U flash:w:Blink.cpp.hex

```

##you can list the available IC

avrdude -c avrisp

#Mess up FUSES

[fuse](http://www.engbedded.com/cgi-bin/fc.cgi/)

#took some info from 
[ladyada](http://www.ladyada.net/learn/avr/avrdude.html)
