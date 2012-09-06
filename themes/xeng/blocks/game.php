<?php
$games = array(
    '106' => array(
        'image' => 'game_1.png',
        'title' => 'Ba cây',
        'views' => '',
    ),
    '114' => array(
        'image' => 'game_2.png',
        'title' => 'Cờ tướng',
        'views' => '',
    ),
    '109' => array(
        'image' => 'game_3.png',
        'title' => 'Tiến lên Miền Bắc',
        'views' => '',
    ),
    '111' => array(
        'image' => 'game_4.png',
        'title' => 'Chắn Online',
        'views' => '',
    ),
    '107' => array(
        'image' => 'game_5.png',
        'title' => 'Binh chợ lớn',
        'views' => '',
    ),
    '110' => array(
        'image' => 'game_6.png',
        'title' => 'Tiến lên Miền Nam',
        'views' => '',
    ),
    '105' => array(
        'image' => 'game_7.png',
        'title' => 'Poker',
        'views' => '',
    ),
    '102' => array(
        'image' => 'game_8.png',
        'title' => 'Cờ úp',
        'views' => '',
    ),
    '111' => array(
        'image' => 'game_12.png',
        'title' => 'Chắn Online',
        'views' => '',
    ),
    '102' => array(
        'image' => 'game_9.png',
        'title' => 'Phỏm Online',
        'views' => '',
    ),
    '102' => array(
        'image' => 'game_10.png',
        'title' => 'Phỏm Online',
        'views' => '',
    ),
    '102' => array(
        'image' => 'game_11.png',
        'title' => 'Phỏm Online',
        'views' => '',
    ),
);
?>
<div class="list_game">
    <!-- 4 goc -->
    <div class="top_left"></div>
    <div class="top_right"></div>
    <div class="bottom_left"></div>
    <div class="bottom_right"></div>

    <div class="list_game_top"></div>
    <div class="list_game_mid">
        <ul>
            <?php $count = 0 ?>
            <?php foreach($games as $id => $g) : ?>
            <?php $g = (Object) $g ?>
            <$php $c = $count == 5 ? ' last' : 'item' ?>
            <li class="<?php echo $c ?>" style="background: url(<?php echo $base_url ?>/images/game/<?php echo $g->image ?>)">
                <span class="user_online"><?php echo $g->views ?></span>
                <a href="<?php echo url('play/' . $id) ?>" class="play_now">Chơi ngay</a>
            </li>
            <?php $count++ ?>
            <?php $count = $count > 5 ? 0 : $count ?>
            <?php endforeach ?>
        </ul>
    </div>
    <div class="list_game_bottom"></div>
</div>