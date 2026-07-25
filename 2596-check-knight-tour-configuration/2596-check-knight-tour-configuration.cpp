class Solution {
public:
    bool isTrue(vector<vector<int>>& grid,int r,int c,int n,int expval){
        if(r<0 || c<0 || r>n || c>n){
            return false;
        }
        if(grid[r][c] != expval){
            return false;
        }
        int size= n+1;
        if(expval == (size*size)-1 ){
            return true;
        }
        return isTrue(grid,r-1,c-2,n,expval+1) ||
        isTrue(grid,r-2,c-1,n,expval+1)||
        isTrue(grid,r+1,c-2,n,expval+1)||
        isTrue(grid,r+2,c-1,n,expval+1)||
        isTrue(grid,r+2,c+1,n,expval+1)||
        isTrue(grid,r+1,c+2,n,expval+1)||
        isTrue(grid,r-1,c+2,n,expval+1)||
        isTrue(grid,r-2,c+1,n,expval+1);

    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return isTrue(grid,0,0,grid.size()-1,0);
    }
};