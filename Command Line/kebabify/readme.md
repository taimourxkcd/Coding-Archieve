```
- Bin/rails s

- IS_BUSINESS_SITE=1 bin/rails s 
 
 
 
- Bin/rails db:migrate
 
- Bundle exec sidekiq
 s 
- bin/webpacker --watch
- yarn build --watch 
 
- Close already running server
- sudo kill -9 $(lsof -i :3000 -t)

```

---- 
```
- yarn build --watch
- yarn build:css --watch
- bin/webpacker --watch --progressss

- assests precompile:  bundle exec rails assets:precompile > /dev/null

  - if there is a tailwind precompile error:
```

```ruby
  //bin/build-scss
    #!/usr/bin/env bash

./node_modules/sass/sass.js \
  ./app/javascript/stylesheets/front_app.scss:./app/assets/builds/front_app.css \
  ./app/javascript/stylesheets/manager.scss:./app/assets/builds/manager.css \
  ./app/javascript/stylesheets/mercury.scss:./app/assets/builds/mercury.css \
  ./app/javascript/stylesheets/landing-tailwind.css:./app/assets/builds/landing-tailwind.css \
  ./app/javascript/stylesheets/front-tailwind.css:./app/assets/builds/front-tailwind.css \
  ./app/javascript/stylesheets/pdf-style.scss:./app/assets/builds/pdf-style.css \
  --no-source-map \
  --style compressed \
  --load-path=node_modules \
  --load-path=vendor/assets/stylesheets \
  $@ 
  ```

- Deploy on staging
  ```BRANCH=sales-page-search-filter-fixes bundle exec cap staging deploy ```

- Retore Dump
  ```
  dropdb kebabify_dev  
  createdb kebabify_dev
  pg_restore --clean --verbose --no-acl --no-owner -d kebabify_dev foodnerd-backup-20230712.dump

  


   ```

 - Ssh into staging
```
    ssh staging.foodnerdpos.com
    console on staging
    RAILS_ENV=staging bundle exec rails console


// watch logs on staging, same for production
tail log/staging.log -f

// restart production server
touch tmp/restart.txt 

```
