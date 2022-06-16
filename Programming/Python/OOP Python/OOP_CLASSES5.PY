class Human:
    def __init__(self):
        self.name = "TAIMOUR"
        self.head = self.head()
        self.brain = self.head.brain()


    def display(self):
        print("Hello ", self.name)
        self.head.talk()
        self.brain.think()
        

    class head:
        def talk(self):
            print("Talking ....")
        class brain:
            def think(self):
                print("Thinking ...")    

h =Human()
h.display()            


