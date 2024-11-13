- docker images                         
    - gives you a list of all your docker images
- docker build . -t nodeapp 
    - this will create a new docker app from the dcoker file in the current director and its name will be nodeapp
- docker run -p 8080:8080 -d nodeapp2
    - this will run the node app after building it
- docker run -p 8081:8080 --hostname testnode -d nodeapp2  
    - gives a hostname
- stop docker processes
    - docker ps
    - docker stop 12 32 # just gives first two characters is enough
    - docker rm 12 32

- find if a process is already running on port 8080 then kill it
    - lsof -i :8080   
    - kill -9 16000

- find logs
    - docker logs nginx