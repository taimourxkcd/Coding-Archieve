class customer:
    def __init__(self, name, dd, mm, yyyy):
        self.name = name
        self.dob = self.DOB(dd,mm,yyyy)

    def display(self):
        print(" Customer name ", self.name)
        self.dob.print()
        
    class DOB:
        def __init__(self, dd, mm,  yyyy):
            self.dd= dd
            self.mm =mm
            self.yyyy = yyyy 

        def print(self):
            print('DOB={}/{}/{}'.format(self.dd, self.mm, self.yyyy))


c=customer("Taimour", 28 , 8, 1999 )
c.display()

