```ruby 
  User.find_by(email: "ahsan.ali@arkhitech.com") 
  user.password = "123456"
  user.save! validate: false

// when the invoices is_paid boolean is not working


Location.find_by_slug("pizzano-i-10-markaz")
Location.find_by_slug("pizzano-i-10-markaz").subscription
Location.find_by_slug("pizzano-i-10-markaz").subscription.invoice
Location.find_by_slug("pizzano-i-10-markaz").subscription.invoice.update(is_paid: true)


// finding the user pin
User.last.pin

// 
stock_item_purchase = StockItemPurchase.find(193)
3.0.2 :389 > stock_purchase = StockPurchase.create!(
3.0.2 :390 >   title: "Daily purchase",
3.0.2 :391 >   purchased_at: Time.zone.now, 
3.0.2 :392 >   stock_location_id: 3439, 
3.0.2 :393 >   total_amount: 100.0, 
3.0.2 :394 >   paid_amount: 0.0, 
3.0.2 :395 >   pending_amount: 100.0, 
3.0.2 :396 >   payment_mode: "Cash", 
3.0.2 :397 >   stock_item_purchases: [stock_item_purchase] 
3.0.2 :398 > )


```

