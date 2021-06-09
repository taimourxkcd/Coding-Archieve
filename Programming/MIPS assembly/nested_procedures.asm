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
	
	jal printTheValue
	
	        
     
    
    
    # This call is going to tell the system to stop 
    li $v0, 10
    syscall
    
    	
    increaseMyRegister:
         
         addi $sp, $sp, -8  # becase every value is 4 bytes   # ALWAYS ALLOCATE ENOUGH SPACE IN THE STACK  
         sw $s0, 0($sp)     # store the value in s0 in the first location  YOU CAN ONLY STORE AT LOCATIONS MULTIPLE OF 4 
         sw $ra, 4($sp)		
         		   # S REGISTER WHENEVER USED INSIDE A PROCEDURE MUST BE SAVED IN THE STACK 		
         
         addi $s0, $s0, 30     
        
         # NESTED PROCEDURE          
         jal printTheValue 
          
         
         lw $s0, 0($sp)       # BACK FROM STACK TO THE S0 REGISTER 
         lw $ra, 4($sp)
         addi $sp, $sp, 4     # RESTORE THE OLD SPACE IN THE STACK 
         
         
         jr $ra                # RETURN TO THE MAIN FUNCTION 
         
    printTheValue:
         # print new value in function
         li $v0, 1
         move $a0, $s0
         syscall
         
         jr $ra
         
         
    
    
    
    
    

       
   
    
    
    
	
