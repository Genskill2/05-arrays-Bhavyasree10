/* max function */
  int max(int a[],int n){
    int m=0;
    for(int i=0;i<n;i++){
      if(a[i]>m){
        m=a[i];
      }
    }
    return m;
  }
 


/*min function*/
  int min(int a[],int n){
    int m=0;
    for(int i=0;i<n;i++){
      if(a[i]<m){
        m=a[i];
    }
    }
  return m;
  }



/*average function*/
float average(inta[],int n){ float sum = 0 ;
     for(int i=0; i<n ; i++){
       sum = sum + a[i];

    }
    return sum/n;
}



/mode function/
int mode(int a[], int length){
   int n = max(a,length);
   int p = min(a,length);
   int counts[100],  d=-1;
       for(int i = p; i <= n ; i++){
         int c = 0;
          for ( int j=0; j<length; j++){
            if(a[j]==i){
               c++;
          }
           
      }   
     counts[++d] = c;
  }
  
  int b = 0,f = 0 ;
  for (int i=0 ; i<=d ; i++){
    if ( counts[i] > b ){
       b = counts[i];
       f = i+p;
     }
   }
    return f;
}



/*factor function*/
int isprime(int n){
  for (int i = 2; i<n; i++){
    if(n%i==0){
       return 0;
    }
    else{
     return 1;
     }
  }

}

int factors(int x, int arr[]){
 int cnt=0;
   for( int i = 2; i < x; i++){
      while( x % i == 0){
                if(isprime(i)){
                     arr[cnt] = i ;
                     x = x/i ; 
                     cnt++;
                     }
                          
                            if (isprime(x)){
                               arr[cnt] = x;
                              
                               
                           }
                }
        
     }
   return cnt+1;
 }
    
  
  
  
  
  
  
  
