-- Write your PostgreSQL query statement below
select employeeuni.unique_id,e.name from employees as e
left join employeeuni on e.id = employeeuni.id