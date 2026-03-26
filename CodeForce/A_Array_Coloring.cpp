#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n + 1), pos(n + 1);
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			pos[a[i]] = i;
		}

		vector<vector<int>> g(n + 1);

		// Edges for adjacency in the original row.
		for (int i = 1; i < n; i++) {
			g[i].push_back(i + 1);
			g[i + 1].push_back(i);
		}

		// Edges for adjacency after sorting by value (v and v+1).
		for (int v = 1; v < n; v++) {
			int u = pos[v];
			int w = pos[v + 1];
			g[u].push_back(w);
			g[w].push_back(u);
		}

		vector<int> color(n + 1, -1);
		bool ok = true;

		for (int start = 1; start <= n && ok; start++) {
			if (color[start] != -1) continue;

			queue<int> q;
			color[start] = 0;
			q.push(start);

			while (!q.empty() && ok) {
				int u = q.front();
				q.pop();

				for (int v : g[u]) {
					if (color[v] == -1) {
						color[v] = color[u] ^ 1;
						q.push(v);
					} else if (color[v] == color[u]) {
						ok = false;
						break;
					}
				}
			}
		}

		cout << (ok ? "YES\n" : "NO\n");
	}

	return 0;
}
