/* Write your PL/SQL query statement below */
SELECT class FROM Courses
HAVING COUNT(*)>=5
GROUP BY class;