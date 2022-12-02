bool isPalin (Node* head)
{
	Node* temp = head;
	
	stack<int> s;
	
	while (temp != NULL)
	{
		s.push(temp->data);
		temp = temp->next;
	}
	
	while(head != NULL)
	{
		int i = s.top();
		
		s.pop();
		
		if(head->data != i)
		{
			return false;
		}
		 
		head = head->next; 
	}
	
	return true;
}
