<?php require("header.php"); ?>
<!DOCTYPE html>
<html>
<head>
	<title>登入</title>
	<?php
	session_start();	
	mysql_connect("localhost","ss203242430","ss123452123");//連結伺服器
	mysql_select_db("health");//選擇資料庫
	mysql_query("set names utf8");//以utf8讀取資料
	$account=$_POST['acc'];
	$password=$_POST['pas'];
	$data=mysql_query("SELECT * FROM `user` WHERE `account` = '$account' AND `password` = '$password'");
	?>
</head>
<body>
	<?php 
	if(mysql_num_rows($data)==1){
		$rs=mysql_fetch_row($data);
	  	$_SESSION['loginStatus']=1;
	  	$_SESSION['userID']=$rs[0];
	  	$_SESSION['permissions']=$rs[3];
	  	$_SESSION['userName']=$rs[4];
	  	header("location:index.php");
	}
	else
	?>
	<h1>帳號或密碼錯誤</h1>


<?php require("footer.php"); ?>