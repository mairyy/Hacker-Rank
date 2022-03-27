# Hacker-Rank
Bài tập LTNC-04

Bài 1
Drawing Book
Tóm tắt: Quyển sách có n trang (với trang đầu tiên đánh số 1, ở bên phải, các trang số chẵn
bên trái, trang số lẻ bên phải). Mỗi lần lật được 1 trang. Có thể bắt đầu lật từ trang đầu tiên (số
1) xuống hay ngược lại trừ trang cuối cùng lên. Hỏi nếu cần đọc trang p, cần lật ít nhất bao
nhiêu trang ? Bộ test có q test. Chỉ cần cài đặt hàm solve().

Bài 2
Equalize the Array
Tóm tắt: Cho một dãy (mảng) các số nguyên. Mỗi thao tác xoá một phần tử trong dãy. Hỏi số
thao tác ít nhất cần thực hiện để được kết quả là tất cả các phần tử còn lại của dãy là bằng
nhau ?

Bài 3
Palindrome Index
Tóm tắt: Một chuỗi kí tự gọi là "palindrome" nếu nó đối xứng (hay đọc từ trái qua phải giống đọc
từ phải qua trái). Ví dụ: aba, a, bbb, aa, baab.
Cho một chuỗi, hãy tìm và ra chỉ số (index) của một kí tự trong chuỗi để sao cho nếu loại bỏ kí
tự đó đi thì chuỗi còn lại là "palindrome". Nếu chuỗi ban đầu đã là "palindrome" thì in ra -1.
(Chú ý là luôn có giải pháp, tức chuỗi cho ban đầu chỉ cần loại đi tối đa một kí tự thì sẽ đối
xứng.)

Bài 4
Variable Sized Arrays
Tóm tắt: Dữ liệu đầu vào gồm: n - số các dãy số với độ dài khác nhau; q - số các câu truy vấn
(query). Tiếp sau là n dãy số, mỗi dãy bắt đầu bằng số các phần tử của dãy và tiếp theo là giá
trị các phần từ trong dãy đó. Cuối cùng là q câu truy vấn gồm hai giá trị (i, j). Với mỗi câu truy
vấn, yêu cầu là in ra giá trị của phần tử có chỉ số (index) j tại mảng (dãy số) thứ i.

Bài 5
Mystery Number
Tóm tắt: cho n, cùng dãy số A (có n phần tử) và dãy số B (có n+1 phần tử). Tìm và in ra phần
tử duy nhất có trong B nhưng không có trong A.

Bài 6
Between Two Sets
Tóm tắt: Cho tập A = {a_0, …, a_n} và tập B = {b_0, …, b_m}. Một số x được gọi là ‘ở giữa’ nếu
x chia hết cho mọi phần tử a_i của tập A, đồng thời mọi phần tử b_k của tập B chia hết cho x.
Với 2 tập A và B, tìm và in ra số các số ‘ở giữa” chúng.

Bài 7
Falling Rocks
Tóm tắt: Hình dung bỗng nhiên bạn trong 1 thế giới ma trận 2 chiều. Bạn ở dưới đất (hàng 1).
Các hòn đá rơi từ trên trời (hàng 2 trở lên) xuống theo chiều dọc (các cột). Tại mỗi vòng (lượt)
bạn chỉ có thể đứng yên, hoặc nhảy sang trái 1 ô, hoặc nhảy sang phải 1 ô nếu như các ô đó
trống. Và mỗi vòng (lượt), đá từ 1 hàng rơi xuống. Rồi tới lượt sau thì những hòn đá của hàng
đang trên mặt đất sẽ biến mất (rơi tiếp chui vào lòng đất).
Cho biết vị trí của bạn ở hàng 1, cũng như các hòn đá ở các hàng trên trong một ma trận 2
chiều. Hỏi có hay không cách nhảy/dịch chuyển, để cuối cùng bạn không bị hòn đá nào rơi vào
người?
