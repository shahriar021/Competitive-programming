void DFS(Graph* G){             
int v;

for (v=0; v < G->n; v++)
  visited[v]=FALSE;

for (v=0; v < G->n; v++){
  if (!visited[v])
    Traverse(G, v);
 }

}

void Traverse(Graph* Gr, int v){                
int w;
Edge *current;

start[v]=clock;                             //We are going to classify the edges by the time they were visited
clock++;
visited[v]=TRUE;

current=Gr->stpoint[v];

while (current){
    w=current->vertex;

    if (!visited[w]) {                          
        printf("%d %d: Tree edge\n",v,w);       //If w is not visited then mark v-w as a tree edge
        if(!current)
            Traverse(Gr, w);
    }
    else{

        if((start[v] > start[w]) && (end[v] < end[w]))      //v was visited after w
            printf("%d %d: Back edge\n",v,w);
        else if ((start[v] < start[w]) && (end[v] > end[w]))    //v was visited before w
            printf("%d %d: Forward edge\n",v,w);
        else if ((start[v] > start[w]) && (end[v] > end[w]))    //
            printf("%d %d: Cross edge\n",v,w);

    }
    end[v]=clock;
    clock++;
    current=current->next;
 }

}