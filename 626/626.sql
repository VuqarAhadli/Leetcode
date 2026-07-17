-- Write your PostgreSQL query statement below
SELECT  id, case WHEN id = (SELECT MAX(id) FROM seat) AND (SELECT MAX(id) FROM seat) % 2 = 1 THEN student
        WHEN id % 2 = 1 THEN LEAD(student) OVER (ORDER BY id)
        WHEN id % 2 = 0 THEN LAG(student) OVER (ORDER BY id)
    END AS student 
FROM seat;