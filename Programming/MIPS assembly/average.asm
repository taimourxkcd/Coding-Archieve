.data 
    array:  .word 10 ,2 ,9
    length: .word 3
    sum:     .word 0
    average: .word 0
.text 
    main:
    	la $t0, array   # Base Address
    	li $t1, 0       # i = 0
    	lw $t2, length  # $ t2 = length
    	li $t3, 0       # sum = 0
    	sumLoop:
    		lw $t4, ($t0)        # $t4 = array[i]
    		add $t3, , $t3 $t4,  # sum = sum + array[i]
    		
    		add $t1, $t1, 1 
    		add $t0, $t0, 4       # Updating the array address
    		blt $t1, $t2, sumLoop # if i is less then loop again
    		
    	sw $t3, sum 
    	
    	
    	# Display Sum 
    	li $v0, 1
    	move $a0, $t5   
    	syscall
    
    	# calculate the average 
    	div $t5, $t3, $t2
    	sw  $t5, average 
    	syscall
    	
        #terminate the program
        li $v0, 10
        syscall 
    	          
    	 	   	  
    	 	   	   	   	  
    	 	   	   	   	   	   	  
    	 	   	   	   	   	   	   	   	  
    	 	   	   	   	   	   	   	   	   	   	  
    	 	   	   	   	   	   	   	   	   	   	   	   	  
    	 	   	   	   	   	   	   	   	   	   	   	   	   	   	  
    	 	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	  
    	 	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	  
    	 	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	  
    	 	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	  
    	 	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	   	  
    		   	  	 
    	
    	 
	
    
    
	
        				
        					
        						
        							
        								
        									
        										
        											
        												
        													
        														
        																
	
	
	
	
	
	
	
	
	
	
	
	