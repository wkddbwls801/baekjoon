////���� �ǰ� ���� ������
//// question : ���� pair �� ���� ����ؾ� �ϴ� ������?
////			  count �� ����, ���� ������ ���� ����ϸ� �ȵǴ°ſ���?
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int arr[201][201];	// ������
//bool visited[201][201][31];	// �湮 Ȯ��
////int d[201][201];	// ������ Ƚ�� üũ
//int dx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };	// ����Ʈ ������
//int dy[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };	// ����Ʈ ������
//int dx_[4] = { 0, 0, -1, 1 };	// ������ ������
//int dy_[4] = { -1, 1, 0, 0 };	// ������ ������
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
//	q.push(make_pair(make_pair(0, 0), make_pair(0, 0)));	// ���� ��ġ push
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
//		// ���� �������� ������ ���
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
//		// ���� �������� �� �� ���� ���
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