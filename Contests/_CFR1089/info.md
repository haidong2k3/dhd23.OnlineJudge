## Codeforces Round 1089 (Div. 2)
- Mar/29/2026 - 21:35 (UTC+7)
- 7 problems

Solve được 2 bài A, B
Bài C1 "gần" được :vv - không hiểu lỗi chỗ nào

Solution & Analyzing: https://www.youtube.com/live/-9SX8HpQhyI?si=M-Cm43oc2DNOeslP
---
Đã AC bài 1, lột số lỗi logic trong code, gần như đã "chạm" đến solution, 
có thể sẽ đạt được nếu cẩn thận hơn hoặc quản lý energy tốt hơn.

Tiếp tục C2 - upgrade C1 
Tỉ lệ acc chỉ khoảng 1/10 so với c1 -> chênh lêch khá lớn
Phân tích:
- những value có thể set "giảm" thì set luôn
    - (a[i] > lcm && b[i] >= lcm)
- những giá trị còn lại
    - có thể set tăng trong phạm vi b[i] 
    - và là bội của a[i]
- tuy nhiên cần lưu ý về cách chọn bội
    - hệ số "bội" có thể dẫn đến gcd xung quanh a[i] thay đổi
    - cần chọn hệ số sao cho nó có gcd = 1 với các hệ số xung quanh

- xét t0, t1, t2,... tn-1 là hệ số của các phần tử trong kết quả
    - hệ số của các giá trị "có thể giảm" là t_giam = 1
    - các hệ số có thể tăng là t_tang > 1 và ti_tang < bi/ai
    - ngoài ra các hệ số còn lại ko thể giảm cũng không thể tăng t_dead = 0
    - và gcd(t0, t1) = gcd(t1, t2) = gcd(t2, t3) =... gcd(tn-2, tn-1) = 1
    - 1 option tối giản là cho các t_tang là cho nó bằng 2 hoặc 3
    - luôn đảm bảo giữa các t_giam và t_dead, thì các t_tang liền kề là các giá trị 2-3 xen kẽ
    => đây chính là vấn đề mấu chốt cần giải quyết


