- this will run your localapp in the nginx
    -  docker run --name nginx --hostname ng1 -p 80:80 -v /Users/mycomputer/Desktop/dev/my_repos/Web-Development/html:/usr/share/nginx/html -d nginx
- run three docker apps and start nginx
    - docker run --hostname nodeapp1 --name nodeapp1 -d nodeapp2
    - docker run --hostname nodeapp3 --name nodeapp3 -d nodeapp2
    - docker run --hostname nodeapp2 --name nodeapp2 -d nodeapp2
    - docker run --name nginx --hostname ng1 -p 80:8080 -v /Users/mycomputer/dev/nginx/nginx.conf:/etc/nginx/nginx.conf nginx 
    # create a network    
    - docker network connect backendnet nodeapp1
    - docker network connect backendnet nodeapp2
    - docker network connect backendnet nodeapp3
    - docker network connect backendnet nginx

