<!DOCTYPE html>
<html>
<head>
	<title>index</title>
	<?php
	session_start();
	$file = fopen("browsing.txt","r");
	$browsing = fgets($file);
	fclose($file);

	if($_SESSION['come']!="v"){
		$browsing++;
		$file = fopen("browsing.txt","w");
		fwrite($file,$browsing);
		fclose($file);
		$_SESSION['come']="v";
	}
	if($_POST['userName']!=""){
		$_SESSION['userName'] = $_POST['userName'];
		setcookie('userName',$_POST['userName'],time()+10);
	}
	?>
</head>
<body>
	<?php
	if(empty($_SESSION['userName'])){
	?>
	<form method="post">
		<label>您的暱稱</label>
		<input type="text" name="userName" id="userName">
		<input type="submit" value="確定">
	</form>
	<br>
	<?php
	}
	else{
		echo $_SESSION['userName'].",您好<br><br>";
		echo $_COOKIE['userName'];
	}
	date_default_timezone_set('Asia/Taipei'); //設定時區:亞洲/台北
	echo "今天是";
	echo date("Y年m月d日 H:i:s");  #YmdHis年月日時分秒
	?>
	<p>	參觀人數 : 
	<?php 
		$string = strlen($browsing);
		for($i=0;$i<$string;$i++){
			$n = substr($browsing,$i,1);
			echo '<img src="images/'.substr($browsing,$i,1).'.png" width=50>';
		}
	?>
	</p>
	<br>
	<a href="index/plays">運氣猜數字</a>
	<a href="index/forms">訂購表單</a>
	<a href="index/check">開啟記事本</a>
	<a href="index/upload">上傳檔案</a>
	<a href="index/db">查看資料庫</a>
	<a href="index/search">搜尋</a>
	<a href="index/guestAdd">新增留言</a>
	<a href="index/login">管理者模式</a>
	<a href="health/index">健康</a>
</body>
</html>

