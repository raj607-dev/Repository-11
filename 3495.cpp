LeetCode Logo
Problem List
Debugging...
Debugging...









5
5Streaks
Buy Time Travel Ticket
 now!
DCC Badge

avatar
Avatar
Rajdeep Jadhao
Access all features with our Premium subscription!
myLists
My Lists
notebook
Notebook
submissions
Submissions
progress
Progress
points
Points
Try New Features
Orders
My Playgrounds
Settings
Appearance
Sign Out
Premium
Description
Editorial
Editorial
Solutions
Solutions
Submissions
Submissions


Code
Testcase
Testcase
Test Result
1378. Replace Employee ID With The Unique Identifier
Solved
Easy
Topics
premium lock icon
Companies
SQL Schema
Pandas Schema
Table: Employees

+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| id            | int     |
| name          | varchar |
+---------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table contains the id and the name of an employee in a company.
 

Table: EmployeeUNI

+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| id            | int     |
| unique_id     | int     |
+---------------+---------+
(id, unique_id) is the primary key (combination of columns with unique values) for this table.
Each row of this table contains the id and the corresponding unique id of an employee in the company.
 

Write a solution to show the unique ID of each user, If a user does not have a unique ID replace just show null.

Return the result table in any order.

The result format is in the following example.

 

Example 1:

Input: 
Employees table:
+----+----------+
| id | name     |
+----+----------+
| 1  | Alice    |
| 7  | Bob      |
| 11 | Meir     |
| 90 | Winston  |
| 3  | Jonathan |
+----+----------+
EmployeeUNI table:
+----+-----------+
| id | unique_id |
+----+-----------+
| 3  | 1         |
| 11 | 2         |
| 90 | 3         |
+----+-----------+
Output: 
+-----------+----------+
| unique_id | name     |
+-----------+----------+
| null      | Alice    |
| null      | Bob      |
| 2         | Meir     |
| 3         | Winston  |
| 1         | Jonathan |
+-----------+----------+
Explanation: 
Alice and Bob do not have a unique ID, We will show null instead.
The unique ID of Meir is 2.
The unique ID of Winston is 3.
The unique ID of Jonathan is 1.
 

Seen this question in a real interview before?
1/5
Yes
No
Accepted
1,096,841/1.3M
Acceptance Rate
83.6%
Topics
icon
Companies
Discussion (195)

Choose a type



Copyright © 2025 LeetCode. All rights reserved.

1.8K


195


43 Online
MySQL
Auto




12345
select u.unique_id , e.name 
from employees e
join employeeuni u
on e.id = u.id;

Saved
Wrong Answer
Runtime: 122 ms
Case 1
Input
Employees =
| id | name     |
| -- | -------- |
| 1  | Alice    |
| 7  | Bob      |
| 11 | Meir     |
| 90 | Winston  |
| 3  | Jonathan |
EmployeeUNI =
| id | unique_id |
| -- | --------- |
| 3  | 1         |
| 11 | 2         |
| 90 | 3         |
Output
| unique_id | name     |
| --------- | -------- |
| 2         | Meir     |
| 3         | Winston  |
| 1         | Jonathan |
Expected
| unique_id | name     |
| --------- | -------- |
| null      | Alice    |
| null      | Bob      |
| 2         | Meir     |
| 3         | Winston  |
| 1         | Jonathan |
Contribute a testcase
Students With Invalid Departments - LeetCode
Search questions


1
