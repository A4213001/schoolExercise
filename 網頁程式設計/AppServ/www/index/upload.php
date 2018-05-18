<!DOCTYPE html>
<html>
<head>
	<title>upload</title>
</head>
<body>
	<h1>上傳檔案</h1>
	<p>請上傳小於10kb的png檔</p>
	<form method="post" enctype="multipart/form-data" action="getFile.php">
		<input type="file" name="fileFields">
		<br><br>
		<input type="submit" value="上傳">
	</form>
</body>
</html>

