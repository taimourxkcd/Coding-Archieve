.data      
           
.text
    addi $s0, $zero, 4
    
    sll $t0, $zero, 2       # if 3 then 2 raise to power 3
    
    #print it:
    li $v0, 1
    add $a0, $zero, $t0
    syscall
    
    

    
            
    
    
    
    
    
    
    

       
   
    
    
    
	