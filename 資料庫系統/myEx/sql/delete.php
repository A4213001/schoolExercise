<?php 
// connect to my sql

$d =new MySQLi("localhost","root","1234","company");
if(mysqli_connect_errno()){die("Connect failed:".mysqli_connect_error());}

$num = isset($_POST['num']) ? $_POST['num']: "";
$num2 = isset($_POST['num2']) ? $_POST['num2']: "";
$num3 = isset($_POST['num3']) ? $_POST['num3']: "";
$msg = isset($_POST['msg']) ? $_POST['msg']: "";


	if($msg=='animal' AND $num!=""){
    $q = $d->prepare("DELETE FROM .$msg WHERE `動物編號` = ?");
    $q->bind_Param("i", $num);
    $q->execute();
    echo '刪除成功';
	}

    elseif($msg=='employee' AND $num!=""){
    $q = $d->prepare("DELETE FROM .$msg WHERE `員工編號` = ?");
    $q->bind_Param("i", $num);
    $q->execute();
    echo '刪除成功';
	}

    elseif($msg=='food' AND $num!=""){
    $q = $d->prepare("DELETE FROM .$msg WHERE `食物編號` = ?");
    $q->bind_Param("i", $num);
    $q->execute();
    echo '刪除成功';
	}

    elseif($num2!="" AND $num3!=""){
    $q = $d->prepare("DELETE FROM `eat` WHERE `動物編號` = ? AND `食物編號`=?");
    $q->bind_Param("ii", $num2,$num3);
    $q->execute();
    echo '刪除成功';
	}

	else{
		echo '刪除失敗';
	}
