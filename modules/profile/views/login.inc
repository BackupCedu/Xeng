<link type="text/css" rel="stylesheet" media="all" href="http://www.chonmua.com/files/css/css_4f22c5a59e4b5d64413049a517bfa27b.css" />
<div style="width: 540px;">
    <div class="header-comment">
        <span class="left">Đăng nhập tài khoản</span>
        <a class="right dongpopup">Đóng [X]</a>
    </div>
    <div class="clearfix pop-content">
        <div class="left">
            <ul>
                <li class="first guest">
                    <a href="#" class="active">
                        <span>Xeng</span>
                    </a>
                </li>
                <li class="facebook">
                    <a class="openid" dir="facebook">
                        <span>Facebook</span>
                    </a>
                </li>
                <li class="google">
                    <a class="openid" dir="google">
                        <span>Gmail</span>
                    </a>
                </li>
                <li class="twitter">
                    <a class="openid" dir="twitter">
                        <span>Twitter</span>
                    </a>
                </li>
                <li class="last yahoo">
                    <a class="openid" dir="yahoo">
                        <span>Yahoo</span>
                    </a>
                </li>
            </ul>
        </div>
        <div class="right" style="float: left; width: 392px;">
            <div class="clearfix boxlogin">
                <div class="boxlogin-left lr-l" style="padding: 20px 0 0 25px !important;width: 345px">
                    <div id="error2">
                        <ul></ul>
                    </div>
                    <div id="login_fail_deal" style="font-weight: bold; color: red; display: none;">Tên đăng nhập hoặc mật khẩu không đúng.</div>
                    <iframe width="0" height="0" frameborder="0" id="_ifLogin" name="_ifLogin"></iframe>
                    <form target="_ifLogin" action="http://member.chonmua.com/login/?sys=deal&pop=1&repath=687474703a2f2f7777772e63686f6e6d75612e636f6d2f6b687579656e2d6d61692f6c6f61642f3f706f7075703d6c6f67696e" id="login_form" name="login_form" method="POST">
                        <div class="rows">
                            <label for="mail_login">Tài khoản (Email)</label>
                            <div class="input-box clearfix">
                                <span class="bg-input">
                                    <input name="mail" id="mail_login" type="text" class="txt-input txt-input1"></span>
                            </div>
                        </div>
                        <div class="rows">
                            <label for="pass_login">Mật khẩu</label>
                            <div class="input-box clearfix">
                                <span class="bg-input">
                                    <input id="pass_login" name="pass" type="password" class="txt-input"></span>
                            </div>
                        </div>
                        <div class="rows" style="padding-left: 2px;">
                            <div class="input-box">
                                <p>
                                    <input id="remember_me" name="remember_me" type="checkbox" value="1" />
                                    Nhớ mật khẩu
                                </p>
                                <button class="button button-blue" type="submit" style="float: left;">
                                    <span class="btn-l">
                                        <span class="btn-r">Đăng nhập</span>
                                    </span>
                                </button>
                                <a class="lost-pass" href="<?php echo url('profile/reset') ?>">Quên mật khẩu?</a>
                                <img id="dang_nhap" style="padding: 6px; visibility: hidden;" width="32" height="32" alt="" src="/images/deal/loading2.gif"></div>
                        </div>
                    </form>
                </div>
            </div>
            <div class="login_openid">
                <p class="help" style="font-size: 14px; font-weight: bold;">Hoặc đăng nhập bằng các tài khoản sau</p>
                <p class="btn-like clearfix">
                    <a style="font-size: 14px;" class="openid gmail" dir="facebook">
                        <img width="30" height="30" alt="" src="./images/f1.gif" />
                        <br>Facebook</a>
                    <a style="font-size: 14px;" class="openid" dir="google">
                        <img width="30" height="30" alt="" src="./images/g1.gif" />
                        <br>Gmail</a>
                    <a style="font-size: 14px;" class="openid" dir="twitter">
                        <img width="30" height="30" alt="" src="./images/t1.gif" />
                        <br>Twitter</a>
                    <a style="font-size: 14px;" class="openid" dir="yahoo">
                        <img width="30" height="30" alt="" src="./images/y1.gif" />
                        <br>Yahoo</a>
                </p>
            </div>
            <div class="txt-comment">
                Bạn chưa có tài khoản xin dành 20 giây để&nbsp;
                <a class="red" href="#">Đăng ký</a>
            </div>
        </div>
    </div>
</div>