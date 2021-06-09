.data                 
.text
    addi $s0, $zero, 10
    addi $s1, $zero, 4

    mul $t0, $s0, $s1  # can only multiply only two 16 bit number
    
    #Display the product
    li $v0, 1
    add $a0, $zero, $t0
    syscall    
            
    
    
    
    
    
    
    
    
    
    # mul = 2 registers
    # mult = 3 registers
    # sll =  very efficient
       
   
    
    
    
	