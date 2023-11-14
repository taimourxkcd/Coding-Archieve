```
Spree::StockTransfer.ransack(stock_movements_stock_item_store_variant_name_cont: 'fird')

// revert the deleted orders
Spree::Order.with_deleted.find(3482309)
Spree::Order.with_deleted.find(3482309).update(deleted_at: nil)

```
