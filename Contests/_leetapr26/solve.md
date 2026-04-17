# Leetcode April 2026

## 455
sorting + greedy + 2 pointers
sort => Otime(nlogn + mlogm)
greedy => Otime(m)

Ospace(log(m) +log(n)) for sorting alogo in C++

## 561
sorting + greedy
=> sorting: Otime(nlogn)/Ospace(nlogn)
phần còn lại dùng greedy

nếu muốn tối ưu, ta tìm cách tối ưu phần sorting
=> dùng bucket sort + static array [20001]
ý tưởng: dùng 1 biến flag ngoài vòng lặp tính tổng để kiểm tra sự tuần tự
(cập nhật flag = flag ^ 1 mỗi lần cộng)
lúc này, chỉ cần đưa hết mảng vào 1 static array, lưu số giá trị của nó
=> Otime(n) / Ospace(1) (dùng static array với range phần tử đã biết trước)

## 605
mang flowerbed như là 1 đường thẳng, các điểm đầu cuối và điểm 1 phân đường thẳng thành các đoạn con
- các đoạn con ở 2 đầu (điểm đầu hoặc điểm cuối nằm ngoài mảng) có size tmp chứa tói đa tmp/2 cây
- các đoạn con nằm giữa size tmp thì chứa được tối đa (tmp - 1)/2 cây
=> duyệt Otime(n) qua mảng để xác định kich thước các đoạn con
=> Ospace(1)

tính tham lam của giải thuật trên thể hiện ở việc ta chỉ cần quan tâm số cây tối đa có thể đặt trong đoạn đang xét

## 11
greedy + 2 pointers
ý tưởng là: không ngừng cất cao lowerbound của bể
tức là height bên nào thấp hơn, ta sẽ duyệt đến khi tìm được height cao hơn bên còn lại, sau đó tiếp tục luân phiên qua lại cho bên nhỏ hơn
diện tích (vì ddag xét 2d) của bể bị hạn chế bởi bên có height nhỏ hơn, nên bằng cách duyệt mảng từ hieght nhỏ hơn, ta hướng đến min của 2 height không ngừng nâng cao.
trong quá trình này, nếu phát hiện diện tích mới lớn hơn cái đã có => cập nhật max

dùng 2 pointers duyệt từ 2 đầu của mảng, cài đặt greedy
=> Otime(n)
=> Ospace(1)

## 409
## 179


## 860
## 55
## 45