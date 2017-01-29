#include "stdafx.h"
#include <iostream>
#include "string.h"
using namespace std;
#include "G.h"

#define size 10

int main()
{
  double link[size][size];
  Graph G;
  cout << "0:Albuquerque\n1:Chicago\n2:Dallas\n3:Denver\n4:Los Angeles\n5:Miami\n6:Nashville\n7:Phoenix\n8:San Fransisco\n9:St.Louis\n";
  cout << "\nSelect the source city... ";
  int source;
  cin >> source;
  cout << endl;
  G.initial(source);
  //assign weight

  for (int i = 0; i < size; i++)
  {
	  for (int j = 0; j < size; j++)
		  link[i][j] = 100;
  }

  link[0][1] = 9;
  link[0][2] = 3;
  link[0][7] = 1;
  link[1][0] = 9;
  link[1][3] = 8;
  link[1][6] = 2;
  link[1][8] = 10;
  link[1][9] = 4;
  link[2][0] = 3;
  link[2][5] = 5;
  link[2][9] = 2;
  link[3][1] = 8;
  link[3][7] = 4;
  link[3][8] = 3;
  link[4][5] = 12;
  link[4][7] = 2;
  link[4][8] = 6;
  link[5][2] = 5;
  link[5][4] = 12;
  link[5][6] = 5;
  link[5][8] = 15;
  link[6][1] = 2;
  link[6][5] = 5;
  link[7][0] = 1;
  link[7][3] = 4;
  link[7][4] = 2;
  link[8][1] = 10;
  link[8][3] = 3;
  link[8][4] = 6;
  link[8][5] = 15;
  link[9][1] = 4;
  link[9][2] = 2;

  G.assign_weight(link);
  G.display_weight();
 
  //Dijkstra's main function
 int num_Q=9;
 int min_node_index;
 while (num_Q>0)
 {min_node_index = G.extract_min();
  num_Q=num_Q-1;
  for (int i=0; i<size; i++)
	{if (G.weight[min_node_index][i]!=0)
	  {if (G.a[i].weight>(G.a[min_node_index].weight+G.weight[min_node_index][i]))
	   {G.a[i].weight=G.a[min_node_index].weight+G.weight[min_node_index][i];
	    G.a[i].pred=&G.a[min_node_index];
       }
      }
    }
 }
 
 int list[10];
 for (int i = 0; i < 10; i++)
	 list[i] = 10;

 for (int i=0; i<size;i++)
 {Node *u;
	 if (i!=source)
	{  cout<<"\nOptimal Path from node "<<source<<" to node "<< i << ": ";
	 u=G.a[i].pred;	
	 while (u!='\0')
		{
		 int i = 0;
		 list[i] = u->index;
		 u=u->pred;
		 i++;
		}
	 for (int j = 9; j <= 0; j--)
	 {
		 int k = list[j];
		 if (k != 10)
			 cout << k;
		 if (j != 0)
			 cout << ", ";
	 }
	  cout<<"\nwith weight "<<G.a[i].weight<<"\n";
 }
 }
 return 0;
}



