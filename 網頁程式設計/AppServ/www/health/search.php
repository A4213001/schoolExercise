<?php require("header.php");
mysql_connect("localhost","ss203242430","ss123452123");//連結伺服器
mysql_select_db("health");//選擇資料庫
mysql_query("set names utf8");//以utf8讀取資料
$search=$_GET['search'];
$success=0;
?>
<body>
	<?php
	$data=mysql_query("SELECT * FROM `fruit` WHERE `name` LIKE '%$search%'");
	if(mysql_num_rows($data)>0){
		$success=1;
	?>
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
		            <th>水份</th>
		            <th>纖維</th>
		            <th>鈣</th>
		            <th>磷</th>
		            <th>鐵</th>
		            <th>維生素B1</th>
		            <th>維生素B2</th>
		            <th>維生素C</th>
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
                </tr>
			</tbody>
    	</table>
    </div>
    <?php
	}
	$data=mysql_query("SELECT * FROM `vegetables` WHERE `name` LIKE '%$search%'");
	if(mysql_num_rows($data)>0){
		$success=1;
	?>
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
		            <th>可食用部分</th>
		            <th>熱量</th>
		            <th>蛋白質</th>
		            <th>脂肪</th>
		            <th>膽固醇</th>
		            <th>膳食纖維</th>
		            <th>碳水化合物</th>
		            <th>維生素A</th>
        		</tr>
        	</thead>
        	<tbody>
           		<tr class="success">
           			<td></td>
	                <td></td>
	                <td>%</td>
	                <td>千卡</td>
	                <?php
	                for($i=0;$i<5;$i++)
	                	echo "<td>克</td>";
	                ?>
	                <td>微克</td>
            	</tr>
            	<?php
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
                </tr>
			</tbody>
    	</table>
    </div>
    <?php
	}
	if($success==0){
	?>
	<br>
	<div class="col-md-1">
	</div>
	<div class="col-md-10">
	<div class="table-responsive">
        <table class="table">
        	<thead>
        		<tr class="danger">
        			<th><h1>搜尋不到  <?php echo $search ?></h1></th>
        		</tr>
        	</thead>
    	</table>
    </div>
    <?php
	}
require("footer.php") ?>