## 1- Venn Diagrams for Joins
https://learnsql.com/blog/sql-joins/

## 2- What is the role of Primary key and Foreign key regarding tables?
- Primary and foreign keys help create structure in relational databases. A primary key ensures unique row identification. This results in faster sorting, searching, and querying operations. A foreign key creates a link between two tables.

## 3- Types of keys 
```
- Super Key – A super key is a group of single or multiple keys which identifies rows in a table.
- Primary Key – is a column or group of columns in a table that uniquely identify every row in that table.
- Candidate Key – is a set of attributes that uniquely identify tuples in a table. Candidate Key is a super key with no repeated attributes.
- Alternate Key – is a column or group of columns in a table that uniquely identify every row in that table.
- Foreign Key – is a column that creates a relationship between two tables. The purpose of Foreign keys is to maintain data integrity and allow navigation between two different instances of an entity.
- Compound Key – has two or more attributes that allow you to uniquely recognize a specific record. It is possible that each column may not be unique by itself within the database.
- Composite Key – is a combination of two or more columns that uniquely identify rows in a table. The combination of columns guarantees uniqueness, though individual uniqueness is not guaranteed.
- Surrogate Key – An artificial key which aims to uniquely identify each record is called a surrogate key. These kind of key are unique because they are created when you don’t have any natural primary key.
```
## 4- Difference between sql and nosql.
- SQL is the programming language used to interface with relational databases. (Relational databases model data as records in rows and tables with logical links between them). NoSQL is a class of DBMs that are non-relational and generally do not use SQL e.g., MongoDB.

## 5- Stored Procedures
- A database object that contains block of sql code.

## 6- Triggers
- A block of sql code that executes automatically on insert, update or delete.

## 7- Events
- A block of sql code that is scheduled to be executed.

## 8- Transactions and it's ACID properties.
- A group of sql statements that represent a single unit of work. All the statements are completed successfully or the transaction will be failed e.g., bank transaction.
- Atomicity - the transactions are like atoms. No matter how many statements are there, either all the statements are executed and transactions is successful or the trasactions is rolled back and none of the statements are executed and the transaction is failed.
- Consistency - the database will always remain consistent. There will be no null value.
- Isolation - transactions are protected or isolated from each other if they tried to modify same data. If multiple transactions try to update the same data the rows will get locked/isolated. Other transactions will have to wait till the first transaction is completed.
- Durability - Once changes are made by transactions they are permanent i.e., if the systems crashes those changes will not be effected.

## 9- Normalization
- It is used to prevent duplication because there can be a database in which any attribute e.g., name is repeated. So if we want to update the name we will have to update it on all the places. That's where normalization is used.
- 1NF - Each cell should have a single value and we cannot have repeated values e.g., there is an attribute tag. There can be different tags like 1, 2, 3... In such cases, that attribute is moved to another table and linked with the previous table (many-many relation) i.e., the parent table. As many-many relation cannot be implemented in relational databases so we add a link table between these two tables both having one to many relations which eventually becomes many-many relation.
- 2NF - Every table should describe one entity, and every column in that table should describe that entity e.g., if there is an entity that does not belong to that table like if there is a table orders and there is an entity customer_name, the entity customer_name does not belong to the orders table so this entity should be removed and added in another table.
- 3NF - A column in a table should not be derived from other columns e.g., there are two columns of first name and last name and there is a third column, full name,  derieved from these 2 columns. Now if we update one of the name and forgets to update the full name the data will become incorrect.

## 10- Normalization vs Denormalization
- Normalization is the technique of dividing the data into multiple tables to reduce data redundancy and inconsistency and to achieve data integrity. On the other hand, Denormalization is the technique of combining the data into a single table to make data retrieval faster.
- Normalization increases the number of tables and joins. In contrast, denormalization reduces the number of tables and join.

### Conclusion
- Normalization is used when the faster insertion, deletion and update anomalies, and data consistency are necessarily required. On the other hand, Denormalization is used when the faster search is more important and to optimize the read performance.

## 11-  Can foreign keys be null?
Foreign keys allow key values that are all NULL, even if there are no matching PRIMARY or UNIQUE keys.

## 12-  What is performance wise better join or a subquery?
Joins tend to execute faster. The subqueries are simpler, easier to understand, and easier to read.
