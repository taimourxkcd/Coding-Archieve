.data
    age: .word 23 # this a an integer or word
.text
    #print an integer to the screeen	
    li $v0, 1
    lw $a0, age
    syscall
	