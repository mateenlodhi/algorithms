class Solution {
public:

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int totalUnits=0;
    
    /*
    for (int i=0; i<boxTypes.size(); i++){
        for(int j=0; j<boxTypes[i].size(); j++){
            cout<< boxTypes[i][j]<< " " ;
        }
        cout << endl;
    }
    */
    
    sort(boxTypes.begin(), boxTypes.end(),Comparator());

    
    //cout<< endl<< endl<< "sorted"<< endl<< endl;
    
    
    /*
    for (int i=0; i<boxTypes.size(); i++){
        for(int j=0; j<boxTypes[i].size(); j++){
            cout<< boxTypes[i][j]<< " " ;
        }
        //cout << endl;
    }
    */
    
    bool check = true;
    int i=0;
    while( check && i< boxTypes.size()){
    
        if (truckSize == 0){
            check = false;
        }
    
        if(truckSize - boxTypes[i][0] > 0){
            truckSize-= boxTypes[i][0];
            totalUnits += boxTypes[i][0] * boxTypes[i][1];
            //cout<<"Truck Size: " << truckSize<< endl;
        }
        else{
            for(int j=0; j< boxTypes[i][0]; j++){
                if (truckSize == 0){
                    check = false; 
                    break;
                }
                else{
                    truckSize-= 1;
                    totalUnits += boxTypes[i][1];
                    //cout<<"Truck Size: " << truckSize<< endl;    
                    
                }


            }
        }
        i++;
    }

        //cout << "TOTAL UNITS: " << totalUnits <<endl;
        return totalUnits; 
    }
    struct Comparator {
        bool operator()(vector<int> const& p1, vector<int> const& p2) {
            return p1[1] > p2[1];
        }
    };
};
