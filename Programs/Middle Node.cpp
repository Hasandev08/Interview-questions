int getLength(Node* head)			//finding the length of the linked list
{
	int length = 0;
	
	while(head != NULL)
	{
		head = head->next;
		length++;
	}
	
	return length;
}

void midNode(Node* head)
{
	int len = getLength(head);
	Node* temp = head;
	
	int mid = len / 2;			//finding the middle of the length of the linked list
	
	while (mid != 0)
	{
		temp = temp->next;		//traversing to the middle of the linked list
		mid--;	
	}
	
	cout << temp->data;
}
