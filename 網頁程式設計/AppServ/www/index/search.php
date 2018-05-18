<!DOCTYPE html>
<html>
<head>
	<title>search</title>
	<?php
	require("dbconnect.php");
	if($_POST['search_name']!="" || $_POST['search_gender']!=""){
		$search_name=$_POST['search_name'];
		$search_gender=$_POST['search_gender'];
		$data = mysql_query("SELECT * FROM `contact` WHERE `name` LIKE '%$search_name%' AND `gender` LIKE '$search_gender' ORDER BY gender DESC");
	}
	?>
</head>
<body>
	<form method="post">
		<label>搜尋姓名</label>
		<input type="text" name="search_name" value="<?php echo $search_name?>">
		<br>
		<label>性別</label>
		<input type="radio" name="search_gender" value="%" checked="checked">不限
		<input type="radio" name="search_gender" value="男">男
		<input type="radio" name="search_gender" value="女">女
		<br>
		<input type="submit" value="搜尋">
	</form>
	<?php
	if($search_name!=""){
	?>
	<table border="1">
		<tr>
			<td>姓名</td>
			<td>性別</td>
			<td>電話</td>
			<td>手機</td>
			<td>地址</td>
		</tr>
		<?php
			for($i=0;$i<mysql_num_rows($data);$i++){
				$rs = mysql_fetch_row($data);
				echo "<tr>";
				for($j=0;$j<5;$j++)
					echo "<td>$rs[$j]</td>";
				echo "</tr>";
			}
		}
		?>
	</table>
	<a href="search.php">重新查詢</a>
	<a href="../index.php">回到首頁</a>
</body>
</html>

