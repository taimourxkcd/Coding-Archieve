```
// locate the location of staging log file
find / -name '*.log' 2>/dev/null | grep staging
/usr/share/nginx/staging.timeinvest.com/shared/log/staging.log



 cd /usr/share/nginx/staging.timeinvest.com/current/
 RAILS_ENV=staging bundle exec rails console


```
