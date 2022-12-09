## 1- You have two identical rops, one rop can burn in 60 min, but burnning pattern is irregular mean maybe first half of the rop can be burn in 50 min and other half can be in 10 min, you have to calculate 45 min using the ropes.
```
Burn rope#1 from both sides and rope#2 just from one side. The first rope will be burnt in 30 minutes as per the conditions.
At that time burn the rope#2 from the second side and after 15 minutes second rope will be burnt out and 
we have 45 minutes calculated
```
## 2- Finding Even Odd number without condition
### Note: It is a psuedo code so there can be syntax errors
```
const arr = ["Even", "Odd"]  //The positions of even and odd can't be changes as even=0 and odd=1
cin >> n;
cout << arr[n % 2]
```
## 3- Pillars of OOP
```
1. Abstraction
2. Encapsulation
3. Inheritance
4. Polymorphism
```
## 4- Difference between abstract class and interface
```
An abstract class allows you to define the functionalities that can be implemented by the subclasses.
Whereas the interface just allows you to define the functionalities and there is no implementation.
```

## 5- Access Modifiers Vs Access Specifiers
```
There is no difference between the access modifiers and access specifiers. They both are same. The access
modifiers is just a new term used instead of access specifiers.
Acces modifiers are the keywords i.e., private, protected, public
```

## 6- Find the distinct characters from string in O(n)
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/distinctChar.js

## 7- Private, Protected and Public Inheritance

## 8- Encapsulation and Abstraction
### Encapsulation
```
Encapsulation is hiding of the sensitive data from the user. To achieve this the class attributes
are declared as private. To make it readable for the users getters and setter are provided e.g.,
a capsule which hides the medicine within it
```
### Abstraction
```
It means that displaying only the essential information and hiding the other details
e.g., a coffee machine
```

## 9- Checking if linked list is palindrome in O(n)
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/isPalindrome%20Linked%20List.cpp

## 10- Making a queue using two stacks
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Queue%20from%20stack.cpp

## 11- Pair wise swaping a linked list
```
void pairWiseSwap(Node* head) 
{
	Node* temp = head;
	
	while(temp != NULL && temp->next != NULL)
	{
		swap(temp, temp->next)
		
		temp = temp->next->next
	}
}
```

## 12- Reversing a linked list
```
void reverse ()
{
	Node* current = head;		  //This node is initally on the head of the linked list
	Node* temp = NULL;                //These are the nodes initially pointing to NULL
	Node* temp1 = NULL;
	
	while(current != NULL) 		//traversing the linked list
	{
		temp = current->next;		//the temp will go to the node that is next to the current node
		current->next = temp1;		//the current node that was pointing on the next node will start pointing the previous node
		
		temp1 = current;		//the previous node pointer will be moved one step so that it start pointing the node on which current is pointing
		current = temp;			//the current will also be moved one step further so that the next nodes can be reversed
	}
	head = temp1
}
```

## 13- Deleting a node from Linked List
### Deleting head node
```
void deleteAtHead()
{
	Node* temp = head;
	
	head = head->next;
	delete(temp);
	temp = NULL;
}
```
### Deleting any node other than head or last
```
void deleteAtMid()
{
	Node* current = head;
	Node* prev = NULL;
	Node* next = NULL;
	
	for(int i = 0; i < position; i++)
	{
		prev = current;
		current = current->next;
		next = current->next;
	}
	prev->next = current->next;
	free(current);
	current = NULL;
}
```
### Deleting the last node
```
void deleteAtEnd()
{
	Node* temp = head;
	
	while(temp != NULL)
	{
		temp = temp->next;
	}
	free(temp);
	temp = NULL;
}
```
## 14- Move all the zeroes of array to the end.
```
function moveAtEnd(arr, n) {
	let count = 0;
	
	for(let i = 0; i < n; i++)
		if(arr[i] !== 0)
			arr[count++] = arr[i]
			
	while(count < n)	arr[count++] = 0
}
```
## 15- Inheritance Vs Encapsulation
```
In inheritance all the attributes and methods are inherited from the parent to child class whereas 
in encapsulation the private members of the class cannot be accessed
```

## 16- What are garbage values
```
These are the waste or unused values which are available in the memory at the time of declaration of the values.
```
## 17- Find middle of a linked list in O(n)
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Middle%20Node.cpp

## 18- Printing the last node of a linked list
```
void lastNode(Node* head)
{	
	Node* temp = head;
	
	while(temp != NULL)
	{
		temp = temp->next;		//traversing to the last node
	}
	
	cout << temp->data;		//printing the last node of the linked list
}
```

## 19- Venn Diagrams for Joins
https://learnsql.com/blog/sql-joins/

## 20- Reversing an array
```
int reverseArray(int arr[], int start, int end)
{
	while(start < end)
	{
		int temp = arr[start]
		arr[start] = arr[end]
		arr[end] = temp
		start++
		end--
	}
}
```
## 21- Deleting Middle Node of a linked list
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Deleting%20Middle%20Node.cpp

## 22- Diamond Problems
https://www.makeuseof.com/what-is-diamond-problem-in-cpp/

## 23- Class C inherits fron Class A and B. suppose A and B have same methods having different definitions, which function should be called by child.
- There will be an error of ambuiguity. In other words it will be a diamond problem.

## 24- What is the role of Primary key and Foreign key regarding tables?
- Primary and foreign keys help create structure in relational databases. A primary key ensures unique row identification. This results in faster sorting, searching, and querying operations. A foreign key creates a link between two tables.

## 25- Library and FrameWork
- Libraries provide developers with predefined functions and classes to make their work easier and boost the development process. Framework, on the other hand, is like the foundation upon which developers build applications for specific platforms

## 26- Singleton problem in real life
- Singleton is like a single resource which is being shared among multiple users; for example sharing a single washing machine among all the residents in a hotel or sharing a single appliance like refrigerator among all the family members.

## 27- Shallow Copy and Deep Copy
- In Shallow copy, a copy of the original object is stored and only the reference address is finally copied. In Deep copy, the copy of the original object and the repetitive copies both are stored.
- https://byjus.com/gate/difference-between-shallow-and-deep-copy-of-a-class/#:~:text=In%20Shallow%20copy%2C%20a%20copy,repetitive%20copies%20both%20are%20stored.

## 28- You have Two Jugs(Containers/Flasks), one of 3-litres and the other one of 5-litres. How would you exactly measure 4-litres considering you have excess supply of water
- Empty the 3-liter bowl, and then transfer the 2 liters from the 5-liter bowl into it. Now fill the 5-liter bowl again, then pour water carefully from the 5-liter bowl into the 3-liter bowl until it is full - exactly one more liter. The 5-liter bowl now has exactly 4 liters.
- Empty the 5 liter container and pour the 1 liter which remains in the 3 liter bucket into the 5 liter bucket. Fill up the 3 liter container and pour these 3 liters into the 5 liter container. Finally, the larger bucket now contains exactly 4 liters!

## 29- How many times the minute hand and the hour hand of the clock meet each other in 12 hours consider both hands of the clock are initially at 12
- We know that the minute and hour hand coincide every 65 minutes and not 60 minutes.
Also, the hour and minute hand coincide only once between 11 and 1 o’clock i.e. at 12 o’clock.
So, from both the above statements we can say that the two hands coincide exactly 11 times in a 12 hour span

## 30- How to prevent a class from being subclasses?
- You can prevent a class from being subclassed by using the final keyword in the class's declaration. Similarly, you can prevent a method from being overridden by subclasses by declaring it as a final method. An abstract class can only be subclassed; it cannot be instantiated.

## 31- Starting from the 0th index, calculate right sum.
### input array: 1 2 3 4 5 output: 14 12 9 5 5
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Right%20Sum.cpp

## 32- Types of keys 
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
