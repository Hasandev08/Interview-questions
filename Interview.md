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
	Node* next = NULL;                //These are the nodes initially pointing to NULL
	Node* prev = NULL;
	
	while(current != NULL) 		//traversing the linked list
	{
		next = current->next;		//the temp will go to the node that is next to the current node
		current->next = prev;		//the current node that was pointing on the next node will start pointing the previous node
		
		prev = current;		//the previous node pointer will be moved one step so that it start pointing the node on which current is pointing
		current = next;			//the current will also be moved one step further so that the next nodes can be reversed
	}
	head = prev
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
- Empty 3-litre bowl. Add 3-litres from 5-litre bowl to 3-litre bowl so that 2-litre water remains in the 5-litre bowl. Empty 3-litre bowl. Add remaining i.e., 2litres water from 5-litre bowl to 3-litre bowl so that it contains 2-litre bowl. Refill the 5-litre bowl and pour 1-litre from it to the 3-litre bowl so that 4-litre water remains in 5-litre bowl. 

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
## 33- Can we overload constructors
```
Constructors can be overloaded in a similar way as function overloading. Overloaded constructors have the same name (name of the class) but the different number of arguments. Depending upon the number and type of arguments passed, the corresponding constructor is called.
```

## 34- How to swap two variables without using third variable
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Swap%20without%20third.cpp

## 35- You have 12 black socks and 12 white socks in your drawer. What is the minimum number of socks that you have to take out to make sure that you have a matching pair? Room is dark, u cant see colours
- 3 socks. Assume the first sock is black. The second one could be black, in which case you have a matching pair. If the second sock is white, the third sock will be either black and match the first sock, or white and match the second sock.

## 36- Removing duplicates from an array
```
int removeDuplicate(int arr[], int n)
{
	int temp[n]
	int j = 0
	
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i] != arr[i+1])
			temp[j++] = arr[i] 
	}
	
	temp[j++] = arr[n-1]
	
	for(int i = 0; i < j; i++)
	{
		arr[i] = temp[i]
	}
	
	return j
}
```
## 37- Removing duplicates from a linked list
```
int removeDuplicate(Node* head)
{
	Node* current = head;
	Node* temp = NULL;
	
	while(current->next != NULL)
	{
		if(current->data == current->next->data)
		{
			temp = current->next->next;
			free(current->next)
			current->next = temp
		}
		else
		{
			current = current->next
		}
	}
}
```

## 38- Checking if a string is palindrome
```
bool isPalindrome(string S)
{
	for(int i=0; i < S.length()/2; i++)
	{
		if(S[i] != S[S.length() - i - 1])
		{
			return false
		}

	}
	return true
}
```

## 39- Checking if an array is palindrome
```
bool isPalindrome(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] != arr[n-i-1])
		{
			return false
		}
	}
	return true
}
```

## 40- Difference between sql anf nosql
- SQL is the programming language used to interface with relational databases. (Relational databases model data as records in rows and tables with logical links between them). NoSQL is a class of DBMs that are non-relational and generally do not use SQL e.g., MongoDB

## 41- Three boxes labeled as red, blue and mixed.These labels are incorrect.one box contains red balls and another box contains blue balls and remaining one box contains both red and blue balls. Pickup one ball from any box(u should pickup ball only once) and name the correct labels.
- The boxes will be wrongly labeled as RR, BB, RB meaning all red, all blue and mix respectively. So as the labels are wrong we will first open the box having label of RB knowing that it is the label of the mixed box. As the label will is wrong so which ever colored ball we get that box will be of that color. Suppose if that box contains all the red balls then we will open the box labeled with BB which will containe random balls as red balls were already found and it can not have blue balls as the labels are not right, So the last box will definitely contain mix balls.

## 42- Cut the cake into 8 parts with only three cuts
- First cut the cake in 4 pieces using two of the cuts so that only one cut remains.
- Now take all the four pieces in a stack and add a cut to divide the cake into 8 parts.

## 43- If you have 7 balls. One weighs more than the others (not significantly). You have a scale, like the scales of justice. How do you find the weighted ball only using the scale twice?
- Weigh 3 and 3. If the weight is equal then you are holding the heavier ball else if the weight is not equal take the 3 balls with greater weight and weigh any 2 balls if the weight is equal you are holding the heavier ball else the the heavier ball will be on the scale.

## 44- You have 12 black socks and 12 white socks in your drawer. What is the minimum number of socks that you have to take out to make sure that you have a matching pair? Room is dark, u cant see colours (consider urself blind).
- If the first is white and the second is black, the third would be either white or black, making a match with one of the first two.
- If the first is white and the second is white, there is a match.
- If the first is black and the second is black, there is a match.

## 45- A windowless room contains three identical light fixtures, each containing an identical light bulb or light globe. Each light is connected to one of three switches outside of the room. Each bulb is switched off at present. You are outside the room, and the door is closed. Before opening the door you may play around with the light switches as many times as you like. But once you've opened the door, you may no longer touch a switch. After this, you go into the room and examine the lights. How can you tell which switch goes to which light?
- Turn any two switches on and after a while turn any of them off and enter the room. The bulb on will be of the switch that is on, the bulb which will be a bit hotter will be of the switch that was turned off and the third bulb will be of the switch which was never turned on.

## 46- Two trains are on same track and they are coming toward each other. The speed of the first train is 50 km/h and the speed of the second train is 70 km/h. A bee starts flying between the trains when the distance between two trains is 100 km. The bee first flies from first train to second train. Once it reaches the second train, it immediately flies back to the first train … and so on until trains collide. Calculate the total distance travelled by the bee. Speed of bee is 80 km/h

## 47- There are 100 doors in a row, all doors are initially closed. A person walks through all doors multiple times and toggle (if open then close, if close then open) them in the following way: In the first walk, the person toggles every door In the second walk, the person toggles every second door, i.e., 2nd, 4th, 6th, 8th, … In the third walk, the person toggles every third door, i.e. 3rd, 6th, 9th, … Likewise, In the 100th walk, the person toggles the 100th door.
- A door is toggled in an ith walk if i divide door number. For example, door number 45 is toggled in the 1st, 3rd, 5th, 9th,15th, and 45th walks.
The door is switched back to an initial stage for every pair of divisors. For example, 45 is toggled 6 times for 3 pairs (5, 9), (15, 3), and (1, 45). 

It looks like all doors would become closed at the end. But there are door numbers that would open, for example, in 16, the divisors are (1,2,4,8,16) and as the pair(4,4) contributes only one divisor making the number of divisors odd, it would become open at the end. Similarly, all other perfect squares like 4, 9,…, and 100 would become open. Now, for prime numbers like 2,3,5,7… the divisors are (1, that number) and it is a pair, so they will remain closed at the end. And for all other numbers divisors are always in pairs, e.g. 15 = (1,15),(3,5), they will also remain closed.

So the answer is 1, 4, 9, 16, 25, 36, 49, 64, 81 and 100.

## 48- There are 4 persons (A, B, C and D) who want to cross a bridge in night.
- A takes 1 minute to cross the bridge.

- B takes 2 minutes to cross the bridge.

- C takes 5 minutes to cross the bridge.

- D takes 8 minutes to cross the bridge.

- There is only one torch with them and the bridge cannot be crossed without the torch. There cannot be more than two persons on the bridge at any time, - and when two people cross the bridge together, they must move at the slower person’s pace.

- Can they all cross the bridge in 15 minutes?

https://www.geeksforgeeks.org/puzzle-18-torch-and-bridge/?ref=lbp
