class Node
{
	public:
	char name;
	int index;
	Node *pred;
	double weight;
	char set; //Q or S
	Node::Node()
	{
		name='?';
	 	index=0;
	 	pred='\0';
	 	weight=10000;
	 	set='Q';
	}

	Node::Node(char in_name, int n)
	{
		name=in_name;
	 	weight=10000;
	 	pred='\0';
	 	set='Q';
	 	index=n;
	}
};
