class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int sourceX = 0;
        int sourceY = 0;
        int destinationX = obstacleGrid.size() - 1;
        int destinationY = obstacleGrid[0].size() - 1;
        
        // if bottom-right is itself an obstracle
        if(obstacleGrid[destinationX][destinationY] == 1)   return 0;
        
        return backtrackPaths_reactivey(obstacleGrid, sourceX, sourceY, destinationX, destinationY);
    }
    
    map<pair<int, int>, int> memo;
    
    int backtrackPaths_reactivey(vector<vector<int>>& obstacleGrid, int sourceX, int sourceY, int destinationX, int destinationY, string path="source"){
        // base cases
        if((sourceX == destinationX) && (sourceY == destinationY)){
            cout<<path<<endl;
            return 1;
        }
        
        // negative base cases
        if((sourceX > destinationX) || (sourceY > destinationY) || obstacleGrid[sourceX][sourceY] == 1)    return 0;
        
        // if found in memo then return it's value
        if(memo.find(make_pair(sourceX, sourceY)) != memo.end())    return memo[make_pair(sourceX, sourceY)];
        
        // moves
        int rightMove = backtrackPaths_reactivey(obstacleGrid, sourceX + 1, sourceY, destinationX, destinationY, path+" -> right");
        int downMove = backtrackPaths_reactivey(obstacleGrid, sourceX, sourceY + 1, destinationX, destinationY, path+" -> down");    
            
        memo[make_pair(sourceX, sourceY)] = rightMove + downMove;
        return rightMove + downMove; 
    }
};