class Solution {
public:
    int reverse(long x) {

  int counter = 0;
    
    long t = x;
    while(t!=0){
        t/=10;
        counter ++ ; 
        
    }

    
    long sum = 0;
    
    for ( int i=counter-1; i >= 0 ; i--){
        int temp = x%10;
        x/=10;
        
        sum += temp*pow(10,i);
        

    }
    
    if(sum > INT_MAX || sum < INT_MIN){

        return 0;
    }
    
    else{

        return sum;
    }


    }
};
