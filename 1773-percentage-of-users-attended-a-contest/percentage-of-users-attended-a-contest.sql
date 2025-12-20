# Write your MySQL query statement below
Select contest_id,Round((Count(distinct user_id))*100/(select Count(user_id) From users),2) as percentage
From Register
Group by contest_id
Order By percentage Desc,contest_id
