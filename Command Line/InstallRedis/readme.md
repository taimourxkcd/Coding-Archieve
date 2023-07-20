```
sudo apt update
sudo apt install redis-server


sudo service redis-server start  
sudo service redis-server status  
sudo service redis-server enable  

redis-cli
redis-cli -v

// Uninstall and install On mac
redis-cli shutdown
rm /usr/local/etc/redis.conf
rm -rf /usr/local/var/db/redis
brew uninstall redis
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
brew install redis
brew services start redis


```