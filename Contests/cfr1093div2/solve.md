# Codeforces Round 1093 (Div. 2)
- time: Apr/13/2026 21:35UTC+7
- duration: 2hs
- [contest 2220](https://codeforces.com/contest/2220)
- problems: A, B, C, D1, D2, E, F


## A
- dùng sorting
- Otime(nlogn) => sorting barrier
- Ospace(1)

## B
- tìm độ dài lớn nhất maxLen của subset (consecutive)
    - có dạng: tất cả ai đều có bộ đếm như nhau
    - nghĩa là bằng nhau tại mọi thời điểm
=> maxLen nhỏ hơn m thì YES (khả thi), ngược lại maxLen >= m thì NO
- Ospace(1)
- Otime(n) => duyệt qua mảng 1 lần để tìm maxLen

## C
ta có p I-segments và q L-segments  
ta cần hình thành grid mxn từ tất cả p và q

cho p, q => tìm m, n
điều kiện cơ bản là số unit phải bằng nhau:  
    T = p + 2*q = n*(m+1) + m(n+1) = 2mn+m +n

ý tưởng là, do p có thể đặt ở bất cứ vị trí nào, 
- ta cần tìm mxn có T nhỏ nhất có thể chứa tất cả các q
- sau đó phần dư sẽ bù đắp các khoảng trống còn lại

Không mất tính tổng quát, giả sử n<=m
 _ _ _ _ _ _ _ _ 
|_|_|_|_|_|_|_|_|
|_|_|_|_|_|_|_|_|
|_|_|_|_|_|_|_|_|
|_|_|_|_|_|_|_|_|

(1) xét nxn, có thể dùng số L-segments tối đa bằng cách xếp thành các ô 1x1 (dùng 2 L-segments) trên đường chéo,
sau đó bổ sung 1 L_segment ở các ô còn lại
=> qmax = (n+1)*n
Chứng minh: 
grid nxn có n(n+1) + n(n+1) units thành phần, cũng chính bằng 2 qmax
=> do đó, qmax chính là số lượng tối đa L-segments có thể có
(ta không cần chứng minh đây là cách xếp duy nhất hay tốt nhất, 
chỉ cần biết rằng cách xếp cho số thanh L tối đa có thể có 
=> thì đây chính là 1 trong những cách xếp tối ưu)

(2) phần còn lại (m-n)*n
=> qmax = (m-n)*n 
=> pleft = (m-n)
Chứng minh:
với (m - n) cột mới được thêm vào, 
- có X=(n+1)(m-n) số cạnh ngang mới
- có Y=n(m-n) số cạnh dọc mới
mỗi thanh L đều được tạo thành từ 1 thanh dọc và 1 thanh ngang (bất kể xoay như thế nào)
nên ""luôn"" sẽ có phần dư là thanh ngang (X > Y): R = X - Y = m-n
=> phần còn tại X - R = min(X, Y) = Y = n(m-n) sẽ là số thanh L tối đa có thể dùng
Ta chọn cách đặt, với mỗi 'cột' mới, đặt n thanh L vào, và đặt dưới đáy thanh I, ta sẽ được con số trên
(ta không cần chứng minh đây là cách xếp duy nhất hay tốt nhất, 
chỉ cần biết rằng cách xếp cho số thanh L tối đa có thể có 
=> thì đây chính là 1 trong những cách xếp tối ưu)

(3) vậy thì tổng qmax cho 2 grid là
sum2qmax = (n+1)*n + (m-n)*n = n + mn
pleft = (m-n)
Chứng minh: tổng qmax của 2 grid có phải là qmax của toàn bộ grid ghép từ 2 grid đó
Ta có thể thực hiện tương tự phần (2), 
để tính số phần dư thanh ngang ""luôn"" tồn tại là (m-n),
và sum2qmax đúng bằng T - (m-n)
=> đpcm

* Giải thuật
- giả sử n <= m
- S = p+2q = 2mn + m + n 
=> m = ((p + 2q) - n)/(2n+1)
- qmax = n +mn

- 1 <= p,q <= 10^8 
=> 3 <= S <= 3*10^8

- Tìm nMax
    2n(n+1) <= S <= 3*10^8
=>  2n(n+1) <= 3*10^8
=> n < 13000

- Ospace(1)
- Otime(n) or Otime(min(n, 1.3*1e4)) => bruteforce 1-loop