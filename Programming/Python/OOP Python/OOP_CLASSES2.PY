class test:
    def modify(emp):     # NOTE THAT HERE EMP IS ACTING AS SELF
        print("hello")
 
e1 = test()
e1.modify()
test.modify(20)
