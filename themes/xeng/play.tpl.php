<?php global $base_url ?>
<?php $dir = realpath(dirname(__FILE__) . '/blocks/') ?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
    <meta http-equiv="content-type" content="text/html; charset=utf-8" />    
    <meta name="revisit-after" content="1 days" />    
    <meta content="XENG7.VN cổng game bài Online lớn nhất Việt Nam" name="description" />
    <meta content="Game online, đánh bài, bài lá, tú lơ khơ, tiến lên miền nam online, tiến lên miền bắc online , xì tố online, tá lả online, phỏm online, chơi 3 cây online, chơi ba cây online,  chơi chắn, đánh chắn online, poker online, đánh poker online, Flash games, mini Games, Trò chơi trực tuyến, game văn phòng, trò chơi đơn giản, trò chơi flash, tải game, chơi game miễn phí." name="keywords" />
    <meta content="index, follow" name="robots" />
    <title><?php print $head_title ?></title>
    <base href="<?php echo $base_url ?>/">
    <link href="<?php echo $base_url ?>/images/favicon.ico" rel="shortcut icon">
    <link rel="stylesheet"  href="<?php echo $base_url ?>/css/cache.css" />
    <link rel="stylesheet" type="text/css" href="chat/css/prosilver.css" title="prosilver">
    <script>var GLOBAL_BASE_URL = '<?php echo $base_url ?>'</script>
    <script src="<?php echo $base_url ?>/chat/js/chat.js" type="text/javascript"></script>
    <script src="<?php echo $base_url ?>/chat/js/custom.js" type="text/javascript"></script>
    <script src="<?php echo $base_url ?>/chat/js/lang/en.js" type="text/javascript"></script>
    <script src="<?php echo $base_url ?>/chat/js/config.js" type="text/javascript"></script>
    <script src="<?php echo $base_url ?>/chat/js/FABridge.js" type="text/javascript"></script>
    <script type='text/javascript' src="<?php echo $base_url ?>/js/cache.js"></script>
</head>
<body>
<!-- wapper -->
<div class="wapper">
    <!-- header -->
    <div class="header">
        <div class="container container_header">
            <!-- logo -->
            <div class="logo">
                <h1><a href="<?php echo $base_url ?>"></a></h1>
            </div>
            <!-- /logo -->
            <div class="right_header">
                <?php include $dir . '/login.php' ?>
                <?php include $dir . '/payment.php' ?>
            </div>
        </div>
    </div>
    <!-- /header -->

    <!-- container -->
    <div class="main main_detail">
        <div class="container">
            <?php print $top ?>
            <?php print $promote ?>
            <?php print $content ?>
            <?php print $center ?>
        </div>
    </div>
    <!-- /container -->

    <!-- box_view -->
    <?php if($game || $chatbox) : ?>
    <div class="box_view">
        <div class="container">
            <?php print $game ?>

            <!-- box_chating -->
            <div class="box_chating corner_all">
                <?php print $chatbox ?>
            </div>
            <!-- /box_chating -->

            <div class="clear"></div>
        </div>
    </div>
    <?php endif ?>
    <!-- /box_view -->

    <?php print $bottom ?>

    <!-- footer -->
    <div class="footer">
        <?php print $footer ?>
        <?php include $dir . '/footer.php' ?>
    </div>
    <!-- /footer -->
</div>
<!-- /wapper -->
</body>
</html>