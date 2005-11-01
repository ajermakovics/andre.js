<?php

class Example {
	
	var $variable1;
	var $variable2 = "value";
	
	/**
		Constructor
		Initializes values
	*/
	function Example($str) {
		$this->variable1 = 1234;
		$this->variable2 = $str;
	}	
	
	/** 
		Method 1
		Invokes method 1
	*/
	function Method1($aaa, $bbb) {
		$this->variable1++;
	}
	
	/** 
		Method 2
	*/
	function Method2($ccc = 0) {
		if($ccc == 0 )
			$this->variable1--;
		else
			$this->variable1++;
	}
	
}; // class Example ends
//------------------------

/**
	@return string
	@param $arg1 string
	@param $arg2 integer
	@desc Do some action
*/
function SomeFunction($arg1, $arg2) {
	$arg2++;
	return "$arg1 - $arg2";
}
//------------------------

// Create object
$ex = new Example("test");

// Invoke method 1
$ex->Method1(1, "asdsd");


$somevar = SomeFunction("qwe", 4);



?>