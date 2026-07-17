-- Write your PostgreSQL query statement below
select( SELECT salary  FROM ( SELECT salary,  DENSE_RANK() OVER (ORDER BY salary DESC) AS rn FROM employee )  
WHERE rn = 2
LIMIT 1) AS SecondHighestSalary
  
