bool isPalin (Node* head)
{
	Node* temp = head;
	
	stack<int> s;		//creating a stack
	
	while (temp != NULL)		//traversing the linked list
	{
		s.push(temp->data);	//pushing the linked list data in the stack
		temp = temp->next;
	}
	
	while(head != NULL)
	{
		int i = s.top();	//taking the top element in the stack
		
		s.pop();		//removing the element from the stack
		
		if(head->data != i)	//comparing the data in the head node with the top element of stack to check the palindrome
		{
			return false;
		}
		 
		head = head->next; 
	}
	
	return true;
}
