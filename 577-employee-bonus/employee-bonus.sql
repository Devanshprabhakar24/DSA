# Write your MySQL query statement below
Select e.name,b.bonus
From   
      employee e left join Bonus b
      on e.empId=b.empId
where b.bonus is NULL or b.bonus<1000     

     