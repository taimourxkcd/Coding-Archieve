```
  # find the user whose role is admin
   User.joins(:roles).where(roles: { name: 'Admin' }).select('users.*').first

  # assign admin role to a user
  admin_role = Role.find_by(name: 'Admin')  
  current_user_application.roles << admin_role
  current_user_application.save
```