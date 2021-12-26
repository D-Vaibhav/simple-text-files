========================================== backtracking solution (TLE) ==========================================
#1. proactively 
----------------

class Solution {
public:
    int uniquePaths(int m, int n) {
        // negative test case
        if(m<0 || n<0)  return -1;
        
        // initialzing as per problem
        int sourceX = 0;
        int sourceY = 0;
        int destinationX = m-1;
        int destinationY = n-1;
        
        return backtrackAllPaths_proactively(sourceX, sourceY, destinationX, destinationY);
    }
    
    int backtrackAllPaths_proactively(int sourceX, int sourceY, int destinationX, int destinationY){
        if((sourceX == destinationX) && (sourceY == destinationY))  return 1;
        
        int movingRight = 0;
        int movingDown = 0;
        
        // moving right
        if(sourceX <= destinationX){
            movingRight = backtrackAllPaths_proactively(sourceX + 1, sourceY, destinationX, destinationY);
        }
        
        // moving down
        if(sourceY <= destinationY){
            movingDown = backtrackAllPaths_proactively(sourceX, sourceY + 1, destinationX, destinationY);
        }
        return (movingRight + movingDown);
    }
};


#2. reactively
---------------
class Solution {
public:
    int uniquePaths(int m, int n) {
        // negative test case
        if(m<0 || n<0)  return -1;
        
        // initialzing as per problem
        int sourceX = 0;
        int sourceY = 0;
        int destinationX = m-1;
        int destinationY = n-1;
        
        return backtrackAllPaths_reactively(sourceX, sourceY, destinationX, destinationY);
    }
    
    int backtrackAllPaths_reactively(int sourceX, int sourceY, int destinationX, int destinationY){
        // base case
        if((sourceX == destinationX) && (sourceY == destinationY))  return 1;
        
        // negative base case
        if((sourceX > destinationX) || (sourceY > destinationY))  return 0;     
        
        int movingRight = backtrackAllPaths_reactively(sourceX + 1, sourceY, destinationX, destinationY);
        int movingDown = backtrackAllPaths_reactively(sourceX, sourceY + 1, destinationX, destinationY);
        
        return (movingRight + movingDown);
    }
};



========================================== backtracking + memoization solution ==========================================
#1. proactively
----------------
class Solution {
public:
    int uniquePaths(int m, int n) {
        // negative test case
        if(m<0 || n<0)  return -1;
        
        // initialzing as per problem
        int sourceX = 0;
        int sourceY = 0;
        int destinationX = m-1;
        int destinationY = n-1;
        
        return backtrackAllPaths_proactively(sourceX, sourceY, destinationX, destinationY);
    }
    
    map<pair<int, int>, int> memo;
    
    int backtrackAllPaths_proactively(int sourceX, int sourceY, int destinationX, int destinationY){
        if((sourceX == destinationX) && (sourceY == destinationY))  return 1;
        
        // not found in memo
        if(memo.find(make_pair(sourceX, sourceY)) != memo.end()){
            return memo[make_pair(sourceX, sourceY)];
        }
        
        int movingRight = 0;
        int movingDown = 0;
        
        // moving right
        if(sourceX <= destinationX){
            movingRight = backtrackAllPaths_proactively(sourceX + 1, sourceY, destinationX, destinationY);
        }
        
        // moving down
        if(sourceY <= destinationY){
            movingDown = backtrackAllPaths_proactively(sourceX, sourceY + 1, destinationX, destinationY);
        }
        
        memo[make_pair(sourceX, sourceY)] = (movingRight + movingDown); 
        
        return (movingRight + movingDown);
    }
};


#2. reactively
---------------
class Solution {
public:
    int uniquePaths(int m, int n) {
        // negative test case
        if(m<0 || n<0)  return -1;
        
        // initialzing as per problem
        int sourceX = 0;
        int sourceY = 0;
        int destinationX = m-1;
        int destinationY = n-1;
        
        return backtrackAllPaths_reactively(sourceX, sourceY, destinationX, destinationY);
    }
        
    map<pair<int, int>, int> memo;
        
    int backtrackAllPaths_reactively(int sourceX, int sourceY, int destinationX, int destinationY){
        // base case
        if((sourceX == destinationX) && (sourceY == destinationY))  return 1;
        
        // negative base case
        if((sourceX > destinationX) || (sourceY > destinationY))  return 0;     
        
        // not found in memo
        if(memo.find(make_pair(sourceX, sourceY)) != memo.end()){
            return memo[make_pair(sourceX, sourceY)];
        }
        
        int movingRight = backtrackAllPaths_reactively(sourceX + 1, sourceY, destinationX, destinationY);
        int movingDown = backtrackAllPaths_reactively(sourceX, sourceY + 1, destinationX, destinationY);
        
        // memoization
        memo[make_pair(sourceX, sourceY)] = (movingRight + movingDown);
        
        return (movingRight + movingDown);
    }
};