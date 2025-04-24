.global _start
_start:
	
	mov r0, #0x53
	mov r1, #0x73
	
	orr r2, r0, r1


//A	B	result
//0	0	0
//0	1	1
//1	0	1
//1	1	1