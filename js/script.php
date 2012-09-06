<?php

$time = isset($_GET['time']) ? $_GET['time'] : '';
$file = isset($_GET['file']) ? $_GET['file'] : 'compressed';
$cache = isset($_GET['cache']) ? $_GET['cache'] : true;

if ($cache) {
    include './packer.php';

    $script = array();
    $script['jQuery 1.7.1'] = file_get_contents('./jquery.min.js');
    $script['jQuery.SimpleModal 1.4.2'] = file_get_contents('./jquery.simplemodal.js');
    $script['Xeng Script'] = file_get_contents('./jquery.xeng.js');
    
    $content = "/* \r\n";
    $content.= " * Last update: " . date('d/m/Y H:i') . "\r\n";
    $content.= " */\r\n\r\n";
    
    foreach($script as $name => $data) {
        $content.= "/* \r\n";
        $content.= " * " . $name . "\r\n";
        $content.= " */\r\n\r\n";
        $packer = new JavaScriptPacker($data, 'Normal', true, false);
        $content.= $packer->pack();
        $content.= "\r\n\r\n";
    }
    
    file_put_contents('./cache.js', $content);

    die('Access denied.');

} else {
    include('./cache.js');
}

?>