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


 stock_item_purchase = StockItemPurchase.find(193)
            stock_purchase = StockPurchase.create!(
              title: "Daily purchase",
              purchased_at: Time.zone.now, 
              stock_location_id: 3439, 
              total_amount: 100.0, 
              paid_amount: 0.0, 
              pending_amount: 100.0, 
              payment_mode: "Cash", 
              stock_item_purchases: [stock_item_purchase] 
            )

st = StockItemPurchase.where.not(stockable_id: nil).limit(1)

new_ingredient = Ingredient.create!(
    name: "Milk",
    description: "lorem",
    weight: 200,
    available: true,
    location_id: 3439,
    position: 34,
    
 )


location = Location.find_by(slug: "july-12th").stock_items

new_stock_item = stock_location.stock_items.create!(
   purchased_quantity: 0.0,
   purchased_cost: 0.0,
   consumed_quantity: 0.0,
   consumed_cost: 0.0,
   unit: "kg", # Replace with the desired unit, e.g., 'gram', 'kg', 'dozen', etc.
   wasted_quantity: 0.0,
   wasted_cost: 0.0,
   current_cost_per_unit: 0.0,
   stockable_type: "Ingredient", # Replace with the appropriate polymorphic association type, e.g., 'Ingredient'
   stockable_id: 21247  # Replace with the ID of the associated stockable item if applicable
 )


new_menu_item = location.stock_items.create!(
   title: "Dummy Menu Item",
   status: "available",
   description: "This is a dummy menu item.",
   price: 10.99,
   ingredients_min: 1,
   ingredients_max: 5,
   customizable: true,
   order_position: "first",
   long_description: "This is a long description for the dummy menu item.",
   min_price: 5.99,
   stock_location_id: 3439,
   position: 1,
   customizable_count: 2,
   unit: "dozen",
   menu_id: 11445,
   location: location # Associate the menu item with the Location
 )

 new_stock_item = stock_location.stock_items.create!(
    purchased_quantity: 0.0,
    purchased_cost: 0.0,
    consumed_quantity: 0.0,
    consumed_cost: 0.0,
    unit: "count", # Replace with the desired unit, e.g., 'gram', 'kg', 'dozen', etc.
    wasted_quantity: 0.0,
    wasted_cost: 0.0,
    current_cost_per_unit: 0.0,
    stockable_type: "MenuItem", # Replace with the appropriate polymorphic association type, e.g., 'Ingredient'
    stockable_id: 92447  # Replace with the ID of the associated stockable item if applicable
 )



```

