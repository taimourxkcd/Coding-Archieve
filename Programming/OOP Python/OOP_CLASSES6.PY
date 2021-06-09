class Human:
    def __init__(self):
        self.name = "TAIMOUR"
        


    def display(self):
        print("Hello ", self.name)
         
        

    class head:
        def talk(self):
            print("Talking ....")
        class brain:
            def think(self):
                print("Thinking ...")    

h =Human().head()
b =Human().head().brain()

h.talk()
b.think()
             


