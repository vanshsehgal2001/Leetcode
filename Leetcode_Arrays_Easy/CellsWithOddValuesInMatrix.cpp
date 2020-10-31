class Solution {
public:
  int oddCells(int n, int m, vector<vector<int>>& indices) {
    int array[n][m];
    int count = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        array[i][j] = 0;
      }
    }
    for(int i = 0; i != indices.size(); i++) {
      for(int j = 0; j < m; j++) {
        array[indices[i][0]][j]++;
      }
      for(int k = 0; k < n; k++) {
        array[k][indices[i][1]]++;
      }
    }
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(array[i][j] % 2 == 1)
          count++;
      }
    }
    return count;
  }
};
