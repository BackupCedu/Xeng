<?php

global $user;

?>

<!-- user detail -->
<div class="box_user_detail">
	<div class="user_avatar">
		<div class="box_avatar">
			<a href="javascript:;" class="avatar">
				<img src="<?php echo $user->picture ?>" alt="<?php echo $user->name ?>">
			</a>
			<h3><a href="javascript:;"><?php echo $user->name ?></a></h3>
		</div>
		<div class="clear_space"></div>
		<ul>
			<li><a href="<?php echo url('profile') ?>">Thông tin tài khoản</a></li>
			<li><a href="<?php echo url('profile/details') ?>">Thông tin cá nhân</a></li>
			<li><a href="<?php echo url('profile/password') ?>">Đổi mật khẩu</a></li>
			<li><a href="<?php echo url('logout') ?>">Thoát</a></li>
		</ul>
	</div>
	
	<div class="user_detail">
		<div class="list_user_info">
			<h3><span>Thông tin khách hàng - chủ tài khoản:</span></h3>
			<div class="box_info">
				<p><span>Họ và tên:</span>-- chưa có --</p>
				<p><span>Ngày sinh:</span>-- chưa có --</p>
				<p><span>Số CMT:</span>-- chưa có --</p>
				<p><span>Địa chỉ nơi cư trú:</span>-- chưa có --</p>
				<p><span>Tỉnh - Thành phố:</span>Hà Nội</p>
				<p><span>Công ty:</span>-- chưa có --</p>
				<p><span>Địa chỉ công ty:</span> -- chưa có --</p>
			</div>
		</div>
		<div class="list_user_info">
			<h3 class="odd"><span>Hình thức nhận mã xác minh thanh toán(OTP)</span>&nbsp;&nbsp;<a href="#">Hướng dẫn</a></h3>
			<div class="box_info">
				<p><span>Hình thức hiện tại:</span>Email</p>
			</div>
		</div>
		<div class="list_user_info">
			<h3 class="odd"><span>Thông tin xác thực thanh toán:</span></h3>
			<div class="box_info">
				<p><span>Điện thoại di động:</span>090459****<a href="#" class="link_space">xác thực điện thoại</a><a class="link_space" href="#">Đổi số điện thoại</a></p>
				<p><span>Email:</span>ntl***@yahoo.com <a href="#" class="change_email">Đổi email</a></p>
			</div>
		</div>
	</div>
	<div class="clear"></div>
	<!-- /user detail -->
</div>
