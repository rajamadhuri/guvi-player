<html>
<body>
<title>Reverse digit Program in PHP</title>
<form action="" method="post">
<label>Enter Number:</label> 
<input type="text" name="number">
</form>
</body>
</html>
<?php
$num=$_POST['number'];
$rem=0;
$rev=0;
while($num>1)
{
$rem=$num%10;
$rev=($rev*10)+$rem;
$num=$num/10;
}
echo "reverse of a number:".$rev;
?>
