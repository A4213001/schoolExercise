<!DOCTYPE html>
<html>
<head>
	<title>check</title>
	<script type="text/javascript">
		window.onload = function () {
    		document.getElementById('myfile').onchange = readFile;
		};
		function readFile() {
    		file = this.files[0];
    		var fReader = new FileReader();           
		    fReader.onload = function (event) {
		        document.getElementById('fileContent').value = event.target.result;
		    };
		    fReader.readAsText(file);
		}
	</script>
</head>
<body>
    <p> <input id="myfile"  type="file"></p>
    <textarea  id="fileContent" cols="68" rows="10"  ></textarea>
    <br><br>
    <a href="../index.php">回到首頁</a>
</body>
</html>

