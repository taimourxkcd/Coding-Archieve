```
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
```


```
Add a file into your repositery 

git init								: initializes the git 
git config remote.origin.url						: gets the repositrery that you need 
git remote add origin (url)					: sets up the remote repositrpush y
git remote -v 								: checks the status of your git repositry 
git add .								: add all the files that are present inside the directory 
git commit -m "comment"							: commits those files into the the respo
git push origin master/git push -f origin master 			: pushes them into the repositry 

git pull								: pulls you out of your old reposi i guess
git status 								: checks the status of git 

	FREECODECAMP
cd 																	change directory 
ls -la																shows all the hidden and every file in your repositry 
git status  														shows all the files that were created , deleted or mordified 
git add .															adds all the files 
git add index.html													sdd the specific file 
git commit -m "added index.html" -m "some description"				commits first m is for message. second m is for description, code is saved locally
git push 															pushes your code to live where your repositery is 
ssh-keygen -t rsa -b 4096 -C "taimour.rkt@gmail.com"            	generates your ssh key, -t specifies type of encryption, -b specifies strength
																	-c specifies the email
ls | grep testkey													search for a specified file 
cat testkey.pub														prints everything that was inside your file  
git init															initializes the folder in which we are as git repositry 
git remote add origin https://github.com/taimourz/demo-repo2.git	add the content to the repositry that was created locally in your machine into remote repositry 
git remote -v 														gives the names of all the remote repositries 
git push origin master 												locally created repo into remote server
git push -u origin master 											sets an upstream so you do not have to type origin master the next time 
git brach 															shows the current branch we are on 
git checkout -b feature-readme-instructions							creates and switches to a branch named "feature-readme-instructions"
git checkout master 												switches to the master branch 
git diff feature-readme-instructions								shows the differences/changes made between both the branches 
git push --all -u													push all the branches into the remore directory 
git branch -d random 												deletes the branch named random 
git merge random 													meges random with the master  
git pull origin master 												use this if upstream is not set 
git pull 															pulls out all the changes from your remote repositery into the local repo
commit -am "merged with master "      								allows to both add and commit at the same time with the message written 
git reset README.md													unstage the changes that were made 
git reset HEAD~1													HEAD goes to one command back and ~1 tells it to undo a git command further 
git log 															gives you the list of all your previous commits 
git reset f593a5cdc0ee2dd8861e613a392eca53b97464f9					reset all the changes that were made with that hash 
git reset --hard 3cc13be6734cc7587d8da27cdac072defb2f1a9c    		completely removes all the changes that were made  


git remote set-url origin git://new.url.here						use to set remote repositary 


XOXO
git config --global user.name "FIRST_NAME LAST_NAME"
git config --global user.email "MY_NAME@example.com"


-------------------------
git remote remove origin


// SET UP GIT ON LINUX

ssh-keygen -t rsa -b 4096 -C "taimour.rkt@gmail.com"

 cat ~/.ssh/id_rsa

SSHAGENT=/usr/bin/ssh-agent

SSHAGENTARGS="-s"                                                               
if [ -z "$SSH_AUTH_SOCK" -a -x "$SSHAGENT" ]; then
    eval `$SSHAGENT $SSHAGENTARGS`
    trap "kill $SSH_AGENT_PID" 0
fi

ssh-add ~/.ssh/id_rsa

cat ~/.ssh/id_rsa.pub copy contents from 

ssh-add


// FETCH ALL OF THE REMOTE REPO BRANCHES 
first clone the repo 
then git branch -r
then git pull origin develo     p (if the name of the branch develop )
once pulled then switch to it like git checkout develop.
now you have a branch locally

-------
git stash apply stash@{STASH_INDEX}
git stash list
git stash pop stash@{STASH_INDEX}

---
git remote add [remote_name] [remote_repo_url]
git fetch [remote_name]
git checkout [branch_name]
git merge [remote_name]/[branch_name]

git merge --allow-unrelated-histories repo1/master


----------------------------
git log --pretty=oneline
git log --stat
git log --graph
git log master...header: it will show you only the commits that are unique to the header and master

-----------------
git config  --list
git log deploy-render: shows all of the commits of deploy render branch

-----------------
deploy the branch
git push --set-upstream origin master deploy-render #tobe done first time

then 
git add .
git commit -m "something"
git push origin deploy-render


-----------------
git diff --stat af34..ac232 :it shows the difference between two git commits
git branch -d branch_name
git push origin --delete branch_name


-------------------
 git stash
 git checkout master
 git checkout -b mercury-fixes
 git stash apply                                    

-------------------------
 git reset --soft HEAD~1

-------------------------
ssh-add -D : delete all identities currently stored in the authentication agent
cat ~/.ssh/your_second_private_key.pub


---------------------
git submodule update --init   : get submodule updates







```
