## Docker Commands

### Listing and Managing Images
- `docker images`  
   - Lists all your Docker images.

### Building and Running Containers
- `docker build . -t nodeapp`  
   - Builds a new Docker image from the `Dockerfile` in the current directory and names it `nodeapp`.
- `docker run -p 8080:8080 -d nodeapp2`  
   - Runs the `nodeapp2` container in detached mode, mapping port `8080` on the host to `8080` in the container.
- `docker run -p 8081:8080 --hostname testnode -d nodeapp2`  
   - Assigns the hostname `testnode` to the running container.

### Stopping and Removing Containers
- `docker ps`  
   - Lists all running Docker containers.
- `docker stop 12 32`  
   - Stops containers with IDs `12` and `32`. Only the first two characters are needed.
- `docker rm 12 32`  
   - Removes the specified stopped containers.

### Checking and Killing Processes on a Port
- `lsof -i :8080`  
   - Finds if a process is running on port `8080`.
- `kill -9 16000`  
   - Kills the process with ID `16000`.

### Creating and Running an Apache Container
- `docker run -p 80:80 -d httpd`  
   - Runs an Apache HTTP server on port `80`.

### Viewing Container Information
- `docker inspect network`  
   - Inspects Docker network configurations.

### Accessing a Running Container
- `docker exec -it s1 bash`  
   - Opens an interactive bash session inside the `s1` container.

### Viewing Logs
- `docker logs nginx`  
   - Displays logs for the `nginx` container.

### Managing Networks
- `docker network disconnect bridge s1`  
   - Disconnects the `s1` container from the `bridge` network.
- `docker network ls`  
   - Lists all available Docker networks.

### Creating a New Container with Custom Network and Admin Rights
- `docker run --name s1 --network backend --cap-add=NET_ADMIN -d nhttpd`  
   - Runs a new container named `s1` on the `backend` network with admin rights (`NET_ADMIN` capability).

### Removing Docker Images
- `docker rmi nodeapp`  
   - Removes the `nodeapp` image.
- `docker rmi -f nodeapp`  
   - Forcefully removes the `nodeapp` image.

### Network Routing
- `ip route add 10.0.0.0/24 via 10.0.1.3`  
   - Adds a rule to send all traffic in the network to `10.0.1.3`.

### Running Docker with App ID
- `docker run -p 3333:9999 -e APPID=3333 -d nodeapp`  
   - Runs the `nodeapp` container with the specified `APPID` environment variable.

---

## Other Useful Commands
- `hostname` : Displays the current hostname.
- `hostname -i` : Shows the IP address of the current machine.
- `curl http://s1` : Sends an HTTP request to the `s1` container.

---

## The Primagen Developer Productivity Course
- `docker run --rm -it --user root nvim-computer bash`  
   - Runs a temporary `nvim-computer` container with root access.
