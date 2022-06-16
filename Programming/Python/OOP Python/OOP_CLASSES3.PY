# INNER CLASSES 
      # CLASSES INSIDE ANOTHER CLASS
      # WITHOD EXISTING OUTER CLASS , INNER CLASS IS OF NO USE 

class Outer:
    def __init__(self):
        print(" OUTER CLASS OBJECT CREATION ")

    class Inner:
        def __init__(self):
              print(" inner CLASS OBJECT CREATION ")   
        def m1(self):
            print(' Inner class method ')

# o = Outer()
# i = o.Inner()
# i.m1()
i = Outer().Inner().m1()
