.data   
    newLine: .asciiz "\n"             
.text
    main:
        addi $s0, $zero, 10     
	
	jal increaseMyRegister
	
	# print a line
	li $v0, 4
	la $a0, newLine
	syscall
	        
        # print value
        li $v0, 1
        move $a0, $s0
        syscall
    
    
    # This call is going to tell the system to stop 
    li $v0, 10
    syscall
    
    	
    increaseMyRegister:
         
         addi $sp, $sp, -4  # becase it stores in 4 bytes   # ALWAYS ALLOCATE ENOUGH SPACE IN THE STACK  
         sw $s0, 0($sp)     # store the value in s0 in the first location  YOU CAN ONLY STORE AT LOCATIONS MULTIPLE OF 4 
         		
         		   # S REGISTER WHENEVER USED INSIDE A PROCEDURE MUST BE SAVED IN THE STACK 		
         
         addi $s0, $s0, 30     
         
         
         # print new value in function
         li $v0, 1
         move $a0, $s0
         syscall
         
         lw $s0, 0($sp)       # BACK FROM STACK TO THE S0 REGISTER 
         addi $sp, $sp, 4     # RESTORE THE OLD SPACE IN THE STACK 
         
         
         jr $ra                # RETURN TO THE MAIN FUNCTION 
         
         
         
    
    
    
    
    

       
   
    
    
    
	