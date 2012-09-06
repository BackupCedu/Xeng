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
	
	<div class="user_detail form_register">
		<div class="row">
			<label>Thông tin tài khoản:(*)</label>
			<input type="text" name="username" class="input_text">
		</div>
		<div class="row">
			<label>Mật khẩu:(*)</label>
			<input type="password" name="password" class="input_text">
		</div>
		<div class="row">
			<label>Nhập lại mật khẩu:(*)</label>
			<input type="password" name="password_input" class="input_text">
		</div>
		<div class="row">
			<label>Điện thoại di động:</label>
			<input type="text" name="phone" class="input_text">
		</div>
		<div class="row">
			<label>Địa chỉ Email:(*)</label>
			<input type="text" name="email" class="input_text">
		</div>
		<div class="row">
			<label>Nhận mã kích hoạt:</label>
			<select name="get_code" class="sel_text">
				<option>Nhận qua Email</option>
				<option>Nhận qua điện thoại</option>
			</select>
		</div>
		<div class="line_space"></div>
		<div class="row">
			<label>Thông tin cá nhân</label>
			<a href="javascript:void(0);" class="icon_info_more">Điền thêm thông tin cá nhân</a>
		</div>
		<div class="user_info_more">
			<div class="row">
				<label>Họ tên:</label>
				<input type="text" name="full_name" class="input_text">
			</div>
			<div class="row">
				<label>Địa chỉ cư trú:</label>
				<input type="text" name="address" class="input_text">
			</div>
			<div class="row">
				<label>Số CMT:</label>
				<input type="text" name="cmt" class="input_text">
			</div>
			<div class="row">
				<label>Tỉnh - Thành phố:</label>
				<select name="city" class="sel_text">
					<option>Hà nội</option>
					<option>TP.HCM</option>
				</select>
			</div>
		</div>
		<div class="line_space"></div>
		<div class="row">
			<label>Xác minh:</label>
			<input type="text" name="input_capcha" class="input_text">
		</div>
		<div class="row">
			<label>&nbsp;</label>
			<img src="images/img_capcha.png" class="img_capcha">
			<a href="#" class="change_capcha"><img src="images/icon_capcha.jpg"></a>
		</div>
		<div class="row">
			<label>&nbsp;</label>
			<input type="checkbox" name="agree">
			Tôi đã đọc &amp; đồng ý <a href="#">điều khoản</a> của Xèng7
		</div>
		<div class="row">
			<label>&nbsp;</label>
			<button type="submit" class="btn_user_register">Đăng ký</button>
		</div>
	</div>
	<div class="clear"></div>
	<!-- /user detail -->
</div>
