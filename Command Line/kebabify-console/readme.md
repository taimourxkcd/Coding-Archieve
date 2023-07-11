```ruby 
  User.find_by(email: "ahsan.ali@arkhitech.com") 
  user.password = "123456"
  user.save! validate: false

// when the invoices is_paid boolean is not working


Location.find_by_slug("pizzano-i-10-markaz")
Location.find_by_slug("pizzano-i-10-markaz").subscription
Location.find_by_slug("pizzano-i-10-markaz").subscription.invoice
Location.find_by_slug("pizzano-i-10-markaz").subscription.invoice.update(is_paid: true)



```

