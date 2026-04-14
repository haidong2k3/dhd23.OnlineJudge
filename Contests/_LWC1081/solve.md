# Codeforces Round 1081 (Div. 2)
https://codeforces.com/contest/2192

## A
- Duyệt qua mảng, đếm số block
- Kiểm tra tồn tại block có size >= 2
- 2 block ở đầu và cuối chuỗi giống nhau cũng tính là 1 block sz >= 2
- nếu ko có block có sz >= 2 
    => return num_block
- else (có) 
    => return num_block + 1

Ot(N)
Os(1)

## B
- nếu s có chẵn số 1, các cặp '1' sẽ tự triệt tiêu nhau = 2 số 0 (các giá trị khác giữ nguyên)
- ngoài ra, có lẻ số '0', sau 1 lần flip cũng sẽ trả về trường hợp như trên => chẵn số 1
=> kiểm tra tính chẵn/lẻ của '0'/'1'
=> để tạo được chuỗi toàn 0, ta chỉ cần lật tất cả lẻ phần tử '0' hoặc chẵn phần tử '1' của mảng gốc

Otime(N)
Ospace(1)

## C


## D
## E
## F