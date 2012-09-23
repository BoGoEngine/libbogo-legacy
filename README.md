# BoGoEngine

## Thông báo

Do gặp trục trặc về mặt sức khỏe
([RSI](http://en.wikipedia.org/wiki/Repetitive_stress_injury)), nhánh phát
triển do **Dương (cmpitg)** quản lý đã bị chậm lại từ giữa tháng 04/2012 đến
giữa tháng 05/2012.

Tính từ ngày 17/05/2012, nhánh này sẽ lại được phát triển tiếp tục.

## Giới thiệu

**BoGoEngine** là một thư viện sử dụng cho việc gõ tiếng Việt.  **BoGoEngine**
được viết bằng ngôn ngữ C++, với functional programming paradigm.

Mail group thảo luận các vấn đề liên quan đến việc *phát triển*
**BoGoEngine**: <bogoengine-dev@googlegroups.com>, subscribe tại giao diện web
[Google Group](http://groups.google.com/group/bogoengine-dev/).

## Lịch sử và nguyên nhân ra đời

Lịch sử và nguyên nhân ra đời có thể được xem tại
[trang chủ của dự án](http://cmpitg.github.com/BoGoEngine/).

## Tài liệu

Tài liệu nằm trong thư mục **docs** của dự án, đồng thời có trên
[Wiki](https://github.com/CMPITG/BoGoEngine/wiki) tại Github.

## Yêu cầu

Các gói cần phải cài đặt trên hệ thống Ubuntu. Nếu bạn sử dụng một distro khác, 
vui lòng tham khảo cách đặt tên trong distro của bạn.

### Cho việc biên dịch

* cmake
* glibmm-2.4-dev

### Cho việc sử dụng

* glibmm 2.4
* gcc 4.2+

## Hướng dẫn build

### Build bình thường

    $ mkdir build && cd build
    $ cmake .. && make install

### Build debug, tests

**Ghi chú:** trước khi có thể biên dịch, bạn cần vào thư mục gốc của project,
chạy lệnh:

    $ git submodule init
    $ git submodule update

Sau đó build BoGo trong chế độ Debug và chạy các bài test:

    $ mkdir build && cd build
    $ cmake "-DCMAKE_BUILD_TYPE:STRING=Debug" ..
    $ make all test_utils
    $ test/test_utils

### Build gói debian

Cần cài gói:

* devscripts

Commands:

    $ git checkout debian
    $ git checkout -b build
    $ git merge master
    $ debuild -us -uc
   
(optional - xóa branch build)

    $ git branch -D build

**Ghi chú:** debian là một branch riêng chỉ chứa thư mục debian. Do vậy nên
không được merge trực tiếp vào đây mà phải copy sang branch build mới được merge.

## Giấy phép xuất bản (License)

Toàn bộ mã nguồn của *BoGoEngine* cùng tất cả các tài nguyên đi kèm đều được
phát hành dưới các quy định ghi trong Giấy phép Công cộng GNU, phiên bản 3.0
(GNU General Public License v3.0).  Xem tệp *COPYING* để biết thêm chi tiết.

## Credit

Bản quyền (C) năm 2012 bởi:

* Nguyễn Hà Dương <cmpitg@gmail.com>
* Nguyễn Thành Hải <phaikawl@gmail.com>
* Đàm Tiến Long <longdt90@gmail.com>
* Ngô Trung <ndtrung4419@gmail.com>

Xin chân thành gửi lời cảm ơn đặc biệt đến:

* Hoàng Minh Thắng <hoangminhthang@xaydunghoanglong.com>
