class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char alphabet=coordinates[0];
        char number=coordinates[1];
        if((alphabet%2==0&&number%2==0)||(alphabet%2!=0&&number%2!=0))
        {
            return false;
        }
       return true;
        
    }
};
