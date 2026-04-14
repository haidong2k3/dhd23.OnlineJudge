

## F
- x + y quyết định tính chẵn lẻ của root là node 1
- y không quan trọng, lấy các node dư của y sau khi cấu trúc đủ số node chẵn x - gắn vào node 1 làm leaf là thỏa
- với x, kiểm tra tính chẵn lẻ của node 1 để loại trừ
- với các node x còn lại, ta cần xây dựng 1 subtree tính từ node 2 chứa đủ số node chẵn cần thiết

giả sử, ta muốn trong subtree của node 2 có nhất định số node chẵn
ta có thể thêm 1 leaf vào để node 2 thành node chẵn
sau đó, cữ mối khi muốn thêm 1 node chẵn, ta thêm leaf cho node leaf thấp nhất và leaf cho parent của node này
- trong subtree của node 2, cứ mỗi node ta thêm vào