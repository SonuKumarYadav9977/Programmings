.global _start
_start:

.text

    ldr r0, =var1       
    ldr r1, =var2       

    ldr r2, [r0]        
    ldr r3, [r1]        

    str r3, [r0]        
	str r2, [r1]        
.data

var1: .word 4
var2: .word 2
