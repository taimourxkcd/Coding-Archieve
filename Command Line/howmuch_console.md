```
Spree::StockTransfer.ransack(stock_movements_stock_item_store_variant_name_cont: 'fird')

// revert the deleted orders
Spree::Order.with_deleted.find(3482309)
Spree::Order.with_deleted.find(3482309).update(deleted_at: nil)

variant =  Spree::StoreVariant.find_by(id: 1429405)
 brand_id =  Spree::StoreVariant.find_by(id: 1429405).variant.product.brand_taxons.first.id
 category_d =  Spree::StoreVariant.find_by(id: 1429405).variant.product.category_taxons.first.id

store_variant_taxon = StoreVariantTaxon.create(
  store_variant: store_variant,
  brand_taxon_id: brand_id,
  category_taxon_id: category_id
)

// add column from the console
 ActiveRecord::Base.connection.add_column :spree_stock_movements, :deleted_at, :datetime

// send email from local
change sparkpost api key. get it form live
then in store_mailer.rb       sparkpost_mail(to: "taimoor.afzal@arkhitech.com", subject: subject, sparkpost_data: data)
then from console LowInventoryNotificationWorker.new.perform(6829511) // id is stock item id



```
