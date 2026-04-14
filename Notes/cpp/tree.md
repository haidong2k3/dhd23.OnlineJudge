Ok, mình sẽ nói **cách xây dựng tree trong C++ một cách tổng quát**, không liên quan riêng bài kia.

---

# 🌳 1. Cách phổ biến nhất: **Adjacency List**

Đây là cách chuẩn trong competitive programming.

## 📌 Khai báo

```cpp
const int MAXN = 200005;
vector<int> adj[MAXN];  // danh sách kề
```

---

## 📌 Thêm cạnh (tree là graph vô hướng)

```cpp
void add_edge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}
```

---

## 📌 Ví dụ xây cây

```cpp
int n;
cin >> n;

for (int i = 1; i < n; i++) {
    int u, v;
    cin >> u >> v;
    add_edge(u, v);
}
```

---

# 🌳 2. DFS để duyệt cây (cơ bản nhất)

```cpp
void dfs(int u, int parent) {
    for (int v : adj[u]) {
        if (v == parent) continue;
        dfs(v, u);
    }
}
```

👉 `parent` giúp tránh quay ngược lại.

---

# 🌳 3. Tính subtree size (rất hay dùng)

```cpp
int sz[MAXN];

void dfs(int u, int parent) {
    sz[u] = 1;
    for (int v : adj[u]) {
        if (v == parent) continue;
        dfs(v, u);
        sz[u] += sz[v];
    }
}
```

---

# 🌳 4. Rooted tree (gốc tại 1)

Khi root = 1, bạn thường gọi:

```cpp
dfs(1, 0);
```

---

# 🌳 5. Lưu parent và depth

```cpp
int parent[MAXN], depth[MAXN];

void dfs(int u, int p) {
    parent[u] = p;
    for (int v : adj[u]) {
        if (v == p) continue;
        depth[v] = depth[u] + 1;
        dfs(v, u);
    }
}
```

---

# 🌳 6. Cách khác: dùng vector<vector<int>>

```cpp
vector<vector<int>> adj(n + 1);
```

---

# 🌳 7. Tree có hướng (ít dùng hơn)

```cpp
adj[u].push_back(v); // chỉ 1 chiều
```

---

# 🧠 Tổng kết nhanh

* Tree = graph không chu trình, n nodes → n-1 edges
* Dùng **adjacency list** là chuẩn nhất
* DFS/BFS là nền tảng để xử lý mọi thứ
* `parent` rất quan trọng để tránh loop

---

Nếu bạn muốn đi xa hơn (rất nên nếu hướng AI/FAANG):

* LCA (Binary Lifting)
* Euler Tour
* Heavy-Light Decomposition (HLD)

👉 mình có thể build roadmap riêng cho bạn phần tree nếu cần.
