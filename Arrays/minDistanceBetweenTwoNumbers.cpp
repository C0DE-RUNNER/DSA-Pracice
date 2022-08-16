 

int minDist(int a[], int n, int x, int y) {

 int p = -1, min_dist = INT_MAX;
    
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            if( p != -1 && arr[i] != arr[p])
                min_dist = min(min_dist , i-p);
                p=i;
        }
    }

  if(min_dist==INT_MAX)
        return -1;

    return min_dist;
 }
