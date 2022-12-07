int getLength(Node* head)
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
	
	int mid = len / 2;
	
	while (mid != 0)
	{
		temp = temp->next;
		mid--;	
	}
	
	cout << temp->data;
}
