class employee:
    def __init__(self, enum, ename, esal):
        self.enum = enum
        self.ename = ename
        self.esal = esal
    def display(self):
        print("Employee number ",self.enum)
        print("Employee name ", self.ename)
        print("Employee salery  ", self.esal)
        
class test:
    def modify(adil):                                # NOT AN INSTANCE METHOD
        adil.esal = adil.esal = adil.esal + 10000        # NOT A DECORATOR METHOD BECAUSE NO CLASS IS THERE
        adil.display()                               # THIS IS STATIC METHOD         
        
s = employee(100, "taimour", 10000)
s.display()        
test.modify(s)
