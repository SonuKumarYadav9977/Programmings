.global _start
_start:

.text

  ldr R0, =monu      // R0 holds address of monu
  ldr R1, [R0]       // R1 gets value at monu
  ldr R2, =sonu      // R2 holds address of sonu
  str R1, [R2]       // stores R1’s value into sonu

.data 
  monu: .word 9
  sonu: .word 7
