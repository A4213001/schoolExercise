<!DOCTYPE html>
<html>
<head>
	<title>getFile</title>
	<?php
	$type = $_FILES['fileFields']['type'];
	$size = $_FILES['fileFields']['size'];
	$name = iconv("UTF-8","BIG-5",$_FILES['fileFields']['name']);
	$nameEcho = $_FILES['fileFields']['name'];
	$tmp_name = $_FILES['fileFields']['tmp_name'];
	?>
</head>
<body>
	<h1>上傳檔案</h1>
	<?php
	$sizekb=round($size/1024,2);
	echo "檔案類型 : ".$type."</br>";
	echo "檔案大小 : ".$sizekb."kb</br>";
	echo "檔案名稱 : ".$nameEcho."</br>";
	echo "暫存名稱 : ".$tmp_name."</br>";
	if($type=="image/png"){
		if($size < 10240){
			$file = explode(".",$name);
			date_default_timezone_set('Asia/Taipei');
			$new_name = $file[0]."-".date(ymdhis)."-".rand(0,10);
			move_uploaded_file($tmp_name, "../uploadFiles/".$new_name.".".$file[1]);
			echo "上傳成功";
		}
		else
			echo "檔案太大，上傳失敗";
	}
	else
		echo "檔案類型錯誤，上傳失敗";
	?>
</body>
</html>

