<?php 
session_start();
if($_SESSION['v']!="yes"){
 header("location:login.php");
}

mysql_connect("localhost","ss203242430","ss123452123");//連結伺服器
mysql_select_db("guest");//選擇資料庫
mysql_query("set names utf8");//以utf8讀取資料
$id=$_GET['id'];
mysql_query("delete from guest where guestID = '$id'");
header("location:admin.php");
?>