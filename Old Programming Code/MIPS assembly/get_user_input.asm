.data
    prompt: .asciiz "Enter Your age "
    message: .asciiz "\n Your age is "
.text
    # prompt the user to enter the age
    li $v0, 4
    la $a0, prompt
    syscall
    
    # get the user age
    li $v0, 5
    syscall
    
    # store the AGE in $t0
    move $t0, $v0
    
    # Display the message 
    li $v0, 4
    la $a0, message 
    syscall
    
    # Print or show the age 
    li $v0, 1
    move $a0, $t0
    syscall 