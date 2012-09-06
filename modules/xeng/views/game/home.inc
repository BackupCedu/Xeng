<?php 

/**
 * @todo Home page
 */

global $base_url;

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
            <?php $c = $count == 5 ? ' last' : '' ?>
            <li class="show_tooltip<?php echo $c ?>" style="background: url(<?php echo $base_url,'/',$g->image ?>)">
                <span class="user_online"><?php echo $g->views ?></span>
                <a href="<?php echo $g->linkView ?>" class="play_now">Chơi ngay</a>
                <div class="tooltip" style="display: none; ">
                    <div class="main_tooltip">
                        <span class="arrow"></span>
                        <h4>Huyền thoại</h4>
                        <div class="list_name">
                            <div class="tooltip_name">1. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                        <div class="list_name">
                            <div class="tooltip_name">2. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                        <div class="list_name">
                            <div class="tooltip_name">3. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                        <div class="list_name">
                            <div class="tooltip_name">4. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                        <div class="list_name">
                            <div class="tooltip_name">5. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                        <div class="list_name">
                            <div class="tooltip_name">6. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                        <div class="list_name">
                            <div class="tooltip_name">7. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                        <div class="list_name">
                            <div class="tooltip_name">8. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                        <div class="list_name">
                            <div class="tooltip_name">9. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                        <div class="list_name">
                            <div class="tooltip_name">10. Lilku</div>
                            <div class="tooltip_lever">Cấp độ 40</div>
                            <div class="clear"></div>
                        </div>
                    </div>
                </div>
            </li>
            <?php $count++ ?>
            <?php $count = $count > 5 ? 0 : $count ?>
            <?php endforeach ?>
        </ul>
    </div>
    <div class="list_game_bottom"></div>
</div>