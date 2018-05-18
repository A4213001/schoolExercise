<!DOCTYPE html>
<html>
<head>
	<title>form</title>
</head>
<body>
	<form id="form" name="form" method="post" action="order.php">
		<h1>訂購表單</h1>
		<label>姓名 : </label>
		<input type="text" name="name" id="name">
		<br><br>
		<label>電話 : </label>
		<input type="text" name="phone" id="phone">
		<br><br>
		<label>地址 : </label>
		<input type="text" name="address" id="address" size="60">
		<br><br>
		<label>數量 : </label>
		<select name="number" id="number">
			<?php
			for($i=1;$i<=10;$i++)
				echo "<option value='$i'>$i</option>"
			?>
		</select>
		<br><br>
		<input type="submit" value="送出">
	</form>
</body>
</html>

