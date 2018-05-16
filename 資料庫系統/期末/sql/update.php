<?php 
// connect to my sql

$d =new MySQLi("localhost","root","1234","company");
if(mysqli_connect_errno()){die("Connect failed:".mysqli_connect_error());}

$a1 = isset($_POST['a1']) ? $_POST['a1']: "";
$a2 = isset($_POST['a2']) ? $_POST['a2']: "";
$a3 = isset($_POST['a3']) ? $_POST['a3']: "";
$a4 = isset($_POST['a4']) ? $_POST['a4']: "";
$a5 = isset($_POST['a5']) ? $_POST['a5']: "";
$a6 = isset($_POST['a6']) ? $_POST['a6']: "";
$a7 = isset($_POST['a7']) ? $_POST['a7']: "";
$a8 = isset($_POST['a8']) ? $_POST['a8']: "";
$a9 = isset($_POST['a9']) ? $_POST['a9']: "";
$a10 = isset($_POST['a10']) ? $_POST['a10']: "";
$a11 = isset($_POST['a11']) ? $_POST['a11']: "";

if($a1!="" AND $a2!=""){
    $q = $d->prepare("UPDATE `food` SET`食物名稱`=? where `食物編號` =?;");
    $q->bind_Param("si", $a2,$a1);
    $q->execute();
    echo '修改成功';
}
    
elseif($a3!="" AND $a4!=""){
    $q = $d->prepare("UPDATE `employee` SET`飼養員名稱`=? where `員工編號` =?;");
    $q->bind_Param("si", $a4,$a3);
    $q->execute();
    echo '修改成功';
}

elseif($a5!="" AND $a6!="" AND $a7!="" AND $a8!=""){
    $q = $d->prepare("UPDATE `animal` SET`綱`=?,`動物名稱`=?,`員工編號`=? where `動物編號` =?;");
    $q->bind_Param("ssii", $a6,$a7,$a8,$a5);
    $q->execute();
    echo '修改成功';
}

elseif($a9!="" AND $a10!="" AND $a11!=""){
    $q = $d->prepare("UPDATE `eat` SET`數量`=? where `動物編號` =? AND `食物編號`=?;");
    $q->bind_Param("iii", $a11,$a9,$a10);
    $q->execute();
    echo '修改成功';
}
else{
    echo '修改失敗';
}
