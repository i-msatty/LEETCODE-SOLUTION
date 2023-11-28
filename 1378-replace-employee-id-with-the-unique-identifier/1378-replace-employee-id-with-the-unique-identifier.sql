/* Write your PL/SQL query statement below */

select unique_id,name from Employees left outer join EmployeeUNI on Employees.id=EmployeeUNI.id;