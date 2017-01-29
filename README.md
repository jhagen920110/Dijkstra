# Dijkstra
Dijkstra's Algorithm
#include "stdafx.h"
#include <iostream>
#include "string.h"
using namespace std;
#include "Node.h"

#define size 10

class Graph
{
  public:
	Node a[size];
	double weight[size][size];
    
	Graph::Graph()
	{
	}
  
	void Graph::initial(int source)
	{
    for (int i=0; i<size; i++)
	  {	
      a[i].name=(char)(((int)'0')+i);
			a[i].pred='\0';
			a[i].weight=10000;
			a[i].set='Q';
			a[i].index=i;
		}
	  a[source].weight=0;
	}

	void Graph::assign_weight(double link[size][size])
	{
    for (int i=0; i<size;i++)
    {
		  for (int j=0; j<size;j++)
			  weight[i][j]=link[i][j]; 
    }
	}

	void Graph::display_weight()
	{
    for (int i=0; i<size;i++)
		{
      for (int j=0; j<size;j++)
			  cout<<weight[i][j]<<"\t";
		}
	}
	
	int Graph::extract_min()
	{
    int min_node_index;
	  double min_weight=10000;
	  for (int i=0; i<size; i++)
	  {
      if (a[i].set=='Q')
		    if (min_weight> a[i].weight)
				{
          min_node_index=i;
	        min_weight=a[i].weight;
				}
    }

	  a[min_node_index].set='S';	
	  return min_node_index;
	  }
    
    ~Graph()
    {
    }
};
