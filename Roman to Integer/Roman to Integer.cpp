class Solution {
public:
    int romanNum(char a){
        int num=0;
        if(a == 'I'){
            num =1;
            return (num);
        }
        if(a == 'V'){
            num =5;
            return (num);
        }
        if(a == 'X'){
            num =10;
            return (num);
        }
        if(a == 'L'){
            num =50;
            return (num);
        }
        if(a == 'C'){
            num =100;
            return (num);
        }
        if(a == 'D'){
            num =500;
            return (num);
        }
        
        if(a == 'M'){
            num =1000;
            return (num);
        }
        return (num);
    }

    
    int romanToInt(string s) {
        
        
    int sum = 0;
    int len = s.length()-1;  
    int check=  0; 
    int current = 0;
        
        
    for(int i = len ; i>=0  ; i--){

        check= current;
        current = romanNum(s[i]);
        

        
        if(current>= check){
            sum+= current;
        }
        else{
            sum-=current;
        }
        



    }
        
        return sum;
    }
};
