## 1- Finding Even Odd number without if condition?
### Note: It is a psuedo code so there can be syntax errors.
```
const arr = ["Even", "Odd"]  //The positions of even and odd can't be changes as even=0 and odd=1
cin >> n;
cout << arr[n % 2]
```
## 2- Checking if linked list is palindrome in O(n).
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/isPalindrome%20Linked%20List.cpp

## 3- Making a queue using two stacks
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Queue%20from%20stack.cpp

## 4- Pair wise swaping a linked list
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

## 5- Reversing a linked list
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

## 6- Deleting a node from Linked List
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
## 7- Move all the zeroes of array to the end.
```
function moveAtEnd(arr, n) {
	let count = 0;
	
	for(let i = 0; i < n; i++)
		if(arr[i] !== 0)
			arr[count++] = arr[i]
			
	while(count < n)	arr[count++] = 0
}
```

## 8- Find middle of a linked list in O(n)
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Middle%20Node.cpp

## 9- Printing the last node of a linked list
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
## 10- Reversing an array
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
## 11- Deleting Middle Node of a linked list
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Deleting%20Middle%20Node.cpp

## 12- Library and FrameWork
- Libraries provide developers with predefined functions and classes to make their work easier and boost the development process. Framework, on the other hand, is like the foundation upon which developers build applications for specific platforms

## 13- Singleton problem in real life
- Singleton is like a single resource which is being shared among multiple users; for example sharing a single washing machine among all the residents in a hotel or sharing a single appliance like refrigerator among all the family members.

## 14- Starting from the 0th index, calculate right sum.
### input array: 1 2 3 4 5 output: 14 12 9 5 5
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Right%20Sum.cpp

## 15- How to swap two variables without using third variable
https://github.com/Hasandev08/Interview-Questions/blob/master/Programs/Swap%20without%20third.cpp

## 16- Removing duplicates from an array
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
## 17- Removing duplicates from a linked list
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

## 18- Checking if a string is palindrome
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

## 19- Checking if an array is palindrome
```
bool isPalindrome(int arr[], int n)
{
	for(int i = 0; i < n/2; i++)
	{
		if(arr[i] != arr[n-i-1])
		{
			return false
		}
	}
	return true
}
```

## 20- Implementing BST
### Inserting nodes in a BST
```
Node* Insert(Node* root, int data)
{
	if (root == NULL)	root = GetNewNode(data)
	else if (data <= root->data)	Insert(root->left, data)
	else	Insert(root->right, data)
	return root
}
```
### Search
```
bool Search(Node* root, int data)
{
	if (root == NULL)	return false
	else if (data == root->data)	return true
	else if (data < root->data)	return Search(root->left, data)
	else	return Search(root->right, data)
}
```
## 21- Finding min and max in a BST
### Minimum
```
int FindMin(Node* root)
{
	Node* current = root
	
	while (current != NULL)
	{
		current = current->left
	}
	return current->data
}
```
### FindMax
```
int FindMax(Node* root)
{
	Node* current = root
	
	while (current != NULL)
	{
		current = current->right
	}
	return current->data
}
```
## 22- Height of a binary tree
```
int height(Node* root)
{
	if (root == NULL)	return 0
	else {
		int lHeight = height(root->left)
		int rHeight = height(root->right)
		
		if(lHeight > rHeight)	return (lHeight + 1)
		else	return (rHeight + 1)
	}
}
```
## 23- Find the Second largest element in an array.
```
int secondLargest(int arr[], int n)
{
	int largest = 0, secondL = -1;
	
	for (int i = largest + 1; i < n; i++)
	{
		if (arr[i] > arr[largest])
			largest = i
	}
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != arr[largest])
		{
			if (secondL == -1)
				secondL = 0
			
			else if (arr[i] > arr[secondL])
				secondL = i
		}
	}
	
	return secondL
}
```
## 24- Check for pairs in an array with sum as x.
```
bool checkPair(int arr[], int size, int x)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] + arr[j] == sum)
				return true
		}
	}
}
```
## 25- Find a triplet that sums to a given value.
```
bool checkTriplet(int arr[], int size, int x)
{
	for (int i = 0; i < size - 2; i++)
	{
		for (int j = i + 1; j < size - 1; j++)
		{
			for (int k = j + 1; k < size; k++)
			{
				if (arr[i] + arr[j] + arr[k] == x)
					return true
			}
		}
	}
}
```
## 26- Given a function that generates a random number between 20-50, write a function that generates a random number between 10-70.
```
function generateRandom(min, max)
{
	let difference = max - min
	
	let rand = Math.random()
	
	rand = Math.floor(rand*difference)
	
	rand = rand + min
	
	return rand
}

1) First we will take difference between the limits in which we want the random number
2) We will then multiply the random number with that difference
3) Then we will add the lower limit i.e., min to rand to get a random number between those 2 values
```
## 27- When do you use recursion over iteration?
People use recursion only when it is very complex to write iterative code. For example, tree traversal techniques like preorder, postorder can be made both iterative and recursive. But usually we use recursive because of its simplicity.
