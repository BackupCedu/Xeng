<?php 

global $user;

$user->picture = $user->picture ? $user->picture : 'images/avatar.png';
$user->link = url('profile/' . string::toAlias($user->name) . '/' . $user->uid);

?>

<?php if($user->uid) : ?>
<div class="profile_user">
    <div class="box_info_user">
        <a href="<?php echo url('profile') ?>" class="avatar">
            <img src="<?php echo $user->picture ?>"></a>
        <div class="info">
            <p>
                Xin chào,
                <span><?php echo $user->name ?></span>
            </p>
            <small><?php echo date('d/m/Y', $user->created) ?></small>
            <a href="<?php echo url('logout') ?>" class="log_out">(thoát)</a>
        </div>
    </div>
    <div class="update_user">
        <a href="<?php echo $user->link ?>" class="corner_all">Hồ sơ cá nhân</a>
    </div>
</div>    
<?php else : ?>
<!-- login -->
<div class="login">
    <form id="loginForm" action="<?php echo url('user/login') ?>" method="post">
        <div class="row">
            <label>Tên đăng nhập:</label>
            <input type="text" name="name" class="input_text"/>
        </div>
        <div class="row">
            <label>Mật khẩu:</label>
            <input type="password" name="pass" class="input_text"/>
        </div>
        <div class="row">
            <a href="<?php echo url('user/register') ?>" class="btn_register">Đăng ký</a>
            <input type="submit" class="btn_login" name="op" value="Đăng nhập" />
            <input type="hidden" name="form_id" id="edit-user-login" value="user_login">
            <span class="clearfix"></span>
        </div>
        <div class="row text_right">
            <a href="<?php echo url('user/password') ?>" title="Quên mật khẩu?" class="get_password">Quên mật khẩu?</a>
        </div>
    </form>
</div>
<!-- /login -->

<!-- login account -->
<div class="login_acount">
    <h2>Đăng nhập bằng tài khoản</h2>

    <a href="javascript:;" class="icon_fb icon openid" dir="facebook" title="Facebook">
        <span>Facebook</span>
    </a>
    <a href="javascript:;" class="icon_gg icon openid" dir="google" title="Google">
        <span>Google</span>
    </a>
    <a href="javascript:;" class="icon_yahoo icon openid" dir="yahoo" title="Yahoo">
        <span>Yahoo</span>
    </a>
</div>
<script>$('#loginForm').attr('action', $('#loginForm').attr('action') + '?ref=' + window.location.href.replace(/\?ref=(.*)/g,''));</script>
<!-- /login account -->
<?php endif ?>