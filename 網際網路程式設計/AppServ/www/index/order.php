<!DOCTYPE html>
<html>
<head>
	<title>order</title>
	<?php 
	$name=$_POST['name'];
	$phone=$_POST['phone'];
	$address=$_POST['address'];
	$number=$_POST['number'];

	$file=fopen("../db.txt","a");//a:寫入原檔;w:覆蓋原檔後寫入;r:唯讀
	fwrite($file,"$name; $phone; $address; $number\r\n");
	fclose($file);
	?>
</head>
<body>
	<h1>您的訂單資訊如下</h1>
	<p>姓名 : <?php echo $name ?></p>
	<p>電話 : <?php echo $phone ?></p>
	<p>地址 : <?php echo $address ?></p>
	<p>數量 : <?php echo $number ?></p>
	<a href="../">回到首頁</a>
</body>
</html>

