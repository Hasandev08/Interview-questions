struct Queue 
{
	stack <int> s1, s2,
	
	void enqueue(x)
	{
		s1.push(x)
	}
	
	int dequeue()
	{
		if(s2.empty())
		{
			while(!s1.empty())
			{
				s2.push(s1.top())
				s1.pop()
			}	
		}
		
		int x = s2.top()
		s2.pop()
		return x	
	}	
};
