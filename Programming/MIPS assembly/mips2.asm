.data
	myCharacter: .byte 'm' 
.text
	li $v1,  4
	la $a0, myCharacter
	syscall