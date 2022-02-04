class Solution {
public:
    bool check(char &a, int r, int c, vector<vector<char>>& board ){
        
        // checking if the row contains the same value
        for(int i=0;i<board.size() ; i++){
            if(board[r][i]== a && i!=c){
                //cout<< "IN ROW" << endl;
                //cout<< board[row][i] <<"  MATCHES WITH " << c << " ...returning false" << endl;
                return false; 
            }
        }
        for(int i=0;i<board.size() ; i++){
            if(board[i][c]== a && i!=r){
                //cout<< "IN COULUMN" << endl;
                //cout<< board[row][i] <<"  MATCHES WITH " << c << " ...returning false" << endl;
                return false; 
            }
        }
        
        //checking the 3 by 3...
        
        int rowS = 0;
        int rowE = 0;
    
        int colS =0;
        int colE =0;

        if(r<3){
            rowS = 0;
            rowE = 2;
        }
        else if(r>2 && r<6){
            rowS = 3;
            rowE = 5;
        }
        else if(r>5 && r<9){
            rowS = 6;
            rowE = 8;
        }

        if(c<3){
            colS = 0;
            colE = 2;
        }
        else if(c>2 && c<6){
            colS = 3;
            colE = 5;
        }
        else if(c>5 && c<9){
            colS = 6;
            colE = 8;
        }
        
        
        for(int i=rowS; i<=rowE; i++){
            for(int j=colS; j<=colE; j++){
                if(i!=r || j!=c){
                    if(board[i][j]== a){
                        cout<< "IN 3 by 3" << endl;
                        return false;
                    }
                }
                    
            }
            cout<< endl;
        }

        
        
        
        return true; 
    }


    bool isValidSudoku(vector<vector<char>>& board) {
        

        
        for(int i=0; i < board.size(); i++){
            
            
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j]!= '.'){
                   // cout << "i: " << i << " "<< "j: " << j << " value : " << board[i][j] <<  endl;
                   // cout << "calling row checker... "<< endl;
                    if(!check(board[i][j], i,j, board)){
                        return false;
                        //cout << "i: " << i << " "<< "j: " << j << " value : " << board[i][j] <<  endl;
                        //cout<< "INVALID.. " << endl; 
                    }
                
                }
                    

            }
        }
        
        

        
        return true;
    }
    
    
};
