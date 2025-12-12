# Write your MySQL query statement below
SELECT Product.product_name,Sales.year,Sales.price
From Sales  left JOIN Product
ON Product.product_id=Sales.product_id
