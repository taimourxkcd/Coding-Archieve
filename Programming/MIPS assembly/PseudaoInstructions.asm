.data
    message: .asciiz "Hi, How are you?"
.text
    main:
    addi $s0, $zero, -10
    #addi $s1, $zero, 14
    
    bgtz $s0, DisplayHi
    
    blt $s0, $s1, DisplayHi
    
    
    # End of main
    ll $v0, 10
    syscall
  	  	  
   DisplayHi:
       li $v0, 4
       la $a0, message 
       syscall 
     
     