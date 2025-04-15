class Outer:
    def __init__(self):
        print(" Outer class object creation ")
    class Inner:
        def __init__(self):
            print(" Inner class object creation ")

        class InnerInner:
            def __init__(self):
                print(" Inner Inner class object creation ")

            def m1(self):
                print("inner inner method creation")

i =Outer().Inner().InnerInner().m1()