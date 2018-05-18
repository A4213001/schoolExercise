<?php require("header.php");
if(empty($_COOKIE['setNumber'])){
		setcookie('setNumber',5,time()+60*60);
		header("location:fruit.php");
	}
if(($_POST['numPage'])>0){
	setcookie('setNumber',$_POST['numPage'],time()+60*60);
	header("location:fruit.php");
}
$c=$_GET['c'];
$p=$_GET['p'];
if(empty($p))
	$p=1;
$number=$_COOKIE['setNumber'];//每次顯示多少筆資料
$start=($p-1)*$number;
mysql_connect("localhost","ss203242430","ss123452123");//連結伺服器
mysql_select_db("health");//選擇資料庫
mysql_query("set names utf8");//以utf8讀取資料
$data=mysql_query("SELECT * FROM `fruit`");
$total=mysql_num_rows($data);//總共有幾筆資料
$pages=ceil($total/$number);//透過無條件進位法，算出總共需要幾頁
?>
<body>
	<br>
	<div class="col-md-1">
	</div>
	<div class="col-md-10">
	<div class="table-responsive">
        <table class="table">
        	<thead>
        		<tr class="danger">
        			<th>圖片</th>
		            <th>名稱</th>
		            <?php
						echo '<th><a href="fruit.php?c=water&amp;p='.$p.'">水份</a></th>';
						echo '<th><a href="fruit.php?c=fiber&amp;p='.$p.'">纖維</a></th>';
						echo '<th><a href="fruit.php?c=calcium&amp;p='.$p.'">鈣</a></th>';
						echo '<th><a href="fruit.php?c=phosphorus&amp;p='.$p.'">磷</a></th>';
						echo '<th><a href="fruit.php?c=iron&amp;p='.$p.'">鐵</a></th>';
						echo '<th><a href="fruit.php?c=vitaminsB1&amp;p='.$p.'">維生素B1</a></th>';
						echo '<th><a href="fruit.php?c=vitaminsB2&amp;p='.$p.'">維生素B2</a></th>';
						echo '<th><a href="fruit.php?c=vitaminsC&amp;p='.$p.'">維生素C</a></th>';
					?>
        		</tr>
        	</thead>
        	<tbody>
           		<tr class="success">
           			<td></td>
	                <td></td>
	                <td>公克</td>
	                <td>公克</td>
	                <?php
	                for($i=0;$i<6;$i++)
	                	echo "<td>毫克</td>";
	                ?>
            	</tr>
				<?php
				if($c=="")
					$data = mysql_query("SELECT * FROM `fruit` LIMIT $start,$number");//從contact中取得所有資料
				else
					$data = mysql_query("SELECT * FROM `fruit` ORDER BY $c DESC LIMIT $start,$number");//LIMIT要在最後
				for($i=0;$i<mysql_num_rows($data);$i++){
					$rs=mysql_fetch_row($data);
				?>
                <tr class="info">
                	<td><img class="p" src=<?php echo $rs[0] ?>></td>
                	<?php
                	for($j=1;$j<10;$j++)
                		echo "<td>".$rs[$j]."</td>";
            	}
            		?>
			</tbody>
    	</table>
    	<?php
		for($i=1;$i<=$pages;$i++)
			echo "<a href='fruit.php?p=$i'>$i </a>"
		?>
		<form method="post">
			<p>每次呈現
			<input type="number" name="numPage" value="<?php echo $number ?>" style="width:30px">
			筆
			<input type="submit" value="設定">
			</p>
		</form>
    	<p>目前是第<?php echo $p ?>頁/共有<?php echo $pages ?>頁</p>
    </div>
<? require("footer.php"); ?>