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
ý tưởng: lưu lại tần suất của từng ký tự, với mỗi ký tự, cộng phần chẵn của nó, ngoài ra được cộng "tối đa" 1 phần lẻ

=> Otime(n) frequency counting
=> Ospace(n) mảng lưu frequency

## 179
ý tưởng ban đầu là sắp xếp giảm dần theo phần tử đầu tiên => chuyển các giá trị thành string
tuy nhiên, sẽ xuất hiện vấn đề khi các ký tự trái cùng bằng nhau a[0] == b[0], vd như [3, 30, 35]
đối với các phần tử có cùng giá trị trái cùng (val[0]), quy tắc so sánh phần còn lại tương đối phức tạp,
giải pháp là thay vì thực hiện so sánh a[0] và b[0], ta so sánh [a+b] và [b+a]
giải thích:
- mong muốn cuối cùng là mảng đã sắp xếp sau khi concatenate sẽ được giá trị lớn nhất
- khi thực hiện sắp xếp, ở mọi thời điểm, 2 giá trị a, b được chọn ra
- 2 giá trị này có 2 cách xếp a -> b và b -> a
- vậy thì tại thời điểm này, ta chỉ cần quan tâm [a+b] và [b+a]
- giả sử a là kết quả, nếu a là kết quả cuối cùng, các phép so sánh còn lại sẽ đảm bảo a+c >= c+a (với mọi c chưa xét)
- ngược lại, nếu a, không phải là kết quả cuối, nó sẽ bị thay thể bới 1 giá trị c, và c này vẫn sẽ đúng nếu so sánh lại với các b mà a đã so sánh trước đó
=> greedy + sorting

tóm lại, hướng suy nghĩa là dựa trên kết quả toàn cục, ta thử xét kết quả so sánh cục bộ

về test case, hãy lưu ý trường hợp mảng chỉ toàn giá trị 0

=> Otime(nlogn) với nlogn là sorting barrier lần của custom comparitor
=> Ospace(logn) - sort function of C++

## 860
ý tưởng là thối mệnh giá lớn hơn trước, ưu tiên giữ lại các mệnh giá nhỏ hơn
vd như 20 thì nên thối 10 + 5 nếu có thể, không được thì mới thối 3 cái 5
=> greedy

do chỉ có 3 mệnh giá và constraint khá thấp, ta có thể cài đặt thủ công

=> Otime(n)
=> Ospace(1)

## 55
ý tưởng là bài này có thể thu gọn thành 1 bài nhỏ hơn, kiểu như nếu từ ô b đến được ô c(kết quả), thì ô b chính là ô kết quả mới, bài toán lúc này trở thành kiểm tra tính khả thi đến ô b, sau đó nếu tồn tại ô a có thể đến ô b, thì ô a chính là kết quả mới....
ta có thể duyệt ngượi từ phần tử cuối cùng, kiểm tra những ô nào có thể trở thành ô kết quả, nếu ô bắt đầu (0) cũng nằm trong số đó, thì ta có thể đưa ra kết luận => 1 dạng 1 greedy

=> Otime(n)
=> Ospace(1)

## 45
ý tưởng là, ta lưu lại kích thước quảng đường tối thiểu cần để đi từ i đến n - 1
vd: tại n-1 là 0; 
tại n-k - nếu có thể lập tức đi đến n - 1 => 0 + 1
tại n-k - nếu có thể đi đến ô n-h mà n-h đã được xác định cần tối thiểu t bước để đến n-1 => t + 1

đây là 1 dạng greedy+bruteforce 2 vòng lặp, 
    duyệt qua các i
        duyệt tìm quãng đường ngắn nhất từ [i+1, min(i+nums[i], n-1)]
=> Otime(n^2)
=> Ospace(n) - mảng lưu lại shortest path size tại mỗi điểm

## 45 (optimize)
