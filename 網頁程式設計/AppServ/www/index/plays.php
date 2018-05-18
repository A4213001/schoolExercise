<!DOCTYPE html>
<html>
<head>
	<title>play</title>
	<link rel="stylesheet" type="text/css" href="../css/style.css">
	<?php $my=$_GET['n']; ?>
</head>
<body>
	<?php 
	if(!isset($my)){
	?>
		<p align='center'>請選牌</p>
		<p align="center">
			<?php
			for($i=0;$i<10;$i++)
				echo "<a href='plays.php?n=$i'><img class='myCard' src='../images/$i.png'></a>";
			?>
		</p>
		<p align="center"><a href="../">回到首頁</a></p>
	<?php
	}
	else{
	?>
		<p align="center">電腦抽牌</p>
		<p align="center">	
		<?php 
		$rnd=rand(0,9);
		echo "<img src='../images/$rnd.png'";
		?>
		</p>
		<p align="center">我方</p>
		<p align="center">
		<?php
			echo "<img src='../images/$my.png'";
		?>
		</p>
		<?php
			echo "<p align='center'>結果</p>";
			echo "<p align='center'>";
			if($my==$rnd){
				echo "猜對了";
			}
			else
				echo "猜錯了";
		?>
	<br>
	<a href="plays.php">重新選擇</a>
	<?php
	}
	?>
</body>
</html>

