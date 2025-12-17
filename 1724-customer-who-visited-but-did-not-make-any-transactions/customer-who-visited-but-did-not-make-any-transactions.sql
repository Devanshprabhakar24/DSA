# Write your MySQL query statement below
Select v.customer_id, COUNT(v.customer_id) as count_no_trans 
From Visits as v left JOIN Transactions as t
on v.visit_id=t.visit_id
Where t.transaction_id  is null 
Group by v.customer_id