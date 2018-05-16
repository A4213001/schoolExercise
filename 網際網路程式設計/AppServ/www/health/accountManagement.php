<?php require("header.php");
mysql_connect("localhost","ss203242430","ss123452123");//連結伺服器
mysql_select_db("health");//選擇資料庫
mysql_query("set names utf8");//以utf8讀取資料
?>
<body>
    <div class="col-md-2">
    </div>
    <div class="col-md-8">
		<div class="panel panel-default">
        	<div class="panel-heading">
           		帳戶名單
            </div>
             <div class="panel-body">
                <div class="table-responsive">
                    <table class="table table-striped table-bordered table-hover">
                        <thead>
                            <tr>
                                <th>ID</th>
                                <th>帳號</th>
                                <th>名稱</th>
                            </tr>
                        </thead>
                    <tbody>
                    <?php
                    $data=mysql_query("SELECT * FROM `user`");
                    for($i=0;$i<mysql_num_rows($data);$i++){
                        $rs=mysql_fetch_row($data);
                        echo "<tr>";
                        echo "<td>$rs[0]</td>";
                        echo "<td>$rs[1]</td>";
                        echo "<td>$rs[3]</td>";
                        echo "</tr>";
                    }
                    ?>
                    </tbody>
                </table>
            </div>
        </div>
    </div>
<?php require("footer.php"); ?>