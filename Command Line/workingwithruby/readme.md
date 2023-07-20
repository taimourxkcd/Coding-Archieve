```ruby
---
# This line will print the pid of the current ruby process. This might be an 
# irb process, a rake process, a rails server, or just a plain ruby script.
  puts Process.pid

$ ps -p <pid-of-irb-process>
---
# Notice that this is only one character different from getting the
# pid of the current process.
puts Process.ppid

$ ps -p <ppid-of-irb-process>

---
passwd = File.open('/etc/passwd')
puts passwd.fileno

passwd = File.open('/etc/passwd')
puts passwd.fileno

hosts = File.open('/etc/hosts')
puts hosts.fileno

# Close the open passwd file. The frees up its file descriptor
# number to be used by the next opened resource.
passwd.close

null = File.open('/dev/null')
puts null.fileno


passwd = File.open('/etc/passwd')
puts passwd.fileno
passwd.close
puts passwd.fileno


puts STDIN.fileno
puts STDOUT.fileno
puts STDERR.fileno

----
p Process.getrlimit(:NOFILE)

Process.setrlimit(:NOFILE, 4096)
p Process.getrlimit(:NOFILE)

Process.setrlimit(:NOFILE, Process.getrlimit(:NOFILE)[1])

# Set the maximum number of open files to 3. We know this
# will be maxed out because the standard streams occupy
# the first three file descriptors.
Process.setrlimit(:NOFILE, 3)

File.open('/dev/null')

# The maximum number of simultaneous processes 
# allowed for the current user.
Process.getrlimit(:NPROC)

# The largest size file that may be created.
Process.getrlimit(:FSIZE)

# The maximum size of the stack segment of the
# process.
Process.getrlimit(:STACK)


----
$ MESSAGE='wing it' ruby -e "puts ENV['MESSAGE']"

# The same thing, with places reversed!
ENV['MESSAGE'] = 'wing it'
system "echo $MESSAGE"

puts ENV['EDITOR']
puts ENV.has_key?('PATH')
puts ENV.is_a?(Hash)





```