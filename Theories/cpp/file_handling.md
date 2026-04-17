## freopen() - thư viện <cstdio>

freopen({Tên_file}, {Định_dạng_nhập_xuất}, {Luồng_vào_ra});

{Định_dạng_nhập_xuất}
- "r": 
    Mở file để đọc dữ liệu. 
    File bắt buộc phải tồn tại.
- "w": 
    Mở file để ghi dữ liệu. 
    Nếu file đã tồn tại, toàn bộ nội dung cũ sẽ bị xóa. 
    Nếu chưa tồn tại, file mới sẽ được tạo.
- "a": 
    Mở file để ghi dữ liệu theo chế độ append. 
    Không xóa nội dung cũ. 
    Dữ liệu mới luôn được ghi vào cuối file. 
    Nếu file chưa tồn tại, file mới sẽ được tạo.
- "r+": 
    Mở file để vừa đọc vừa ghi. 
    File bắt buộc phải tồn tại. 
    Không tự động xóa nội dung cũ.
- "w+": 
    Mở file để vừa đọc vừa ghi. 
    Nếu file đã tồn tại, toàn bộ nội dung cũ sẽ bị xóa. 
    Nếu chưa tồn tại, file mới sẽ được tạo.
- "a+": 
    Mở file để vừa đọc vừa ghi theo chế độ append. 
    Không xóa nội dung cũ. 
    Có thể đọc toàn bộ file, nhưng dữ liệu ghi ra luôn được ghi vào cuối file. 
    Nếu file chưa tồn tại, file mới sẽ được tạo.

{Luồng_vào_ra}: 
Là một trong hai luồng stdin hoặc stdout. 
Nếu như file dùng để đọc dữ liệu vào thì ta chọn luồng là stdin, ngược lại thì chọn stdout.


## ifstream, ostream trong thư viện <iostream>
## ftream trong thư viện <fstream>