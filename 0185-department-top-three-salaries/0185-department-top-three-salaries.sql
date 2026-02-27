/* Write your PL/SQL query statement below */
WITH cte AS(
SELECT d.name AS Department,e.name AS Employee,e.salary AS Salary FROM
Employee e
JOIN
Department d
ON e.departmentId=d.id),
cte2 AS(
SELECT department,employee,salary,
DENSE_RANK() OVER(PARTITION BY department ORDER BY salary DESC) AS rank
FROM cte)
SELECT department,employee,salary FROM cte2
WHERE rank<=3;