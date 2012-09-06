<?php

// Begin function compress
function compress($buffer) {

    // remove comments
    $buffer = preg_replace('!/\*[^*]*\*+([^/][^*]*\*+)*/!', '', $buffer);

    // remove tabs, spaces, new lines, etc. 
    $buffer = str_replace(array("\r\n", "\r", "\n", "\t", '  ', '    ', '    '), '', $buffer);

    // remove unnecessary spaces
    $buffer = str_replace('{ ', '{', $buffer);
    $buffer = str_replace(' }', '}', $buffer);
    $buffer = str_replace('; ', ';', $buffer);
    $buffer = str_replace(', ', ',', $buffer);
    $buffer = str_replace(' {', '{', $buffer);
    $buffer = str_replace('} ', '}', $buffer);
    $buffer = str_replace(': ', ':', $buffer);
    $buffer = str_replace(' ,', ',', $buffer);
    $buffer = str_replace(' ;', ';', $buffer);
    
    return $buffer;
}

$file = isset($_GET['file']) ? $_GET['file'] : 'cache';
$cache = isset($_GET['cache']) ? $_GET['cache'] : true;

if($cache) {
    // initialize ob_gzhandler to send and compress data
    ob_start();

    include('./style.css');
    include('./simplemodal.css');
    include('./login.css');
    
    $content = ob_get_clean();
    
    $content = compress($content);
    
    file_put_contents('./cache.css', $content);
    
    die('Access denied.');
    
} else {
    include('./cache.css');
}

?>