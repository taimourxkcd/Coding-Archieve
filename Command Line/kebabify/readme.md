- Bin/rails s

- IS_BUSINESS_SITE=1 bin/rails s 
 
- Yarn
- Bin/webpacker —watch —progress
- Yarn build css —watch
- Yarn build —watch
 
 
- Bin/rails db:migrate
 
- Bundle exec sidekiq
 s 
- bin/webpacker --watch
- yarn build --watch 
 
- Close already running server
- sudo kill -9 $(lsof -i :3000 -t)

---- 
- yarn build --watch
- yarn build:css --watch
- bin/webpacker --watch --progressss