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


# 4 fun

objdump of blink.elf main fction using

```bash
avr-objdump -D blink.elf
```

```
00000080 <main>:
  80:	20 9a       	sbi	0x04, 0	; 4
  82:	91 e0       	ldi	r25, 0x01	; 1
  84:	85 b1       	in	r24, 0x05	; 5
  86:	89 27       	eor	r24, r25
  88:	85 b9       	out	0x05, r24	; 5
  8a:	2f e9       	ldi	r18, 0x9F	; 159
  8c:	36 e8       	ldi	r19, 0x86	; 134
  8e:	81 e0       	ldi	r24, 0x01	; 1
  90:	21 50       	subi	r18, 0x01	; 1
  92:	30 40       	sbci	r19, 0x00	; 0
  94:	80 40       	sbci	r24, 0x00	; 0
  96:	e1 f7       	brne	.-8      	; 0x90 <main+0x10>
  98:	00 c0       	rjmp	.+0      	; 0x9a <main+0x1a>
  9a:	00 00       	nop
  9c:	f3 cf       	rjmp	.-26     	; 0x84 <main+0x4>
```
# tinyblink
