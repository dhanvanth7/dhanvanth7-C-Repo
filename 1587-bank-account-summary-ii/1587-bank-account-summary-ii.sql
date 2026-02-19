/* Write your PL/SQL query statement below */
SELECT u.name,SUM(t.amount) AS balance FROM
Users u
LEFT JOIN
Transactions t
ON u.account=t.account
HAVING SUM(t.amount)>10000
GROUP BY u.name,t.account;