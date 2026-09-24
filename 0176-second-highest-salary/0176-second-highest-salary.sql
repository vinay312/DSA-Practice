# Write your MySQL query statement below
Select max(salary) as SecondHighestSalary
from Employee
where salary NOT IN (Select max(salary) from Employee);