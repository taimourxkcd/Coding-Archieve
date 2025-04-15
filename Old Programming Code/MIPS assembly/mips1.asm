.data
	myCharacter: .byte 'm' 
.text
	li $v, 4
	la $a0,myCharacter
	syscall