.data
     message:   .asciiz "Hello , "
     userInput: .space 20     
.text
   main:
        # Gettiing USERS IMPUT 
        li $v0, 8
        la $a0, userInput 
        li $a1, 20
        syscall
        
        # Display Message  
        li $v0, 4
        la $a0, message 
        syscall
        
        # Display The name 
        li $v0, 4
        la $a0, userInput
        syscall
        
        
   
   # Telll the system this is the end of the main 
   li $v0, 10
   syscall
   
   
     
     