
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
     int r=0;int c= n-1;
        while(r<m&&c>=0){
            if(mat[r][c]==target)return true;
            if(mat[r][c]<target)r++;
            else if(mat[r][c]>target)c--;
        }
        return false;
}
