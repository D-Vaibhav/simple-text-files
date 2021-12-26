#1. proactively
-----------------
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int sourceX = 0;
        int sourceY = 0;
        int destinationX = obstacleGrid.size() - 1;
        int destinationY = obstacleGrid[0].size() - 1;
        
        // if bottom-right is itself an obstracle
        if(obstacleGrid[destinationX][destinationY] == 1)   return 0;
        
        return backtrackPaths_proactivey(obstacleGrid, sourceX, sourceY, destinationX, destinationY);
    }
    
    map<pair<int, int>, int> memo;
    
    int backtrackPaths_proactivey(vector<vector<int>>& obstacleGrid, int sourceX, int sourceY, int destinationX, int destinationY){
        // base cases
        if((sourceX == destinationX) && (sourceY == destinationY))  return 1;
        if(obstacleGrid[sourceX][sourceY] == 1)     return 0;
        
        int rightMove = 0;
        int downMove = 0;
        
        // if found in memo then return it's value
        if(memo.find(make_pair(sourceX, sourceY)) != memo.end())    return memo[make_pair(sourceX, sourceY)];
        
        // moves
        if(sourceX < destinationX) rightMove = backtrackPaths_proactivey(obstacleGrid, sourceX + 1, sourceY, destinationX, destinationY);
        if(sourceY < destinationY) downMove = backtrackPaths_proactivey(obstacleGrid, sourceX, sourceY + 1, destinationX, destinationY);
        
        memo[make_pair(sourceX, sourceY)] = (rightMove + downMove);
        
        return (rightMove + downMove); 
    }
};


#1. reactively
----------------
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
    
    int backtrackPaths_reactivey(vector<vector<int>>& obstacleGrid, int sourceX, int sourceY, int destinationX, int destinationY){
        // base cases
        if((sourceX == destinationX) && (sourceY == destinationY))  return 1;
        
        // negative base cases
        if((sourceX > destinationX) || (sourceY > destinationY) || obstacleGrid[sourceX][sourceY] == 1)    return 0;
        
        // if found in memo then return it's value
        if(memo.find(make_pair(sourceX, sourceY)) != memo.end())    return memo[make_pair(sourceX, sourceY)];
        
        // moves
        int rightMove = backtrackPaths_reactivey(obstacleGrid, sourceX + 1, sourceY, destinationX, destinationY);
        int downMove = backtrackPaths_reactivey(obstacleGrid, sourceX, sourceY + 1, destinationX, destinationY);    
        
        memo[make_pair(sourceX, sourceY)] = rightMove + downMove;
        return rightMove + downMove; 
    }
};