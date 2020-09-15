//// 
//1. make real face from portraits 
//deep learning + ai
//search a lot
//class Solution {
//public:
//    int orangesRotting(vector<vector<int>>& grid) {
//        int M = grid.size();
//        int N = grid[0].size();
//        queue<pair<int, int>> q;
//        bool hasrotten = 0;
//        for (int i = 0; i < M; i++) {
//            for (int j = 0; j < N; j++) {
//                if (grid[i][j] == 2) {
//                    q.push({i,j});
//                    grid[i][j] = 0;
//                    hasrotten = 1;
//                }
//            }
//        }
//        int minute = 0;
//        while (!q.empty()) {
//            int size = q.size();
//            for (int i = 0; i < size; i++) {
//                int r = q.front().first;
//                int c = q.front().second;
//                q.pop();
//                if (r > 0 && grid[r-1][c] == 1) {
//                    q.push({r-1,c});
//                    grid[r-1][c] = 0;
//                }
//                if (c > 0 && grid[r][c-1] == 1) {
//                    q.push({r,c-1});
//                    grid[r][c-1] = 0;
//                }
//                if (r < M-1 && grid[r+1][c] == 1) {
//                    q.push({r+1,c});
//                    grid[r+1][c] = 0;
//                } 
//                if (c < N-1 && grid[r][c+1] == 1) {
//                    q.push({r,c+1});
//                    grid[r][c+1] = 0;
//                }
//            }
//            minute++;
//        }
//        minute -= 1;
//        if (!hasrotten) minute = 0;
//        for (int i = 0; i < M; i++) {
//            for (int j = 0; j < N; j++) {
//                if (grid[i][j] == 1) return -1;
//            }
//        }
//        return minute;
//    }
//};
