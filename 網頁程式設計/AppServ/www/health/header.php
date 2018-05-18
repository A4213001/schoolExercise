<!DOCTYPE html>
<html lang="en">
	<head>
		<?php
		session_start();
		?>
		<meta charset="UTF-8">
		<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css">
		<link rel="stylesheet" href="../css/health.css">
		<nav class="navbar navbar-inverse">
				<ul class="nav navbar-nav">
		    		<li><a href="index.php">首頁</a></li>
		    		<li><a href="vegetables.php">蔬菜營養</a></li>
		    		<li><a href="fruit.php">水果營養</a></li>
		    		<li>
				    	<form class="navbar-form navbar-left" action="search.php" method="get" name="search">
						  <div class="input-group">
						    <input type="text" class="form-control" placeholder="搜尋" name="search" required>
						    <div class="input-group-btn">
						      <button class="btn btn-default" type="submit">
						        <i class="glyphicon glyphicon-search"></i>
						      </button>
						    </div>
						  </div>
						</form>
					</li>
					<?php if($_SESSION['permissions']==1){ ?>
					<li><a href="accountManagement">帳戶管理</a></li>
					<?php } ?>
				</ul>

				<ul class="nav navbar-nav navbar-right">
					<?php
					if($_SESSION['loginStatus']==1){
					?>
					<li><a href="changeData.php"><?php echo $_SESSION['userName'] ?></a></li>
					<li><a href="logout"><span class="glyphicon glyphicon-log-out"></span> Logout</a></li>
					<?php }else{ ?>
				    <li><a href="signUp"><span class="glyphicon glyphicon-user"></span> Sign Up</a></li>
				    <li><a href="login"><span class="glyphicon glyphicon-log-in"></span> Login</a></li>
				    <?php } ?>
				</ul>
		</nav>
		<br>
		<br>
		</header>
	</head>