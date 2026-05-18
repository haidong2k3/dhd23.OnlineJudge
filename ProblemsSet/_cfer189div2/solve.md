# Educational Codeforces Round 189 (Rated for Div. 2)
- time: Apr/21/2026 21:35UTC+7
- duration: 2hs
- [contest 2225](https://codeforces.com/contest/2225)
- problems: A, B, C, D, E, F, G

## A
- y > x và y mod x = 0 => y là bội của x
- y > z > x và z mod x = 0 => z là bội của x và z nhỏ hơn hơn
- y mod z != 0 => y không phải bội của z

cả y và z đều có dạng kx: y = ax, z = bx  
ta cần tìm b nhỏ hơn a, và gcd (a,b) < b  
nhận xét là với a >= 3, luôn tồn tại b: 1 < b < a và gcd(a,b) < b

- Otime(1)
- Ospace(1)

## B
để string s cuối cùng trở thành 1 alternative string, ta muốn rằng sau khi thực hiện phép toán, tất cả các giá trị liên tiếp bằng nhau trong chuỗi phải biến mất
gọi các cặp giá trị liên tiếp bằng nhau trong chuỗi là pair (2 pair có thể có chung 1 giá trị)
giả sử, ta có 2 pair nằm ở 2 đầu ...xx...yy,
nếu x và y bằng nhau, ta có thể flip, sau đó reverse (bắt buộc), lúc này 2 pair sẽ bị mất
tương tự, nếu x và y khác nhau, ta bỏ qua bước flip, sau đó reverse, lúc này 2 pair cũng sẽ mất
dù flip hay không, với phép toán trên, số pair tổng thể (trong và ngoài đoạn được chọn) vẫn được duy trì ngoại trừ tại 2 đầu đoạn chọn
nếu chỉ có 1 pair, ta có thể chọn đầu còn lại là biên của s
vậy nên, với ràng buộc ta chỉ có thể "chắc chắn và tối đa" làm giảm số pair đi 2
=> đếm số pair, ktra nếu nó >= 3

- Otime(n) => duyệt 1 lần đếm số pair
- Ospace(1)

## C
đây là bài toán theo kiểu tối ưu phương pháp
đầu là là 1 table không cố định chiều dài
một case lớn có thể hình thành (mở rộng về 1 phía) từ 1 case nhỏ hơn
luôn thỏa mãn những điều kiện nhất định
=> dự đoán: greedy

ý tưởng là, chọn ô đầu tiên bên trên,
ô này cần phải thỏa => giống với ô ngay dưới hoặc ô bên phải
nếu ô ngay dưới giống => move tới pair kế
nếu ô ngay dưới không thỏa => kiểm tra ô kề phải và tính ô dưới ô kề
nó sẽ có dạng
XY/YX hoặc XX/YX hoặc XY/YY
nếu ô cặp ô kế tiếp là như nhau => cần repaint 1 lần
nếu không cần repaint "tối thiểu" 1 lần
tại sao là tối thiểu, vì khi mở rộng tiếp tục, cặp ô kề (dù không cùng màu) vẫn có thể thỏa điều kiện
do đó, khi duyệt qua từng pair cell trong bảng, ta chỉ cần ktra xem bộ đếm repaint có cần cộng 1 để sửa pair hiện tại hay không, không cần quan tâm đến các pair sau đó (đây là phần greedy cảu bài toán)

một cách cài đặt là duyệt qua từng cặp ô, đánh dánh các cặp có sự khác nhau
sau đó trong các cặp đã đánh dấu, nếu có các cặp được đánh dấu là kề nhau, ktra xem nó có phải là trường hợp 
XX/YY không, nếu có loại bỏ đánh dấu
cuối cùng đếm số điểm đánh dấu

=> Otime(n)
=> Ospace(n)

## D
phân tích bài toán
nhận diện pattern
can't solve reason
