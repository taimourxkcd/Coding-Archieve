.data
     message: .asciiz " The Numbers are different "  
     message2: .asciiz " Nothing Happened "
.text
     main:
     
        addi $t0, $zero, 5
        addi $t1, $zero, 20
        b numbersDifferent
        #bne $t0, $t1, numbersDifferent
         
        #syscall to end the origram 
        li $v0, 10 
        syscall 	 	 
   	  
     numbersDifferent:
     li $v0, 4
     la $a0, message 
     syscall
   
     
     