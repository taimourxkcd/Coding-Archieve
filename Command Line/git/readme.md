 - git config --global user.email "you@example.com"
 - git config --global user.name "Your Name"

  ---------
 - ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
 - eval "$(ssh-agent -s)"
 - ssh-add ~/.ssh/id_rsa
 - cat ~/.ssh/id_rsa.pub

 - git remote remove origin
 - git remote add origin url(ssh)

- pull all remote branches locally
- git pull --all

- this will merge all the branches with origin
- git branch -r | while read remote; do git branch --track "${remote#origin/}" "$remote"; done

