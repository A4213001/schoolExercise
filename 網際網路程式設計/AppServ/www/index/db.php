<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" type="text/css" href="../css/style.css">
	<title>mydb</title>
	<?php
	require("dbconnect.php");
	if(empty($_COOKIE['setNumber'])){
		setcookie('setNumber',5,time()+60*60);
		header("location:db.php");
	}
	if(!empty($_POST['numPage'])){
		setcookie('setNumber',$_POST['numPage'],time()+60*60);
		header("location:db.php");
	}
	//變數宣告區
	$s=$_GET['s'];
	$c=$_GET['c'];
	$data=mysql_query("SELECT * FROM contact");
	$number=$_COOKIE['setNumber'];//每次顯示多少筆資料
	$total=mysql_num_rows($data);//總共有幾筆資料
	$pages=ceil($total/$number);//透過無條件進位法，算出總共需要幾頁
	$p=$_GET['p'];
	if(empty($p))
		$p=1;
	$start=($p-1)*$number;
	//變數宣告結束

	if($c=="")
		$data = mysql_query("SELECT * FROM `contact` LIMIT $start,$number");//從contact中取得所有資料
	else if($s=="1")
		$data = mysql_query("SELECT * FROM `contact` ORDER BY $c LIMIT $start,$number");//LIMIT要在最後
	else
		$data = mysql_query("SELECT * FROM `contact` ORDER BY $c DESC LIMIT $start,$number");
	?>
</head>
<body>
	<table border="1">
		<tr>
			<td>
				<?php
				if($s!=1)
					echo '<a href="db.php?c=name&amp;s=1&amp;p='.$p.'">性名</a>';
				else
					echo '<a href="db.php?c=name&amp;s=2&amp;p='.$p.'">性名</a>';
				?>
			</td>
			<td>
				<?php
				if($s!=1)
					echo '<a href="db.php?c=gender&amp;s=1">性別</a>';
				else
					echo '<a href="db.php?c=gender&amp;s=2">性別</a>';
				?>
			</td>
			<td>
				<?php
				if($s!=1)
					echo '<a href="db.php?c=phone&amp;s=1">電話</a>';
				else
					echo '<a href="db.php?c=phone&amp;s=2">電話</a>';
				?>
			</td>
			<td>
				<?php
				if($s!=1)
					echo '<a href="db.php?c=mobile&amp;s=1">手機</a>';
				else
					echo '<a href="db.php?c=mobile&amp;s=2">手機</a>';
				?>	
			</td>
			<td>
				<?php
				if($s!=1)
					echo '<a href="db.php?c=address&amp;s=1">地址</a>';
				else
					echo '<a href="db.php?c=address&amp;s=2">地址</a>';
				?>	
			</td>
		</tr>
		<?php
		for($i=0;$i<mysql_num_rows($data);$i++){
			$rs = mysql_fetch_row($data);
			echo "<tr>";
			for($j=0;$j<5;$j++)
				echo "<td>$rs[$j]</td>";
			echo "</tr>";
		}
		?>
	</table>
	<?php
	for($i=1;$i<=$pages;$i++)
		echo "<a href='db.php?p=$i'>$i</a>"
	?>
	<form method="post">
		<p>每次呈現
		<input type="number" name="numPage" value="<?php echo $number ?>" style="width:30px">
		筆
		<input type="submit" value="設定">
		</p>
	</form>
	<p>目前是第<?php echo $p ?>頁/共有<?php echo $pages ?>頁</p>
</body>
</html>

