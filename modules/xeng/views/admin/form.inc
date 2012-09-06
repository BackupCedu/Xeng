<?php

/*
 * @todo Admin add/edit page : add/edit form
 */

/**
 * Menu callback; Build the categories editing form.
 * @param	string	$task : add / edit dùng chỉ số này để nhận dạng form add hay edit
 * @param	string	$type : product type
 */
function xeng_game_form(&$data, $task, $gid) {
    
    $form = array();
    $title = '';
    $item = NULL;
    
    // Lay thon so form cu
    if(isset($data['rebuild']) && $data['rebuild']) {
        $item = (object) (isset($data['post']['game']) ? $data['post']['game'] : $data['values']['game']);
    }
    // Kiểm tra $item trường hợp là Edit
    if ($task == 'edit') {
        $title = 'Edit game';
        $item = xeng::getGame($gid);
        if (empty($item)) {
            drupal_set_message('The game is not exists.');
            return $form;
        }
    } else {
        $title = 'Add game';
    }

    //Các thông số của form
    $form['game'] = array(
        '#type' => 'fieldset',
        '#title' => t($title),
        '#collapsible' => FALSE,
        '#tree' => TRUE,
        '#weight' => -2,
        '#attributes' => array('class' => 'game-item-form'),
        '#prefix' => '<div class="node-form">',
        '#suffix' => '</div>',
    );

    $form['game']['gid'] = array(
        '#type' => 'textfield',
        '#title' => t('Game Id'),
        '#default_value' => isset($item->gid) ? $item->gid : '',
        '#description' => t('Mã game được lấy từ nhà cung cấp Game. %example', array('%example' => 'Ví dụ: 100, 105 ...')),
        '#required' => TRUE,
    );

    $form['game']['name'] = array(
        '#type' => 'textfield',
        '#title' => t('Name'),
        '#default_value' => isset($item->name) ? $item->name : '',
        '#description' => t('Tên của game, dùng để hiển thị. %example', array('%example' => 'Ví dụ: Poker, Phỏm Online ...')),
        '#required' => TRUE,
    );
    
    $form['game']['alias'] = array(
        '#type' => 'textfield',
        '#title' => t('Alias'),
        '#default_value' => isset($item->alias) ? $item->alias : '',
        '#description' => t('Tên định danh của Game, sẽ được tạo tự động nếu không nhập. %example', array('%example' => 'Ví dụ: poker, phom-online ...')),
    );

    $form['game']['image'] = array(
        '#type' => 'textfield',
        '#title' => t('Image'),
        '#default_value' => isset($item->image) ? $item->image : '',
        '#description' => t('Đường dẫn tới ảnh của game, hiển thị ở list game. %example', array('%example' => 'Ví dụ: images/games/poker.jpg')),
        '#required' => TRUE,
    );

    $form['game']['description'] = array(
        '#type' => 'textarea',
        '#title' => t('Description'),
        '#default_value' => isset($item->description) ? $item->description : '',
        '#rows' => 3,
        '#description' => t('Giới thiệu Game. %example', array('%example' => 'Ví dụ: Poker là game bài ...')),
    );

    $form['game']['guide'] = array(
        '#type' => 'textarea',
        '#title' => t('Guide'),
        '#default_value' => isset($item->guide) ? $item->guide : '',
        '#rows' => 3,
        '#description' => t('Hướng dẫn chơi Game. %example', array('%example' => 'Ví dụ: Poker được chơi theo nhóm ...')),
    );

    $form['game']['metadesc'] = array(
        '#type' => 'textarea',
        '#title' => t('Meta description'),
        '#default_value' => isset($item->metadesc) ? $item->metadesc : '',
        '#rows' => 3,
        '#description' => t('Metadata description giới thiệu về Game hỗ trợ SEO. %example', array('%example' => 'Ví dụ: Poker được chơi theo nhóm ...')),
    );

    $form['game']['metakey'] = array(
        '#type' => 'textarea',
        '#title' => t('Meta keywords'),
        '#default_value' => isset($item->metakey) ? $item->metakey : '',
        '#rows' => 3,
        '#description' => t('Metadata keywords từ khóa dùng để SEO với Game. %example', array('%example' => 'Ví dụ: poker, chơi bài ...')),
    );
    
    $form['game']['weight'] = array(
        '#type' => 'weight',
        '#title' => t('Weight'),
        '#delta' => 50,
        '#default_value' => isset($item->weight) ? $item->weight : 0,
        '#description' => t('Vị trí của game trong list, mục này được sử dụng để sắp xếp các danh mục khi hiển thị.'),
    );

    $form['game']['status'] = array(
        '#type' => 'checkbox',
        '#title' => t('Published'),
        '#default_value' => isset($item->status) ? $item->status : 1,
        '#description' => t('Trạng thái của game được công khai hay không công khai <strong>Bật/Tắt</strong> ...'),
    );
 
    $form['task'] = array(
        '#type' => 'hidden',
        '#default_value' => $task,
    );

    $form['gid'] = array(
        '#type' => 'hidden',
        '#default_value' => isset($gid) ? $gid : '',
    );

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Save'),
        '#weight' => 40,
    );
    
    $form['close'] = array(
        '#type' => 'submit',
        '#value' => 'Save & Close',
        '#weight' => 41,
    );

    $form['new'] = array(
        '#type' => 'submit',
        '#value' => 'Save & New',
        '#weight' => 43,
    );
    
    $form['cancel'] = array(
        '#type' => 'submit',
        '#value' => 'Cancel',
        '#validate' => array('xeng_game_form_cancel'),
        '#weight' => 44,
    );

    return $form;
}

/**
 * Process menu and menu item add/edit form submissions.
 */
function xeng_game_form_submit($form, &$form_state) {
    global $user;

    $op = isset($form_state['values']['op']) ? $form_state['values']['op'] : '';
    $gid = isset($form_state['values']['gid']) ? $form_state['values']['gid'] : '';
    $task = isset($form_state['values']['task']) ? $form_state['values']['task'] : '';
    
    $game = new stdClass();
    
    $game->gid = intval($form_state['values']['game']['gid']);
    $game->uid = $user->uid;
    $game->name = trim($form_state['values']['game']['name']);
    $game->alias = trim($form_state['values']['game']['alias']);
    $game->image = trim($form_state['values']['game']['image']);
    $game->description = trim($form_state['values']['game']['description']);
    $game->guide = trim($form_state['values']['game']['guide']);
    $game->metadesc = trim($form_state['values']['game']['metadesc']);
    $game->metakey = trim($form_state['values']['game']['metakey']);
    $game->status = $form_state['values']['game']['status'];
    $game->weight = $form_state['values']['game']['weight'];

    $game->alias = $game->alias ? $game->alias : string::toAlias($game->name);
    $game->image = $game->image ? $game->image : 'images/game/default.png';
    $game->metadesc = $game->metadesc ? $game->metadesc : $game->name;
    $game->metakey = $game->metakey ? $game->metakey : $game->name;

    if($gid && $task == 'edit') {
        data::updateObject('{games}', $game, 'gid=' . $gid);
    } else {
        data::insertObject('{games}', $game);
    }

    drupal_set_message(t('Game %name đã lưu thành công.', array('%name' => $game->name)));
    
    if ($op == t('Save')) {
        $form_state['rebuild'] = true;
    } else 
    if ($op == t('Save & New')) {
        $form_state['redirect'] = 'admin/xeng/add';
    } else {
        $form_state['redirect'] = 'admin/xeng';
    }
}

function xeng_game_form_cancel($form, &$form_state) {
    // Xoa error kiem tra du lieu
    drupal_get_messages('error');
    drupal_goto('admin/xeng');
}

/**
 * Validates the content type submission form generated by node_type_form().
 */
function xeng_game_form_validate($form, &$form_state) {
    
    $name = trim($form_state['values']['game']['name']);
    $gid  = intval($form_state['values']['gid']);
    $gidNew = intval($form_state['values']['game']['gid']);

    if (!$gid && $game = xeng::getGame($gidNew)) {
        form_set_error('gid', t('Mã <em>game</em> %game đã sử dụng cho <em>game</em> %name, vui lòng chọn mã game khác.', array('%game' => $gidNew, '%name' => $game->name)));
    }
}