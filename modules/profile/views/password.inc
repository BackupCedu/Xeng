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
		<?php echo drupal_get_form('user_profile_form', $user, 'account') ?>
	</div>
	<div class="clear"></div>
	<!-- /user detail -->
</div>
