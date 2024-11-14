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

- create an apache image i guess
    - docker run -p 80:80 -d httpd

- another way to view your containers
    - docker inspect network

- bash into your container
    - docker exec -it s1 bash

- find logs
    - docker logs nginx

- remove s1 from the network bridge
    - docker network disconnect bridge s1 

- gives you a list of all the networks
    -  docker network ls

- spin up a new container s1, connect to network backend, give it admin rights
    - run --name s1 --network backend --cap-add=NET_ADMIN -d nhttpd

- add a rule to send all the traffic in the network to go to 10.0.1.3
    - ip route add 10.0.0.0/24 via 10.0.1.3

- other useful commands
    - hostname
    - hostname -i
    - curl http://s1 