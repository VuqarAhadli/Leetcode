SELECT person_name
FROM ( SELECT * FROM ( SELECT person_name,turn, SUM(weight) OVER (ORDER BY turn) AS k FROM queue) AS x
WHERE k <= 1000
ORDER BY turn DESC
LIMIT 1
) AS y;