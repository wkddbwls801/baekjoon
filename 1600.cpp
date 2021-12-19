////말이 되고 싶은 원숭이
//// question : 굳이 pair 두 개를 사용해야 하는 이유는?
////			  count 값 따로, 말의 움직임 따로 계산하면 안되는거였나?
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int arr[201][201];	// 격자판
//bool visited[201][201][31];	// 방문 확인
////int d[201][201];	// 움직임 횟수 체크
//int dx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };	// 나이트 움직임
//int dy[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };	// 나이트 움직임
//int dx_[4] = { 0, 0, -1, 1 };	// 원숭이 움직임
//int dy_[4] = { -1, 1, 0, 0 };	// 원숭이 움직임
//int K;
//int W;
//int H;
//int horse;
//
//struct point {
//	int x;
//	int y;
//};
//
//int BFS() {
//	queue<pair<pair<int, int>, pair<int, int>>> q;
//	q.push(make_pair(make_pair(0, 0), make_pair(0, 0)));	// 시작 위치 push
//	visited[0][0][0] = true;
//
//
//	while (!q.empty()) {
//
//		int x = q.front().first.first;
//		int y = q.front().first.second;
//		int cnt = q.front().second.first;
//		int horse = q.front().second.second;
//
//		q.pop();
//
//		if (x == H - 1 && y == W - 1) {
//			return cnt;
//		}
//
//		// 말의 움직임이 가능한 경우
//		 if(horse < K ) {
//			for (int i = 0; i < 8; i++) {
//				int next_x = x + dx[i];
//				int next_y = y + dy[i];
//
//				if (next_x >= 0 && next_x < H && next_y >= 0 && next_y < W) {
//					if (arr[next_x][next_y] == 0 && visited[next_x][next_y][horse + 1] == false) {
//						
//						visited[next_x][next_y][horse + 1] = true;
//						q.push(make_pair(make_pair(next_x, next_y), make_pair(cnt+1, horse+1)));
//
//					}
//				}
//			}
//		}
//
//		// 말의 움직임을 쓸 수 없는 경우
//		for (int i = 0; i < 4; i++) {
//			int next_x = x + dx_[i];
//			int next_y = y + dy_[i];
//
//			if (next_x >= 0 && next_x < H && next_y >= 0 && next_y < W) {
//				if (arr[next_x][next_y] == 0 && visited[next_x][next_y][horse] == false) {
//
//					visited[next_x][next_y][horse] = true;
//					q.push(make_pair(make_pair(next_x, next_y), make_pair(cnt + 1, horse)));
//				}
//			}
//		}
//	}
//
//	return -1;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> K;
//
//	cin >> W >> H;
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	cout << BFS() << "\n";
//
//	return 0;
//}