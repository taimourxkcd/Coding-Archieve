```ruby 
  User.find_by(email: "ahsan.ali@arkhitech.com") 
  user.password = "123456"
  user.save! validate: false

// open console in staging
RAILS_ENV=staging bundle exec rails c

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

@order_item_ingredients.each do |order_item_ingredient|
  ingredient_name = order_item_ingredient.ingredient&.name
  puts ingredient_name
end

 OrderItemIngredient.ransack(menu_item_ingredient_ingredient_name_cont: "water").result.last(20).first.menu_item_ingredient.ingredient


@collection.second.menu_item_ingredient.stock_item.update(unit: "dozen")
// update on staging
OrderItemIngredient.last.menu_item_ingredient.stock_item.update(unit: "kg")
OrderItemIngredient.last.menu_item_ingredient.stock_item.update(purchased_quantity: "23", consumed_quantity: 10)


 l.order_item_ingredients.first.menu_item_ingredient.stock_item.update(purchased_quantity: "50", consumed_quantity: 25)
 l.order_item_ingredients.first.menu_item_ingredient.stock_item.update(unit: "dozen")

// update top selling items
find order o = total_orders[3].id
find orderItem for that order  oi = OrderItem.where(order_id: 1166772)
update with the item you want to sell the most ) oi.update(item_id: 92417)


User.where('email LIKE ?', 'fasih%.com').pluck(:email)


// redis error
config/application.yml
REDIS_URL: redis://127.0.0.1/10
SIDEKIQ_REDIS_URL: redis://127.0.0.1:6379/11

  StockItem.ransack(stockable_type_eq: "ComponentOptionValue").result.count




3.0.2 :118 > owner = Location.find_by_slug("at-cafe").owner
3.0.2 :119 > allowed_locations = owner.current_packages.cached_sum_of('User', owner.id, :available_locations)
 => 1 
3.0.2 :120 > allowed_locations.positive?
 => true 
3.0.2 :121 > locations_count = owner.managed_locations.visible.count
 => 1 
3.0.2 :122 > locations_count >= allowed_locations
 => true 
3.0.2 :123 > locations_count > allowed_locations
 => false 
3.0.2 :124 >  locations_count > allowed_locations
 => false 

// find the name of all of the packages
 Subscription.includes(:package).limit(30).distinct.pluck('packages.title')

// create a new subscription
user = User.find_by(email: "info@atcafe.com.pk")
package = Package.find_by(title: "Starter")
subscription = Subscription.create(user: user, package: package, amount: 15000, starts_at: Time.now, expires_at: Time.now + 1.year, obj_id: 3442, obj_type: "Location")

// find out the subscriptions that a particular location has
 Subscription.joins(:locations_subscriptions).where(locations_subscriptions: { location_id: 3198 })

// find the user that has subscriptions
 User.joins(:subscriptions).where.not(subscriptions: { id: nil }) .where("email LIKE ?", "%fasih%").pluck(:email)

// find order count of menu items starting from OrderItem tabel
    OrderItem.where(component_option_value_id: component_option_value.id,item_id: id,item_type: 'MenuItem',deleted_at: nil).sum(&:number)

// do ransack search
Order.ransack.location_drawers_id_eq

//
 Menu.joins(ingredients: :ingredient_option_values).distinct.first.ingredients.first.ingredient_option_values.first.ingredient.stock_items.first

```

