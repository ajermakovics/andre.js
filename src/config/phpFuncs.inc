<?php

function eval($code_str);
function isset($var);
function unset($var);
function foreach($Array_as_[$Key=>]$Value);
function empty($expr);
/**
 * Create an array
 */
function array([$key=>]$val,...);


/**
 * @return string
 * @param  msgid string
 * @desc   Return the translation of msgid for the current domain, or msgid unaltered if a translation does not exist 
 */
function _($msgid) ;

/**
 * @return int
 * @param  number int
 * @desc   Return the absolute value of the number 
 */
function abs($number) ;

/**
 * @return float
 * @param  number float
 * @desc   Return the arc cosine of the number in radians 
 */
function acos($number) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the inverse hyperbolic cosine of the number, i.e. the value whose hyperbolic cosine is number 
 */
function acosh($number) ;

/**
 * @return object
 * @param  SWFCharacter object
 * @desc   Adds the character to the sprite, returns a displayitem object 
 */
function add($SWFCharacter) ;

/**
 * @return object
 * @param  domnode object
 * @desc   Adds node to list of children 
 */
function add_child($domnode) ;

/**
 * @return bool
 * @param  chunk string
 * @desc   adds xml-chunk to parser 
 */
function add_chunk($chunk) ;

/**
 * @return bool
 * @param  uri string
 * @param  prefix string
 * @desc   Adds a namespace declaration to a node 
 */
function add_namespace($uri, $prefix) ;

/**
 * @return void
 * @param  SWFAction object
 * @param  flags int
 * @desc   Adds this SWFAction to the given SWFSprite instance 
 */
function addaction($SWFAction, $flags) ;

/**
 * @return void
 * @param  r int
 * @param  g int
 * @param  b int
 * @param  a int[optional]
 * @desc   Sets the add color part of this SWFDisplayItem's CXform to (r, g, b [, a]), a defaults to 0 
 */
function addcolor($r, $g, $b, $a = null) ;

/**
 * @return string
 * @param  str string
 * @param  charlist string
 * @desc   Escapes all chars mentioned in charlist with backslash. It creates octal representations if asked to backslash characters with 8th bit set or with ASCII<32 (except '\n', '\r', '\t' etc...) 
 */
function addcslashes($str, $charlist) ;

/**
 * @return void
 * @param  ratio float
 * @param  r int
 * @param  g int
 * @param  b int
 * @param  a int[optional]
 * @desc   Adds given entry to the gradient 
 */
function addentry($ratio, $r, $g, $b, $a = null) ;

/**
 * @return object
 * @param  arg1 mixed
 * @param  arg2 int
 * @param  b int[optional]
 * @param  a int[optional]
 * @desc   Returns a fill object, for use with swfshape_setleftfill and swfshape_setrightfill. If 1 or 2 parameter(s) is (are) passed first should be object (from gradient class) and the second int (flags). Gradient fill is performed. If 3 or 4 parameters are passed : r, g, b [, a]. Solid fill is performed. 
 */
function addfill($arg1, $arg2, $b = null, $a = null) ;

/**
 * @return void
 * @param  SWFCharacter object
 * @param  flags int
 * @desc   Sets the character to display for the condition described in flags 
 */
function addshape($SWFCharacter, $flags) ;

/**
 * @return string
 * @param  str string
 * @desc   Escapes single quote, double quotes and backslash characters in a string with backslashes 
 */
function addslashes($str) ;

/**
 * @return void
 * @param  str string
 * @desc   Adds the given string to this textfield 
 */
function addstring($str) ;

/**
 * @return void
 * @param  obj object
 * @param  class string
 * @desc   
 */
function aggregate($obj, $class) ;

/**
 * @return void
 * @param  obj object
 * @param  class string
 * @desc   
 */
function aggregate_methods($obj, $class) ;

/**
 * @return void
 * @param  obj object
 * @param  class string
 * @param  method_list array
 * @param  exclude bool[optional]
 * @desc   
 */
function aggregate_methods_by_list($obj, $class, $method_list, $exclude = null) ;

/**
 * @return void
 * @param  obj object
 * @param  class string
 * @param  regexp string
 * @param  exclude bool[optional]
 * @desc   
 */
function aggregate_methods_by_regexp($obj, $class, $regexp, $exclude = null) ;

/**
 * @return void
 * @param  obj object
 * @param  class string
 * @desc   
 */
function aggregate_properties($obj, $class) ;

/**
 * @return void
 * @param  obj object
 * @param  class string
 * @param  props_list array
 * @param  exclude bool[optional]
 * @desc   
 */
function aggregate_properties_by_list($obj, $class, $props_list, $exclude = null) ;

/**
 * @return void
 * @param  obj object
 * @param  class string
 * @param  regexp string
 * @param  exclude bool[optional]
 * @desc   
 */
function aggregate_properties_by_regexp($obj, $class, $regexp, $exclude = null) ;

/**
 * @return array
 * @param  obj object
 * @desc   
 */
function aggregation_info($obj) ;

/**
 * @return void
 * @param  alignment int
 * @desc   Sets the alignment of this textfield 
 */
function align($alignment) ;

/**
 * @return bool
 * @desc   Terminate apache process after this request 
 */
function apache_child_terminate() ;

/**
 * @return array
 * @desc   Get a list of loaded Apache modules 
 */
function apache_get_modules() ;

/**
 * @return string
 * @desc   Fetch Apache version 
 */
function apache_get_version() ;

/**
 * @return bool
 * @param  variable string
 * @param  walk_to_top bool[optional]
 * @desc   Get an Apache subprocess_env variable 
 */
function apache_getenv($variable, $walk_to_top = null) ;

/**
 * @return object
 * @param  URI string
 * @desc   Perform a partial request of the given URI to obtain information about it 
 */
function apache_lookup_uri($URI) ;

/**
 * @return string
 * @param  note_name string
 * @param  note_value string[optional]
 * @desc   Get and set Apache request notes 
 */
function apache_note($note_name, $note_value = null) ;

/**
 * @return array
 * @desc   Get all headers from the request 
 */
function apache_request_headers() ;

/**
 * @return array
 * @desc   Get all headers from the response 
 */
function apache_response_headers() ;

/**
 * @return bool
 * @param  variable string
 * @param  value string
 * @param  walk_to_top bool[optional]
 * @desc   Set an Apache subprocess_env variable 
 */
function apache_setenv($variable, $value, $walk_to_top = null) ;

/**
 * @return bool
 * @param  collection object
 * @param  value
 * @desc   Append an object to the collection 
 */
function append($collection, $value) ;

/**
 * @return object
 * @param  domnode object
 * @desc   Adds node to list of children 
 */
function append_child($domnode) ;

/**
 * @return object
 * @param  domnode object
 * @desc   Adds node to list of siblings 
 */
function append_sibling($domnode) ;

/**
 * @return array
 * @param  input array
 * @param  case int[optional]
 * @desc   Retuns an array with all string keys lowercased [or uppercased] 
 */
function array_change_key_case($input, $case = CASE_LOWER) ;

/**
 * @return array
 * @param  input array
 * @param  size int
 * @param  preserve_keys bool[optional]
 * @desc   Split array into chunks 
 */
function array_chunk($input, $size, $preserve_keys = null) ;

/**
 * @return array
 * @param  input array
 * @desc   Return the value as key and the frequency of that value in input as value 
 */
function array_count_values($input) ;

/**
 * @return array
 * @param  arr1 array
 * @param  arr2 array
 * @vararg ... array
 * @desc   Returns the entries of arr1 that have values which are not present in any of the others arguments 
 */
function array_diff($arr1, $arr2) ;

/**
 * @return array
 * @param  arr1 array
 * @param  arr2 array
 * @vararg ... array
 * @desc   Returns the entries of arr1 that have values which are not present in any of the others arguments but do additional checks whether the keys are equal 
 */
function array_diff_assoc($arr1, $arr2) ;

/**
 * @return array
 * @param  start_key int
 * @param  num int
 * @param  val mixed
 * @desc   Create an array containing num elements starting with index start_key each initialized to val 
 */
function array_fill($start_key, $num, $val) ;

/**
 * @return array
 * @param  input array
 * @param  callback mixed[optional]
 * @desc   Filters elements from the array via the callback. 
 */
function array_filter($input, $callback = null) ;

/**
 * @return array
 * @param  input array
 * @desc   Return array with key <-> value flipped 
 */
function array_flip($input) ;

/**
 * @return array
 * @param  arr1 array
 * @param  arr2 array
 * @vararg ... array
 * @desc   Returns the entries of arr1 that have values which are present in all the other arguments 
 */
function array_intersect($arr1, $arr2) ;

/**
 * @return array
 * @param  arr1 array
 * @param  arr2 array
 * @vararg ... array
 * @desc   Returns the entries of arr1 that have values which are present in all the other arguments. Keys are used to do more restrctive check 
 */
function array_intersect_assoc($arr1, $arr2) ;

/**
 * @return bool
 * @param  key mixed
 * @param  search array
 * @desc   Checks if the given key or index exists in the array 
 */
function array_key_exists($key, $search) ;

/**
 * @return array
 * @param  input array
 * @param  search_value mixed[optional]
 * @desc   Return just the keys from the input array, optionally only for the specified search_value 
 */
function array_keys($input, $search_value = null) ;

/**
 * @return array
 * @param  callback mixed
 * @param  input1 array
 * @param  input2 array[optional]
 * @vararg ...
 * @desc   Applies the callback to the elements in given arrays. 
 */
function array_map($callback, $input1, $input2 = null) ;

/**
 * @return array
 * @param  arr1 array
 * @param  arr2 array
 * @vararg ... array
 * @desc   Merges elements from passed arrays into one array 
 */
function array_merge($arr1, $arr2) ;

/**
 * @return array
 * @param  arr1 array
 * @param  arr2 array
 * @vararg ... array
 * @desc   Recursively merges elements from passed arrays into one array 
 */
function array_merge_recursive($arr1, $arr2) ;

/**
 * @return bool
 * @param  ar1 array
 * @param  SORT_ASC|SORT_DESC[optional]
 * @param  SORT_REGULAR|SORT_NUMERIC|SORT_STRING[optional]
 * @param  ar2 array[optional]
 * @param  SORT_ASC|SORT_DESC[optional]
 * @param  SORT_REGULAR|SORT_NUMERIC|SORT_STRING[optional]
 * @vararg ...
 * @desc   Sort multiple arrays at once similar to how ORDER BY clause works in SQL 
 */
function array_multisort($ar1, $SORT_ASC = null, $SORT_REGULAR = null, $ar2 = null, $SORT_ASC = null, $SORT_REGULAR = null) ;

/**
 * @return array
 * @param  input array
 * @param  pad_size int
 * @param  pad_value mixed
 * @desc   Returns a copy of input array padded with pad_value to size pad_size 
 */
function array_pad($input, $pad_size, $pad_value) ;

/**
 * @return mixed
 * @param  stack array
 * @desc   Pops an element off the end of the array 
 */
function array_pop($stack) ;

/**
 * @return int
 * @param  stack array
 * @param  var mixed
 * @vararg ... mixed
 * @desc   Pushes elements onto the end of the array 
 */
function array_push($stack, $var) ;

/**
 * @return mixed
 * @param  input array
 * @param  num_req int[optional]
 * @desc   Return key/keys for random entry/entries in the array 
 */
function array_rand($input, $num_req = null) ;

/**
 * @return mixed
 * @param  input array
 * @param  callback mixed
 * @param  initial int[optional]
 * @desc   Iteratively reduce the array to a single value via the callback. 
 */
function array_reduce($input, $callback, $initial = null) ;

/**
 * @return array
 * @param  input array
 * @param  preserve_keys bool[optional]
 * @desc   Return input as a new array with the order of the entries reversed 
 */
function array_reverse($input, $preserve_keys = null) ;

/**
 * @return mixed
 * @param  needle mixed
 * @param  haystack array
 * @param  strict bool[optional]
 * @desc   Searches the array for a given value and returns the corresponding key if successful 
 */
function array_search($needle, $haystack, $strict = null) ;

/**
 * @return mixed
 * @param  stack array
 * @desc   Pops an element off the beginning of the array 
 */
function array_shift($stack) ;

/**
 * @return array
 * @param  input array
 * @param  offset int
 * @param  length int[optional]
 * @desc   Returns elements specified by offset and length 
 */
function array_slice($input, $offset, $length = null) ;

/**
 * @return array
 * @param  input array
 * @param  offset int
 * @param  length int[optional]
 * @param  replacement array[optional]
 * @desc   Removes the elements designated by offset and length and replace them with supplied array 
 */
function array_splice($input, $offset, $length = null, $replacement = null) ;

/**
 * @return mixed
 * @param  input array
 * @desc   Returns the sum of the array entries 
 */
function array_sum($input) ;

/**
 * @return array
 * @param  input array
 * @desc   Removes duplicate values from array 
 */
function array_unique($input) ;

/**
 * @return int
 * @param  stack array
 * @param  var mixed
 * @vararg ... mixed
 * @desc   Pushes elements onto the beginning of the array 
 */
function array_unshift($stack, $var) ;

/**
 * @return array
 * @param  input array
 * @desc   Return just the values from the input array 
 */
function array_values($input) ;

/**
 * @return bool
 * @param  input array
 * @param  funcname string
 * @param  userdata mixed[optional]
 * @desc   Apply a user function to every member of an array 
 */
function array_walk($input, $funcname, $userdata = null) ;

/**
 * @return bool
 * @param  array_arg array
 * @param  sort_flags int[optional]
 * @desc   Sort an array in reverse order and maintain index association 
 */
function arsort($array_arg, $sort_flags = null) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the arc sine of the number in radians 
 */
function asin($number) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the inverse hyperbolic sine of the number, i.e. the value whose hyperbolic sine is number 
 */
function asinh($number) ;

/**
 * @return bool
 * @param  array_arg array
 * @param  sort_flags int[optional]
 * @desc   Sort an array and maintain index association 
 */
function asort($array_arg, $sort_flags = null) ;

/**
 * @return int
 * @param  assertion string|bool
 * @desc   Checks if assertion is false 
 */
function assert($assertion) ;

/**
 * @return mixed
 * @param  what int
 * @param  value mixed[optional]
 * @desc   Set/get the various assert flags 
 */
function assert_options($what, $value = null) ;

/**
 * @return bool
 * @param  collection object
 * @param  object
 * @desc   Assign a collection from another existing collection 
 */
function assign($collection, $object) ;

/**
 * @return bool
 * @param  collection object
 * @param  ndx
 * @param  val
 * @desc   Assign element val to collection at index ndx 
 */
function assignelem($collection, $ndx, $val) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the arc tangent of the number in radians 
 */
function atan($number) ;

/**
 * @return float
 * @param  y float
 * @param  x float
 * @desc   Returns the arc tangent of y/x, with the resulting quadrant determined by the signs of y and x 
 */
function atan2($y, $x) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the inverse hyperbolic tangent of the number, i.e. the value whose hyperbolic tangent is number 
 */
function atanh($number) ;

/**
 * @return array
 * @desc   Returns list of attributes of node 
 */
function attributes() ;

/**
 * @return string
 * @param  str string
 * @desc   Decodes string using MIME base64 algorithm 
 */
function base64_decode($str) ;

/**
 * @return string
 * @param  str string
 * @desc   Encodes string using MIME base64 algorithm 
 */
function base64_encode($str) ;

/**
 * @return string
 * @param  number string
 * @param  frombase int
 * @param  tobase int
 * @desc   Converts a number in a string from any base <= 36 to any base <= 36 
 */
function base_convert($number, $frombase, $tobase) ;

/**
 * @return string
 * @param  path string
 * @param  suffix string[optional]
 * @desc   Returns the filename component of the path 
 */
function basename($path, $suffix = null) ;

/**
 * @return string
 * @param  left_operand string
 * @param  right_operand string
 * @param  scale int[optional]
 * @desc   Returns the sum of two arbitrary precision numbers 
 */
function bcadd($left_operand, $right_operand, $scale = null) ;

/**
 * @return int
 * @param  left_operand string
 * @param  right_operand string
 * @param  scale int[optional]
 * @desc   Compares two arbitrary precision numbers 
 */
function bccomp($left_operand, $right_operand, $scale = null) ;

/**
 * @return string
 * @param  left_operand string
 * @param  right_operand string
 * @param  scale int[optional]
 * @desc   Returns the quotient of two arbitrary precision numbers (division) 
 */
function bcdiv($left_operand, $right_operand, $scale = null) ;

/**
 * @return string
 * @param  left_operand string
 * @param  right_operand string
 * @desc   Returns the modulus of the two arbitrary precision operands 
 */
function bcmod($left_operand, $right_operand) ;

/**
 * @return string
 * @param  left_operand string
 * @param  right_operand string
 * @param  scale int[optional]
 * @desc   Returns the multiplication of two arbitrary precision numbers 
 */
function bcmul($left_operand, $right_operand, $scale = null) ;

/**
 * @return string
 * @param  x string
 * @param  y string
 * @param  scale int[optional]
 * @desc   Returns the value of an arbitrary precision number raised to the power of another 
 */
function bcpow($x, $y, $scale = null) ;

/**
 * @return bool
 * @param  scale int
 * @desc   Sets default scale parameter for all bc math functions 
 */
function bcscale($scale) ;

/**
 * @return string
 * @param  operand string
 * @param  scale int[optional]
 * @desc   Returns the square root of an arbitray precision number 
 */
function bcsqrt($operand, $scale = null) ;

/**
 * @return string
 * @param  left_operand string
 * @param  right_operand string
 * @param  scale int[optional]
 * @desc   Returns the difference between two arbitrary precision numbers 
 */
function bcsub($left_operand, $right_operand, $scale = null) ;

/**
 * @return string
 * @param  data string
 * @desc   Converts the binary representation of data to hex 
 */
function bin2hex($data) ;

/**
 * @return string
 * @param  domain string
 * @param  codeset string
 * @desc   Specify the character encoding in which the messages from the DOMAIN message catalog will be returned. 
 */
function bind_textdomain_codeset ($domain, $codeset) ;

/**
 * @return int
 * @param  binary_number string
 * @desc   Returns the decimal equivalent of the binary number 
 */
function bindec($binary_number) ;

/**
 * @return string
 * @param  domain_name string
 * @param  dir string
 * @desc   Bind to the text domain domain_name, looking for translations in dir. Returns the current domain 
 */
function bindtextdomain($domain_name, $dir) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function birdstep_autocommit($index) ;

/**
 * @return bool
 * @param  id int
 * @desc   
 */
function birdstep_close($id) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function birdstep_commit($index) ;

/**
 * @return int
 * @param  server string
 * @param  user string
 * @param  pass string
 * @desc   
 */
function birdstep_connect($server, $user, $pass) ;

/**
 * @return int
 * @param  index int
 * @param  exec_str string
 * @desc   
 */
function birdstep_exec($index, $exec_str) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function birdstep_fetch($index) ;

/**
 * @return string
 * @param  index int
 * @param  col int
 * @desc   
 */
function birdstep_fieldname($index, $col) ;

/**
 * @return int
 * @param  index int
 * @desc   
 */
function birdstep_fieldnum($index) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function birdstep_freeresult($index) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function birdstep_off_autocommit($index) ;

/**
 * @return mixed
 * @param  index int
 * @param  col int
 * @desc   
 */
function birdstep_result($index, $col) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function birdstep_rollback($index) ;

/**
 * @return bool
 * @param  fp resource
 * @desc   Close an open file pointer 
 */
function bzclose($fp) ;

/**
 * @return string
 * @param  source string
 * @param  blocksize100k int[optional]
 * @param  workfactor int[optional]
 * @desc   Compresses a string into BZip2 encoded data 
 */
function bzcompress($source, $blocksize100k = null, $workfactor = null) ;

/**
 * @return string
 * @param  source string
 * @param  small int[optional]
 * @desc   Decompresses BZip2 compressed data 
 */
function bzdecompress($source, $small = null) ;

/**
 * @return int
 * @param  bz resource
 * @desc   Returns the error number 
 */
function bzerrno($bz) ;

/**
 * @return array
 * @param  bz resource
 * @desc   Returns the error number and error string in an associative array 
 */
function bzerror($bz) ;

/**
 * @return string
 * @param  bz resource
 * @desc   Returns the error string 
 */
function bzerrstr($bz) ;

/**
 * @return bool
 * @param  fp resource
 * @desc   Flushes output 
 */
function bzflush($fp) ;

/**
 * @return resource
 * @param  file|fp string|int
 * @param  mode string
 * @desc   Opens a new BZip2 stream 
 */
function bzopen($file, $mode) ;

/**
 * @return string
 * @param  bz int
 * @param  length int
 * @desc   Reads up to length bytes from a BZip2 stream, or 1024 bytes if length is not specified 
 */
function bzread($bz, $length) ;

/**
 * @return int
 * @param  fp resource
 * @param  str string
 * @param  length int[optional]
 * @desc   Binary-safe file write 
 */
function bzwrite($fp, $str, $length = null) ;

/**
 * @return int
 * @param  calendar int
 * @param  month int
 * @param  year int
 * @desc   Returns the number of days in a month for a given year and calendar 
 */
function cal_days_in_month($calendar, $month, $year) ;

/**
 * @return array
 * @param  jd int
 * @param  calendar int
 * @desc   Converts from Julian Day Count to a supported calendar and return extended information 
 */
function cal_from_jd($jd, $calendar) ;

/**
 * @return array
 * @param  calendar int
 * @desc   Returns information about a particular calendar 
 */
function cal_info($calendar) ;

/**
 * @return int
 * @param  calendar int
 * @param  month int
 * @param  day int
 * @param  year int
 * @desc   Converts from a supported calendar to Julian Day Count 
 */
function cal_to_jd($calendar, $month, $day, $year) ;

/**
 * @return mixed
 * @param  function_name string
 * @param  parmeter mixed[optional]
 * @vararg ... mixed
 * @desc   Call a user function which is the first parameter 
 */
function call_user_func($function_name, $parmeter = null) ;

/**
 * @return mixed
 * @param  function_name string
 * @param  parameters array
 * @desc   Call a user function which is the first parameter with the arguments contained in array 
 */
function call_user_func_array($function_name, $parameters) ;

/**
 * @return mixed
 * @param  method_name string
 * @param  object mixed
 * @param  parameter mixed[optional]
 * @vararg ... mixed
 * @desc   Call a user method on a specific object or class 
 */
function call_user_method($method_name, $object, $parameter = null) ;

/**
 * @return mixed
 * @param  method_name string
 * @param  object mixed
 * @param  params array
 * @desc   Call a user method on a specific object or class using a parameter array 
 */
function call_user_method_array($method_name, $object, $params) ;

/**
 * @return bool
 * @param  chunk string
 * @desc   adds a cdata block 
 */
function cdata_section($chunk) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the next highest integer value of the number 
 */
function ceil($number) ;

/**
 * @return bool
 * @param  characters string
 * @desc   Adds characters 
 */
function characters($characters) ;

/**
 * @return bool
 * @param  directory string
 * @desc   Change the current directory 
 */
function chdir($directory) ;

/**
 * @return bool
 * @param  month int
 * @param  day int
 * @param  year int
 * @desc   Returns true(1) if it is a valid date in gregorian calendar 
 */
function checkdate($month, $day, $year) ;

/**
 * @return int
 * @param  host string
 * @param  type string[optional]
 * @desc   Check DNS records corresponding to a given Internet host name or IP address 
 */
function checkdnsrr($host, $type = null) ;

/**
 * @return bool
 * @param  filename string
 * @param  group mixed
 * @desc   Change file group 
 */
function chgrp($filename, $group) ;

/**
 * @return array
 * @desc   Returns list of children nodes 
 */
function child_nodes() ;

/**
 * @return array
 * @desc   Returns list of children nodes 
 */
function children() ;

/**
 * @return bool
 * @param  filename string
 * @param  mode int
 * @desc   Change file mode 
 */
function chmod($filename, $mode) ;

/**
 * @return string
 * @param  str string
 * @param  character_mask string[optional]
 * @desc   Removes trailing whitespace 
 */
function chop($str, $character_mask = null) ;

/**
 * @return bool
 * @param  filename string
 * @param  user mixed
 * @desc   Change file owner 
 */
function chown ($filename, $user) ;

/**
 * @return string
 * @param  ascii int
 * @desc   Converts ASCII code to a character 
 */
function chr($ascii) ;

/**
 * @return bool
 * @param  directory string
 * @desc   Change root directory 
 */
function chroot($directory) ;

/**
 * @return string
 * @param  str string
 * @param  chunklen int[optional]
 * @param  ending string[optional]
 * @desc   Returns split line 
 */
function chunk_split($str, $chunklen = null, $ending = null) ;

/**
 * @return bool
 * @param  classname string
 * @desc   Checks if the class exists 
 */
function class_exists($classname) ;

/**
 * @return void
 * @desc   Clear file stat cache 
 */
function clearstatcache() ;

/**
 * @return object
 * @param  deep bool[optional]
 * @desc   Clones a node 
 */
function clone_node($deep = null) ;

/**
 * @return void
 * @param  dir_handle resource[optional]
 * @desc   Close directory connection identified by the dir_handle 
 */
function close($dir_handle = null) ;


/**
 * @return bool
 * @desc   Close connection to system logger 
 */
function closelog() ;

/**
 * @return mixed
 * @param  module int
 * @desc   Increases the reference counter on a COM object 
 */
function com_addref($module) ;

/**
 * @return bool
 * @param  comobject mixed
 * @param  sinkobject object
 * @param  sinkinterface mixed[optional]
 * @desc   Connect events from a COM object to a PHP object 
 */
function com_event_sink($comobject, $sinkobject, $sinkinterface = null) ;

/**
 * @return mixed
 * @param  module int
 * @param  property_name string
 * @vararg ... mixed
 * @desc   Gets properties from a COM module 
 */
function com_get($module, $property_name) ;

/**
 * @return mixed
 * @param  module int
 * @param  handler_name string
 * @param  arg mixed[optional]
 * @vararg ... mixed
 * @desc   Invokes a COM module 
 */
function com_invoke($module, $handler_name, $arg = null) ;

/**
 * @return mixed
 * @param  module int
 * @param  invokeflags int
 * @param  handler_name string
 * @param  arg mixed[optional]
 * @vararg ... mixed
 * @desc   Invokes a COM module 
 */
function com_invoke_ex($module, $invokeflags, $handler_name, $arg = null) ;

/**
 * @return bool
 * @param  com_module object
 * @desc   Grabs an IEnumVariant 
 */
function com_isenum($com_module) ;

/**
 * @return int
 * @param  module_name string
 * @param  remote_host string[optional]
 * @param  codepage int[optional]
 * @param  typelib string[optional]
 * @desc   Loads a COM module 
 */
function com_load($module_name, $remote_host = null, $codepage = null, $typelib = null) ;

/**
 * @return bool
 * @param  typelib_name string
 * @param  case_insensitive int[optional]
 * @desc   Loads a Typelib 
 */
function com_load_typelib($typelib_name, $case_insensitive = null) ;

/**
 * @return bool
 * @param  timeoutms int[optional]
 * @desc   Process COM messages, sleeping for up to timeoutms milliseconds 
 */
function com_message_pump($timeoutms = null) ;

/**
 * @return bool
 * @param  comobject_|_string_typelib mixed
 * @param  dispinterface string
 * @param  wantsink bool
 * @desc   Print out a PHP class definition for a dispatchable interface 
 */
function com_print_typeinfo($comobject_, $dispinterface, $wantsink) ;

/**
 * @return mixed
 * @param  module int
 * @param  property_name string
 * @vararg ... mixed
 * @desc   Gets properties from a COM module 
 */
function com_propget($module, $property_name) ;

/**
 * @return bool
 * @param  module int
 * @param  property_name string
 * @param  value mixed
 * @vararg ...
 * @desc   Puts the properties for a module 
 */
function com_propput($module, $property_name, $value) ;

/**
 * @return bool
 * @param  module int
 * @param  property_name string
 * @param  value mixed
 * @vararg ...
 * @desc   Puts the properties for a module 
 */
function com_propset($module, $property_name, $value) ;

/**
 * @return mixed
 * @param  module int
 * @desc   Releases a COM object 
 */
function com_release($module) ;

/**
 * @return bool
 * @param  module int
 * @param  property_name string
 * @param  value mixed
 * @vararg ...
 * @desc   Puts the properties for a module 
 */
function com_set($module, $property_name, $value) ;

/**
 * @return bool
 * @param  comment string
 * @desc   Adds a comment 
 */
function comment($comment) ;

/**
 * @return array
 * @param  var_names mixed
 * @vararg ... mixed
 * @desc   Creates a hash containing variables and their values 
 */
function compact($var_names) ;

/**
 * @return string
 * @param  arg string
 * @desc   Return a string to confirm that the module is compiled in 
 */
function confirm_extname_compiled($arg) ;

/**
 * @return int
 * @desc   Returns true if client disconnected 
 */
function connection_aborted() ;

/**
 * @return int
 * @desc   Returns the connection status bitfield 
 */
function connection_status() ;

/**
 * @return mixed
 * @param  const_name string
 * @desc   Given the name of a constant this function will return the constants associated value 
 */
function constant($const_name) ;

/**
 * @return string
 * @param  str string
 * @param  from string
 * @param  to string
 * @desc   Convert from one Cyrillic character set to another 
 */
function convert_cyr_string($str, $from, $to) ;

/**
 * @return bool
 * @param  source_file string
 * @param  destination_file string
 * @desc   Copy a file 
 */
function copy($source_file, $destination_file) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the cosine of the number in radians 
 */
function cos($number) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the hyperbolic cosine of the number, defined as (exp(number) + exp(-number))/2 
 */
function cosh($number) ;

/**
 * @return int
 * @param  var mixed
 * @param  mode int[optional]
 * @desc   Count the number of elements in a variable (usually an array) 
 */
function count($var, $mode = null) ;

/**
 * @return mixed
 * @param  input string
 * @param  mode int[optional]
 * @desc   Returns info about what characters are used in input 
 */
function count_chars($input, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  xll float
 * @param  yll float
 * @param  xur float
 * @param  xur float
 * @param  title string
 * @param  text string
 * @param  mode int[optional]
 * @desc   Sets annotation 
 */
function cpdf_add_annotation($pdfdoc, $xll, $yll, $xur, $xur, $title, $text, $mode = null) ;

/**
 * @return int
 * @param  pdfdoc int
 * @param  lastoutline int
 * @param  sublevel int
 * @param  open int
 * @param  pagenr int
 * @param  title string
 * @desc   Adds outline 
 */
function cpdf_add_outline($pdfdoc, $lastoutline, $sublevel, $open, $pagenr, $title) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  radius float
 * @param  start float
 * @param  end float
 * @param  mode int[optional]
 * @desc   Draws an arc 
 */
function cpdf_arc($pdfdoc, $x, $y, $radius, $start, $end, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Starts text section 
 */
function cpdf_begin_text($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  radius float
 * @param  mode int[optional]
 * @desc   Draws a circle 
 */
function cpdf_circle($pdfdoc, $x, $y, $radius, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Clips to current path 
 */
function cpdf_clip($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Closes the pdf document 
 */
function cpdf_close($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Close path 
 */
function cpdf_closepath($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Close, fill and stroke current path 
 */
function cpdf_closepath_fill_stroke($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Close path and draw line along path 
 */
function cpdf_closepath_stroke($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  text string
 * @desc   Outputs text in next line 
 */
function cpdf_continue_text($pdfdoc, $text) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x1 float
 * @param  y1 float
 * @param  x2 float
 * @param  y2 float
 * @param  x3 float
 * @param  y3 float
 * @param  mode int[optional]
 * @desc   Draws a curve 
 */
function cpdf_curveto($pdfdoc, $x1, $y1, $x2, $y2, $x3, $y3, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Ends text section 
 */
function cpdf_end_text($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Fills current path 
 */
function cpdf_fill($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Fills and stroke current path 
 */
function cpdf_fill_stroke($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Creates PDF doc in memory 
 */
function cpdf_finalize($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  pagenr int
 * @desc   Ends the page to save memory 
 */
function cpdf_finalize_page($pdfdoc, $pagenr) ;

/**
 * @return bool
 * @param  maxPages int
 * @param  maxFonts int
 * @param  maxImages int
 * @param  maxAnnots int
 * @param  maxObjects int
 * @desc   Sets document settings for all documents 
 */
function cpdf_global_set_document_limits($maxPages, $maxFonts, $maxImages, $maxAnnots, $maxObjects) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  filename string
 * @param  x float
 * @param  y float
 * @param  angle float
 * @param  width float
 * @param  height float
 * @param  x_scale float
 * @param  y_scale float
 * @param  gsave int
 * @param  mode int[optional]
 * @desc   Includes JPEG image 
 */
function cpdf_import_jpeg($pdfdoc, $filename, $x, $y, $angle, $width, $height, $x_scale, $y_scale, $gsave, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  mode int[optional]
 * @desc   Draws a line 
 */
function cpdf_lineto($pdfdoc, $x, $y, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  mode int[optional]
 * @desc   Sets current point 
 */
function cpdf_moveto($pdfdoc, $x, $y, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Starts new path 
 */
function cpdf_newpath($pdfdoc) ;

/**
 * @return int
 * @param  compression int
 * @param  filename string[optional]
 * @param  doc_limits array[optional]
 * @desc   Opens a new pdf document 
 */
function cpdf_open($compression, $filename = null, $doc_limits = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Returns the internal memory stream as string 
 */
function cpdf_output_buffer($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  pagenr int
 * @param  orientation int
 * @param  height int
 * @param  width int
 * @param  unit float[optional]
 * @desc   Starts page 
 */
function cpdf_page_init($pdfdoc, $pagenr, $orientation, $height, $width, $unit = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  gdimage int
 * @param  x float
 * @param  y float
 * @param  angle float
 * @param  width fload
 * @param  height float
 * @param  gsave int
 * @param  mode int[optional]
 * @desc   Includes image 
 */
function cpdf_place_inline_image($pdfdoc, $gdimage, $x, $y, $angle, $width, $height, $gsave, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  width float
 * @param  height float
 * @param  mode int[optional]
 * @desc   Draws a rectangle 
 */
function cpdf_rect($pdfdoc, $x, $y, $width, $height, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Restores formerly saved enviroment 
 */
function cpdf_restore($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  mode int[optional]
 * @desc   Draws a line relative to current point 
 */
function cpdf_rlineto($pdfdoc, $x, $y, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  mode int[optional]
 * @desc   Sets current point 
 */
function cpdf_rmoveto($pdfdoc, $x, $y, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  angle float
 * @desc   Sets rotation 
 */
function cpdf_rotate($pdfdoc, $angle) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  angle float
 * @desc   Sets text rotation angle 
 */
function cpdf_rotate_text($pdfdoc, $angle) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Saves current enviroment 
 */
function cpdf_save($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  filename string
 * @desc   Saves the internal memory stream to a file 
 */
function cpdf_save_to_file($pdfdoc, $filename) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x_scale float
 * @param  y_scale float
 * @desc   Sets scaling 
 */
function cpdf_scale($pdfdoc, $x_scale, $y_scale) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  xll float
 * @param  yll float
 * @param  xur float
 * @param  xur float
 * @param  url string
 * @param  mode int[optional]
 * @desc   Sets hyperlink 
 */
function cpdf_set_action_url($pdfdoc, $xll, $yll, $xur, $xur, $url, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  space float
 * @desc   Sets character spacing 
 */
function cpdf_set_char_spacing($pdfdoc, $space) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  creator string
 * @desc   Sets the creator field 
 */
function cpdf_set_creator($pdfdoc, $creator) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  pagenr int
 * @desc   Sets page for output 
 */
function cpdf_set_current_page($pdfdoc, $pagenr) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  font string
 * @param  size float
 * @param  encoding string
 * @desc   Selects the current font face, size and encoding 
 */
function cpdf_set_font($pdfdoc, $font, $size, $encoding) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  pfmdir string
 * @param  pfbdir string
 * @desc   Sets directories to search when using external fonts 
 */
function cpdf_set_font_directories($pdfdoc, $pfmdir, $pfbdir) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  filename string
 * @desc   Sets fontname to filename translation map when using external fonts 
 */
function cpdf_set_font_map_file($pdfdoc, $filename) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  scale float
 * @desc   Sets horizontal scaling of text 
 */
function cpdf_set_horiz_scaling($pdfdoc, $scale) ;

/**
 * @return bool
 * @param  pdfptr int
 * @param  keywords string
 * @desc   Fills the keywords field of the info structure 
 */
function cpdf_set_keywords($pdfptr, $keywords) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  distance float
 * @desc   Sets distance between text lines 
 */
function cpdf_set_leading($pdfdoc, $distance) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  transition int
 * @param  duration float
 * @param  direction float
 * @param  orientation int
 * @param  inout int
 * @desc   Sets transition between pages 
 */
function cpdf_set_page_animation($pdfdoc, $transition, $duration, $direction, $orientation, $inout) ;

/**
 * @return bool
 * @param  pdfptr int
 * @param  subject string
 * @desc   Fills the subject field of the info structure 
 */
function cpdf_set_subject($pdfptr, $subject) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  matrix arry
 * @desc   Sets the text matrix 
 */
function cpdf_set_text_matrix($pdfdoc, $matrix) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  mode int[optional]
 * @desc   Sets the position of text for the next cpdf_show call 
 */
function cpdf_set_text_pos($pdfdoc, $x, $y, $mode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  rendermode int
 * @desc   Determines how text is rendered 
 */
function cpdf_set_text_rendering($pdfdoc, $rendermode) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets the text rise 
 */
function cpdf_set_text_rise($pdfdoc, $value) ;

/**
 * @return bool
 * @param  pdfptr int
 * @param  title string
 * @desc   Fills the title field of the info structure 
 */
function cpdf_set_title($pdfptr, $title) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  preferences array
 * @desc   How to show the document in the viewer 
 */
function cpdf_set_viewer_preferences($pdfdoc, $preferences) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  space float
 * @desc   Sets spacing between words 
 */
function cpdf_set_word_spacing($pdfdoc, $space) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  white long
 * @param  black long
 * @desc   Sets dash pattern 
 */
function cpdf_setdash($pdfdoc, $white, $black) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets flatness 
 */
function cpdf_setflat($pdfdoc, $value) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets drawing and filling color to gray value 
 */
function cpdf_setgray($pdfdoc, $value) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets filling color to gray value 
 */
function cpdf_setgray_fill($pdfdoc, $value) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets drawing color to gray value 
 */
function cpdf_setgray_stroke($pdfdoc, $value) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  value int
 * @desc   Sets linecap parameter 
 */
function cpdf_setlinecap($pdfdoc, $value) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  value int
 * @desc   Sets linejoin parameter 
 */
function cpdf_setlinejoin($pdfdoc, $value) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  width float
 * @desc   Sets line width 
 */
function cpdf_setlinewidth($pdfdoc, $width) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets miter limit 
 */
function cpdf_setmiterlimit($pdfdoc, $value) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  red float
 * @param  green float
 * @param  blue float
 * @desc   Sets drawing and filling color to RGB color value 
 */
function cpdf_setrgbcolor($pdfdoc, $red, $green, $blue) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  red float
 * @param  green float
 * @param  blue float
 * @desc   Sets filling color to rgb color value 
 */
function cpdf_setrgbcolor_fill($pdfdoc, $red, $green, $blue) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  red float
 * @param  green float
 * @param  blue float
 * @desc   Sets drawing color to RGB color value 
 */
function cpdf_setrgbcolor_stroke($pdfdoc, $red, $green, $blue) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  text string
 * @desc   Output text at current position 
 */
function cpdf_show($pdfdoc, $text) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  text string
 * @param  x_koor float
 * @param  y_koor float
 * @param  mode int[optional]
 * @desc   Output text at position 
 */
function cpdf_show_xy($pdfdoc, $text, $x_koor, $y_koor, $mode = null) ;

/**
 * @return float
 * @param  pdfdoc int
 * @param  text string
 * @desc   Returns width of text in current font 
 */
function cpdf_stringwidth($pdfdoc, $text) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Draws line along path path 
 */
function cpdf_stroke($pdfdoc) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  text string
 * @param  x_koor float[optional]
 * @param  y_koor float
 * @param  mode int[optional]
 * @param  orientation float[optional]
 * @param  alignmode int[optional]
 * @desc   Outputs text 
 */
function cpdf_text($pdfdoc, $text, $x_koor = null, $y_koor, $mode = null, $orientation = null, $alignmode = null) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @desc   Sets origin of coordinate system 
 */
function cpdf_translate($pdfdoc, $x, $y) ;

/**
 * @return bool
 * @param  dictionary resource[optional]
 * @param  password string
 * @desc   Performs an obscure check with the given password 
 */
function crack_check($dictionary = null, $password) ;

/**
 * @return bool
 * @param  dictionary resource[optional]
 * @desc   Closes an open cracklib dictionary 
 */
function crack_closedict($dictionary = null) ;

/**
 * @return string
 * @desc   Returns the message from the last obscure check 
 */
function crack_getlastmessage() ;

/**
 * @return resource
 * @param  dictionary string
 * @desc   Opens a new cracklib dictionary 
 */
function crack_opendict($dictionary) ;

/**
 * @return string
 * @param  str string
 * @desc   Calculate the crc32 polynomial of a string 
 */
function crc32($str) ;

/**
 * @return object
 * @param  name string
 * @param  value string
 * @desc   Creates new attribute node 
 */
function create_attribute($name, $value) ;

/**
 * @return object
 * @param  content string
 * @desc   Creates new cdata node 
 */
function create_cdata_section($content) ;

/**
 * @return object
 * @param  content string
 * @desc   Creates new comment node 
 */
function create_comment($content) ;

/**
 * @return object
 * @param  name string
 * @desc   Creates new element node 
 */
function create_element($name) ;

/**
 * @return object
 * @param  uri string
 * @param  name string
 * @param  prefix string[optional]
 * @desc   Creates new element node with a namespace 
 */
function create_element_ns($uri, $name, $prefix = null) ;

/**
 * @return object
 * @param  name string
 * @desc   Creates new cdata node 
 */
function create_entity_reference($name) ;

/**
 * @return string
 * @param  args string
 * @param  code string
 * @desc   Creates an anonymous function, and returns its name (funny, eh?) 
 */
function create_function($args, $code) ;

/**
 * @return object
 * @param  name string
 * @desc   Creates new processing_instruction node 
 */
function create_processing_instruction($name) ;

/**
 * @return object
 * @param  content string
 * @desc   Creates new text node 
 */
function create_text_node($content) ;

/**
 * @return string
 * @param  str string
 * @param  salt string[optional]
 * @desc   Encrypt a string 
 */
function crypt($str, $salt = null) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for alphanumeric character(s) 
 */
function ctype_alnum($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for alphabetic character(s) 
 */
function ctype_alpha($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for control character(s) 
 */
function ctype_cntrl($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for numeric character(s) 
 */
function ctype_digit($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for any printable character(s) except space 
 */
function ctype_graph($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for lowercase character(s)  
 */
function ctype_lower($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for printable character(s) 
 */
function ctype_print($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for any printable character which is not whitespace or an alphanumeric character 
 */
function ctype_punct($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for whitespace character(s)
 */
function ctype_space($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for uppercase character(s) 
 */
function ctype_upper($c) ;

/**
 * @return bool
 * @param  c mixed
 * @desc   Checks for character(s) representing a hexadecimal digit 
 */
function ctype_xdigit($c) ;

/**
 * @return void
 * @param  ch resource
 * @desc   Close a CURL session 
 */
function curl_close($ch) ;

/**
 * @return int
 * @param  ch resource
 * @desc   Return an integer containing the last error number 
 */
function curl_errno($ch) ;

/**
 * @return string
 * @param  ch resource
 * @desc   Return a string contain the last error for the current session 
 */
function curl_error($ch) ;

/**
 * @return bool
 * @param  ch resource
 * @desc   Perform a CURL session 
 */
function curl_exec($ch) ;

/**
 * @return mixed
 * @param  ch resource
 * @param  opt int
 * @desc   Get information regarding a specific transfer 
 */
function curl_getinfo($ch, $opt) ;

/**
 * @return resource
 * @param  url string[optional]
 * @desc   Initialize a CURL session 
 */
function curl_init($url = null) ;

/**
 * @return bool
 * @param  ch resource
 * @param  option string
 * @param  value mixed
 * @desc   Set an option for a CURL transfer 
 */
function curl_setopt($ch, $option, $value) ;

/**
 * @return string
 * @desc   Return cURL version information. 
 */
function curl_version() ;

/**
 * @return mixed
 * @param  array_arg array
 * @desc   Return the element currently pointed to by the internal array pointer 
 */
function current($array_arg) ;

/**
 * @return void
 * @param  connection resource
 * @param  mechlist string[optional]
 * @param  service string[optional]
 * @param  user string[optional]
 * @param  minssf int[optional]
 * @param  maxssf int[optional]
 * @desc   Authenticate agaings a Cyrus IMAP server 
 */
function cyrus_authenticate($connection, $mechlist = null, $service = null, $user = null, $minssf = null, $maxssf = null) ;

/**
 * @return bool
 * @param  connection resource
 * @param  callbacks array
 * @desc   Bind callbacks to a Cyrus IMAP connection 
 */
function cyrus_bind($connection, $callbacks) ;

/**
 * @return bool
 * @param  connection resource
 * @desc   Close connection to a cyrus server 
 */
function cyrus_close($connection) ;

/**
 * @return resource
 * @param  host string[optional]
 * @param  port string[optional]
 * @param  flags int[optional]
 * @desc   Connect to a Cyrus IMAP server 
 */
function cyrus_connect($host = null, $port = null, $flags = null) ;

/**
 * @return bool
 * @param  connection resource
 * @param  query string
 * @desc   Send a query to a Cyrus IMAP server 
 */
function cyrus_query($connection, $query) ;

/**
 * @return bool
 * @param  connection resource
 * @param  trigger_name string
 * @desc   Unbind ... 
 */
function cyrus_unbind($connection, $trigger_name) ;

/**
 * @return array
 * @desc   Returns data of pi 
 */
function data() ;

/**
 * @return string
 * @param  format string
 * @param  timestamp int[optional]
 * @desc   Format a local time/date 
 */
function date($format, $timestamp = null) ;

/**
 * @return void
 * @param  handle resource
 * @desc   Closes database 
 */
function dba_close($handle) ;

/**
 * @return bool
 * @param  key string
 * @param  handle int
 * @desc   
 */
function dba_delete($key, $handle) ;

/**
 * @return bool
 * @param  key string
 * @param  handle int
 * @desc   Checks, if the specified key exists 
 */
function dba_exists($key, $handle) ;

/**
 * @return string
 * @param  key string
 * @param  skip int[optional]
 * @param  int_handle ]
 * @desc   Fetches the data associated with key 
 */
function dba_fetch($key, $skip = null, $int_handle) ;

/**
 * @return string
 * @param  handle int
 * @desc   Resets the internal key pointer and returns the first key 
 */
function dba_firstkey($handle) ;

/**
 * @return array
 * @param  full_info bool[optional]
 * @desc   List configured database handlers 
 */
function dba_handlers($full_info = null) ;

/**
 * @return bool
 * @param  key string
 * @param  value string
 * @param  handle int
 * @desc   
 */
function dba_insert($key, $value, $handle) ;

/**
 * @return array
 * @desc   List opened databases 
 */
function dba_list() ;

/**
 * @return string
 * @param  handle int
 * @desc   Returns the next key 
 */
function dba_nextkey($handle) ;

/**
 * @return resource
 * @param  path string
 * @param  mode string
 * @param  handlername string[optional]
 * @vararg ... string
 * @desc   Opens path using the specified handler in mode
 */
function dba_open($path, $mode, $handlername = null) ;

/**
 * @return bool
 * @param  handle int
 * @desc   Optimizes (e.g. clean up, vacuum) database 
 */
function dba_optimize($handle) ;

/**
 * @return resource
 * @param  path string
 * @param  mode string
 * @param  handlername string[optional]
 * @vararg ... string
 * @desc   Opens path using the specified handler in mode persistently 
 */
function dba_popen($path, $mode, $handlername = null) ;

/**
 * @return bool
 * @param  key string
 * @param  value string
 * @param  handle int
 * @desc   
 */
function dba_replace($key, $value, $handle) ;

/**
 * @return bool
 * @param  handle int
 * @desc   Synchronizes database 
 */
function dba_sync($handle) ;

/**
 * @return bool
 * @param  identifier int
 * @param  data array
 * @desc   Adds a record to the database 
 */
function dbase_add_record($identifier, $data) ;

/**
 * @return bool
 * @param  identifier int
 * @desc   Closes an open dBase-format database file 
 */
function dbase_close($identifier) ;

/**
 * @return bool
 * @param  filename string
 * @param  fields array
 * @desc   Creates a new dBase-format database file 
 */
function dbase_create($filename, $fields) ;

/**
 * @return bool
 * @param  identifier int
 * @param  record int
 * @desc   Marks a record to be deleted 
 */
function dbase_delete_record($identifier, $record) ;

/**
 * @return array
 * @param  identifier int
 * @param  record int
 * @desc   Returns an array representing a record from the database 
 */
function dbase_get_record($identifier, $record) ;

/**
 * @return array
 * @param  identifier int
 * @param  record int
 * @desc   Returns an associative array representing a record from the database 
 */
function dbase_get_record_with_names($identifier, $record) ;

/**
 * @return int
 * @param  identifier int
 * @desc   Returns the number of fields (columns) in the database 
 */
function dbase_numfields($identifier) ;

/**
 * @return int
 * @param  identifier int
 * @desc   Returns the number of records in the database 
 */
function dbase_numrecords($identifier) ;

/**
 * @return int
 * @param  name string
 * @param  mode int
 * @desc   Opens a dBase-format database file 
 */
function dbase_open($name, $mode) ;

/**
 * @return bool
 * @param  identifier int
 * @desc   Packs the database (deletes records marked for deletion) 
 */
function dbase_pack($identifier) ;

/**
 * @return bool
 * @param  identifier int
 * @param  data array
 * @param  recnum int
 * @desc   Replaces a record to the database 
 */
function dbase_replace_record($identifier, $data, $recnum) ;

/**
 * @return string
 * @desc   Describes the dbm-compatible library being used 
 */
function dblist() ;

/**
 * @return bool
 * @param  dbm_identifier int
 * @desc   Closes a dbm database 
 */
function dbmclose($dbm_identifier) ;

/**
 * @return int
 * @param  dbm_identifier int
 * @param  key string
 * @desc   Deletes the value for a key from a dbm database 
 */
function dbmdelete($dbm_identifier, $key) ;

/**
 * @return int
 * @param  dbm_identifier int
 * @param  key string
 * @desc   Tells if a value exists for a key in a dbm database 
 */
function dbmexists($dbm_identifier, $key) ;

/**
 * @return string
 * @param  dbm_identifier int
 * @param  key string
 * @desc   Fetches a value for a key from a dbm database 
 */
function dbmfetch($dbm_identifier, $key) ;

/**
 * @return string
 * @param  dbm_identifier int
 * @desc   Retrieves the first key from a dbm database 
 */
function dbmfirstkey($dbm_identifier) ;

/**
 * @return int
 * @param  dbm_identifier int
 * @param  key string
 * @param  value string
 * @desc   Inserts a value for a key in a dbm database 
 */
function dbminsert($dbm_identifier, $key, $value) ;

/**
 * @return string
 * @param  dbm_identifier int
 * @param  key string
 * @desc   Retrieves the next key from a dbm database 
 */
function dbmnextkey($dbm_identifier, $key) ;

/**
 * @return int
 * @param  filename string
 * @param  mode string
 * @desc   Opens a dbm database 
 */
function dbmopen($filename, $mode) ;

/**
 * @return int
 * @param  dbm_identifier int
 * @param  key string
 * @param  value string
 * @desc   Replaces the value for a key in a dbm database 
 */
function dbmreplace($dbm_identifier, $key, $value) ;

/**
 * @return bool
 * @param  dbx_link dbx_link_object
 * @desc   
 */
function dbx_close($dbx_link) ;

/**
 * @return int
 * @param  row_x array
 * @param  row_y array
 * @param  columnname string
 * @param  flags int[optional]
 * @desc   Returns row_y[columnname] - row_x[columnname], converted to -1, 0 or 1 
 */
function dbx_compare($row_x, $row_y, $columnname, $flags = null) ;

/**
 * @return dbx_link_object
 * @param  module_name string
 * @param  host string
 * @param  db string
 * @param  username string
 * @param  password string
 * @param  persistent bool[optional]
 * @desc   Returns a dbx_link_object on success and returns 0 on failure 
 */
function dbx_connect($module_name, $host, $db, $username, $password, $persistent = null) ;

/**
 * @return void
 * @param  dbx_link dbx_link_object
 * @desc   
 */
function dbx_error($dbx_link) ;

/**
 * @return string
 * @param  dbx_link dbx_link_object
 * @param  sz string
 * @desc   
 */
function dbx_esc($dbx_link, $sz) ;

/**
 * @return dbx_result_object
 * @param  dbx_link dbx_link_object
 * @param  sql_statement string
 * @param  flags long[optional]
 * @desc   Returns a dbx_link_object on success and returns 0 on failure 
 */
function dbx_query($dbx_link, $sql_statement, $flags = null) ;

/**
 * @return int
 * @param  dbx_result object
 * @param  compare_function_name string
 * @desc   Returns 0 on failure, 1 on success 
 */
function dbx_sort($dbx_result, $compare_function_name) ;

/**
 * @return string
 * @param  domain_name string
 * @param  msgid string
 * @param  category long
 * @desc   Return the translation of msgid for domain_name and category, or msgid unaltered if a translation does not exist 
 */
function dcgettext($domain_name, $msgid, $category) ;

/**
 * @return string
 * @param  domain string
 * @param  msgid1 string
 * @param  msgid2 string
 * @param  n int
 * @param  category int
 * @desc   Plural version of dcgettext() 
 */
function dcngettext ($domain, $msgid1, $msgid2, $n, $category) ;

/**
 * @return void
 * @param  obj object
 * @param  class string[optional]
 * @desc   
 */
function deaggregate($obj, $class = null) ;

/**
 * @return void
 * @desc   Prints out a backtrace 
 */
function debug_backtrace() ;

/**
 * @return void
 * @param  var mixed
 * @desc   Dumps a string representation of an internal zend value to output. 
 */
function debug_zval_dump($var) ;

/**
 * @return string
 * @param  decimal_number int
 * @desc   Returns a string containing a binary representation of the number 
 */
function decbin($decimal_number) ;

/**
 * @return string
 * @param  decimal_number int
 * @desc   Returns a string containing a hexadecimal representation of the given number 
 */
function dechex($decimal_number) ;

/**
 * @return string
 * @param  decimal_number int
 * @desc   Returns a string containing an octal representation of the given number 
 */
function decoct($decimal_number) ;

/**
 * @return bool
 * @param  constant_name string
 * @param  value mixed
 * @param  case_sensitive=true
 * @desc   Define a new constant 
 */
function define($constant_name, $value, $case_sensitive=true) ;

/**
 * @return void
 * @desc   Initializes all syslog-related variables 
 */
function define_syslog_variables() ;

/**
 * @return bool
 * @param  constant_name string
 * @desc   Check whether a constant exists 
 */
function defined($constant_name) ;

/**
 * @return float
 * @param  number float
 * @desc   Converts the number in degrees to the radian equivalent 
 */
function deg2rad($number) ;

/**
 * @return string
 * @param  domain_name string
 * @param  msgid string
 * @desc   Return the translation of msgid for domain_name, or msgid unaltered if a translation does not exist 
 */
function dgettext($domain_name, $msgid) ;

/**
 * @return void
 * @param  fd resource
 * @desc   Close the file descriptor given by fd 
 */
function dio_close($fd) ;

/**
 * @return mixed
 * @param  fd resource
 * @param  cmd int
 * @param  arg mixed
 * @desc   Perform a c library fcntl on fd 
 */
function dio_fcntl($fd, $cmd, $arg) ;

/**
 * @return resource
 * @param  filename string
 * @param  flags int
 * @param  mode int
 * @desc   Open a new filename with specified permissions of flags and creation permissions of mode 
 */
function dio_open($filename, $flags, $mode) ;

/**
 * @return string
 * @param  fd resource
 * @param  n int
 * @desc   Read n bytes from fd and return them, if n is not specified, read 1k 
 */
function dio_read($fd, $n) ;

/**
 * @return int
 * @param  fd resource
 * @param  pos int
 * @param  whence int
 * @desc   Seek to pos on fd from whence 
 */
function dio_seek($fd, $pos, $whence) ;

/**
 * @return array
 * @param  fd resource
 * @desc   Get stat information about the file descriptor fd 
 */
function dio_stat($fd) ;

/**
 * @return mixed
 * @param  fd resource
 * @param  args array
 * @desc   Perform a c library tcsetattr on fd 
 */
function dio_tcsetattr($fd, $args) ;

/**
 * @return bool
 * @param  fd resource
 * @param  offset int
 * @desc   Truncate file descriptor fd to offset bytes 
 */
function dio_truncate($fd, $offset) ;

/**
 * @return int
 * @param  fd resource
 * @param  data string
 * @param  len int
 * @desc   Write data to fd with optional truncation at length 
 */
function dio_write($fd, $data, $len) ;

/**
 * @return object
 * @param  directory string
 * @desc   Directory class with properties, handle and class and methods read, rewind and close 
 */
function dir($directory) ;

/**
 * @return string
 * @param  path string
 * @desc   Returns the directory name component of the path 
 */
function dirname($path) ;

/**
 * @return float
 * @param  path string
 * @desc   Get free disk space for filesystem that path is on 
 */
function disk_free_space($path) ;

/**
 * @return float
 * @param  path string
 * @desc   Get total disk space for filesystem that path is on 
 */
function disk_total_space($path) ;

/**
 * @return float
 * @param  path string
 * @desc   Get free disk space for filesystem that path is on 
 */
function diskfreespace($path) ;

/**
 * @return int
 * @param  extension_filename string
 * @desc   Load a PHP extension at runtime 
 */
function dl($extension_filename) ;

/**
 * @return string
 * @param  domain string
 * @param  msgid1 string
 * @param  msgid2 string
 * @param  count int
 * @desc   Plural version of dgettext() 
 */
function dngettext ($domain, $msgid1, $msgid2, $count) ;

/**
 * @return object
 * @desc   Returns DomDocumentType 
 */
function doctype() ;

/**
 * @return object
 * @param  domnode int
 * @desc   Returns root node of document 
 */
function document_element($domnode) ;

/**
 * @return object
 * @param  name string
 * @param  value string
 * @desc   Creates new attribute node 
 */
function domattribute($name, $value) ;

/**
 * @return object
 * @param  content string
 * @desc   Creates new cdata node 
 */
function domcdata($content) ;

/**
 * @return object
 * @param  content string
 * @desc   Creates new comment node 
 */
function domcomment($content) ;

/**
 * @return object
 * @param  xmldoc string
 * @param  mode int
 * @param  error array
 * @desc   Creates DOM object of XML document 
 */
function domdocument($xmldoc, $mode, $error) ;

/**
 * @return object
 * @param  name string
 * @desc   Creates new element node 
 */
function domelement($name) ;

/**
 * @return object
 * @param  name string
 * @desc   Creates new cdata node 
 */
function domentityreference($name) ;

/**
 * @return object
 * @param  name string
 * @desc   Creates node 
 */
function domnode($name) ;

/**
 * @return object
 * @param  name string
 * @desc   Creates new processing_instruction node 
 */
function domprocessinginstruction($name) ;

/**
 * @return object
 * @param  content string
 * @desc   Creates new text node 
 */
function domtext($content) ;

/**
 * @return object
 * @param  name string
 * @desc   Adds root node to document 
 */
function domxml_add_root($name) ;


/**
 * @return bool
 * @param  content string
 * @desc   Set value of attribute 
 */
function domxml_attr_set_value($content) ;



/**
 * @return array
 * @desc   Returns list of attributes of node 
 */
function domxml_attributes() ;


/**
 * @return array
 * @desc   Returns list of children nodes 
 */
function domxml_children() ;















/**
 * @return object
 * @param  domnode int
 * @desc   Returns root node of document 
 */
function domxml_doc_get_root($domnode) ;











/**
 * @return object
 * @desc   Returns DTD of document 
 */
function domxml_dtd() ;




/**
 * @return string
 * @param  doc_handle object
 * @param  format int[optional]
 * @param  encoding[optional]
 * @desc   Dumps document into string and optionally formats it 
 */
function domxml_dumpmem($doc_handle, $format = null, $encoding = null) ;









/**
 * @return object
 * @param  name string
 * @desc   Constructor of DomElement 
 */
function domxml_element($name) ;

/**
 * @return string
 * @param  attrname string
 * @desc   Returns value of given attribute 
 */
function domxml_get_attribute($attrname) ;

/**
 * @return string
 * @param  attrname string
 * @desc   Returns value of given attribute 
 */
function domxml_getattr($attrname) ;



/**
 * @return object
 * @param  name string
 * @param  content string
 * @desc   Adds child node to parent node 
 */
function domxml_new_child($name, $content) ;

/**
 * @return object
 * @param  version string
 * @desc   Creates new xmldoc 
 */
function domxml_new_doc($version) ;

/**
 * @return object
 * @param  version string
 * @desc   Creates new xmldoc 
 */
function domxml_new_xmldoc($version) ;

































/**
 * @return object
 * @param  filename string
 * @param  mode int
 * @param  error array
 * @desc   Creates DOM object of XML document in file 
 */
function domxml_open_file($filename, $mode, $error) ;

/**
 * @return object
 * @param  xmldoc string
 * @param  mode int
 * @param  error array
 * @desc   Creates DOM object of XML document 
 */
function domxml_open_mem($xmldoc, $mode, $error) ;

/**
 * @return object
 * @param  buf string[optional]
 * @param  filename string
 * @desc   Creates new xmlparser 
 */
function domxml_parser($buf = null, $filename) ;

















/**
 * @return object
 * @param  domnode int
 * @desc   Returns root node of document 
 */
function domxml_root($domnode) ;

/**
 * @return bool
 * @param  attrname string
 * @param  value string
 * @desc   Sets value of given attribute 
 */
function domxml_set_attribute($attrname, $value) ;

/**
 * @return bool
 * @param  domnode int
 * @desc   Sets root node of document 
 */
function domxml_set_root($domnode) ;

/**
 * @return bool
 * @param  attrname string
 * @param  value string
 * @desc   Sets value of given attribute 
 */
function domxml_setattr($attrname, $value) ;

/**
 * @return bool
 * @param  enable bool
 * @desc   Set and return the previous value for default entity support 
 */
function domxml_substitute_entities_default($enable) ;

/**
 * @return int
 * @param  id int
 * @desc   Unity function for testing 
 */
function domxml_test($id) ;

/**
 * @return void
 * @param  node object[optional]
 * @desc   Deletes the node from tree, but not from memory
 */
function domxml_unlink_node($node = null) ;

/**
 * @return string
 * @desc   Get XML library version 
 */
function domxml_version() ;

/**
 * @return object
 * @param  xmltree string
 * @desc   Creates a tree of PHP objects from an XML document 
 */
function domxml_xmltree($xmltree) ;




/**
 * @return object
 * @param  xsltstylesheet string
 * @desc   Creates XSLT Stylesheet object from string 
 */
function domxml_xslt_stylesheet($xsltstylesheet) ;

/**
 * @return object
 * @param  xmldoc object
 * @desc   Creates XSLT Stylesheet object from DOM Document object 
 */
function domxml_xslt_stylesheet_doc($xmldoc) ;

/**
 * @return object
 * @param  filename string
 * @desc   Creates XSLT Stylesheet object from file 
 */
function domxml_xslt_stylesheet_file($filename) ;

/**
 * @return string
 * @desc   Get XSLT library version 
 */
function domxml_xslt_version() ;

/**
 * @return float
 * @param  var mixed
 * @desc   Get the float value of a variable 
 */
function doubleval($var) ;

/**
 * @return void
 * @param  r float
 * @param  startAngle float
 * @param  endAngle float
 * @desc   Draws an arc of radius r centered at the current location, from angle startAngle to angle endAngle measured counterclockwise from 12 o'clock 
 */
function drawarc($r, $startAngle, $endAngle) ;

/**
 * @return void
 * @param  r float
 * @desc   Draws a circle of radius r centered at the current location, in a counter-clockwise fashion 
 */
function drawcircle($r) ;

/**
 * @return void
 * @param  bx float
 * @param  by float
 * @param  cx float
 * @param  cy float
 * @param  dx float
 * @param  dy float
 * @desc   Draws a cubic bezier curve using the current position and the three given points as control points 
 */
function drawcubic($bx, $by, $cx, $cy, $dx, $dy) ;

/**
 * @return void
 * @param  adx float
 * @param  ady float
 * @param  bdx float
 * @param  bdy float
 * @param  cdx float[optional]
 * @param  cdy float
 * @desc   Draws a curve from the current pen position (x, y) to the point (x+bdx, y+bdy) in the current line style, using point (x+adx, y+ady) as a control point or draws a cubic bezier to point (x+cdx, x+cdy) with control points (x+adx, y+ady) and (x+bdx, y+bdy) 
 */
function drawcurve($adx, $ady, $bdx, $bdy, $cdx = null, $cdy) ;

/**
 * @return void
 * @param  ax float
 * @param  ay float
 * @param  bx float
 * @param  by float
 * @param  dx float[optional]
 * @param  dy float
 * @desc   Draws a curve from the current pen position (x,y) to the point (bx, by) in the current line style, using point (ax, ay) as a control point. Or draws a cubic bezier to point (dx, dy) with control points (ax, ay) and (bx, by) 
 */
function drawcurveto($ax, $ay, $bx, $by, $dx = null, $dy) ;

/**
 * @return void
 * @param  font SWFFont
 * @param  character string
 * @param  size int[optional]
 * @desc   Draws the first character in the given string into the shape using the glyph definition from the given font 
 */
function drawglyph($font, $character, $size = null) ;

/**
 * @return void
 * @param  dx float
 * @param  dy float
 * @desc   Draws a line from the current pen position (x, y) to the point (x+dx, y+dy) in the current line style 
 */
function drawline($dx, $dy) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @desc   Draws a line from the current pen position to shape coordinates (x, y) in the current line style 
 */
function drawlineto($x, $y) ;

/**
 * @return int
 * @param  filename string
 * @param  compressmode int[optional]
 * @param  format int[optional]
 * @desc   Dumps document into file and uses compression if specified. Returns false on error, otherwise the length of the xml-document (uncompressed) 
 */
function dump_file($filename, $compressmode = null, $format = null) ;

/**
 * @return string
 * @param  doc_handle object
 * @param  format int[optional]
 * @param  encoding[optional]
 * @desc   Dumps document into string and optionally formats it 
 */
function dump_mem($doc_handle, $format = null, $encoding = null) ;

/**
 * @return int
 * @param  filename string
 * @param  compressmode int[optional]
 * @param  format int[optional]
 * @desc   Dumps document into file and uses compression if specified. Returns false on error, otherwise the length of the xml-document (uncompressed) 
 */
function dump_mem_file($filename, $compressmode = null, $format = null) ;

/**
 * @return string
 * @param  doc_handle object
 * @param  node_handle object
 * @param  format int[optional]
 * @param  level int[optional]
 * @desc   Dumps node into string 
 */
function dump_node($doc_handle, $node_handle, $format = null, $level = null) ;

/**
 * @return string
 * @param  doc_handle object
 * @param  format int[optional]
 * @param  encoding[optional]
 * @desc   Dumps document into string and optionally formats it 
 */
function dumpmem($doc_handle, $format = null, $encoding = null) ;

/**
 * @return array
 * @param  arr array
 * @desc   Return the currently pointed key..value pair in the passed array, and advance the pointer to the next element 
 */
function each($arr) ;

/**
 * @return int
 * @param  year int[optional]
 * @desc   Return the timestamp of midnight on Easter of a given year (defaults to current year) 
 */
function easter_date($year = null) ;

/**
 * @return int
 * @param  year int[optional]
 * @param  method int[optional]
 * @desc   Return the number of days after March 21 that Easter falls on for a given year (defaults to current year) 
 */
function easter_days($year = null, $method = null) ;

/**
 * @return object
 * @param  chunk string[optional]
 * @desc   Ends parsing and returns DomDocument
 */
function end($chunk = null) ;

/**
 * @return bool
 * @desc   ends a document 
 */
function end_document() ;

/**
 * @return bool
 * @param  tagname string
 * @desc   Ends an element 
 */
function end_element($tagname) ;

/**
 * @return array
 * @desc   Returns list of entities 
 */
function entities() ;

/**
 * @return bool
 * @param  reference string
 * @desc   Adds entity reference 
 */
function entity_reference($reference) ;

/**
 * @return int
 * @param  pattern string
 * @param  string string
 * @param  registers array[optional]
 * @desc   Regular expression match 
 */
function ereg($pattern, $string, $registers = null) ;

/**
 * @return string
 * @param  pattern string
 * @param  replacement string
 * @param  string string
 * @desc   Replace regular expression 
 */
function ereg_replace($pattern, $replacement, $string) ;

/**
 * @return int
 * @param  pattern string
 * @param  string string
 * @param  registers array[optional]
 * @desc   Case-insensitive regular expression match 
 */
function eregi($pattern, $string, $registers = null) ;

/**
 * @return string
 * @param  pattern string
 * @param  replacement string
 * @param  string string
 * @desc   Case insensitive replace regular expression 
 */
function eregi_replace($pattern, $replacement, $string) ;

/**
 * @return bool
 * @param  message string
 * @param  message_type int[optional]
 * @param  destination string[optional]
 * @param  extra_headers string[optional]
 * @desc   Send an error message somewhere 
 */
function error_log($message, $message_type = null, $destination = null, $extra_headers = null) ;

/**
 * @return int
 * @param  new_error_level int[optional]
 * @desc   Return the current error_reporting level, and if an argument was passed - change to the new level 
 */
function error_reporting($new_error_level = null) ;

/**
 * @return string
 * @param  arg string
 * @desc   Quote and escape an argument for use in a shell command 
 */
function escapeshellarg($arg) ;

/**
 * @return string
 * @param  command string
 * @desc   Escape shell metacharacters 
 */
function escapeshellcmd($command) ;

/**
 * @return string
 * @param  command string
 * @param  output array[optional]
 * @param  return_value int[optional]
 * @desc   Execute an external program 
 */
function exec($command, $output = null, $return_value = null) ;

/**
 * @return int
 * @param  imagefile string
 * @desc   Get the type of an image 
 */
function exif_imagetype($imagefile) ;

/**
 * @return array|false
 * @param  filename string
 * @param  sections_needed[optional]
 * @param  sub_arrays[optional]
 * @param  read_thumbnail
 * @desc   Reads header data from the JPEG/TIFF image filename and optionally reads the internal thumbnails 
 */
function exif_read_data($filename, $sections_needed = null, $sub_arrays = null, $read_thumbnail) ;

/**
 * @return string|false
 * @param  index
 * @desc   Get headername for index or false if not defined 
 */
function exif_tagname($index) ;

/**
 * @return string|false
 * @param  filename string
 * @param  &width[optional]
 * @param  &height
 * @param  &imagetype[optional]
 * @desc   Reads the embedded thumbnail 
 */
function exif_thumbnail($filename, &$width, &$height, &$imagetype) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns e raised to the power of the number 
 */
function exp($number) ;

/**
 * @return array
 * @param  separator string
 * @param  str string
 * @param  limit int[optional]
 * @desc   Splits a string on string separator and return array of components 
 */
function explode($separator, $str, $limit = null) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns exp(number) - 1, computed in a way that accurate even when the value of number is close to zero 
 */
function expm1($number) ;

/**
 * @return bool
 * @param  extension_name string
 * @desc   Returns true if the named extension is loaded 
 */
function extension_loaded($extension_name) ;

/**
 * @return int
 * @param  var_array array
 * @param  extract_type int[optional]
 * @param  prefix string[optional]
 * @desc   Imports variables into symbol table from an array 
 */
function extract($var_array, $extract_type = null, $prefix = null) ;

/**
 * @return int
 * @param  addr string
 * @desc   Calculate EZMLM list hash value. 
 */
function ezmlm_hash($addr) ;

/**
 * @return resource
 * @param  database_name string
 * @param  query string
 * @param  link_identifier resource[optional]
 * @desc   Send one or more SQL statements to a specified database on the server 
 */
function fbsql($database_name, $query, $link_identifier = null) ;

/**
 * @return int
 * @param  link_identifier resource[optional]
 * @desc   Get the number of rows affected by the last statement 
 */
function fbsql_affected_rows($link_identifier = null) ;

/**
 * @return bool
 * @param  link_identifier resource
 * @param  OnOff bool[optional]
 * @desc   Turns on auto-commit 
 */
function fbsql_autocommit($link_identifier, $OnOff = null) ;

/**
 * @return string
 * @param  blob_handle string
 * @param  link_identifier resource[optional]
 * @desc   Get the size of a BLOB identified by blob_handle 
 */
function fbsql_blob_size($blob_handle, $link_identifier = null) ;

/**
 * @return int
 * @param  user string
 * @param  password string
 * @param  database string[optional]
 * @param  link_identifier resource[optional]
 * @desc   Change the user for a session 
 */
function fbsql_change_user($user, $password, $database = null, $link_identifier = null) ;

/**
 * @return string
 * @param  clob_handle string
 * @param  link_identifier resource[optional]
 * @desc   Get the size of a CLOB identified by clob_handle 
 */
function fbsql_clob_size($clob_handle, $link_identifier = null) ;

/**
 * @return int
 * @param  link_identifier resource[optional]
 * @desc   Close a connection to a database server 
 */
function fbsql_close($link_identifier = null) ;

/**
 * @return bool
 * @param  link_identifier resource[optional]
 * @desc   Commit the transaction 
 */
function fbsql_commit($link_identifier = null) ;

/**
 * @return resource
 * @param  hostname string[optional]
 * @param  username string[optional]
 * @param  password string[optional]
 * @desc   Create a connection to a database server 
 */
function fbsql_connect($hostname = null, $username = null, $password = null) ;

/**
 * @return string
 * @param  blob_data string
 * @param  link_identifier resource[optional]
 * @desc   Create a BLOB in the database for use with an insert or update statement 
 */
function fbsql_create_blob($blob_data, $link_identifier = null) ;

/**
 * @return string
 * @param  clob_data string
 * @param  link_identifier resource[optional]
 * @desc   Create a CLOB in the database for use with an insert or update statement 
 */
function fbsql_create_clob($clob_data, $link_identifier = null) ;

/**
 * @return bool
 * @param  database_name string
 * @param  link_identifier resource[optional]
 * @desc   Create a new database on the server 
 */
function fbsql_create_db($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  result int
 * @param  row_number int
 * @desc   Move the internal row counter to the specified row_number 
 */
function fbsql_data_seek($result, $row_number) ;

/**
 * @return string
 * @param  link_identifier resource
 * @param  database string[optional]
 * @desc   Get or set the database name used with a connection 
 */
function fbsql_database($link_identifier, $database = null) ;

/**
 * @return string
 * @param  link_identifier resource
 * @param  database_password string[optional]
 * @desc   Get or set the databsae password used with a connection 
 */
function fbsql_database_password($link_identifier, $database_password = null) ;

/**
 * @return resource
 * @param  database_name string
 * @param  query string
 * @param  link_identifier resource[optional]
 * @desc   Send one or more SQL statements to a specified database on the server 
 */
function fbsql_db_query($database_name, $query, $link_identifier = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier resource[optional]
 * @desc   Gets the status (Stopped, Starting, Running, Stopping) for a given database 
 */
function fbsql_db_status($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier resource[optional]
 * @desc   Drop a database on the server 
 */
function fbsql_drop_db($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  link_identifier resource[optional]
 * @desc   Returns the last error code 
 */
function fbsql_errno($link_identifier = null) ;

/**
 * @return string
 * @param  link_identifier resource[optional]
 * @desc   Returns the last error string 
 */
function fbsql_error($link_identifier = null) ;

/**
 * @return array
 * @param  result resource
 * @param  result_type int[optional]
 * @desc   Fetches a result row as an array (associative, numeric or both)
 */
function fbsql_fetch_array($result, $result_type = null) ;

/**
 * @return object
 * @param  result resource
 * @desc   Detch a row of data. Returns an assoc array 
 */
function fbsql_fetch_assoc($result) ;

/**
 * @return object
 * @param  result int
 * @param  field_index int[optional]
 * @desc   Get the field properties for a specified field_index 
 */
function fbsql_fetch_field($result, $field_index = null) ;

/**
 * @return array
 * @param  result int
 * @desc   Returns an array of the lengths of each column in the result set 
 */
function fbsql_fetch_lengths($result) ;

/**
 * @return object
 * @param  result resource
 * @param  result_type int[optional]
 * @desc   Fetch a row of data. Returns an object 
 */
function fbsql_fetch_object($result, $result_type = null) ;

/**
 * @return array
 * @param  result resource
 * @desc   Fetch a row of data. Returns an indexed array 
 */
function fbsql_fetch_row($result) ;

/**
 * @return string
 * @param  result int
 * @param  field_index int[optional]
 * @desc   ??? 
 */
function fbsql_field_flags($result, $field_index = null) ;

/**
 * @return string
 * @param  result int
 * @param  field_index int[optional]
 * @desc   Get the column length for a specified field_index 
 */
function fbsql_field_len($result, $field_index = null) ;

/**
 * @return string
 * @param  result int
 * @param  field_index int[optional]
 * @desc   Get the column name for a specified field_index 
 */
function fbsql_field_name($result, $field_index = null) ;

/**
 * @return bool
 * @param  result int
 * @param  field_index int[optional]
 * @desc   ??? 
 */
function fbsql_field_seek($result, $field_index = null) ;

/**
 * @return string
 * @param  result int
 * @param  field_index int[optional]
 * @desc   Get the table name for a specified field_index 
 */
function fbsql_field_table($result, $field_index = null) ;

/**
 * @return string
 * @param  result int
 * @param  field_index int[optional]
 * @desc   Get the field type for a specified field_index 
 */
function fbsql_field_type($result, $field_index = null) ;

/**
 * @return bool
 * @param  result resource
 * @desc   free the memory used to store a result 
 */
function fbsql_free_result($result) ;

/**
 * @return array
 * @param  link_identifier resource[optional]
 * @desc   ??? 
 */
function fbsql_get_autostart_info($link_identifier = null) ;

/**
 * @return string
 * @param  link_identifier resource
 * @param  host_name string[optional]
 * @desc   Get or set the host name used with a connection 
 */
function fbsql_hostname($link_identifier, $host_name = null) ;

/**
 * @return int
 * @param  link_identifier resource[optional]
 * @desc   Get the internal index for the last insert statement 
 */
function fbsql_insert_id($link_identifier = null) ;

/**
 * @return resource
 * @param  link_identifier resource[optional]
 * @desc   Retreive a list of all databases on the server 
 */
function fbsql_list_dbs($link_identifier = null) ;

/**
 * @return resource
 * @param  database_name string
 * @param  table_name string
 * @param  link_identifier resource[optional]
 * @desc   Retrieve a list of all fields for the specified database.table 
 */
function fbsql_list_fields($database_name, $table_name, $link_identifier = null) ;

/**
 * @return resource
 * @param  database string
 * @param  link_identifier int[optional]
 * @desc   Retreive a list of all tables from the specifoied database 
 */
function fbsql_list_tables($database, $link_identifier = null) ;

/**
 * @return int
 * @param  result int
 * @desc   Switch to the next result if multiple results are available 
 */
function fbsql_next_result($result) ;

/**
 * @return int
 * @param  result int
 * @desc   Get number of fields in the result set 
 */
function fbsql_num_fields($result) ;

/**
 * @return int
 * @param  result int
 * @desc   Get number of rows 
 */
function fbsql_num_rows($result) ;

/**
 * @return string
 * @param  link_identifier resource
 * @param  password string[optional]
 * @desc   Get or set the user password used with a connection 
 */
function fbsql_password($link_identifier, $password = null) ;

/**
 * @return resource
 * @param  hostname string[optional]
 * @param  username string[optional]
 * @param  password string[optional]
 * @desc   Create a persistant connection to a database server 
 */
function fbsql_pconnect($hostname = null, $username = null, $password = null) ;

/**
 * @return resource
 * @param  query string
 * @param  link_identifier resource[optional]
 * @desc   Send one or more SQL statements to the server and execute them 
 */
function fbsql_query($query, $link_identifier = null) ;

/**
 * @return string
 * @param  blob_handle string
 * @param  link_identifier resource[optional]
 * @desc   Read the BLOB data identified by blob_handle 
 */
function fbsql_read_blob($blob_handle, $link_identifier = null) ;

/**
 * @return string
 * @param  clob_handle string
 * @param  link_identifier resource[optional]
 * @desc   Read the CLOB data identified by clob_handle 
 */
function fbsql_read_clob($clob_handle, $link_identifier = null) ;

/**
 * @return mixed
 * @param  result int
 * @param  row int[optional]
 * @param  field mixed[optional]
 * @desc   ??? 
 */
function fbsql_result($result, $row = null, $field = null) ;

/**
 * @return int
 * @param  link_identifier resource[optional]
 * @desc   Rollback all statments since last commit 
 */
function fbsql_rollback($link_identifier = null) ;

/**
 * @return bool
 * @param  database_name string[optional]
 * @param  link_identifier resource[optional]
 * @desc   Select the database to open 
 */
function fbsql_select_db($database_name = null, $link_identifier = null) ;

/**
 * @return bool
 * @param  result resource
 * @param  lob_mode int
 * @desc   Sets the mode for how LOB data re retreived (actual data or a handle) 
 */
function fbsql_set_lob_mode($result, $lob_mode) ;

/**
 * @return void
 * @param  link_identifier resource
 * @param  locking int
 * @param  isolation int
 * @desc   Sets the transaction locking and isolation 
 */
function fbsql_set_transaction($link_identifier, $locking, $isolation) ;

/**
 * @return bool
 * @param  database_name string
 * @param  link_identifier resource[optional]
 * @desc   Start a database on the server 
 */
function fbsql_start_db($database_name, $link_identifier = null) ;

/**
 * @return bool
 * @param  database_name string
 * @param  link_identifier resource[optional]
 * @desc   Stop a database on the server 
 */
function fbsql_stop_db($database_name, $link_identifier = null) ;

/**
 * @return string
 * @param  result resource
 * @param  index int
 * @desc   Retreive the table name for index after a call to fbsql_list_tables() 
 */
function fbsql_table_name($result, $index) ;

/**
 * @return string
 * @param  result resource
 * @param  index int
 * @desc   Retreive the table name for index after a call to fbsql_list_tables() 
 */
function fbsql_tablename($result, $index) ;

/**
 * @return string
 * @param  link_identifier resource
 * @param  username string[optional]
 * @desc   Get or set the host user used with a connection 
 */
function fbsql_username($link_identifier, $username = null) ;

/**
 * @return bool
 * @param  flag int[optional]
 * @desc   Enable or disable FrontBase warnings 
 */
function fbsql_warnings($flag = null) ;

/**
 * @return bool
 * @param  fp resource
 * @desc   Close an open file pointer 
 */
function fclose($fp) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  scriptname string
 * @param  script string
 * @desc   Add javascript code to the fdf file 
 */
function fdf_add_doc_javascript($fdfdoc, $scriptname, $script) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  newpage int
 * @param  filename string
 * @param  template string
 * @param  rename int
 * @desc   Adds a template into the FDF document 
 */
function fdf_add_template($fdfdoc, $newpage, $filename, $template, $rename) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @desc   Closes the FDF document 
 */
function fdf_close($fdfdoc) ;

/**
 * @return resource
 * @desc   Creates a new FDF document 
 */
function fdf_create() ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  function callback
 * @param  userdata mixed[optional]
 * @desc   Call a user defined function for each document value 
 */
function fdf_enum_values($fdfdoc, $function, $userdata = null) ;

/**
 * @return int
 * @desc   Gets error code for last operation 
 */
function fdf_errno() ;

/**
 * @return string
 * @param  errno int[optional]
 * @desc   Gets error description for error code 
 */
function fdf_error($errno = null) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  face int
 * @param  filename string
 * @desc   Gets the appearance of a field and creates a PDF document out of it. 
 */
function fdf_get_ap($fdfdoc, $fieldname, $face, $filename) ;

/**
 * @return array
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  savepath string
 * @desc   Get attached uploaded file 
 */
function fdf_get_attachment($fdfdoc, $fieldname, $savepath) ;

/**
 * @return string
 * @param  fdf resource
 * @desc   Gets FDF file encoding scheme 
 */
function fdf_get_encoding($fdf) ;

/**
 * @return string
 * @param  fdfdoc resource
 * @desc   Gets the value of /F key 
 */
function fdf_get_file($fdfdoc) ;

/**
 * @return int
 * @param  fdfdoc resorce
 * @param  fieldname string
 * @param  whichflags int
 * @desc   Gets the flags of a field 
 */
function fdf_get_flags($fdfdoc, $fieldname, $whichflags) ;

/**
 * @return mixed
 * @param  fdfdof resource
 * @param  fieldname string
 * @param  element int[optional]
 * @desc   Gets a value from the opt array of a field 
 */
function fdf_get_opt($fdfdof, $fieldname, $element = null) ;

/**
 * @return string
 * @param  fdfdoc resource
 * @desc   Gets the value of /Status key 
 */
function fdf_get_status($fdfdoc) ;

/**
 * @return string
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  which int[optional]
 * @desc   Gets the value of a field as string 
 */
function fdf_get_value($fdfdoc, $fieldname, $which = null) ;

/**
 * @return string
 * @param  fdfdoc resource[optional]
 * @desc   Gets version number for FDF api or file 
 */
function fdf_get_version($fdfdoc = null) ;

/**
 * @return void
 * @desc   Set FDF specific HTTP headers 
 */
function fdf_header() ;

/**
 * @return string
 * @param  fdfdoc resource
 * @param  fieldname string[optional]
 * @desc   Gets the name of the next field name or the first field name 
 */
function fdf_next_field_name($fdfdoc, $fieldname = null) ;

/**
 * @return resource
 * @param  filename string
 * @desc   Opens a new FDF document 
 */
function fdf_open($filename) ;

/**
 * @return resource
 * @param  fdf_data string
 * @desc   Opens a new FDF document from string 
 */
function fdf_open_string($fdf_data) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  item int
 * @desc   Sets target frame for form 
 */
function fdf_remove_item($fdfdoc, $fieldname, $item) ;

/**
 * @return mixed
 * @param  fdfdoc resource
 * @param  filename string[optional]
 * @desc   Writes out the FDF file 
 */
function fdf_save($fdfdoc, $filename = null) ;

/**
 * @return mixed
 * @param  fdfdoc resource
 * @desc   Returns the FDF file as a string 
 */
function fdf_save_string($fdfdoc) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  face int
 * @param  filename string
 * @param  pagenr int
 * @desc   Sets the appearence of a field 
 */
function fdf_set_ap($fdfdoc, $fieldname, $face, $filename, $pagenr) ;

/**
 * @return bool
 * @param  fdf_document resource
 * @param  encoding string
 * @desc   Sets FDF encoding (either "Shift-JIS" or "Unicode") 
 */
function fdf_set_encoding($fdf_document, $encoding) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  filename string
 * @param  target_frame string[optional]
 * @desc   Sets the value of /F key 
 */
function fdf_set_file($fdfdoc, $filename, $target_frame = null) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  whichflags int
 * @param  newflags int
 * @desc   Sets flags for a field in the FDF document 
 */
function fdf_set_flags($fdfdoc, $fieldname, $whichflags, $newflags) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  whichtrigger int
 * @param  script string
 * @desc   Sets the javascript action for a field 
 */
function fdf_set_javascript_action($fdfdoc, $fieldname, $whichtrigger, $script) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  script string
 * @param  before_data_import bool[optional]
 * @desc   Adds javascript code to be executed when Acrobat opens the FDF 
 */
function fdf_set_on_import_javascript($fdfdoc, $script, $before_data_import = null) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  element int
 * @param  value string
 * @param  name string
 * @desc   Sets a value in the opt array for a field 
 */
function fdf_set_opt($fdfdoc, $fieldname, $element, $value, $name) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  status string
 * @desc   Sets the value of /Status key 
 */
function fdf_set_status($fdfdoc, $status) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  whichtrigger int
 * @param  url string
 * @param  flags int
 * @desc   Sets the submit form action for a field 
 */
function fdf_set_submit_form_action($fdfdoc, $fieldname, $whichtrigger, $url, $flags) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  target string
 * @desc   Sets target frame for form 
 */
function fdf_set_target_frame($fdfdoc, $target) ;

/**
 * @return bool
 * @param  fdfdoc resource
 * @param  fieldname string
 * @param  value mixed
 * @param  isname int[optional]
 * @desc   Sets the value of a field 
 */
function fdf_set_value($fdfdoc, $fieldname, $value, $isname = null) ;

/**
 * @return bool
 * @param  fdfdoc resourece
 * @param  version string
 * @desc   Sets FDF version for a file
 */
function fdf_set_version($fdfdoc, $version) ;

/**
 * @return bool
 * @param  fp resource
 * @desc   Test for end-of-file on a file pointer 
 */
function feof($fp) ;

/**
 * @return bool
 * @param  fp resource
 * @desc   Flushes output 
 */
function fflush($fp) ;

/**
 * @return string
 * @param  fp resource
 * @desc   Get a character from file pointer 
 */
function fgetc($fp) ;

/**
 * @return array
 * @param  fp resource
 * @param  length int
 * @param  delimiter string[optional]
 * @param  enclosure string[optional]
 * @desc   Get line from file pointer and parse for CSV fields 
 */
function fgetcsv($fp, $length, $delimiter = null, $enclosure = null) ;

/**
 * @return string
 * @param  fp resource
 * @param  length int
 * @desc   Get a line from file pointer 
 */
function fgets($fp, $length) ;

/**
 * @return string
 * @param  fp resource
 * @param  length int
 * @param  allowable_tags string[optional]
 * @desc   Get a line from file pointer and strip HTML tags 
 */
function fgetss($fp, $length, $allowable_tags = null) ;

/**
 * @return array
 * @param  filename string
 * @param  use_include_path bool[optional]
 * @desc   Read entire file into an array 
 */
function file($filename, $use_include_path = null) ;

/**
 * @return bool
 * @param  filename string
 * @desc   Returns true if filename exists 
 */
function file_exists($filename) ;

/**
 * @return string
 * @param  filename string
 * @param  use_include_path bool[optional]
 * @desc   Read the entire file into a string 
 */
function file_get_contents($filename, $use_include_path = null) ;

/**
 * @return int
 * @param  filename string
 * @desc   Get last access time of file 
 */
function fileatime($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Get inode modification time of file 
 */
function filectime($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Get file group 
 */
function filegroup($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Get file inode 
 */
function fileinode($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Get last modification time of file 
 */
function filemtime($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Get file owner 
 */
function fileowner($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Get file permissions 
 */
function fileperms($filename) ;

/**
 * @return bool
 * @param  directory string
 * @desc   Read and verify the map file 
 */
function filepro($directory) ;

/**
 * @return int
 * @desc   Find out how many fields are in a filePro database 
 */
function filepro_fieldcount() ;

/**
 * @return string
 * @param  fieldnumber int
 * @desc   Gets the name of a field 
 */
function filepro_fieldname($fieldnumber) ;

/**
 * @return string
 * @param  field_number int
 * @desc   Gets the type of a field 
 */
function filepro_fieldtype($field_number) ;

/**
 * @return int
 * @param  field_number int
 * @desc   Gets the width of a field 
 */
function filepro_fieldwidth($field_number) ;

/**
 * @return string
 * @param  row_number int
 * @param  field_number int
 * @desc   Retrieves data from a filePro database 
 */
function filepro_retrieve($row_number, $field_number) ;

/**
 * @return int
 * @desc   Find out how many rows are in a filePro database 
 */
function filepro_rowcount() ;

/**
 * @return int
 * @param  filename string
 * @desc   Get file size 
 */
function filesize($filename) ;

/**
 * @return string
 * @param  filename string
 * @desc   Get file type 
 */
function filetype($filename) ;

/**
 * @return object
 * @desc   Returns first child from list of children 
 */
function first_child() ;

/**
 * @return float
 * @param  var mixed
 * @desc   Get the float value of a variable 
 */
function floatval($var) ;

/**
 * @return bool
 * @param  fp resource
 * @param  operation int
 * @param  &wouldblock int[optional]
 * @desc   Portable file locking 
 */
function flock($fp, $operation, &$wouldblock) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the next lowest integer value from the number 
 */
function floor($number) ;

/**
 * @return void
 * @desc   Flush the output buffer 
 */
function flush() ;

/**
 * @return float
 * @param  x float
 * @param  y float
 * @desc   Returns the remainder of dividing x by y as a float 
 */
function fmod($x, $y) ;

/**
 * @return bool
 * @param  pattern string
 * @param  filename string
 * @param  flags int[optional]
 * @desc   Match filename against pattern 
 */
function fnmatch($pattern, $filename, $flags = null) ;

/**
 * @return resource
 * @param  filename string
 * @param  mode string
 * @param  use_include_path bool[optional]
 * @param  context resource[optional]
 * @desc   Open a file or a URL and return a file pointer 
 */
function fopen($filename, $mode, $use_include_path = null, $context = null) ;

/**
 * @return int
 * @param  fp resource
 * @desc   Output all remaining data from a file pointer 
 */
function fpassthru($fp) ;

/**
 * @return int
 * @param  fp resource
 * @param  str string
 * @param  length int[optional]
 * @desc   Binary-safe file write 
 */
function fputs($fp, $str, $length = null) ;

/**
 * @return string
 * @param  fp resource
 * @param  length int
 * @desc   Binary-safe file read 
 */
function fread($fp, $length) ;

/**
 * @return bool
 * @param  lob object
 * @desc   Deletes collection object
 */
function free($lob) ;

/**
 * @return int
 * @param  month int
 * @param  day int
 * @param  year int
 * @desc   Converts a french republic calendar date to julian day count 
 */
function frenchtojd($month, $day, $year) ;

/**
 * @return array
 * @param  charset int
 * @desc   Returns an array containing information about the specified charset 
 */
function fribidi_charset_info($charset) ;

/**
 * @return array
 * @desc   Returns an array containing available charsets 
 */
function fribidi_get_charsets() ;

/**
 * @return string
 * @param  logical_str string
 * @param  direction long
 * @param  charset long
 * @desc   Convert a logical string to a visual one 
 */
function fribidi_log2vis($logical_str, $direction, $charset) ;

/**
 * @return mixed
 * @param  stream resource
 * @param  format string
 * @vararg ... string
 * @desc   Implements a mostly ANSI compatible fscanf() 
 */
function fscanf($stream, $format) ;

/**
 * @return int
 * @param  fp resource
 * @param  offset int
 * @param  whence int[optional]
 * @desc   Seek on a file pointer 
 */
function fseek($fp, $offset, $whence = null) ;

/**
 * @return int
 * @param  hostname string
 * @param  port int
 * @param  errno int[optional]
 * @param  errstr string[optional]
 * @param  timeout float[optional]
 * @param  context resource[optional]
 * @desc   Open Internet or Unix domain socket connection 
 */
function fsockopen($hostname, $port, $errno = null, $errstr = null, $timeout = null, $context = null) ;

/**
 * @return int
 * @param  fp resource
 * @desc   Stat() on a filehandle 
 */
function fstat($fp) ;

/**
 * @return int
 * @param  fp resource
 * @desc   Get file pointer's read/write position 
 */
function ftell($fp) ;

/**
 * @return int
 * @param  pathname string
 * @param  proj string
 * @desc   Convert a pathname and a project identifier to a System V IPC key 
 */
function ftok($pathname, $proj) ;

/**
 * @return bool
 * @param  stream resource
 * @desc   Changes to the parent directory 
 */
function ftp_cdup($stream) ;

/**
 * @return bool
 * @param  stream resource
 * @param  directory string
 * @desc   Changes directories 
 */
function ftp_chdir($stream, $directory) ;

/**
 * @return void
 * @param  stream resource
 * @desc   Closes the FTP stream 
 */
function ftp_close($stream) ;

/**
 * @return resource
 * @param  host string
 * @param  port int[optional]
 * @param  timeout int[optional]
 * @desc   Opens a FTP stream 
 */
function ftp_connect($host, $port = null, $timeout = null) ;

/**
 * @return bool
 * @param  stream resource
 * @param  file string
 * @desc   Deletes a file 
 */
function ftp_delete($stream, $file) ;

/**
 * @return bool
 * @param  stream resource
 * @param  command string
 * @desc   Requests execution of a program on the FTP server 
 */
function ftp_exec($stream, $command) ;

/**
 * @return bool
 * @param  stream resource
 * @param  fp resource
 * @param  remote_file string
 * @param  mode int
 * @param  resumepos int
 * @desc   Retrieves a file from the FTP server and writes it to an open file 
 */
function ftp_fget($stream, $fp, $remote_file, $mode, $resumepos) ;

/**
 * @return bool
 * @param  stream resource
 * @param  remote_file string
 * @param  fp resource
 * @param  mode int
 * @param  startpos int
 * @desc   Stores a file from an open file to the FTP server 
 */
function ftp_fput($stream, $remote_file, $fp, $mode, $startpos) ;

/**
 * @return bool
 * @param  stream resource
 * @param  local_file string
 * @param  remote_file string
 * @param  mode int
 * @param  resume_pos int
 * @desc   Retrieves a file from the FTP server and writes it to a local file 
 */
function ftp_get($stream, $local_file, $remote_file, $mode, $resume_pos) ;

/**
 * @return mixed
 * @param  stream resource
 * @param  option int
 * @desc   Gets an FTP option 
 */
function ftp_get_option($stream, $option) ;

/**
 * @return bool
 * @param  stream resource
 * @param  username string
 * @param  password string
 * @desc   Logs into the FTP server 
 */
function ftp_login($stream, $username, $password) ;

/**
 * @return int
 * @param  stream resource
 * @param  filename string
 * @desc   Returns the last modification time of the file, or -1 on error 
 */
function ftp_mdtm($stream, $filename) ;

/**
 * @return string
 * @param  stream resource
 * @param  directory string
 * @desc   Creates a directory and returns the absolute path for the new directory or false on error 
 */
function ftp_mkdir($stream, $directory) ;

/**
 * @return int
 * @param  stream resource
 * @desc   Continues retrieving/sending a file nbronously 
 */
function ftp_nb_continue($stream) ;

/**
 * @return bool
 * @param  stream resource
 * @param  fp resource
 * @param  remote_file string
 * @param  mode int
 * @param  resumepos int
 * @desc   Retrieves a file from the FTP server asynchronly and writes it to an open file 
 */
function ftp_nb_fget($stream, $fp, $remote_file, $mode, $resumepos) ;

/**
 * @return bool
 * @param  stream resource
 * @param  remote_file string
 * @param  fp resource
 * @param  mode int
 * @param  startpos int
 * @desc   Stores a file from an open file to the FTP server nbronly 
 */
function ftp_nb_fput($stream, $remote_file, $fp, $mode, $startpos) ;

/**
 * @return int
 * @param  stream resource
 * @param  local_file string
 * @param  remote_file string
 * @param  mode int
 * @param  resume_pos int
 * @desc   Retrieves a file from the FTP server nbhronly and writes it to a local file 
 */
function ftp_nb_get($stream, $local_file, $remote_file, $mode, $resume_pos) ;

/**
 * @return bool
 * @param  stream resource
 * @param  remote_file string
 * @param  local_file string
 * @param  mode int
 * @param  startpos int
 * @desc   Stores a file on the FTP server 
 */
function ftp_nb_put($stream, $remote_file, $local_file, $mode, $startpos) ;

/**
 * @return array
 * @param  stream resource
 * @param  directory string
 * @desc   Returns an array of filenames in the given directory 
 */
function ftp_nlist($stream, $directory) ;

/**
 * @return bool
 * @param  stream resource
 * @param  pasv bool
 * @desc   Turns passive mode on or off 
 */
function ftp_pasv($stream, $pasv) ;

/**
 * @return bool
 * @param  stream resource
 * @param  remote_file string
 * @param  local_file string
 * @param  mode int
 * @param  startpos int
 * @desc   Stores a file on the FTP server 
 */
function ftp_put($stream, $remote_file, $local_file, $mode, $startpos) ;

/**
 * @return string
 * @param  stream resource
 * @desc   Returns the present working directory 
 */
function ftp_pwd($stream) ;

/**
 * @return void
 * @param  stream resource
 * @desc   Closes the FTP stream 
 */
function ftp_quit($stream) ;

/**
 * @return array
 * @param  stream resource
 * @param  directory string
 * @param  recursive bool[optional]
 * @desc   Returns a detailed listing of a directory as an array of output lines 
 */
function ftp_rawlist($stream, $directory, $recursive = null) ;

/**
 * @return bool
 * @param  stream resource
 * @param  src string
 * @param  dest string
 * @desc   Renames the given file to a new path 
 */
function ftp_rename($stream, $src, $dest) ;

/**
 * @return bool
 * @param  stream resource
 * @param  directory string
 * @desc   Removes a directory 
 */
function ftp_rmdir($stream, $directory) ;

/**
 * @return bool
 * @param  stream resource
 * @param  option int
 * @param  value mixed
 * @desc   Sets an FTP option 
 */
function ftp_set_option($stream, $option, $value) ;

/**
 * @return bool
 * @param  stream resource
 * @param  cmd string
 * @desc   Sends a SITE command to the server 
 */
function ftp_site($stream, $cmd) ;

/**
 * @return int
 * @param  stream resource
 * @param  filename string
 * @desc   Returns the size of the file, or -1 on error 
 */
function ftp_size($stream, $filename) ;

/**
 * @return resource
 * @param  host string
 * @param  port int[optional]
 * @param  timeout int[optional]
 * @desc   Opens a FTP-SSL stream 
 */
function ftp_ssl_connect($host, $port = null, $timeout = null) ;

/**
 * @return string
 * @param  stream resource
 * @desc   Returns the system type identifier 
 */
function ftp_systype($stream) ;

/**
 * @return int
 * @param  fp resource
 * @param  size int
 * @desc   Truncate file to 'size' length 
 */
function ftruncate($fp, $size) ;

/**
 * @return mixed
 * @param  arg_num int
 * @desc   Get the $arg_num'th argument that was passed to the function 
 */
function func_get_arg($arg_num) ;

/**
 * @return array
 * @desc   Get an array of the arguments that were passed to the function 
 */
function func_get_args() ;

/**
 * @return int
 * @desc   Get the number of arguments that were passed to the function 
 */
function func_num_args() ;

/**
 * @return bool
 * @param  function_name string
 * @desc   Checks if the function exists 
 */
function function_exists($function_name) ;

/**
 * @return int
 * @param  fp resource
 * @param  str string
 * @param  length int[optional]
 * @desc   Binary-safe file write 
 */
function fwrite($fp, $str, $length = null) ;

/**
 * @return array
 * @desc   
 */
function gd_info() ;

/**
 * @return string
 * @param  attrname string
 * @desc   Returns value of given attribute 
 */
function get_attribute($attrname) ;

/**
 * @return string
 * @param  attrname string
 * @desc   Returns value of given attribute 
 */
function get_attribute_node($attrname) ;

/**
 * @return mixed
 * @param  browser_name string[optional]
 * @param  return_array bool[optional]
 * @desc   
 */
function get_browser($browser_name = null, $return_array = null) ;

/**
 * @return string
 * @param  option_name string
 * @desc   Get the value of a PHP configuration option 
 */
function get_cfg_var($option_name) ;

/**
 * @return string
 * @param  object object
 * @desc   Retrieves the class name 
 */
function get_class($object) ;

/**
 * @return array
 * @param  class mixed
 * @desc   Returns an array of method names for class or class instance. 
 */
function get_class_methods($class) ;

/**
 * @return array
 * @param  class_name string
 * @desc   Returns an array of default properties of the class 
 */
function get_class_vars($class_name) ;

/**
 * @return string
 * @desc   
 */
function get_content() ;

/**
 * @return string
 * @desc   Get the name of the owner of the current PHP script 
 */
function get_current_user() ;

/**
 * @return array
 * @desc   Returns an array of all declared classes. 
 */
function get_declared_classes() ;

/**
 * @return array
 * @desc   Return an array containing the names and values of all defined constants 
 */
function get_defined_constants() ;

/**
 * @return array
 * @desc   Returns an array of all defined functions 
 */
function get_defined_functions() ;

/**
 * @return array
 * @desc   Returns an associative array of names and values of all currently defined variable names (variables in the current scope) 
 */
function get_defined_vars() ;

/**
 * @return object
 * @desc   Returns DomDocument from parser 
 */
function get_document() ;

/**
 * @return string
 * @param  id string
 * @desc   Returns element for given id or false if not found 
 */
function get_element_by_id($id) ;

/**
 * @return string
 * @param  tagname string
 * @desc   Returns array with nodes with given tagname in element or empty array, if not found 
 */
function get_elements_by_tagname($tagname) ;

/**
 * @return array
 * @param  extension_name string
 * @desc   Returns an array with the names of functions belonging to the named extension 
 */
function get_extension_funcs($extension_name) ;

/**
 * @return array
 * @param  table int[optional]
 * @param  quote_style int[optional]
 * @desc   Returns the internal translation table used by htmlspecialchars and htmlentities 
 */
function get_html_translation_table($table = null, $quote_style = null) ;

/**
 * @return string
 * @desc   Get the current include_path configuration option 
 */
function get_include_path() ;

/**
 * @return array
 * @desc   Returns an array with the file names that were include_once()'d 
 */
function get_included_files() ;

/**
 * @return array
 * @desc   Return an array containing names of loaded extensions 
 */
function get_loaded_extensions() ;

/**
 * @return int
 * @desc   Get the current active configuration setting of magic_quotes_gpc 
 */
function get_magic_quotes_gpc() ;

/**
 * @return int
 * @desc   Get the current active configuration setting of magic_quotes_runtime 
 */
function get_magic_quotes_runtime() ;

/**
 * @return array
 * @param  filename string
 * @param  use_include_path bool[optional]
 * @desc   Extracts all meta tag content attributes from a file and returns an array 
 */
function get_meta_tags($filename, $use_include_path = null) ;

/**
 * @return array
 * @param  obj object
 * @desc   Returns an array of object properties 
 */
function get_object_vars($obj) ;

/**
 * @return string
 * @param  object mixed
 * @desc   Retrieves the parent class name for object or class. 
 */
function get_parent_class($object) ;

/**
 * @return array
 * @desc   Returns an array with the file names that were include_once()'d 
 */
function get_required_files() ;

/**
 * @return string
 * @param  res resource
 * @desc   Get the resource type name for a given resource 
 */
function get_resource_type($res) ;

/**
 * @return object
 * @param  domnode int
 * @desc   Returns root node of document 
 */
function get_root($domnode) ;

/**
 * @return array
 * @desc   Get all headers from the request 
 */
function getallheaders() ;

/**
 * @return float
 * @desc   Returns the ascent of the current font at its current size, or 0 if not available 
 */
function getascent() ;

/**
 * @return mixed
 * @desc   Gets the current directory 
 */
function getcwd() ;

/**
 * @return array
 * @param  timestamp int[optional]
 * @desc   Get date/time information 
 */
function getdate($timestamp = null) ;

/**
 * @return float
 * @desc   Returns the descent of the current font at its current size, or 0 if not available 
 */
function getdescent() ;

/**
 * @return string
 * @param  collection object
 * @param  ndx
 * @desc   Retrieve the value at collection index ndx 
 */
function getelem($collection, $ndx) ;

/**
 * @return string
 * @param  varname string
 * @desc   Get the value of an environment variable 
 */
function getenv($varname) ;

/**
 * @return float
 * @desc   Returns the height of this bitmap 
 */
function getheight() ;

/**
 * @return string
 * @param  ip_address string
 * @desc   Get the Internet host name corresponding to a given IP address 
 */
function gethostbyaddr($ip_address) ;

/**
 * @return string
 * @param  hostname string
 * @desc   Get the IP address corresponding to a given Internet host name 
 */
function gethostbyname($hostname) ;

/**
 * @return array
 * @param  hostname string
 * @desc   Return a list of IP addresses that a given hostname resolves to. 
 */
function gethostbynamel($hostname) ;

/**
 * @return array
 * @param  imagefile string
 * @param  info array[optional]
 * @desc   Get the size of an image as 4-element array 
 */
function getimagesize($imagefile, $info = null) ;

/**
 * @return int
 * @desc   Get time of last page modification 
 */
function getlastmod() ;

/**
 * @return float
 * @desc   Returns the leading of the current font at its current size, or 0 if not available 
 */
function getleading() ;

/**
 * @return int
 * @param  hostname string
 * @param  mxhosts array
 * @param  weight array[optional]
 * @desc   Get MX records corresponding to a given Internet host name 
 */
function getmxrr($hostname, $mxhosts, $weight = null) ;

/**
 * @return int
 * @desc   Get PHP script owner's GID 
 */
function getmygid() ;

/**
 * @return int
 * @desc   Get the inode of the current script being parsed 
 */
function getmyinode() ;

/**
 * @return int
 * @desc   Get current process ID 
 */
function getmypid() ;

/**
 * @return int
 * @desc   Get PHP script owner's UID 
 */
function getmyuid() ;

/**
 * @return array
 * @param  options string
 * @param  longopts array[optional]
 * @desc   Get options from the command line argument list 
 */
function getopt($options, $longopts = null) ;

/**
 * @return int
 * @param  name string
 * @desc   Returns protocol number associated with name as per /etc/protocols 
 */
function getprotobyname($name) ;

/**
 * @return string
 * @param  proto int
 * @desc   Returns protocol name associated with protocol number proto 
 */
function getprotobynumber($proto) ;

/**
 * @return int
 * @desc   Returns the maximum value a random number can have 
 */
function getrandmax() ;

/**
 * @return array
 * @param  who int[optional]
 * @desc   Returns an array of usage statistics 
 */
function getrusage($who = null) ;

/**
 * @return int
 * @param  service string
 * @param  protocol string
 * @desc   Returns port associated with service. Protocol must be "tcp" or "udp" 
 */
function getservbyname($service, $protocol) ;

/**
 * @return string
 * @param  port int
 * @param  protocol string
 * @desc   Returns service name associated with port. Protocol must be "tcp" or "udp" 
 */
function getservbyport($port, $protocol) ;

/**
 * @return object
 * @desc   Return's this SWFMorph's start shape object 
 */
function getshape1() ;

/**
 * @return object
 * @desc   Return's this SWFMorph's start shape object 
 */
function getshape2() ;

/**
 * @return string
 * @param  msgid string
 * @desc   Return the translation of msgid for the current domain, or msgid unaltered if a translation does not exist 
 */
function gettext($msgid) ;

/**
 * @return array
 * @desc   Returns the current time as array 
 */
function gettimeofday() ;

/**
 * @return string
 * @param  var mixed
 * @desc   Returns the type of the variable 
 */
function gettype($var) ;

/**
 * @return float
 * @param  str string
 * @desc   Calculates the width of the given string in this text objects current font and size 
 */
function getwidth($str) ;

/**
 * @return array
 * @param  pattern string
 * @param  flags int[optional]
 * @desc   Find pathnames matching a pattern 
 */
function glob($pattern, $flags = null) ;

/**
 * @return string
 * @param  format string
 * @param  timestamp int[optional]
 * @desc   Format a GMT/UTC date/time 
 */
function gmdate($format, $timestamp = null) ;

/**
 * @return int
 * @param  hour int
 * @param  min int
 * @param  sec int
 * @param  mon int
 * @param  day int
 * @param  year int
 * @desc   Get UNIX timestamp for a GMT date 
 */
function gmmktime($hour, $min, $sec, $mon, $day, $year) ;

/**
 * @return resource
 * @param  a resource
 * @desc   Calculates absolute value 
 */
function gmp_abs($a) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Add a and b 
 */
function gmp_add($a, $b) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Calculates logical AND of a and b 
 */
function gmp_and($a, $b) ;

/**
 * @return void
 * @param  &a resource
 * @param  index int
 * @desc   Clears bit in a 
 */
function gmp_clrbit(&$a, $index) ;

/**
 * @return int
 * @param  a resource
 * @param  b resource
 * @desc   Compares two numbers 
 */
function gmp_cmp($a, $b) ;

/**
 * @return resource
 * @param  a resource
 * @desc   Calculates one's complement of a 
 */
function gmp_com($a) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @param  round int[optional]
 * @desc   Divide a by b, returns quotient only 
 */
function gmp_div($a, $b, $round = null) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @param  round int[optional]
 * @desc   Divide a by b, returns quotient only 
 */
function gmp_div_q($a, $b, $round = null) ;

/**
 * @return array
 * @param  a resource
 * @param  b resource
 * @param  round int[optional]
 * @desc   Divide a by b, returns quotient and reminder 
 */
function gmp_div_qr($a, $b, $round = null) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @param  round int[optional]
 * @desc   Divide a by b, returns reminder only 
 */
function gmp_div_r($a, $b, $round = null) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Divide a by b using exact division algorithm 
 */
function gmp_divexact($a, $b) ;

/**
 * @return resource
 * @param  a int
 * @desc   Calculates factorial function 
 */
function gmp_fact($a) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Computes greatest common denominator (gcd) of a and b 
 */
function gmp_gcd($a, $b) ;

/**
 * @return array
 * @param  a resource
 * @param  b resource
 * @desc   Computes G, S, and T, such that AS + BT = G = `gcd' (A, B) 
 */
function gmp_gcdext($a, $b) ;

/**
 * @return int
 * @param  a resource
 * @param  b resource
 * @desc   Calculates hamming distance between a and b 
 */
function gmp_hamdist($a, $b) ;

/**
 * @return resource
 * @param  number mixed
 * @param  base int[optional]
 * @desc   Initializes GMP number 
 */
function gmp_init($number, $base = null) ;

/**
 * @return int
 * @param  gmpnumber resource
 * @desc   Gets signed long value of GMP number 
 */
function gmp_intval($gmpnumber) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Computes the inverse of a modulo b 
 */
function gmp_invert($a, $b) ;

/**
 * @return int
 * @param  a resource
 * @param  b resource
 * @desc   Computes Jacobi symbol 
 */
function gmp_jacobi($a, $b) ;

/**
 * @return int
 * @param  a resource
 * @param  b resource
 * @desc   Computes Legendre symbol 
 */
function gmp_legendre($a, $b) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Computes a modulo b 
 */
function gmp_mod($a, $b) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Multiply a and b 
 */
function gmp_mul($a, $b) ;

/**
 * @return resource
 * @param  a resource
 * @desc   Negates a number 
 */
function gmp_neg($a) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Calculates logical OR of a and b 
 */
function gmp_or($a, $b) ;

/**
 * @return bool
 * @param  a resource
 * @desc   Checks if a is an exact square 
 */
function gmp_perfect_square($a) ;

/**
 * @return int
 * @param  a resource
 * @desc   Calculates the population count of a 
 */
function gmp_popcount($a) ;

/**
 * @return resource
 * @param  base resource
 * @param  exp int
 * @desc   Raise base to power exp 
 */
function gmp_pow($base, $exp) ;

/**
 * @return resource
 * @param  base resource
 * @param  exp resource
 * @param  mod resource
 * @desc   Raise base to power exp and take result modulo mod 
 */
function gmp_powm($base, $exp, $mod) ;

/**
 * @return int
 * @param  a resource
 * @param  reps int
 * @desc   Checks if a is "probably prime" 
 */
function gmp_prob_prime($a, $reps) ;

/**
 * @return resource
 * @param  limiter int[optional]
 * @desc   Gets random number 
 */
function gmp_random($limiter = null) ;

/**
 * @return int
 * @param  a resource
 * @param  start int
 * @desc   Finds first zero bit 
 */
function gmp_scan0($a, $start) ;

/**
 * @return int
 * @param  a resource
 * @param  start int
 * @desc   Finds first non-zero bit 
 */
function gmp_scan1($a, $start) ;

/**
 * @return void
 * @param  &a resource
 * @param  index int
 * @param  set_clear bool
 * @desc   Sets or clear bit in a 
 */
function gmp_setbit(&$a, $index, $set_clear) ;

/**
 * @return int
 * @param  a resource
 * @desc   Gets the sign of the number 
 */
function gmp_sign($a) ;

/**
 * @return resource
 * @param  a resource
 * @desc   Takes integer part of square root of a 
 */
function gmp_sqrt($a) ;

/**
 * @return array
 * @param  a resource
 * @desc   Square root with remainder 
 */
function gmp_sqrtrem($a) ;

/**
 * @return string
 * @param  gmpnumber resource
 * @param  base int[optional]
 * @desc   Gets string representation of GMP number  
 */
function gmp_strval($gmpnumber, $base = null) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Subtract b from a 
 */
function gmp_sub($a, $b) ;

/**
 * @return resource
 * @param  a resource
 * @param  b resource
 * @desc   Calculates logical exclusive OR of a and b 
 */
function gmp_xor($a, $b) ;

/**
 * @return string
 * @param  format string
 * @param  timestamp int[optional]
 * @desc   Format a GMT/UCT time/date according to locale settings 
 */
function gmstrftime($format, $timestamp = null) ;

/**
 * @return int
 * @param  month int
 * @param  day int
 * @param  year int
 * @desc   Converts a gregorian calendar date to julian day count 
 */
function gregoriantojd($month, $day, $year) ;

/**
 * @return bool
 * @param  fp resource
 * @desc   Close an open file pointer 
 */
function gzclose($fp) ;

/**
 * @return string
 * @param  data string
 * @param  level int[optional]
 * @desc   Gzip-compress a string 
 */
function gzcompress($data, $level = null) ;

/**
 * @return string
 * @param  data string
 * @param  level int[optional]
 * @desc   Gzip-compress a string 
 */
function gzdeflate($data, $level = null) ;

/**
 * @return string
 * @param  data string
 * @param  level int[optional]
 * @param  encoding_mode int[optional]
 * @desc   GZ encode a string 
 */
function gzencode($data, $level = null, $encoding_mode = null) ;

/**
 * @return bool
 * @param  fp resource
 * @desc   Test for end-of-file on a file pointer 
 */
function gzeof($fp) ;

/**
 * @return array
 * @param  filename string
 * @param  use_include_path int[optional]
 * @desc   Read und uncompress entire .gz-file into an array 
 */
function gzfile($filename, $use_include_path = null) ;

/**
 * @return string
 * @param  fp resource
 * @desc   Get a character from file pointer 
 */
function gzgetc($fp) ;

/**
 * @return string
 * @param  fp resource
 * @param  length int
 * @desc   Get a line from file pointer 
 */
function gzgets($fp, $length) ;

/**
 * @return string
 * @param  fp resource
 * @param  length int
 * @param  allowable_tags string[optional]
 * @desc   Get a line from file pointer and strip HTML tags 
 */
function gzgetss($fp, $length, $allowable_tags = null) ;

/**
 * @return string
 * @param  data string
 * @param  length int[optional]
 * @desc   Unzip a gzip-compressed string 
 */
function gzinflate($data, $length = null) ;

/**
 * @return int
 * @param  filename string
 * @param  mode string
 * @param  use_include_path int[optional]
 * @desc   Open a .gz-file and return a .gz-file pointer 
 */
function gzopen($filename, $mode, $use_include_path = null) ;

/**
 * @return int
 * @param  fp resource
 * @desc   Output all remaining data from a file pointer 
 */
function gzpassthru($fp) ;

/**
 * @return int
 * @param  fp resource
 * @param  str string
 * @param  length int[optional]
 * @desc   Binary-safe file write 
 */
function gzputs($fp, $str, $length = null) ;

/**
 * @return string
 * @param  fp resource
 * @param  length int
 * @desc   Binary-safe file read 
 */
function gzread($fp, $length) ;

/**
 * @return void
 * @param  dir_handle resource[optional]
 * @desc   Rewind dir_handle back to the start 
 */
function gzrewind($dir_handle = null) ;

/**
 * @return int
 * @param  fp resource
 * @param  offset int
 * @param  whence int[optional]
 * @desc   Seek on a file pointer 
 */
function gzseek($fp, $offset, $whence = null) ;

/**
 * @return int
 * @param  fp resource
 * @desc   Get file pointer's read/write position 
 */
function gztell($fp) ;

/**
 * @return string
 * @param  data string
 * @param  length int[optional]
 * @desc   Unzip a gzip-compressed string 
 */
function gzuncompress($data, $length = null) ;

/**
 * @return int
 * @param  fp resource
 * @param  str string
 * @param  length int[optional]
 * @desc   Binary-safe file write 
 */
function gzwrite($fp, $str, $length = null) ;

/**
 * @return string
 * @param  attrname string
 * @desc   Checks for existenz given attribute 
 */
function has_attribute($attrname) ;

/**
 * @return object
 * @desc   Returns true if node has attributes 
 */
function has_attributes() ;

/**
 * @return object
 * @desc   Returns true if node has children 
 */
function has_child_nodes() ;

/**
 * @return void
 * @param  header string
 * @param  replace bool[optional]
 * @param  http_response_code int[optional]
 * @desc   Sends a raw HTTP header 
 */
function header($header, $replace = null, $http_response_code = null) ;

/**
 * @return bool
 * @param  &$file string[optional]
 * @param  &$line int[optional]
 * @desc   Returns true if headers have already been sent, false otherwise 
 */
function headers_sent(&$file, &$line) ;

/**
 * @return string
 * @param  str string
 * @param  max_chars_per_line int[optional]
 * @desc   Converts logical Hebrew text to visual text 
 */
function hebrev($str, $max_chars_per_line = null) ;

/**
 * @return string
 * @param  str string
 * @param  max_chars_per_line int[optional]
 * @desc   Converts logical Hebrew text to visual text with newline conversion 
 */
function hebrevc($str, $max_chars_per_line = null) ;

/**
 * @return int
 * @param  hexadecimal_number string
 * @desc   Returns the decimal equivalent of the hexadecimal number 
 */
function hexdec($hexadecimal_number) ;

/**
 * @return bool
 * @param  file_name string
 * @param  return bool[optional]
 * @desc   Syntax highlight a source file 
 */
function highlight_file($file_name, $return = null) ;

/**
 * @return bool
 * @param  string string
 * @param  return bool[optional]
 * @desc   Syntax highlight a string or optionally return it 
 */
function highlight_string($string, $return = null) ;

/**
 * @return object
 * @param  html_doc string
 * @param  from_file bool[optional]
 * @desc   Creates DOM object of HTML document 
 */
function html_doc($html_doc, $from_file = null) ;

/**
 * @return object
 * @param  filename string
 * @desc   Creates DOM object of HTML document in file 
 */
function html_doc_file($filename) ;

/**
 * @return string
 * @param  doc_handle int[optional]
 * @desc   Dumps document into string as HTML 
 */
function html_dump_mem($doc_handle = null) ;

/**
 * @return string
 * @param  string string
 * @param  quote_style int[optional]
 * @param  charset string[optional]
 * @desc   Convert all HTML entities to their applicable characters 
 */
function html_entity_decode($string, $quote_style = null, $charset = null) ;

/**
 * @return string
 * @param  string string
 * @param  quote_style int[optional]
 * @param  charset string[optional]
 * @desc   Convert all applicable characters to HTML entities 
 */
function htmlentities($string, $quote_style = null, $charset = null) ;

/**
 * @return string
 * @param  string string
 * @param  quote_style int[optional]
 * @param  charset string[optional]
 * @desc   Convert special characters to HTML entities 
 */
function htmlspecialchars($string, $quote_style = null, $charset = null) ;

/**
 * @return string
 * @param  objarr array
 * @desc   Returns object record of object array 
 */
function hw_array2objrec($objarr) ;

/**
 * @return void
 * @param  link int
 * @param  objid int
 * @param  attributes array
 * @desc   Changes attributes of an object (obsolete) 
 */
function hw_changeobject($link, $objid, $attributes) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Returns array of children object ids 
 */
function hw_children($link, $objid) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Returns array of children object records 
 */
function hw_childrenobj($link, $objid) ;

/**
 * @return void
 * @param  link int
 * @desc   Close connection to Hyperwave server 
 */
function hw_close($link) ;

/**
 * @return int
 * @param  host string
 * @param  port_ int
 * @param  password string[optional]
 * @desc   Connect to the Hyperwave server 
 */
function hw_connect($host, $port_, $password = null) ;

/**
 * @return void
 * @param  link int
 * @desc   Prints information about the connection to Hyperwave server 
 */
function hw_connection_info($link) ;

/**
 * @return void
 * @param  link int
 * @param  objrec array
 * @param  dest int
 * @desc   Copies object 
 */
function hw_cp($link, $objrec, $dest) ;

/**
 * @return void
 * @param  link int
 * @param  objid int
 * @desc   Deletes object 
 */
function hw_deleteobject($link, $objid) ;

/**
 * @return int
 * @param  link int
 * @param  anchorid int
 * @desc   Returns objid of document belonging to anchorid 
 */
function hw_docbyanchor($link, $anchorid) ;

/**
 * @return array
 * @param  link int
 * @param  anchorid int
 * @desc   Returns object record of document belonging to anchorid 
 */
function hw_docbyanchorobj($link, $anchorid) ;

/**
 * @return string
 * @param  doc hwdoc
 * @desc   Returns object record of document 
 */
function hw_document_attributes($doc) ;

/**
 * @return string
 * @param  doc hwdoc
 * @param  prefix string[optional]
 * @desc   Return bodytag prefixed by prefix 
 */
function hw_document_bodytag($doc, $prefix = null) ;

/**
 * @return string
 * @param  doc hwdoc
 * @desc   Returns content of document 
 */
function hw_document_content($doc) ;

/**
 * @return int
 * @param  doc hwdoc
 * @param  content string
 * @desc   Sets/replaces content of document 
 */
function hw_document_setcontent($doc, $content) ;

/**
 * @return int
 * @param  doc hwdoc
 * @desc   Returns size of document 
 */
function hw_document_size($doc) ;

/**
 * @return string
 * @param  doc hwdoc
 * @desc   An alias for hw_document_attributes 
 */
function hw_documentattributes($doc) ;

/**
 * @return string
 * @param  doc hwdoc
 * @param  prefix string[optional]
 * @desc   An alias for hw_document_bodytag 
 */
function hw_documentbodytag($doc, $prefix = null) ;

/**
 * @return int
 * @param  doc hwdoc
 * @desc   An alias for hw_document_size 
 */
function hw_documentsize($doc) ;

/**
 * @return string
 * @param  link int
 * @param  id int
 * @param  msgid int
 * @desc   Hyperwave dummy function 
 */
function hw_dummy($link, $id, $msgid) ;

/**
 * @return void
 * @param  link int
 * @param  doc hwdoc
 * @desc   Modifies text document 
 */
function hw_edittext($link, $doc) ;

/**
 * @return int
 * @param  link int
 * @desc   Returns last error number 
 */
function hw_error($link) ;

/**
 * @return string
 * @param  link int
 * @desc   Returns last error message 
 */
function hw_errormsg($link) ;

/**
 * @return void
 * @param  doc hwdoc
 * @desc   Frees memory of document 
 */
function hw_free_document($doc) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Return all anchors of object 
 */
function hw_getanchors($link, $objid) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Return all object records of anchors of object 
 */
function hw_getanchorsobj($link, $objid) ;

/**
 * @return string
 * @param  link int
 * @param  objid int
 * @desc   Returns object record and locks object 
 */
function hw_getandlock($link, $objid) ;

/**
 * @return hwdoc
 * @param  link int
 * @param  objid int
 * @desc   Returns the output of a CGI script 
 */
function hw_getcgi($link, $objid) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Returns array of child collection object ids 
 */
function hw_getchildcoll($link, $objid) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Returns array of child collection object records 
 */
function hw_getchildcollobj($link, $objid) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Returns all children ids which are documents 
 */
function hw_getchilddoccoll($link, $objid) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Returns all children object records which are documents 
 */
function hw_getchilddoccollobj($link, $objid) ;

/**
 * @return string
 * @param  link int
 * @param  objid int
 * @param  query string[optional]
 * @desc   Returns object record  
 */
function hw_getobject($link, $objid, $query = null) ;

/**
 * @return array
 * @param  link int
 * @param  query string
 * @param  maxhits int
 * @desc   Search for query as fulltext and return maxhits objids 
 */
function hw_getobjectbyftquery($link, $query, $maxhits) ;

/**
 * @return array
 * @param  link int
 * @param  collid int
 * @param  query string
 * @param  maxhits int
 * @desc   Search for fulltext query in collection and return maxhits objids 
 */
function hw_getobjectbyftquerycoll($link, $collid, $query, $maxhits) ;

/**
 * @return array
 * @param  link int
 * @param  collid int
 * @param  query string
 * @param  maxhits int
 * @desc   Search for fulltext query in collection and return maxhits object records 
 */
function hw_getobjectbyftquerycollobj($link, $collid, $query, $maxhits) ;

/**
 * @return array
 * @param  link int
 * @param  query string
 * @param  maxhits int
 * @desc   Search for query as fulltext and return maxhits object records 
 */
function hw_getobjectbyftqueryobj($link, $query, $maxhits) ;

/**
 * @return array
 * @param  link int
 * @param  query string
 * @param  maxhits int
 * @desc   Search for query and return maxhits objids 
 */
function hw_getobjectbyquery($link, $query, $maxhits) ;

/**
 * @return array
 * @param  link int
 * @param  collid int
 * @param  query string
 * @param  maxhits int
 * @desc   Search for query in collection and return maxhits objids 
 */
function hw_getobjectbyquerycoll($link, $collid, $query, $maxhits) ;

/**
 * @return array
 * @param  link int
 * @param  collid int
 * @param  query string
 * @param  maxhits int
 * @desc   Search for query in collection and return maxhits object records 
 */
function hw_getobjectbyquerycollobj($link, $collid, $query, $maxhits) ;

/**
 * @return array
 * @param  link int
 * @param  query string
 * @param  maxhits int
 * @desc   Search for query and return maxhits object records 
 */
function hw_getobjectbyqueryobj($link, $query, $maxhits) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Returns array of parent object ids 
 */
function hw_getparents($link, $objid) ;

/**
 * @return array
 * @param  link int
 * @param  objid int
 * @desc   Returns array of parent object records 
 */
function hw_getparentsobj($link, $objid) ;

/**
 * @return string
 * @param  link int
 * @param  rootid int
 * @param  sourceid int
 * @param  destid int
 * @desc   Get link from source to dest relative to rootid 
 */
function hw_getrellink($link, $rootid, $sourceid, $destid) ;

/**
 * @return int
 * @param  link int
 * @param  objid int
 * @desc   Returns the content of a remote document 
 */
function hw_getremote($link, $objid) ;

/**
 * @return [array|int]
 * @param  link int
 * @param  objrec string
 * @desc   Returns the remote document or an array of object records 
 */
function hw_getremotechildren($link, $objrec) ;

/**
 * @return int
 * @param  link int
 * @param  destid int
 * @desc   Returns object id of source docuent by destination anchor 
 */
function hw_getsrcbydestobj($link, $destid) ;

/**
 * @return hwdoc
 * @param  link int
 * @param  objid int
 * @param  rootid int[optional]
 * @desc   Returns text document. Links are relative to rootid if given 
 */
function hw_gettext($link, $objid, $rootid = null) ;

/**
 * @return string
 * @param  link int
 * @desc   Returns the current user name 
 */
function hw_getusername($link) ;

/**
 * @return void
 * @param  link int
 * @param  username string
 * @param  password string
 * @desc   Identifies at Hyperwave server 
 */
function hw_identify($link, $username, $password) ;

/**
 * @return array
 * @param  link int
 * @param  objids array
 * @param  collids array
 * @param  para int
 * @desc   Returns object ids which are in collections 
 */
function hw_incollections($link, $objids, $collids, $para) ;

/**
 * @return void
 * @param  link int
 * @desc   Outputs info string 
 */
function hw_info($link) ;

/**
 * @return void
 * @param  link int
 * @param  parentid int
 * @param  objarr array
 * @desc   Inserts collection 
 */
function hw_inscoll($link, $parentid, $objarr) ;

/**
 * @return void
 * @param  link int
 * @param  parentid int
 * @param  objrec string
 * @param  text string[optional]
 * @desc   Inserts document 
 */
function hw_insdoc($link, $parentid, $objrec, $text = null) ;

/**
 * @return string
 * @param  hwdoc int
 * @param  anchorecs array
 * @param  dest array
 * @param  urlprefixes array[optional]
 * @desc   Inserts only anchors into text 
 */
function hw_insertanchors($hwdoc, $anchorecs, $dest, $urlprefixes = null) ;

/**
 * @return void
 * @param  link int
 * @param  parentid int
 * @param  doc hwdoc
 * @desc   Insert new document 
 */
function hw_insertdocument($link, $parentid, $doc) ;

/**
 * @return int
 * @param  link int
 * @param  objrec string
 * @param  parms string
 * @desc   Inserts an object 
 */
function hw_insertobject($link, $objrec, $parms) ;

/**
 * @return int
 * @param  link int
 * @param  serverid int
 * @param  destid int
 * @desc   Returns virtual object id of document on remote Hyperwave server 
 */
function hw_mapid($link, $serverid, $destid) ;

/**
 * @return void
 * @param  link int
 * @param  objid int
 * @param  remattributes array
 * @param  addattributes array
 * @param  mode int[optional]
 * @desc   Modifies attributes of an object 
 */
function hw_modifyobject($link, $objid, $remattributes, $addattributes, $mode = null) ;

/**
 * @return void
 * @param  link int
 * @param  objrec array
 * @param  from int
 * @param  dest int
 * @desc   Moves object 
 */
function hw_mv($link, $objrec, $from, $dest) ;

/**
 * @return hwdoc
 * @param  objrec string
 * @param  data string
 * @param  size int
 * @desc   Create a new document 
 */
function hw_new_document($objrec, $data, $size) ;

/**
 * @return hwdoc
 * @param  objrec string
 * @param  filename string
 * @desc   Create a new document from a file 
 */
function hw_new_document_from_file($objrec, $filename) ;

/**
 * @return array
 * @param  objrec string
 * @param  format array[optional]
 * @desc   Returns object array of object record 
 */
function hw_objrec2array($objrec, $format = null) ;

/**
 * @return void
 * @param  doc hwdoc
 * @desc   Prints document 
 */
function hw_output_document($doc) ;

/**
 * @return void
 * @param  doc hwdoc
 * @desc   An alias for hw_output_document 
 */
function hw_outputdocument($doc) ;

/**
 * @return int
 * @param  host string
 * @param  port int
 * @param  username string[optional]
 * @param  password string[optional]
 * @desc   Connect to the Hyperwave server persistent 
 */
function hw_pconnect($host, $port, $username = null, $password = null) ;

/**
 * @return hwdoc
 * @param  link int
 * @param  objid int
 * @desc   Returns output of CGI script 
 */
function hw_pipecgi($link, $objid) ;

/**
 * @return hwdoc
 * @param  link int
 * @param  objid int
 * @desc   Returns document 
 */
function hw_pipedocument($link, $objid) ;

/**
 * @return int
 * @desc   Returns object id of root collection 
 */
function hw_root() ;

/**
 * @return void
 * @param  link int
 * @param  rootid int
 * @desc   Set the id to which links are calculated 
 */
function hw_setlinkroot($link, $rootid) ;

/**
 * @return string
 * @param  link int
 * @desc   Returns status string 
 */
function hw_stat($link) ;

/**
 * @return void
 * @param  link int
 * @param  objid int
 * @desc   Unlocks object 
 */
function hw_unlock($link, $objid) ;

/**
 * @return array
 * @param  link int
 * @desc   Returns names and info of users loged in 
 */
function hw_who($link) ;

/**
 * @return float
 * @param  num1 float
 * @param  num2 float
 * @desc   Returns sqrt(num1*num1 + num2*num2) 
 */
function hypot($num1, $num2) ;

/**
 * @return string
 * @param  str string
 * @param  to_encoding string
 * @param  from_encoding mixed[optional]
 * @desc   Returns converted string in desired encoding 
 */
function i18n_convert($str, $to_encoding, $from_encoding = null) ;

/**
 * @return string
 * @param  str string
 * @param  encoding_list mixed[optional]
 * @param  strict bool[optional]
 * @desc   Encodings of the given string is returned (as a string) 
 */
function i18n_discover_encoding($str, $encoding_list = null, $strict = null) ;

/**
 * @return mixed
 * @param  type string[optional]
 * @desc   Returns the input encoding 
 */
function i18n_http_input($type = null) ;

/**
 * @return string
 * @param  encoding string[optional]
 * @desc   Sets the current output_encoding or returns the current output_encoding as a string 
 */
function i18n_http_output($encoding = null) ;

/**
 * @return string
 * @param  encoding string[optional]
 * @desc   Sets the current internal encoding or Returns the current internal encoding as a string 
 */
function i18n_internal_encoding($encoding = null) ;

/**
 * @return string
 * @param  str string
 * @param  option string[optional]
 * @param  encoding string[optional]
 * @desc   Conversion between full-width character and half-width character (Japanese) 
 */
function i18n_ja_jp_hantozen($str, $option = null, $encoding = null) ;

/**
 * @return string
 * @param  string string
 * @desc   Decodes the MIME "encoded-word" in the string 
 */
function i18n_mime_header_decode($string) ;

/**
 * @return string
 * @param  str string
 * @param  charset string[optional]
 * @param  transfer_encoding string[optional]
 * @param  linefeed string[optional]
 * @desc   Converts the string to MIME "encoded-word" in the format of =?charset?(B|Q)?encoded_string?= 
 */
function i18n_mime_header_encode($str, $charset = null, $transfer_encoding = null, $linefeed = null) ;

/**
 * @return bool
 * @param  server string
 * @param  dba_user_name string
 * @param  dba_password string
 * @param  user_name string
 * @param  password string
 * @param  first_name string[optional]
 * @param  middle_name string[optional]
 * @param  last_name string[optional]
 * @desc   Add an user to security database (only for IB6 or later) 
 */
function ibase_add_user($server, $dba_user_name, $dba_password, $user_name, $password, $first_name = null, $middle_name = null, $last_name = null) ;

/**
 * @return bool
 * @param  blob_id int
 * @param  data string
 * @desc   Add data into created blob 
 */
function ibase_blob_add($blob_id, $data) ;

/**
 * @return bool
 * @param  blob_id int
 * @desc   Cancel creating blob 
 */
function ibase_blob_cancel($blob_id) ;

/**
 * @return bool
 * @param  blob_id int
 * @desc   Close blob 
 */
function ibase_blob_close($blob_id) ;

/**
 * @return int
 * @param  link_identifier resource[optional]
 * @desc   Create blob for adding data 
 */
function ibase_blob_create($link_identifier = null) ;

/**
 * @return bool
 * @param  blob_id_str string
 * @desc   Output blob contents to browser 
 */
function ibase_blob_echo($blob_id_str) ;

/**
 * @return string
 * @param  blob_id int
 * @param  len int
 * @desc   Get len bytes data from open blob 
 */
function ibase_blob_get($blob_id, $len) ;

/**
 * @return string
 * @param  link_identifier resource[optional]
 * @param  file_id int
 * @desc   Create blob, copy file in it, and close it 
 */
function ibase_blob_import($link_identifier = null, $file_id) ;

/**
 * @return object
 * @param  blob_id_str string
 * @desc   Return blob length and other useful info 
 */
function ibase_blob_info($blob_id_str) ;

/**
 * @return int
 * @param  blob_id string
 * @desc   Open blob for retriving data parts 
 */
function ibase_blob_open($blob_id) ;

/**
 * @return bool
 * @param  link_identifier resource[optional]
 * @desc   Close an InterBase connection 
 */
function ibase_close($link_identifier = null) ;

/**
 * @return bool
 * @param  link_identifier resource
 * @desc   Commit transaction 
 */
function ibase_commit($link_identifier) ;

/**
 * @return resource
 * @param  database string
 * @param  username string[optional]
 * @param  password string[optional]
 * @param  charset string[optional]
 * @param  buffers int[optional]
 * @param  dialect int[optional]
 * @param  role string[optional]
 * @desc   Open a connection to an InterBase database 
 */
function ibase_connect($database, $username = null, $password = null, $charset = null, $buffers = null, $dialect = null, $role = null) ;

/**
 * @return bool
 * @param  server string
 * @param  dba_user_name string
 * @param  dba_password string
 * @param  username string
 * @desc   Delete an user from security database (only for IB6 or later) 
 */
function ibase_delete_user($server, $dba_user_name, $dba_password, $username) ;

/**
 * @return string
 * @desc   Return error message 
 */
function ibase_errmsg() ;

/**
 * @return resource
 * @param  query resource
 * @param  bind_args int[optional]
 * @vararg ... int
 * @desc   Execute a previously prepared query 
 */
function ibase_execute($query, $bind_args = null) ;

/**
 * @return array
 * @param  result resource
 * @param  blob_flag int[optional]
 * @desc   Fetch a row  from the results of a query 
 */
function ibase_fetch_assoc($result, $blob_flag = null) ;

/**
 * @return object
 * @param  result resource
 * @param  blob_flag int[optional]
 * @desc   Fetch a object from the results of a query 
 */
function ibase_fetch_object($result, $blob_flag = null) ;

/**
 * @return array
 * @param  result resource
 * @param  blob_flag int[optional]
 * @desc   Fetch a row  from the results of a query 
 */
function ibase_fetch_row($result, $blob_flag = null) ;

/**
 * @return array
 * @param  result resource
 * @param  field_number int
 * @desc   Get information about a field 
 */
function ibase_field_info($result, $field_number) ;

/**
 * @return bool
 * @param  query resource
 * @desc   Free memory used by a query 
 */
function ibase_free_query($query) ;

/**
 * @return bool
 * @param  result resource
 * @desc   Free the memory used by a result 
 */
function ibase_free_result($result) ;

/**
 * @return bool
 * @param  server string
 * @param  dba_user_name string
 * @param  dba_password string
 * @param  user_name string
 * @param  password string
 * @param  first_name string[optional]
 * @param  middle_name string[optional]
 * @param  last_name string[optional]
 * @desc   Modify an user in security database (only for IB6 or later) 
 */
function ibase_modify_user($server, $dba_user_name, $dba_password, $user_name, $password, $first_name = null, $middle_name = null, $last_name = null) ;

/**
 * @return int
 * @param  result resource
 * @desc   Get the number of fields in result 
 */
function ibase_num_fields($result) ;

/**
 * @return resource
 * @param  database string
 * @param  username string[optional]
 * @param  password string[optional]
 * @param  charset string[optional]
 * @param  buffers int[optional]
 * @param  dialect int[optional]
 * @param  role string[optional]
 * @desc   Open a persistent connection to an InterBase database 
 */
function ibase_pconnect($database, $username = null, $password = null, $charset = null, $buffers = null, $dialect = null, $role = null) ;

/**
 * @return resource
 * @param  link_identifier resource[optional]
 * @param  query string
 * @desc   Prepare a query for later execution 
 */
function ibase_prepare($link_identifier = null, $query) ;

/**
 * @return resource
 * @param  link_identifier resource[optional]
 * @param  query string[optional]
 * @param  bind_args int[optional]
 * @desc   Execute a query 
 */
function ibase_query($link_identifier = null, $query = null, $bind_args = null) ;

/**
 * @return bool
 * @param  link_identifier resource
 * @desc   Rollback transaction 
 */
function ibase_rollback($link_identifier) ;

/**
 * @return int
 * @param  format string
 * @desc   Sets the format of timestamp, date and time columns returned from queries 
 */
function ibase_timefmt($format) ;

/**
 * @return resource
 * @param  trans_args int[optional]
 * @param  link_identifier resource[optional]
 * @desc   Start transaction 
 */
function ibase_trans($trans_args = null, $link_identifier = null) ;

/**
 * @return string
 * @param  in_charset string
 * @param  out_charset string
 * @param  str string
 * @desc   Returns str converted to the out_charset character set 
 */
function iconv($in_charset, $out_charset, $str) ;

/**
 * @return array
 * @param  type string[optional]
 * @desc   Get internal encoding and output encoding for ob_iconv_handler() 
 */
function iconv_get_encoding($type = null) ;

/**
 * @return bool
 * @param  type string
 * @param  charset string
 * @desc   Sets internal encoding and output encoding for ob_iconv_handler() 
 */
function iconv_set_encoding($type, $charset) ;

/**
 * @return string
 * @param  doc_handle object
 * @desc   Returns array of ids 
 */
function ids($doc_handle) ;

/**
 * @return int
 * @param  resultid resource
 * @desc   Returns the number of rows affected by query identified by resultid 
 */
function ifx_affected_rows($resultid) ;

/**
 * @return bool
 * @param  mode int
 * @desc   Sets the default blob-mode for all select-queries  
 */
function ifx_blobinfile_mode($mode) ;

/**
 * @return bool
 * @param  mode int
 * @desc   Sets the default byte-mode for all select-queries  
 */
function ifx_byteasvarchar($mode) ;

/**
 * @return bool
 * @param  connid resource[optional]
 * @desc   Close informix connection 
 */
function ifx_close($connid = null) ;

/**
 * @return resource
 * @param  database string[optional]
 * @param  userid string[optional]
 * @param  password string[optional]
 * @desc   Connects to database using userid/password, returns connection id 
 */
function ifx_connect($database = null, $userid = null, $password = null) ;

/**
 * @return int
 * @param  bid int
 * @desc   Duplicates the given blob-object 
 */
function ifx_copy_blob($bid) ;

/**
 * @return int
 * @param  type int
 * @param  mode int
 * @param  param string
 * @desc   Creates a blob-object 
 */
function ifx_create_blob($type, $mode, $param) ;

/**
 * @return int
 * @param  param string
 * @desc   Creates a char-object 
 */
function ifx_create_char($param) ;

/**
 * @return bool
 * @param  resultid resource
 * @desc   Executes a previously prepared query or opens a cursor for it 
 */
function ifx_do($resultid) ;

/**
 * @return string
 * @param  connection_id resource[optional]
 * @desc   Returns the Informix error codes (SQLSTATE & SQLCODE) 
 */
function ifx_error($connection_id = null) ;

/**
 * @return string
 * @param  errorcode int[optional]
 * @desc   Returns the Informix errormessage associated with  
 */
function ifx_errormsg($errorcode = null) ;

/**
 * @return array
 * @param  resultid resource
 * @param  position mixed[optional]
 * @desc   Fetches the next row or <position> row if using a scroll cursor 
 */
function ifx_fetch_row($resultid, $position = null) ;

/**
 * @return array
 * @param  resultid resource
 * @desc   Returns an associative for query <resultid> array with fieldnames as key 
 */
function ifx_fieldproperties($resultid) ;

/**
 * @return array
 * @param  resultid resource
 * @desc   Returns an associative array with fieldnames as key for query <resultid> 
 */
function ifx_fieldtypes($resultid) ;

/**
 * @return int
 * @param  bid int
 * @desc   Deletes the blob-object 
 */
function ifx_free_blob($bid) ;

/**
 * @return bool
 * @param  bid int
 * @desc   Deletes the char-object 
 */
function ifx_free_char($bid) ;

/**
 * @return bool
 * @param  resultid resource
 * @desc   Releases resources for query associated with resultid 
 */
function ifx_free_result($resultid) ;

/**
 * @return string
 * @param  bid int
 * @desc   Returns the content of the blob-object 
 */
function ifx_get_blob($bid) ;

/**
 * @return string
 * @param  bid int
 * @desc   Returns the content of the char-object 
 */
function ifx_get_char($bid) ;

/**
 * @return array
 * @param  resultid resource
 * @desc   Returns the sqlerrd[] fields of the sqlca struct for query resultid 
 */
function ifx_getsqlca($resultid) ;

/**
 * @return int
 * @param  resultid resource
 * @param  htmltableoptions string[optional]
 * @desc   Formats all rows of the resultid query into a html table 
 */
function ifx_htmltbl_result($resultid, $htmltableoptions = null) ;

/**
 * @return bool
 * @param  mode int
 * @desc   Sets the default return value of a NULL-value on a fetch-row  
 */
function ifx_nullformat($mode) ;

/**
 * @return int
 * @param  resultid resource
 * @desc   Returns the number of columns in query resultid 
 */
function ifx_num_fields($resultid) ;

/**
 * @return int
 * @param  resultid resource
 * @desc   Returns the number of rows already fetched for query identified by resultid 
 */
function ifx_num_rows($resultid) ;

/**
 * @return resource
 * @param  database string[optional]
 * @param  userid string[optional]
 * @param  password string[optional]
 * @desc   Connects to database using userid/password, returns connection id 
 */
function ifx_pconnect($database = null, $userid = null, $password = null) ;

/**
 * @return resource
 * @param  query string
 * @param  connid resource
 * @param  cursortype int[optional]
 * @param  idarray array[optional]
 * @desc   Prepare a query on a given connection 
 */
function ifx_prepare($query, $connid, $cursortype = null, $idarray = null) ;

/**
 * @return resource
 * @param  query string
 * @param  connid resource
 * @param  cursortype int[optional]
 * @param  idarray array[optional]
 * @desc   Perform a query on a given connection 
 */
function ifx_query($query, $connid, $cursortype = null, $idarray = null) ;

/**
 * @return bool
 * @param  mode int
 * @desc   Sets the default text-mode for all select-queries 
 */
function ifx_textasvarchar($mode) ;

/**
 * @return int
 * @param  bid int
 * @param  content string
 * @desc   Updates the content of the blob-object 
 */
function ifx_update_blob($bid, $content) ;

/**
 * @return bool
 * @param  bid int
 * @param  content string
 * @desc   Updates the content of the char-object 
 */
function ifx_update_char($bid, $content) ;

/**
 * @return bool
 * @param  bid int
 * @desc   Deletes the slob-object 
 */
function ifxus_close_slob($bid) ;

/**
 * @return int
 * @param  mode int
 * @desc   Creates a slob-object and opens it 
 */
function ifxus_create_slob($mode) ;

/**
 * @return bool
 * @param  bid int
 * @desc   Deletes the slob-object 
 */
function ifxus_free_slob($bid) ;

/**
 * @return int
 * @param  bid int
 * @param  mode int
 * @desc   Opens an slob-object 
 */
function ifxus_open_slob($bid, $mode) ;

/**
 * @return string
 * @param  bid int
 * @param  nbytes int
 * @desc   Reads nbytes of the slob-object 
 */
function ifxus_read_slob($bid, $nbytes) ;

/**
 * @return int
 * @param  bid int
 * @param  mode int
 * @param  offset long
 * @desc   Sets the current file or seek position of an open slob-object 
 */
function ifxus_seek_slob($bid, $mode, $offset) ;

/**
 * @return int
 * @param  bid int
 * @desc   Returns the current file or seek position of an open slob-object 
 */
function ifxus_tell_slob($bid) ;

/**
 * @return int
 * @param  bid int
 * @param  content string
 * @desc   Writes a string into the slob-object 
 */
function ifxus_write_slob($bid, $content) ;

/**
 * @return int
 * @param  value bool
 * @desc   Set whether we want to ignore a user abort event or not 
 */
function ignore_user_abort($value) ;

/**
 * @return int
 * @param  im int
 * @param  filename string[optional]
 * @param  threshold int[optional]
 * @desc   Output WBMP image to browser or file 
 */
function image2wbmp($im, $filename = null, $threshold = null) ;

/**
 * @return string
 * @param  imagetype int
 * @desc   Get Mime-Type for image-type returned by getimagesize, exif_read_data, exif_thumbnail, exif_imagetype 
 */
function image_type_to_mime_type($imagetype) ;

/**
 * @return void
 * @param  im resource
 * @param  on bool
 * @desc   Turn alpha blending mode on or off for the given image 
 */
function imagealphablending($im, $on) ;

/**
 * @return int
 * @param  im int
 * @param  cx int
 * @param  cy int
 * @param  w int
 * @param  h int
 * @param  s int
 * @param  e int
 * @param  col int
 * @desc   Draw a partial ellipse 
 */
function imagearc($im, $cx, $cy, $w, $h, $s, $e, $col) ;

/**
 * @return int
 * @param  im int
 * @param  font int
 * @param  x int
 * @param  y int
 * @param  c string
 * @param  col int
 * @desc   Draw a character 
 */
function imagechar($im, $font, $x, $y, $c, $col) ;

/**
 * @return int
 * @param  im int
 * @param  font int
 * @param  x int
 * @param  y int
 * @param  c string
 * @param  col int
 * @desc   Draw a character rotated 90 degrees counter-clockwise 
 */
function imagecharup($im, $font, $x, $y, $c, $col) ;

/**
 * @return int
 * @param  im int
 * @param  red int
 * @param  green int
 * @param  blue int
 * @desc   Allocate a color for an image 
 */
function imagecolorallocate($im, $red, $green, $blue) ;

/**
 * @return int
 * @param  im resource
 * @param  red int
 * @param  green int
 * @param  blue int
 * @param  alpha int
 * @desc   Allocate a color with an alpha level.  Works for true color and palette based images 
 */
function imagecolorallocatealpha($im, $red, $green, $blue, $alpha) ;

/**
 * @return int
 * @param  im int
 * @param  x int
 * @param  y int
 * @desc   Get the index of the color of a pixel 
 */
function imagecolorat($im, $x, $y) ;

/**
 * @return int
 * @param  im int
 * @param  red int
 * @param  green int
 * @param  blue int
 * @desc   Get the index of the closest color to the specified color 
 */
function imagecolorclosest($im, $red, $green, $blue) ;

/**
 * @return int
 * @param  im resource
 * @param  red int
 * @param  green int
 * @param  blue int
 * @param  alpha int
 * @desc   Find the closest matching colour with alpha transparency 
 */
function imagecolorclosestalpha($im, $red, $green, $blue, $alpha) ;

/**
 * @return int
 * @param  im int
 * @param  red int
 * @param  green int
 * @param  blue int
 * @desc   Get the index of the color which has the hue, white and blackness nearest to the given color 
 */
function imagecolorclosesthwb($im, $red, $green, $blue) ;

/**
 * @return int
 * @param  im int
 * @param  index int
 * @desc   De-allocate a color for an image 
 */
function imagecolordeallocate($im, $index) ;

/**
 * @return int
 * @param  im int
 * @param  red int
 * @param  green int
 * @param  blue int
 * @desc   Get the index of the specified color 
 */
function imagecolorexact($im, $red, $green, $blue) ;

/**
 * @return int
 * @param  im resource
 * @param  red int
 * @param  green int
 * @param  blue int
 * @param  alpha int
 * @desc   Find exact match for colour with transparency 
 */
function imagecolorexactalpha($im, $red, $green, $blue, $alpha) ;

/**
 * @return void
 * @param  im1 resource
 * @param  im2 resource
 * @desc   Makes the colors of the palette version of an image more closely match the true color version 
 */
function imagecolormatch($im1, $im2) ;

/**
 * @return int
 * @param  im int
 * @param  red int
 * @param  green int
 * @param  blue int
 * @desc   Get the index of the specified color or its closest possible alternative 
 */
function imagecolorresolve($im, $red, $green, $blue) ;

/**
 * @return int
 * @param  im resource
 * @param  red int
 * @param  green int
 * @param  blue int
 * @param  alpha int
 * @desc   Resolve/Allocate a colour with an alpha level.  Works for true colour and palette based images 
 */
function imagecolorresolvealpha($im, $red, $green, $blue, $alpha) ;

/**
 * @return int
 * @param  im int
 * @param  col int
 * @param  red int
 * @param  green int
 * @param  blue int
 * @desc   Set the color for the specified palette index 
 */
function imagecolorset($im, $col, $red, $green, $blue) ;

/**
 * @return array
 * @param  im int
 * @param  col int
 * @desc   Get the colors for an index 
 */
function imagecolorsforindex($im, $col) ;

/**
 * @return int
 * @param  im int
 * @desc   Find out the number of colors in an image's palette 
 */
function imagecolorstotal($im) ;

/**
 * @return int
 * @param  im int
 * @param  col int[optional]
 * @desc   Define a color as transparent 
 */
function imagecolortransparent($im, $col = null) ;

/**
 * @return int
 * @param  dst_im int
 * @param  src_im int
 * @param  dst_x int
 * @param  dst_y int
 * @param  src_x int
 * @param  src_y int
 * @param  src_w int
 * @param  src_h int
 * @desc   Copy part of an image 
 */
function imagecopy($dst_im, $src_im, $dst_x, $dst_y, $src_x, $src_y, $src_w, $src_h) ;

/**
 * @return int
 * @param  src_im int
 * @param  dst_im int
 * @param  dst_x int
 * @param  dst_y int
 * @param  src_x int
 * @param  src_y int
 * @param  src_w int
 * @param  src_h int
 * @param  pct int
 * @desc   Merge one part of an image with another 
 */
function imagecopymerge($src_im, $dst_im, $dst_x, $dst_y, $src_x, $src_y, $src_w, $src_h, $pct) ;

/**
 * @return int
 * @param  src_im int
 * @param  dst_im int
 * @param  dst_x int
 * @param  dst_y int
 * @param  src_x int
 * @param  src_y int
 * @param  src_w int
 * @param  src_h int
 * @param  pct int
 * @desc   Merge one part of an image with another 
 */
function imagecopymergegray($src_im, $dst_im, $dst_x, $dst_y, $src_x, $src_y, $src_w, $src_h, $pct) ;

/**
 * @return int
 * @param  dst_im int
 * @param  src_im int
 * @param  dst_x int
 * @param  dst_y int
 * @param  src_x int
 * @param  src_y int
 * @param  dst_w int
 * @param  dst_h int
 * @param  src_w int
 * @param  src_h int
 * @desc   Copy and resize part of an image using resampling to help ensure clarity 
 */
function imagecopyresampled($dst_im, $src_im, $dst_x, $dst_y, $src_x, $src_y, $dst_w, $dst_h, $src_w, $src_h) ;

/**
 * @return int
 * @param  dst_im int
 * @param  src_im int
 * @param  dst_x int
 * @param  dst_y int
 * @param  src_x int
 * @param  src_y int
 * @param  dst_w int
 * @param  dst_h int
 * @param  src_w int
 * @param  src_h int
 * @desc   Copy and resize part of an image 
 */
function imagecopyresized($dst_im, $src_im, $dst_x, $dst_y, $src_x, $src_y, $dst_w, $dst_h, $src_w, $src_h) ;

/**
 * @return int
 * @param  x_size int
 * @param  y_size int
 * @desc   Create a new image 
 */
function imagecreate($x_size, $y_size) ;

/**
 * @return int
 * @param  filename string
 * @desc   Create a new image from GD file or URL 
 */
function imagecreatefromgd($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Create a new image from GD2 file or URL 
 */
function imagecreatefromgd2($filename) ;

/**
 * @return int
 * @param  filename string
 * @param  srcX int
 * @param  srcY int
 * @param  width int
 * @param  height int
 * @desc   Create a new image from a given part of GD2 file or URL 
 */
function imagecreatefromgd2part($filename, $srcX, $srcY, $width, $height) ;

/**
 * @return int
 * @param  filename string
 * @desc   Create a new image from GIF file or URL 
 */
function imagecreatefromgif($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Create a new image from JPEG file or URL 
 */
function imagecreatefromjpeg($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Create a new image from PNG file or URL 
 */
function imagecreatefrompng($filename) ;

/**
 * @return int
 * @param  image string
 * @desc   Create a new image from the image stream in the string 
 */
function imagecreatefromstring($image) ;

/**
 * @return int
 * @param  filename string
 * @desc   Create a new image from WBMP file or URL 
 */
function imagecreatefromwbmp($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Create a new image from XBM file or URL 
 */
function imagecreatefromxbm($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Create a new image from XPM file or URL 
 */
function imagecreatefromxpm($filename) ;

/**
 * @return int
 * @param  x_size int
 * @param  y_size int
 * @desc   Create a new true color image 
 */
function imagecreatetruecolor($x_size, $y_size) ;

/**
 * @return int
 * @param  im int
 * @param  x1 int
 * @param  y1 int
 * @param  x2 int
 * @param  y2 int
 * @param  col int
 * @desc   Draw a dashed line 
 */
function imagedashedline($im, $x1, $y1, $x2, $y2, $col) ;

/**
 * @return int
 * @param  im int
 * @desc   Destroy an image 
 */
function imagedestroy($im) ;

/**
 * @return void
 * @param  im resource
 * @param  cx int
 * @param  cy int
 * @param  w int
 * @param  h int
 * @param  color int
 * @desc   Draw an ellipse 
 */
function imageellipse($im, $cx, $cy, $w, $h, $color) ;

/**
 * @return int
 * @param  im int
 * @param  x int
 * @param  y int
 * @param  col int
 * @desc   Flood fill 
 */
function imagefill($im, $x, $y, $col) ;

/**
 * @return int
 * @param  im int
 * @param  cx int
 * @param  cy int
 * @param  w int
 * @param  h int
 * @param  s int
 * @param  e int
 * @param  col int
 * @param  style int
 * @desc   Draw a filled partial ellipse 
 */
function imagefilledarc($im, $cx, $cy, $w, $h, $s, $e, $col, $style) ;

/**
 * @return void
 * @param  im resource
 * @param  cx int
 * @param  cy int
 * @param  w int
 * @param  h int
 * @param  color int
 * @desc   Draw an ellipse 
 */
function imagefilledellipse($im, $cx, $cy, $w, $h, $color) ;

/**
 * @return int
 * @param  im int
 * @param  point array
 * @param  num_points int
 * @param  col int
 * @desc   Draw a filled polygon 
 */
function imagefilledpolygon($im, $point, $num_points, $col) ;

/**
 * @return int
 * @param  im int
 * @param  x1 int
 * @param  y1 int
 * @param  x2 int
 * @param  y2 int
 * @param  col int
 * @desc   Draw a filled rectangle 
 */
function imagefilledrectangle($im, $x1, $y1, $x2, $y2, $col) ;

/**
 * @return int
 * @param  im int
 * @param  x int
 * @param  y int
 * @param  border int
 * @param  col int
 * @desc   Flood fill to specific color 
 */
function imagefilltoborder($im, $x, $y, $border, $col) ;

/**
 * @return int
 * @param  font int
 * @desc   Get font height 
 */
function imagefontheight($font) ;

/**
 * @return int
 * @param  font int
 * @desc   Get font width 
 */
function imagefontwidth($font) ;

/**
 * @return array
 * @param  size int
 * @param  angle int
 * @param  font_file string
 * @param  text string
 * @param  extrainfo array
 * @desc   Give the bounding box of a text using fonts via freetype2 
 */
function imageftbbox($size, $angle, $font_file, $text, $extrainfo) ;

/**
 * @return array
 * @param  im int
 * @param  size int
 * @param  angle int
 * @param  x int
 * @param  y int
 * @param  col int
 * @param  font_file string
 * @param  text string
 * @param  extrainfo array[optional]
 * @desc   Write text to the image using fonts via freetype2 
 */
function imagefttext($im, $size, $angle, $x, $y, $col, $font_file, $text, $extrainfo = null) ;

/**
 * @return int
 * @param  im int
 * @param  inputgamma float
 * @param  outputgamma float
 * @desc   Apply a gamma correction to a GD image 
 */
function imagegammacorrect($im, $inputgamma, $outputgamma) ;

/**
 * @return int
 * @param  im int
 * @param  filename string[optional]
 * @desc   Output GD image to browser or file 
 */
function imagegd($im, $filename = null) ;

/**
 * @return int
 * @param  im int
 * @param  filename string[optional]
 * @param  chunk_size int[optional]
 * @param  type int[optional]
 * @desc   Output GD2 image to browser or file 
 */
function imagegd2($im, $filename = null, $chunk_size = null, $type = null) ;

/**
 * @return int
 * @param  im int
 * @param  filename string[optional]
 * @desc   Output GIF image to browser or file 
 */
function imagegif($im, $filename = null) ;

/**
 * @return int
 * @param  im int
 * @param  interlace int[optional]
 * @desc   Enable or disable interlace 
 */
function imageinterlace($im, $interlace = null) ;

/**
 * @return int
 * @param  im int
 * @desc   return true if the image uses truecolor 
 */
function imageistruecolor($im) ;

/**
 * @return int
 * @param  im int
 * @param  filename string[optional]
 * @param  quality int[optional]
 * @desc   Output JPEG image to browser or file 
 */
function imagejpeg($im, $filename = null, $quality = null) ;

/**
 * @return void
 * @param  im resource
 * @param  effect int
 * @desc   Set the alpha blending flag to use the bundled libgd layering effects 
 */
function imagelayereffect($im, $effect) ;

/**
 * @return int
 * @param  im int
 * @param  x1 int
 * @param  y1 int
 * @param  x2 int
 * @param  y2 int
 * @param  col int
 * @desc   Draw a line 
 */
function imageline($im, $x1, $y1, $x2, $y2, $col) ;

/**
 * @return int
 * @param  filename string
 * @desc   Load a new font 
 */
function imageloadfont($filename) ;

/**
 * @return int
 * @param  dst int
 * @param  src int
 * @desc   Copy the palette from the src image onto the dst image 
 */
function imagepalettecopy($dst, $src) ;

/**
 * @return int
 * @param  im int
 * @param  filename string[optional]
 * @desc   Output PNG image to browser or file 
 */
function imagepng($im, $filename = null) ;

/**
 * @return int
 * @param  im int
 * @param  point array
 * @param  num_points int
 * @param  col int
 * @desc   Draw a polygon 
 */
function imagepolygon($im, $point, $num_points, $col) ;

/**
 * @return array
 * @param  text string
 * @param  font int
 * @param  size int
 * @param  space int[optional]
 * @param  tightness int
 * @param  angle int
 * @desc   Return the bounding box needed by a string if rasterized 
 */
function imagepsbbox($text, $font, $size, $space = null, $tightness, $angle) ;

/**
 * @return int
 * @param  font_index int
 * @desc   Make a copy of a font for purposes like extending or reenconding 
 */
function imagepscopyfont($font_index) ;

/**
 * @return bool
 * @param  font_index int
 * @param  filename string
 * @desc   To change a fonts character encoding vector 
 */
function imagepsencodefont($font_index, $filename) ;

/**
 * @return bool
 * @param  font_index int
 * @param  extend float
 * @desc   Extend or or condense (if extend < 1) a font 
 */
function imagepsextendfont($font_index, $extend) ;

/**
 * @return bool
 * @param  font_index int
 * @desc   Free memory used by a font 
 */
function imagepsfreefont($font_index) ;

/**
 * @return int
 * @param  pathname string
 * @desc   Load a new font from specified file 
 */
function imagepsloadfont($pathname) ;

/**
 * @return bool
 * @param  font_index int
 * @param  slant float
 * @desc   Slant a font 
 */
function imagepsslantfont($font_index, $slant) ;

/**
 * @return array
 * @param  image int
 * @param  text string
 * @param  font int
 * @param  size int
 * @param  xcoord int
 * @param  ycoord int
 * @param  space int[optional]
 * @param  tightness int
 * @param  angle float
 * @param  antialias int
 * @desc   Rasterize a string over an image 
 */
function imagepstext($image, $text, $font, $size, $xcoord, $ycoord, $space = null, $tightness, $angle, $antialias) ;

/**
 * @return int
 * @param  im int
 * @param  x1 int
 * @param  y1 int
 * @param  x2 int
 * @param  y2 int
 * @param  col int
 * @desc   Draw a rectangle 
 */
function imagerectangle($im, $x1, $y1, $x2, $y2, $col) ;

/**
 * @return int
 * @param  src_im int
 * @param  angle float
 * @param  bgdcolor int
 * @desc   Rotate an image using a custom angle 
 */
function imagerotate($src_im, $angle, $bgdcolor) ;

/**
 * @return void
 * @param  im resource
 * @param  on bool
 * @desc   Include alpha channel to a saved image 
 */
function imagesavealpha($im, $on) ;

/**
 * @return int
 * @param  image resource
 * @param  brush resource
 * @desc   Set the brush image to $brush when filling $image with the "IMG_COLOR_BRUSHED" color 
 */
function imagesetbrush($image, $brush) ;

/**
 * @return int
 * @param  im int
 * @param  x int
 * @param  y int
 * @param  col int
 * @desc   Set a single pixel 
 */
function imagesetpixel($im, $x, $y, $col) ;

/**
 * @return void
 * @param  im resource
 * @param  styles array
 * @desc   Set the line drawing styles for use with imageline and IMG_COLOR_STYLED. 
 */
function imagesetstyle($im, $styles) ;

/**
 * @return void
 * @param  im resource
 * @param  thickness int
 * @desc   Set line thickness for drawing lines, ellipses, rectangles, polygons etc. 
 */
function imagesetthickness($im, $thickness) ;

/**
 * @return int
 * @param  image resource
 * @param  tile resource
 * @desc   Set the tile image to $tile when filling $image with the "IMG_COLOR_TILED" color 
 */
function imagesettile($image, $tile) ;

/**
 * @return int
 * @param  im int
 * @param  font int
 * @param  x int
 * @param  y int
 * @param  str string
 * @param  col int
 * @desc   Draw a string horizontally 
 */
function imagestring($im, $font, $x, $y, $str, $col) ;

/**
 * @return int
 * @param  im int
 * @param  font int
 * @param  x int
 * @param  y int
 * @param  str string
 * @param  col int
 * @desc   Draw a string vertically - rotated 90 degrees counter-clockwise 
 */
function imagestringup($im, $font, $x, $y, $str, $col) ;

/**
 * @return int
 * @param  im int
 * @desc   Get image width 
 */
function imagesx($im) ;

/**
 * @return int
 * @param  im int
 * @desc   Get image height 
 */
function imagesy($im) ;

/**
 * @return void
 * @param  im resource
 * @param  ditherFlag bool
 * @param  colorsWanted int
 * @desc   Convert a true colour image to a palette based image with a number of colours, optionally using dithering. 
 */
function imagetruecolortopalette($im, $ditherFlag, $colorsWanted) ;

/**
 * @return array
 * @param  size int
 * @param  angle int
 * @param  font_file string
 * @param  text string
 * @desc   Give the bounding box of a text using TrueType fonts 
 */
function imagettfbbox($size, $angle, $font_file, $text) ;

/**
 * @return array
 * @param  im int
 * @param  size int
 * @param  angle int
 * @param  x int
 * @param  y int
 * @param  col int
 * @param  font_file string
 * @param  text string
 * @desc   Write text to the image using a TrueType font 
 */
function imagettftext($im, $size, $angle, $x, $y, $col, $font_file, $text) ;

/**
 * @return int
 * @desc   Return the types of images supported in a bitfield - 1=GIF, 2=JPEG, 4=PNG, 8=WBMP, 16=XPM 
 */
function imagetypes() ;

/**
 * @return int
 * @param  im int
 * @param  filename string[optional]
 * @param  foreground int[optional]
 * @desc   Output WBMP image to browser or file 
 */
function imagewbmp($im, $filename = null, $foreground = null) ;

/**
 * @return string
 * @param  text string
 * @desc   Convert an 8-bit string to a quoted-printable string 
 */
function imap_8bit($text) ;

/**
 * @return array
 * @desc   Returns an array of all IMAP alerts that have been generated since the last page load or since the last imap_alerts() call, whichever came last. The alert stack is cleared after imap_alerts() is called. 
 */
function imap_alerts() ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  folder string
 * @param  message string
 * @param  options string[optional]
 * @desc   Append a new message to a specified mailbox 
 */
function imap_append($stream_id, $folder, $message, $options = null) ;

/**
 * @return string
 * @param  text string
 * @desc   Decode BASE64 encoded text 
 */
function imap_base64($text) ;

/**
 * @return string
 * @param  text string
 * @desc   Convert an 8bit string to a base64 string 
 */
function imap_binary($text) ;

/**
 * @return string
 * @param  stream_id resource
 * @param  msg_no int
 * @param  options int[optional]
 * @desc   Read the message body 
 */
function imap_body($stream_id, $msg_no, $options = null) ;

/**
 * @return object
 * @param  stream_id resource
 * @param  msg_no int
 * @param  section int
 * @desc   Read the structure of a specified body section of a specific message 
 */
function imap_bodystruct($stream_id, $msg_no, $section) ;

/**
 * @return object
 * @param  stream_id resource
 * @desc   Get mailbox properties 
 */
function imap_check($stream_id) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  sequence string
 * @param  flag string
 * @param  options int[optional]
 * @desc   Clears flags on messages 
 */
function imap_clearflag_full($stream_id, $sequence, $flag, $options = null) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  options int[optional]
 * @desc   Close an IMAP stream 
 */
function imap_close($stream_id, $options = null) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  mailbox string
 * @desc   Create a new mailbox 
 */
function imap_create($stream_id, $mailbox) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  mailbox string
 * @desc   Create a new mailbox 
 */
function imap_createmailbox($stream_id, $mailbox) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  msg_no int
 * @param  options int[optional]
 * @desc   Mark a message for deletion 
 */
function imap_delete($stream_id, $msg_no, $options = null) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  mailbox string
 * @desc   Delete a mailbox 
 */
function imap_deletemailbox($stream_id, $mailbox) ;

/**
 * @return array
 * @desc   Returns an array of all IMAP errors generated since the last page load, or since the last imap_errors() call, whichever came last. The error stack is cleared after imap_errors() is called. 
 */
function imap_errors() ;

/**
 * @return bool
 * @param  stream_id resource
 * @desc   Permanently delete all messages marked for deletion 
 */
function imap_expunge($stream_id) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  msg_no int
 * @param  options int[optional]
 * @desc   Read an overview of the information in the headers of the given message sequence 
 */
function imap_fetch_overview($stream_id, $msg_no, $options = null) ;

/**
 * @return string
 * @param  stream_id resource
 * @param  msg_no int
 * @param  section int
 * @param  options int[optional]
 * @desc   Get a specific body section 
 */
function imap_fetchbody($stream_id, $msg_no, $section, $options = null) ;

/**
 * @return string
 * @param  stream_id resource
 * @param  msg_no int
 * @param  options int[optional]
 * @desc   Get the full unfiltered header for a message 
 */
function imap_fetchheader($stream_id, $msg_no, $options = null) ;

/**
 * @return object
 * @param  stream_id resource
 * @param  msg_no int
 * @param  options int[optional]
 * @desc   Read the full structure of a message 
 */
function imap_fetchstructure($stream_id, $msg_no, $options = null) ;

/**
 * @return string
 * @param  stream_id resource
 * @param  msg_no int
 * @param  options int[optional]
 * @desc   Read the message body 
 */
function imap_fetchtext($stream_id, $msg_no, $options = null) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  qroot string
 * @desc   Returns the quota set to the mailbox account qroot 
 */
function imap_get_quota($stream_id, $qroot) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  mbox string
 * @desc   Returns the quota set to the mailbox account mbox 
 */
function imap_get_quotaroot($stream_id, $mbox) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  ref string
 * @param  pattern string
 * @desc   Reads the list of mailboxes and returns a full array of objects containing name, attributes, and delimiter 
 */
function imap_getmailboxes($stream_id, $ref, $pattern) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  ref string
 * @param  pattern string
 * @desc   Return a list of subscribed mailboxes, in the same format as imap_getmailboxes() 
 */
function imap_getsubscribed($stream_id, $ref, $pattern) ;

/**
 * @return object
 * @param  stream_id resource
 * @param  msg_no int
 * @param  from_length int[optional]
 * @param  subject_length int[optional]
 * @param  default_host string[optional]
 * @desc   Read the headers of the message 
 */
function imap_header($stream_id, $msg_no, $from_length = null, $subject_length = null, $default_host = null) ;

/**
 * @return object
 * @param  stream_id resource
 * @param  msg_no int
 * @param  from_length int[optional]
 * @param  subject_length int[optional]
 * @param  default_host string[optional]
 * @desc   Read the headers of the message 
 */
function imap_headerinfo($stream_id, $msg_no, $from_length = null, $subject_length = null, $default_host = null) ;

/**
 * @return array
 * @param  stream_id resource
 * @desc   Returns headers for all messages in a mailbox 
 */
function imap_headers($stream_id) ;

/**
 * @return string
 * @desc   Returns the last error that was generated by an IMAP function. The error stack is NOT cleared after this call. 
 */
function imap_last_error() ;

/**
 * @return array
 * @param  stream_id resource
 * @param  ref string
 * @param  pattern string
 * @desc   Read the list of mailboxes 
 */
function imap_list($stream_id, $ref, $pattern) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  ref string
 * @param  pattern string
 * @desc   Read the list of mailboxes 
 */
function imap_listmailbox($stream_id, $ref, $pattern) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  ref string
 * @param  pattern string
 * @desc   Return a list of subscribed mailboxes 
 */
function imap_listsubscribed($stream_id, $ref, $pattern) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  ref string
 * @param  pattern string
 * @desc   Return a list of subscribed mailboxes 
 */
function imap_lsub($stream_id, $ref, $pattern) ;

/**
 * @return int
 * @param  to string
 * @param  subject string
 * @param  message string
 * @param  additional_headers string[optional]
 * @param  cc string[optional]
 * @param  bcc string[optional]
 * @param  rpath string[optional]
 * @desc   Send an email message 
 */
function imap_mail($to, $subject, $message, $additional_headers = null, $cc = null, $bcc = null, $rpath = null) ;

/**
 * @return string
 * @param  envelope array
 * @param  body array
 * @desc   Create a MIME message based on given envelope and body sections 
 */
function imap_mail_compose($envelope, $body) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  msg_no int
 * @param  mailbox string
 * @param  options int[optional]
 * @desc   Copy specified message to a mailbox 
 */
function imap_mail_copy($stream_id, $msg_no, $mailbox, $options = null) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  msg_no int
 * @param  mailbox string
 * @param  options int[optional]
 * @desc   Move specified message to a mailbox 
 */
function imap_mail_move($stream_id, $msg_no, $mailbox, $options = null) ;

/**
 * @return object
 * @param  stream_id resource
 * @desc   Returns info about the current mailbox 
 */
function imap_mailboxmsginfo($stream_id) ;

/**
 * @return array
 * @param  str string
 * @desc   Decode mime header element in accordance with RFC 2047 and return array of objects containing 'charset' encoding and decoded 'text' 
 */
function imap_mime_header_decode($str) ;

/**
 * @return int
 * @param  stream_id resource
 * @param  unique_msg_id int
 * @desc   Get the sequence number associated with a UID 
 */
function imap_msgno($stream_id, $unique_msg_id) ;

/**
 * @return int
 * @param  stream_id resource
 * @desc   Gives the number of messages in the current mailbox 
 */
function imap_num_msg($stream_id) ;

/**
 * @return int
 * @param  stream_id resource
 * @desc   Gives the number of recent messages in current mailbox 
 */
function imap_num_recent($stream_id) ;

/**
 * @return resource
 * @param  mailbox string
 * @param  user string
 * @param  password string
 * @param  options int[optional]
 * @desc   Open an IMAP stream to a mailbox 
 */
function imap_open($mailbox, $user, $password, $options = null) ;

/**
 * @return bool
 * @param  stream_id resource
 * @desc   Check if the IMAP stream is still active 
 */
function imap_ping($stream_id) ;

/**
 * @return string
 * @param  text string
 * @desc   Convert a quoted-printable string to an 8-bit string 
 */
function imap_qprint($text) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  old_name string
 * @param  new_name string
 * @desc   Rename a mailbox 
 */
function imap_rename($stream_id, $old_name, $new_name) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  old_name string
 * @param  new_name string
 * @desc   Rename a mailbox 
 */
function imap_renamemailbox($stream_id, $old_name, $new_name) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  mailbox string
 * @param  options int[optional]
 * @desc   Reopen an IMAP stream to a new mailbox 
 */
function imap_reopen($stream_id, $mailbox, $options = null) ;

/**
 * @return array
 * @param  address_string string
 * @param  default_host string
 * @desc   Parses an address string 
 */
function imap_rfc822_parse_adrlist($address_string, $default_host) ;

/**
 * @return object
 * @param  headers string
 * @param  default_host string[optional]
 * @desc   Parse a set of mail headers contained in a string, and return an object similar to imap_headerinfo() 
 */
function imap_rfc822_parse_headers($headers, $default_host = null) ;

/**
 * @return string
 * @param  mailbox string
 * @param  host string
 * @param  personal string
 * @desc   Returns a properly formatted email address given the mailbox, host, and personal info 
 */
function imap_rfc822_write_address($mailbox, $host, $personal) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  ref string
 * @param  pattern string
 * @param  content string
 * @desc   Read list of mailboxes containing a certain string 
 */
function imap_scan($stream_id, $ref, $pattern, $content) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  criteria string
 * @param  options int[optional]
 * @param  charset string[optional]
 * @desc   Return a list of messages matching the given criteria 
 */
function imap_search($stream_id, $criteria, $options = null, $charset = null) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  qroot string
 * @param  mailbox_size int
 * @desc   Will set the quota for qroot mailbox 
 */
function imap_set_quota($stream_id, $qroot, $mailbox_size) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  mailbox string
 * @param  id string
 * @param  rights string
 * @desc   Sets the ACL for a given mailbox 
 */
function imap_setacl($stream_id, $mailbox, $id, $rights) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  sequence string
 * @param  flag string
 * @param  options int[optional]
 * @desc   Sets flags on messages 
 */
function imap_setflag_full($stream_id, $sequence, $flag, $options = null) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  criteria int
 * @param  reverse int
 * @param  options int[optional]
 * @param  search_criteria string[optional]
 * @param  charset string[optional]
 * @desc   Sort an array of message headers, optionally including only messages that meet specified criteria. 
 */
function imap_sort($stream_id, $criteria, $reverse, $options = null, $search_criteria = null, $charset = null) ;

/**
 * @return object
 * @param  stream_id resource
 * @param  mailbox string
 * @param  options int
 * @desc   Get status info from a mailbox 
 */
function imap_status($stream_id, $mailbox, $options) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  mailbox string
 * @desc   Subscribe to a mailbox 
 */
function imap_subscribe($stream_id, $mailbox) ;

/**
 * @return array
 * @param  stream_id resource
 * @param  options int[optional]
 * @desc   Return threaded by REFERENCES tree 
 */
function imap_thread($stream_id, $options = null) ;

/**
 * @return mixed
 * @param  timeout_type int
 * @param  timeout int[optional]
 * @desc   Set or fetch imap timeout 
 */
function imap_timeout($timeout_type, $timeout = null) ;

/**
 * @return int
 * @param  stream_id resource
 * @param  msg_no int
 * @desc   Get the unique message id associated with a standard sequential message number 
 */
function imap_uid($stream_id, $msg_no) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  msg_no int
 * @desc   Remove the delete flag from a message 
 */
function imap_undelete($stream_id, $msg_no) ;

/**
 * @return bool
 * @param  stream_id resource
 * @param  mailbox string
 * @desc   Unsubscribe from a mailbox 
 */
function imap_unsubscribe($stream_id, $mailbox) ;

/**
 * @return string
 * @param  buf string
 * @desc   Decode a modified UTF-7 string 
 */
function imap_utf7_decode($buf) ;

/**
 * @return string
 * @param  buf string
 * @desc   Encode a string in modified UTF-7 
 */
function imap_utf7_encode($buf) ;

/**
 * @return string
 * @param  mime_encoded_text string
 * @desc   Convert a mime-encoded text to UTF-8 
 */
function imap_utf8($mime_encoded_text) ;

/**
 * @return object
 * @desc   Returns DomeDOMImplementation 
 */
function implementation() ;

/**
 * @return string
 * @param  glue string[optional]
 * @param  pieces array
 * @desc   Joins array elements placing glue string between items and return one string 
 */
function implode($glue = null, $pieces) ;

/**
 * @return bool
 * @param  types string
 * @param  prefix string[optional]
 * @desc   Import GET/POST/Cookie variables into the global scope 
 */
function import_request_variables($types, $prefix = null) ;

/**
 * @return object
 * @param  node object
 * @param  recursive bool
 * @desc   Creates new element node 
 */
function imported_node($node, $recursive) ;

/**
 * @return bool
 * @param  needle mixed
 * @param  haystack array
 * @param  strict bool[optional]
 * @desc   Checks if the given value exists in the array 
 */
function in_array($needle, $haystack, $strict = null) ;

/**
 * @return bool
 * @param  link resource[optional]
 * @desc   Switch autocommit on or off 
 */
function ingres_autocommit($link = null) ;

/**
 * @return bool
 * @param  link resource[optional]
 * @desc   Close an Ingres II database connection 
 */
function ingres_close($link = null) ;

/**
 * @return bool
 * @param  link resource[optional]
 * @desc   Commit a transaction 
 */
function ingres_commit($link = null) ;

/**
 * @return resource
 * @param  database string[optional]
 * @param  username string[optional]
 * @param  password string[optional]
 * @desc   Open a connection to an Ingres II database the syntax of database is [node_id::]dbname[/svr_class] 
 */
function ingres_connect($database = null, $username = null, $password = null) ;

/**
 * @return array
 * @param  result_type int[optional]
 * @param  link resource[optional]
 * @desc   Fetch a row of result into an array result_type can be II_NUM for enumerated array, II_ASSOC for associative array, or II_BOTH (default) 
 */
function ingres_fetch_array($result_type = null, $link = null) ;

/**
 * @return array
 * @param  result_type int[optional]
 * @param  link resource[optional]
 * @desc   Fetch a row of result into an object result_type can be II_NUM for enumerated object, II_ASSOC for associative object, or II_BOTH (default) 
 */
function ingres_fetch_object($result_type = null, $link = null) ;

/**
 * @return array
 * @param  link resource[optional]
 * @desc   Fetch a row of result into an enumerated array 
 */
function ingres_fetch_row($link = null) ;

/**
 * @return string
 * @param  index int
 * @param  link resource[optional]
 * @desc   Return the length of a field in a query result index must be >0 and <= ingres_num_fields() 
 */
function ingres_field_length($index, $link = null) ;

/**
 * @return string
 * @param  index int
 * @param  link resource[optional]
 * @desc   Return the name of a field in a query result index must be >0 and <= ingres_num_fields() 
 */
function ingres_field_name($index, $link = null) ;

/**
 * @return string
 * @param  index int
 * @param  link resource[optional]
 * @desc   Return true if the field is nullable and false otherwise index must be >0 and <= ingres_num_fields() 
 */
function ingres_field_nullable($index, $link = null) ;

/**
 * @return string
 * @param  index int
 * @param  link resource[optional]
 * @desc   Return the precision of a field in a query result index must be >0 and <= ingres_num_fields() 
 */
function ingres_field_precision($index, $link = null) ;

/**
 * @return string
 * @param  index int
 * @param  link resource[optional]
 * @desc   Return the scale of a field in a query result index must be >0 and <= ingres_num_fields() 
 */
function ingres_field_scale($index, $link = null) ;

/**
 * @return string
 * @param  index int
 * @param  link resource[optional]
 * @desc   Return the type of a field in a query result index must be >0 and <= ingres_num_fields() 
 */
function ingres_field_type($index, $link = null) ;

/**
 * @return int
 * @param  link resource[optional]
 * @desc   Return the number of fields returned by the last query 
 */
function ingres_num_fields($link = null) ;

/**
 * @return int
 * @param  link resource[optional]
 * @desc   Return the number of rows affected/returned by the last query 
 */
function ingres_num_rows($link = null) ;

/**
 * @return resource
 * @param  database string[optional]
 * @param  username string[optional]
 * @param  password string[optional]
 * @desc   Open a persistent connection to an Ingres II database the syntax of database is [node_id::]dbname[/svr_class] 
 */
function ingres_pconnect($database = null, $username = null, $password = null) ;

/**
 * @return bool
 * @param  query string
 * @param  link resource[optional]
 * @desc   Send a SQL query to Ingres II 
 */
function ingres_query($query, $link = null) ;

/**
 * @return bool
 * @param  link resource[optional]
 * @desc   Roll back a transaction 
 */
function ingres_rollback($link = null) ;

/**
 * @return string
 * @param  varname string
 * @param  newvalue string
 * @desc   Set a configuration option, returns false on error and the old value of the configuration option on success 
 */
function ini_alter($varname, $newvalue) ;

/**
 * @return string
 * @param  varname string
 * @desc   Get a configuration option 
 */
function ini_get($varname) ;

/**
 * @return array
 * @param  extension string[optional]
 * @desc   Get all configuration options 
 */
function ini_get_all($extension = null) ;

/**
 * @return void
 * @param  varname string
 * @desc   Restore the value of a configuration option specified by varname 
 */
function ini_restore($varname) ;

/**
 * @return string
 * @param  varname string
 * @param  newvalue string
 * @desc   Set a configuration option, returns false on error and the old value of the configuration option on success 
 */
function ini_set($varname, $newvalue) ;

/**
 * @return object
 * @param  newnode object
 * @param  refnode object
 * @desc   Adds node in list of nodes before given node 
 */
function insert_before($newnode, $refnode) ;

/**
 * @return int
 * @param  var mixed
 * @param  base int[optional]
 * @desc   Get the integer value of a variable using the optional base for the conversion 
 */
function intval($var, $base = null) ;

/**
 * @return int
 * @param  ip_address string
 * @desc   Converts a string containing an (IPv4) Internet Protocol dotted address into a proper address 
 */
function ip2long($ip_address) ;

/**
 * @return array
 * @param  iptcdata string
 * @param  jpeg_file_name string
 * @param  spool int[optional]
 * @desc   Embed binary IPTC data into a JPEG image. 
 */
function iptcembed($iptcdata, $jpeg_file_name, $spool = null) ;

/**
 * @return array
 * @param  iptcdata string
 * @desc   Parse binary IPTC-data into associative array 
 */
function iptcparse($iptcdata) ;

/**
 * @return bool
 * @param  connection int
 * @param  channel string
 * @param  mode_spec string
 * @param  nick string
 * @desc   Sets channel mode flags for user 
 */
function ircg_channel_mode($connection, $channel, $mode_spec, $nick) ;

/**
 * @return bool
 * @param  connection int
 * @param  reason string
 * @desc   Terminate IRC connection 
 */
function ircg_disconnect($connection, $reason) ;

/**
 * @return array
 * @param  params string
 * @desc   Decodes a list of JS-encoded parameters into a native array 
 */
function ircg_eval_ecmascript_params($params) ;

/**
 * @return array
 * @param  connection int
 * @desc   Returns the error from previous ircg operation 
 */
function ircg_fetch_error_msg($connection) ;

/**
 * @return string
 * @param  connection int
 * @desc   Gets username for connection 
 */
function ircg_get_username($connection) ;

/**
 * @return string
 * @param  html_text string
 * @desc   Encodes HTML preserving output 
 */
function ircg_html_encode($html_text) ;

/**
 * @return bool
 * @param  connection int
 * @param  nick string
 * @desc   Adds a user to your ignore list on a server 
 */
function ircg_ignore_add($connection, $nick) ;

/**
 * @return bool
 * @param  connection int
 * @param  nick string
 * @desc   Removes a user from your ignore list 
 */
function ircg_ignore_del($connection, $nick) ;

/**
 * @return bool
 * @param  connection int
 * @param  channel string
 * @param  nickname string
 * @desc   INVITEs nickname to channel 
 */
function ircg_invite($connection, $channel, $nickname) ;

/**
 * @return bool
 * @param  connection int
 * @desc   Checks connection status 
 */
function ircg_is_conn_alive($connection) ;

/**
 * @return bool
 * @param  connection int
 * @param  channel string
 * @param  chan_key string[optional]
 * @desc   Joins a channel on a connected server 
 */
function ircg_join($connection, $channel, $chan_key = null) ;

/**
 * @return bool
 * @param  connection int
 * @param  channel string
 * @param  nick string
 * @param  reason string
 * @desc   Kicks user from channel 
 */
function ircg_kick($connection, $channel, $nick, $reason) ;

/**
 * @return bool
 * @param  connection int
 * @param  channel string
 * @desc   List topic/user count of channel(s) 
 */
function ircg_list($connection, $channel) ;

/**
 * @return bool
 * @param  name string
 * @desc   Selects a set of format strings for display of IRC messages 
 */
function ircg_lookup_format_messages($name) ;

/**
 * @return bool
 * @param  connection int
 * @desc   IRC network statistics 
 */
function ircg_lusers($connection) ;

/**
 * @return bool
 * @param  connection int
 * @param  recipient string
 * @param  message string
 * @param  loop_suppress bool[optional]
 * @desc   Delivers a message to the IRC network 
 */
function ircg_msg($connection, $recipient, $message, $loop_suppress = null) ;

/**
 * @return bool
 * @param  connection int
 * @param  channel string
 * @param  target string[optional]
 * @desc   Queries visible usernames 
 */
function ircg_names($connection, $channel, $target = null) ;

/**
 * @return bool
 * @param  connection int
 * @param  newnick string
 * @desc   Changes the nickname 
 */
function ircg_nick($connection, $newnick) ;

/**
 * @return string
 * @param  nick string
 * @desc   Escapes special characters in nickname to be IRC-compliant 
 */
function ircg_nickname_escape($nick) ;

/**
 * @return string
 * @param  nick string
 * @desc   Decodes encoded nickname 
 */
function ircg_nickname_unescape($nick) ;

/**
 * @return bool
 * @param  connection int
 * @param  recipient string
 * @param  message string
 * @desc   Sends a one-way communication NOTICE to a target 
 */
function ircg_notice($connection, $recipient, $message) ;

/**
 * @return bool
 * @param  connection int
 * @param  name string
 * @param  password string
 * @desc   Elevates privileges to IRC OPER 
 */
function ircg_oper($connection, $name, $password) ;

/**
 * @return bool
 * @param  connection int
 * @param  channel string
 * @desc   Leaves a channel 
 */
function ircg_part($connection, $channel) ;

/**
 * @return int
 * @param  username string
 * @param  server string[optional]
 * @param  port int[optional]
 * @param  format_msg_set_name string[optional]
 * @param  ctcp_set array[optional]
 * @param  user_details array[optional]
 * @param  bailout_on_trivial bool[optional]
 * @desc   Create a persistent IRC connection 
 */
function ircg_pconnect($username, $server = null, $port = null, $format_msg_set_name = null, $ctcp_set = null, $user_details = null, $bailout_on_trivial = null) ;

/**
 * @return bool
 * @param  name string
 * @param  messages array
 * @desc   Registers a set of format strings for display of IRC messages 
 */
function ircg_register_format_messages($name, $messages) ;

/**
 * @return bool
 * @param  connection int
 * @desc   Sets current connection for output 
 */
function ircg_set_current($connection) ;

/**
 * @return bool
 * @param  connection int
 * @param  path string
 * @desc   Sets logfile for connection 
 */
function ircg_set_file($connection, $path) ;

/**
 * @return bool
 * @param  connection int
 * @param  host string
 * @param  port int
 * @param  data string
 * @desc   Sets hostaction to be executed when connection dies 
 */
function ircg_set_on_die($connection, $host, $port, $data) ;

/**
 * @return bool
 * @param  connection int
 * @param  channel string
 * @param  topic string
 * @desc   Sets topic for channel 
 */
function ircg_topic($connection, $channel, $topic) ;

/**
 * @return bool
 * @param  connection int
 * @param  mask string
 * @param  ops_only bool[optional]
 * @desc   Queries server for WHO information 
 */
function ircg_who($connection, $mask, $ops_only = null) ;

/**
 * @return bool
 * @param  connection int
 * @param  nick string
 * @desc   Queries user information for nick on server 
 */
function ircg_whois($connection, $nick) ;

/**
 * @return bool
 * @param  object object
 * @param  class_name string
 * @desc   Returns true if the object is of this class or has this class as one of its parents 
 */
function is_a($object, $class_name) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is an array 
 */
function is_array($var) ;

/**
 * @return bool
 * @desc   Returns true if node is blank 
 */
function is_blank_node() ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is a boolean 
 */
function is_bool($var) ;

/**
 * @return bool
 * @param  var mixed
 * @param  syntax_only bool[optional]
 * @param  callable_name string[optional]
 * @desc   Returns true if var is callable. 
 */
function is_callable($var, $syntax_only = null, $callable_name = null) ;

/**
 * @return bool
 * @param  filename string
 * @desc   Returns true if file is directory 
 */
function is_dir($filename) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is float point
 */
function is_double($var) ;

/**
 * @return bool
 * @param  filename string
 * @desc   Returns true if file is executable 
 */
function is_executable($filename) ;

/**
 * @return bool
 * @param  filename string
 * @desc   Returns true if file is a regular file 
 */
function is_file($filename) ;

/**
 * @return bool
 * @param  val float
 * @desc   Returns whether argument is finite 
 */
function is_finite($val) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is float point
 */
function is_float($var) ;

/**
 * @return bool
 * @param  val float
 * @desc   Returns whether argument is infinite 
 */
function is_infinite($val) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is a long (integer) 
 */
function is_int($var) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is a long (integer) 
 */
function is_integer($var) ;

/**
 * @return bool
 * @param  filename string
 * @desc   Returns true if file is symbolic link 
 */
function is_link($filename) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is a long (integer) 
 */
function is_long($var) ;

/**
 * @return bool
 * @param  val float
 * @desc   Returns whether argument is not a number 
 */
function is_nan($val) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is null 
 */
function is_null($var) ;

/**
 * @return bool
 * @param  value mixed
 * @desc   Returns true if value is a number or a numeric string 
 */
function is_numeric($value) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is an object 
 */
function is_object($var) ;

/**
 * @return bool
 * @param  filename string
 * @desc   Returns true if file can be read 
 */
function is_readable($filename) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is float point
 */
function is_real($var) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is a resource 
 */
function is_resource($var) ;

/**
 * @return bool
 * @param  value mixed
 * @desc   Returns true if value is a scalar 
 */
function is_scalar($value) ;

/**
 * @return bool
 * @param  var mixed
 * @desc   Returns true if variable is a string 
 */
function is_string($var) ;

/**
 * @return bool
 * @param  object object
 * @param  class_name string
 * @desc   Returns true if the object has this class as one of its parents 
 */
function is_subclass_of($object, $class_name) ;

/**
 * @return bool
 * @param  path string
 * @desc   Check if file was created by rfc1867 upload  
 */
function is_uploaded_file($path) ;

/**
 * @return bool
 * @param  filename string
 * @desc   Returns true if file can be written 
 */
function is_writable($filename) ;

/**
 * @return bool
 * @param  filename string
 * @desc   Returns true if file can be written 
 */
function is_writeable($filename) ;

/**
 * @return void
 * @desc   Clear last java extension 
 */
function java_last_exception_clear() ;

/**
 * @return object
 * @desc   Get last Java exception 
 */
function java_last_exception_get() ;

/**
 * @return mixed
 * @param  juliandaycount int
 * @param  mode int[optional]
 * @desc   Returns name or number of day of week from julian day count 
 */
function jddayofweek($juliandaycount, $mode = null) ;

/**
 * @return string
 * @param  juliandaycount int
 * @param  mode int
 * @desc   Returns name of month for julian day count 
 */
function jdmonthname($juliandaycount, $mode) ;

/**
 * @return string
 * @param  juliandaycount int
 * @desc   Converts a julian day count to a french republic calendar date 
 */
function jdtofrench($juliandaycount) ;

/**
 * @return string
 * @param  juliandaycount int
 * @desc   Converts a julian day count to a gregorian calendar date 
 */
function jdtogregorian($juliandaycount) ;

/**
 * @return string
 * @param  juliandaycount int
 * @desc   Converts a julian day count to a jewish calendar date 
 */
function jdtojewish($juliandaycount) ;

/**
 * @return string
 * @param  juliandaycount int
 * @desc   Convert a julian day count to a julian calendar date 
 */
function jdtojulian($juliandaycount) ;

/**
 * @return int
 * @param  jday int
 * @desc   Convert Julian Day to UNIX timestamp 
 */
function jdtounix($jday) ;

/**
 * @return int
 * @param  month int
 * @param  day int
 * @param  year int
 * @desc   Converts a jewish calendar date to a julian day count 
 */
function jewishtojd($month, $day, $year) ;

/**
 * @return string
 * @param  glue string[optional]
 * @param  pieces array
 * @desc   Joins array elements placing glue string between items and return one string 
 */
function join($glue = null, $pieces) ;

/**
 * @return void
 * @param  f_org string
 * @param  f_dest string
 * @param  d_height int
 * @param  d_width int
 * @param  threshold int
 * @desc   Convert JPEG image to WBMP image 
 */
function jpeg2wbmp ($f_org, $f_dest, $d_height, $d_width, $threshold) ;

/**
 * @return int
 * @param  month int
 * @param  day int
 * @param  year int
 * @desc   Converts a julian calendar date to julian day count 
 */
function juliantojd($month, $day, $year) ;

/**
 * @return mixed
 * @param  array_arg array
 * @desc   Return the key of the element currently pointed to by the internal array pointer 
 */
function key($array_arg) ;

/**
 * @return bool
 * @param  key mixed
 * @param  search array
 * @desc   Checks if the given key or index exists in the array 
 */
function key_exists($key, $search) ;

/**
 * @return bool
 * @param  array_arg array
 * @param  sort_flags int[optional]
 * @desc   Sort an array by key value in reverse order 
 */
function krsort($array_arg, $sort_flags = null) ;

/**
 * @return bool
 * @param  array_arg array
 * @param  sort_flags int[optional]
 * @desc   Sort an array by key 
 */
function ksort($array_arg, $sort_flags = null) ;

/**
 * @return void
 * @param  label string
 * @desc   Labels frame 
 */
function labelframe($label) ;

/**
 * @return object
 * @desc   Returns last child from list of children 
 */
function last_child() ;

/**
 * @return float
 * @desc   Returns a value from the combined linear congruential generator 
 */
function lcg_value() ;

/**
 * @return string
 * @param  value string
 * @desc   Translate 8859 characters to t61 characters 
 */
function ldap_8859_to_t61($value) ;

/**
 * @return bool
 * @param  link resource
 * @param  dn string
 * @param  entry array
 * @desc   Add entries to LDAP directory 
 */
function ldap_add($link, $dn, $entry) ;

/**
 * @return bool
 * @param  link resource
 * @param  dn string[optional]
 * @param  password string
 * @desc   Bind to LDAP directory 
 */
function ldap_bind($link, $dn = null, $password) ;

/**
 * @return bool
 * @param  link resource
 * @desc   Unbind from LDAP directory 
 */
function ldap_close($link) ;

/**
 * @return bool
 * @param  link resource
 * @param  dn string
 * @param  attr string
 * @param  value string
 * @desc   Determine if an entry has a specific value for one of its attributes 
 */
function ldap_compare($link, $dn, $attr, $value) ;

/**
 * @return resource
 * @param  host string[optional]
 * @param  port int[optional]
 * @desc   Connect to an LDAP server 
 */
function ldap_connect($host = null, $port = null) ;

/**
 * @return int
 * @param  link resource
 * @param  result resource
 * @desc   Count the number of entries in a search result 
 */
function ldap_count_entries($link, $result) ;

/**
 * @return bool
 * @param  link resource
 * @param  dn string
 * @desc   Delete an entry from a directory 
 */
function ldap_delete($link, $dn) ;

/**
 * @return string
 * @param  dn string
 * @desc   Convert DN to User Friendly Naming format 
 */
function ldap_dn2ufn($dn) ;

/**
 * @return string
 * @param  errno int
 * @desc   Convert error number to error string 
 */
function ldap_err2str($errno) ;

/**
 * @return int
 * @param  link resource
 * @desc   Get the current ldap error number 
 */
function ldap_errno($link) ;

/**
 * @return string
 * @param  link resource
 * @desc   Get the current ldap error string 
 */
function ldap_error($link) ;

/**
 * @return array
 * @param  dn string
 * @param  with_attrib int
 * @desc   Splits DN into its component parts 
 */
function ldap_explode_dn($dn, $with_attrib) ;

/**
 * @return string
 * @param  link resource
 * @param  result_entry resource
 * @param  ber int
 * @desc   Return first attribute 
 */
function ldap_first_attribute($link, $result_entry, $ber) ;

/**
 * @return resource
 * @param  link resource
 * @param  result resource
 * @desc   Return first result id 
 */
function ldap_first_entry($link, $result) ;

/**
 * @return resource
 * @param  link resource
 * @param  result resource
 * @desc   Return first reference 
 */
function ldap_first_reference($link, $result) ;

/**
 * @return bool
 * @param  result resource
 * @desc   Free result memory 
 */
function ldap_free_result($result) ;

/**
 * @return array
 * @param  link resource
 * @param  result_entry resource
 * @desc   Get attributes from a search result entry 
 */
function ldap_get_attributes($link, $result_entry) ;

/**
 * @return string
 * @param  link resource
 * @param  result_entry resource
 * @desc   Get the DN of a result entry 
 */
function ldap_get_dn($link, $result_entry) ;

/**
 * @return array
 * @param  link resource
 * @param  result resource
 * @desc   Get all result entries 
 */
function ldap_get_entries($link, $result) ;

/**
 * @return bool
 * @param  link resource
 * @param  option int
 * @param  retval mixed
 * @desc   Get the current value of various session-wide parameters 
 */
function ldap_get_option($link, $option, $retval) ;

/**
 * @return array
 * @param  link resource
 * @param  result_entry resource
 * @param  attribute string
 * @desc   Get all values from a result entry 
 */
function ldap_get_values($link, $result_entry, $attribute) ;

/**
 * @return array
 * @param  link resource
 * @param  result_entry resource
 * @param  attribute string
 * @desc   Get all values with lengths from a result entry 
 */
function ldap_get_values_len($link, $result_entry, $attribute) ;

/**
 * @return resource
 * @param  link resource
 * @param  base_dn string
 * @param  filter string
 * @param  attrs array[optional]
 * @param  attrsonly int[optional]
 * @param  sizelimit int[optional]
 * @param  timelimit int[optional]
 * @param  deref int[optional]
 * @desc   Single-level search 
 */
function ldap_list($link, $base_dn, $filter, $attrs = null, $attrsonly = null, $sizelimit = null, $timelimit = null, $deref = null) ;

/**
 * @return bool
 * @param  link resource
 * @param  dn string
 * @param  entry array
 * @desc   Add attribute values to current 
 */
function ldap_mod_add($link, $dn, $entry) ;

/**
 * @return bool
 * @param  link resource
 * @param  dn string
 * @param  entry array
 * @desc   Delete attribute values 
 */
function ldap_mod_del($link, $dn, $entry) ;

/**
 * @return bool
 * @param  link resource
 * @param  dn string
 * @param  entry array
 * @desc   Replace attribute values with new ones 
 */
function ldap_mod_replace($link, $dn, $entry) ;

/**
 * @return bool
 * @param  link resource
 * @param  dn string
 * @param  entry array
 * @desc   Replace attribute values with new ones 
 */
function ldap_modify($link, $dn, $entry) ;

/**
 * @return string
 * @param  link resource
 * @param  result_entry resource
 * @param  ber resource
 * @desc   Get the next attribute in result 
 */
function ldap_next_attribute($link, $result_entry, $ber) ;

/**
 * @return resource
 * @param  link resource
 * @param  result_entry resource
 * @desc   Get next result entry 
 */
function ldap_next_entry($link, $result_entry) ;

/**
 * @return resource
 * @param  link resource
 * @param  reference_entry resource
 * @desc   Get next reference 
 */
function ldap_next_reference($link, $reference_entry) ;

/**
 * @return bool
 * @param  link resource
 * @param  reference_entry resource
 * @param  referrals array
 * @desc   Extract information from reference entry 
 */
function ldap_parse_reference($link, $reference_entry, $referrals) ;

/**
 * @return bool
 * @param  link resource
 * @param  result resource
 * @param  errcode int
 * @param  matcheddn string
 * @param  errmsg string
 * @param  referrals array
 * @desc   Extract information from result 
 */
function ldap_parse_result($link, $result, $errcode, $matcheddn, $errmsg, $referrals) ;

/**
 * @return resource
 * @param  link resource
 * @param  base_dn string
 * @param  filter string
 * @param  attrs array[optional]
 * @param  attrsonly int[optional]
 * @param  sizelimit int[optional]
 * @param  timelimit int[optional]
 * @param  deref int[optional]
 * @desc   Read an entry 
 */
function ldap_read($link, $base_dn, $filter, $attrs = null, $attrsonly = null, $sizelimit = null, $timelimit = null, $deref = null) ;

/**
 * @return bool
 * @param  link resource
 * @param  dn string
 * @param  newrdn string
 * @param  newparent string
 * @param  deleteoldrdn bool
 * @desc   Modify the name of an entry 
 */
function ldap_rename($link, $dn, $newrdn, $newparent, $deleteoldrdn) ;

/**
 * @return resource
 * @param  link resource
 * @param  base_dn string
 * @param  filter string
 * @param  attrs array[optional]
 * @param  attrsonly int[optional]
 * @param  sizelimit int[optional]
 * @param  timelimit int[optional]
 * @param  deref int[optional]
 * @desc   Search LDAP tree under base_dn 
 */
function ldap_search($link, $base_dn, $filter, $attrs = null, $attrsonly = null, $sizelimit = null, $timelimit = null, $deref = null) ;

/**
 * @return bool
 * @param  link resource
 * @param  option int
 * @param  newval mixed
 * @desc   Set the value of various session-wide parameters 
 */
function ldap_set_option($link, $option, $newval) ;

/**
 * @return bool
 * @param  link resource
 * @param  callback string
 * @desc   Set a callback function to do re-binds on referral chasing. 
 */
function ldap_set_rebind_proc($link, $callback) ;

/**
 * @return bool
 * @param  link resource
 * @param  result resource
 * @param  sortfilter string
 * @desc   Sort LDAP result entries 
 */
function ldap_sort($link, $result, $sortfilter) ;

/**
 * @return bool
 * @param  link resource
 * @desc   Start TLS 
 */
function ldap_start_tls($link) ;

/**
 * @return string
 * @param  value string
 * @desc   Translate t61 characters to 8859 characters 
 */
function ldap_t61_to_8859($value) ;

/**
 * @return bool
 * @param  link resource
 * @desc   Unbind from LDAP directory 
 */
function ldap_unbind($link) ;

/**
 * @return void
 * @param  num_bytes int[optional]
 * @desc   Cause an intentional memory leak, for testing/debugging purposes 
 */
function leak($num_bytes = 3) ;

/**
 * @return array
 * @desc   Returns list of attribute names 
 */
function length() ;

/**
 * @return int
 * @param  str1 string
 * @param  str2 string
 * @desc   Calculate Levenshtein distance between two strings 
 */
function levenshtein($str1, $str2) ;

/**
 * @return 
 * @desc   Returns the coding type used for output compression 
 */
function lib_get_coding_type() ;

/**
 * @return int
 * @param  target string
 * @param  link string
 * @desc   Create a hard link 
 */
function link($target, $link) ;

/**
 * @return int
 * @param  filename string
 * @desc   Returns the st_dev field of the UNIX C stat structure describing the link 
 */
function linkinfo($filename) ;

/**
 * @return string
 * @param  lob object
 * @desc   Loads a large object 
 */
function load($lob) ;

/**
 * @return array
 * @desc   Returns numeric formatting information based on the current locale 
 */
function localeconv() ;

/**
 * @return array
 * @param  timestamp int[optional]
 * @param  associative_array bool[optional]
 * @desc   Returns the results of the C system call localtime as an associative array if the associative_array argument is set to 1 other wise it is a regular array 
 */
function localtime($timestamp = null, $associative_array = null) ;

/**
 * @return float
 * @param  number float
 * @param  base float[optional]
 * @desc   Returns the natural logarithm of the number, or the base log if base is specified 
 */
function log($number, $base = null) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the base-10 logarithm of the number 
 */
function log10($number) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns log(1 + number), computed in a way that accurate even when the value of number is close to zero 
 */
function log1p($number) ;

/**
 * @return string
 * @param  proper_address int
 * @desc   Converts an (IPv4) Internet network address into a string in Internet standard dotted format 
 */
function long2ip($proper_address) ;

/**
 * @return array
 * @param  filename string
 * @desc   Give information about a file or symbolic link 
 */
function lstat($filename) ;

/**
 * @return string
 * @param  str string
 * @param  character_mask string[optional]
 * @desc   Strips whitespace from the beginning of a string 
 */
function ltrim($str, $character_mask = null) ;

/**
 * @return unknown
 * @param  im int
 * @param  on bool
 * @desc   Should antialiased functions used or not
 */
function magesetantialias($im, $on) ;

/**
 * @return bool
 * @param  new_setting int
 * @desc   Set the current active configuration setting of magic_quotes_runtime and return previous 
 */
function magic_quotes_runtime($new_setting) ;

/**
 * @return int
 * @param  to string
 * @param  subject string
 * @param  message string
 * @param  additional_headers string[optional]
 * @param  additional_parameters string[optional]
 * @desc   Send an email message 
 */
function mail($to, $subject, $message, $additional_headers = null, $additional_parameters = null) ;

/**
 * @return int
 * @param  collection object
 * @desc   Return the max value of a collection.  For a varray this is the maximum length of the array 
 */
function max($collection) ;

/**
 * @return string
 * @param  sourcestring string
 * @param  mode int
 * @param  encoding string[optional]
 * @desc   Returns a case-folded version of sourcestring 
 */
function mb_convert_case($sourcestring, $mode, $encoding = null) ;

/**
 * @return string
 * @param  str string
 * @param  to_encoding string
 * @param  from_encoding mixed[optional]
 * @desc   Returns converted string in desired encoding 
 */
function mb_convert_encoding($str, $to_encoding, $from_encoding = null) ;

/**
 * @return string
 * @param  str string
 * @param  option string[optional]
 * @param  encoding string[optional]
 * @desc   Conversion between full-width character and half-width character (Japanese) 
 */
function mb_convert_kana($str, $option = null, $encoding = null) ;

/**
 * @return string
 * @param  to_encoding string
 * @param  from_encoding mixed
 * @vararg ... mixed
 * @desc   Converts the string resource in variables to desired encoding 
 */
function mb_convert_variables($to_encoding, $from_encoding) ;

/**
 * @return string
 * @param  string string
 * @desc   Decodes the MIME "encoded-word" in the string 
 */
function mb_decode_mimeheader($string) ;

/**
 * @return string
 * @param  string string
 * @param  convmap array
 * @param  encoding string[optional]
 * @desc   Converts HTML numeric entities to character code 
 */
function mb_decode_numericentity($string, $convmap, $encoding = null) ;

/**
 * @return string
 * @param  str string
 * @param  encoding_list mixed[optional]
 * @param  strict bool[optional]
 * @desc   Encodings of the given string is returned (as a string) 
 */
function mb_detect_encoding($str, $encoding_list = null, $strict = null) ;

/**
 * @return bool|array
 * @param  encoding_list mixed[optional]
 * @desc   Sets the current detect_order or Return the current detect_order as a array 
 */
function mb_detect_order($encoding_list = null) ;

/**
 * @return string
 * @param  str string
 * @param  charset string[optional]
 * @param  transfer_encoding string[optional]
 * @param  linefeed string[optional]
 * @desc   Converts the string to MIME "encoded-word" in the format of =?charset?(B|Q)?encoded_string?= 
 */
function mb_encode_mimeheader($str, $charset = null, $transfer_encoding = null, $linefeed = null) ;

/**
 * @return string
 * @param  string string
 * @param  convmap array
 * @param  encoding string[optional]
 * @desc   Converts specified characters to HTML numeric entities 
 */
function mb_encode_numericentity($string, $convmap, $encoding = null) ;

/**
 * @return int
 * @param  pattern string
 * @param  string string
 * @param  registers array[optional]
 * @desc   Regular expression match for multibyte string 
 */
function mb_ereg($pattern, $string, $registers = null) ;

/**
 * @return bool
 * @param  pattern string
 * @param  string string
 * @param  option string[optional]
 * @desc   Regular expression match for multibyte string 
 */
function mb_ereg_match($pattern, $string, $option = null) ;

/**
 * @return string
 * @param  pattern string
 * @param  replacement string
 * @param  string string
 * @param  option string[optional]
 * @desc   Replace regular expression for multibyte string 
 */
function mb_ereg_replace($pattern, $replacement, $string, $option = null) ;

/**
 * @return bool
 * @param  pattern string[optional]
 * @param  option string
 * @desc   Regular expression search for multibyte string 
 */
function mb_ereg_search($pattern = null, $option) ;

/**
 * @return int
 * @desc   Get search start position 
 */
function mb_ereg_search_getpos() ;

/**
 * @return array
 * @desc   Get matched substring of the last time 
 */
function mb_ereg_search_getregs() ;

/**
 * @return bool
 * @param  string string
 * @param  pattern string[optional]
 * @param  option string
 * @desc   Initialize string and regular expression for search. 
 */
function mb_ereg_search_init($string, $pattern = null, $option) ;

/**
 * @return array
 * @param  pattern string[optional]
 * @param  option string
 * @desc   Regular expression search for multibyte string 
 */
function mb_ereg_search_pos($pattern = null, $option) ;

/**
 * @return array
 * @param  pattern string[optional]
 * @param  option string
 * @desc   Regular expression search for multibyte string 
 */
function mb_ereg_search_regs($pattern = null, $option) ;

/**
 * @return bool
 * @param  position int
 * @desc   Set search start position 
 */
function mb_ereg_search_setpos($position) ;

/**
 * @return int
 * @param  pattern string
 * @param  string string
 * @param  registers array[optional]
 * @desc   Case-insensitive regular expression match for multibyte string 
 */
function mb_eregi($pattern, $string, $registers = null) ;

/**
 * @return string
 * @param  pattern string
 * @param  replacement string
 * @param  string string
 * @desc   Case insensitive replace regular expression for multibyte string 
 */
function mb_eregi_replace($pattern, $replacement, $string) ;

/**
 * @return string
 * @param  type string[optional]
 * @desc   Returns the current settings of mbstring 
 */
function mb_get_info($type = null) ;

/**
 * @return mixed
 * @param  type string[optional]
 * @desc   Returns the input encoding 
 */
function mb_http_input($type = null) ;

/**
 * @return string
 * @param  encoding string[optional]
 * @desc   Sets the current output_encoding or returns the current output_encoding as a string 
 */
function mb_http_output($encoding = null) ;

/**
 * @return string
 * @param  encoding string[optional]
 * @desc   Sets the current internal encoding or Returns the current internal encoding as a string 
 */
function mb_internal_encoding($encoding = null) ;

/**
 * @return string
 * @param  language string[optional]
 * @desc   Sets the current language or Returns the current language as a string 
 */
function mb_language($language = null) ;

/**
 * @return string
 * @param  contents string
 * @param  status int
 * @desc   Returns string in output buffer converted to the http_output encoding 
 */
function mb_output_handler($contents, $status) ;

/**
 * @return bool
 * @param  encoded_string string
 * @param  result array[optional]
 * @desc   Parses GET/POST/COOKIE data and sets global variables 
 */
function mb_parse_str($encoded_string, $result = null) ;

/**
 * @return string
 * @param  encoding string
 * @desc   Return the preferred MIME name (charset) as a string 
 */
function mb_preferred_mime_name($encoding) ;

/**
 * @return string
 * @param  encoding string[optional]
 * @desc   Returns the current encoding for regex as a string. 
 */
function mb_regex_encoding($encoding = null) ;

/**
 * @return string
 * @param  options string[optional]
 * @desc   Set or get the default options for mbregex functions 
 */
function mb_regex_set_options($options = null) ;

/**
 * @return int
 * @param  to string
 * @param  subject string
 * @param  message string
 * @param  additional_headers string[optional]
 * @param  additional_parameters string[optional]
 * @desc   
 */
function mb_send_mail($to, $subject, $message, $additional_headers = null, $additional_parameters = null) ;

/**
 * @return array
 * @param  pattern string
 * @param  string string
 * @param  limit int[optional]
 * @desc   split multibyte string into array by regular expression 
 */
function mb_split($pattern, $string, $limit = null) ;

/**
 * @return string
 * @param  str string
 * @param  start int
 * @param  length int[optional]
 * @param  encoding string[optional]
 * @desc   Returns part of a string 
 */
function mb_strcut($str, $start, $length = null, $encoding = null) ;

/**
 * @return string
 * @param  str string
 * @param  start int
 * @param  width int
 * @param  trimmarker string[optional]
 * @param  encoding string[optional]
 * @desc   Trim the string in terminal width 
 */
function mb_strimwidth($str, $start, $width, $trimmarker = null, $encoding = null) ;

/**
 * @return int
 * @param  str string
 * @param  encoding string[optional]
 * @desc   Get character numbers of a string 
 */
function mb_strlen($str, $encoding = null) ;

/**
 * @return int
 * @param  haystack string
 * @param  needle string
 * @param  offset int[optional]
 * @param  encoding string[optional]
 * @desc   Find position of first occurrence of a string within another 
 */
function mb_strpos($haystack, $needle, $offset = null, $encoding = null) ;

/**
 * @return int
 * @param  haystack string
 * @param  needle string
 * @param  encoding string[optional]
 * @desc   Find the last occurrence of a character in a string within another 
 */
function mb_strrpos($haystack, $needle, $encoding = null) ;

/**
 * @return string
 * @param  sourcestring string
 * @param  encoding string[optional]
 * @desc   
 */
function mb_strtolower($sourcestring, $encoding = null) ;

/**
 * @return string
 * @param  sourcestring string
 * @param  encoding string[optional]
 * @desc   
 */
function mb_strtoupper($sourcestring, $encoding = null) ;

/**
 * @return int
 * @param  str string
 * @param  encoding string[optional]
 * @desc   Gets terminal width of a string 
 */
function mb_strwidth($str, $encoding = null) ;

/**
 * @return mixed
 * @param  substchar mixed[optional]
 * @desc   Sets the current substitute_character or returns the current substitute_character 
 */
function mb_substitute_character($substchar = null) ;

/**
 * @return string
 * @param  str string
 * @param  start int
 * @param  length int[optional]
 * @param  encoding string[optional]
 * @desc   Returns part of a string 
 */
function mb_substr($str, $start, $length = null, $encoding = null) ;

/**
 * @return int
 * @param  haystack string
 * @param  needle string
 * @param  encoding string[optional]
 * @desc   Count the number of substring occurrences 
 */
function mb_substr_count($haystack, $needle, $encoding = null) ;

/**
 * @return int
 * @param  pattern string
 * @param  string string
 * @param  registers array[optional]
 * @desc   Regular expression match for multibyte string 
 */
function mbereg($pattern, $string, $registers = null) ;

/**
 * @return bool
 * @param  pattern string
 * @param  string string
 * @param  option string[optional]
 * @desc   Regular expression match for multibyte string 
 */
function mbereg_match($pattern, $string, $option = null) ;

/**
 * @return string
 * @param  pattern string
 * @param  replacement string
 * @param  string string
 * @param  option string[optional]
 * @desc   Replace regular expression for multibyte string 
 */
function mbereg_replace($pattern, $replacement, $string, $option = null) ;

/**
 * @return bool
 * @param  pattern string[optional]
 * @param  option string
 * @desc   Regular expression search for multibyte string 
 */
function mbereg_search($pattern = null, $option) ;

/**
 * @return int
 * @desc   Get search start position 
 */
function mbereg_search_getpos() ;

/**
 * @return array
 * @desc   Get matched substring of the last time 
 */
function mbereg_search_getregs() ;

/**
 * @return bool
 * @param  string string
 * @param  pattern string[optional]
 * @param  option string
 * @desc   Initialize string and regular expression for search. 
 */
function mbereg_search_init($string, $pattern = null, $option) ;

/**
 * @return array
 * @param  pattern string[optional]
 * @param  option string
 * @desc   Regular expression search for multibyte string 
 */
function mbereg_search_pos($pattern = null, $option) ;

/**
 * @return array
 * @param  pattern string[optional]
 * @param  option string
 * @desc   Regular expression search for multibyte string 
 */
function mbereg_search_regs($pattern = null, $option) ;

/**
 * @return bool
 * @param  position int
 * @desc   Set search start position 
 */
function mbereg_search_setpos($position) ;

/**
 * @return int
 * @param  pattern string
 * @param  string string
 * @param  registers array[optional]
 * @desc   Case-insensitive regular expression match for multibyte string 
 */
function mberegi($pattern, $string, $registers = null) ;

/**
 * @return string
 * @param  pattern string
 * @param  replacement string
 * @param  string string
 * @desc   Case insensitive replace regular expression for multibyte string 
 */
function mberegi_replace($pattern, $replacement, $string) ;

/**
 * @return string
 * @param  encoding string[optional]
 * @desc   Returns the current encoding for regex as a string. 
 */
function mbregex_encoding($encoding = null) ;

/**
 * @return array
 * @param  pattern string
 * @param  string string
 * @param  limit int[optional]
 * @desc   split multibyte string into array by regular expression 
 */
function mbsplit($pattern, $string, $limit = null) ;

/**
 * @return string
 * @param  str string
 * @param  start int
 * @param  length int[optional]
 * @param  encoding string[optional]
 * @desc   Returns part of a string 
 */
function mbstrcut($str, $start, $length = null, $encoding = null) ;

/**
 * @return int
 * @param  str string
 * @param  encoding string[optional]
 * @desc   Get character numbers of a string 
 */
function mbstrlen($str, $encoding = null) ;

/**
 * @return int
 * @param  haystack string
 * @param  needle string
 * @param  offset int[optional]
 * @param  encoding string[optional]
 * @desc   Find position of first occurrence of a string within another 
 */
function mbstrpos($haystack, $needle, $offset = null, $encoding = null) ;

/**
 * @return int
 * @param  haystack string
 * @param  needle string
 * @param  encoding string[optional]
 * @desc   Find the last occurrence of a character in a string within another 
 */
function mbstrrpos($haystack, $needle, $encoding = null) ;

/**
 * @return string
 * @param  str string
 * @param  start int
 * @param  length int[optional]
 * @param  encoding string[optional]
 * @desc   Returns part of a string 
 */
function mbsubstr($str, $start, $length = null, $encoding = null) ;

/**
 * @return string
 * @param  stream_id int
 * @desc   Append a new event to the calendar stream 
 */
function mcal_append_event($stream_id) ;

/**
 * @return int
 * @param  stream_id int
 * @param  options int[optional]
 * @desc   Close an MCAL stream 
 */
function mcal_close($stream_id, $options = null) ;

/**
 * @return string
 * @param  stream_id int
 * @param  calendar string
 * @desc   Create a new calendar 
 */
function mcal_create_calendar($stream_id, $calendar) ;

/**
 * @return int
 * @param  ayear int
 * @param  amonth int
 * @param  aday int
 * @param  byear int
 * @param  bmonth int
 * @param  bday int
 * @desc   Returns <0, 0, >0 if a<b, a==b, a>b respectively 
 */
function mcal_date_compare($ayear, $amonth, $aday, $byear, $bmonth, $bday) ;

/**
 * @return bool
 * @param  year int
 * @param  month int
 * @param  day int
 * @desc   Returns true if the date is a valid date 
 */
function mcal_date_valid($year, $month, $day) ;

/**
 * @return int
 * @param  year int
 * @param  month int
 * @param  day int
 * @desc   Returns the day of the week of the given date 
 */
function mcal_day_of_week($year, $month, $day) ;

/**
 * @return int
 * @param  year int
 * @param  month int
 * @param  day int
 * @desc   Returns the day of the year of the given date 
 */
function mcal_day_of_year($year, $month, $day) ;

/**
 * @return int
 * @param  month int
 * @param  leap_year bool
 * @desc   Returns the number of days in the given month, needs to know if the year is a leap year or not 
 */
function mcal_days_in_month($month, $leap_year) ;

/**
 * @return string
 * @param  stream_id int
 * @param  calendar string
 * @desc   Delete calendar 
 */
function mcal_delete_calendar($stream_id, $calendar) ;

/**
 * @return string
 * @param  stream_id int
 * @param  event_id int
 * @desc   Delete an event 
 */
function mcal_delete_event($stream_id, $event_id) ;

/**
 * @return string
 * @param  stream_id int
 * @param  attribute string
 * @param  value string
 * @desc   Add an attribute and value to an event 
 */
function mcal_event_add_attribute($stream_id, $attribute, $value) ;

/**
 * @return int
 * @param  stream_id int
 * @desc   Initialize a streams global event 
 */
function mcal_event_init($stream_id) ;

/**
 * @return int
 * @param  stream_id int
 * @param  alarm int
 * @desc   Add an alarm to the streams global event 
 */
function mcal_event_set_alarm($stream_id, $alarm) ;

/**
 * @return string
 * @param  stream_id int
 * @param  category string
 * @desc   Attach a category to an event 
 */
function mcal_event_set_category($stream_id, $category) ;

/**
 * @return int
 * @param  stream_id int
 * @param  class int
 * @desc   Add an class to the streams global event 
 */
function mcal_event_set_class($stream_id, $class) ;

/**
 * @return string
 * @param  stream_id int
 * @param  description string
 * @desc   Attach a description to an event 
 */
function mcal_event_set_description($stream_id, $description) ;

/**
 * @return string
 * @param  stream_id int
 * @param  year int
 * @param  month int
 * @param  day int
 * @param  hour int[optional]
 * @param  min int
 * @param  sec int
 * @desc   Attach an end datetime to an event 
 */
function mcal_event_set_end($stream_id, $year, $month, $day, $hour = null, $min, $sec) ;

/**
 * @return string
 * @param  stream_id int
 * @param  year int
 * @param  month int
 * @param  day int
 * @param  interval int
 * @desc   Create a daily recurrence 
 */
function mcal_event_set_recur_daily($stream_id, $year, $month, $day, $interval) ;

/**
 * @return string
 * @param  stream_id int
 * @param  year int
 * @param  month int
 * @param  day int
 * @param  interval int
 * @desc   Create a monthly by day recurrence 
 */
function mcal_event_set_recur_monthly_mday($stream_id, $year, $month, $day, $interval) ;

/**
 * @return string
 * @param  stream_id int
 * @param  year int
 * @param  month int
 * @param  day int
 * @param  interval int
 * @desc   Create a monthly by week recurrence 
 */
function mcal_event_set_recur_monthly_wday($stream_id, $year, $month, $day, $interval) ;

/**
 * @return string
 * @param  stream_id int
 * @desc   Create a daily recurrence 
 */
function mcal_event_set_recur_none($stream_id) ;

/**
 * @return string
 * @param  stream_id int
 * @param  year int
 * @param  month int
 * @param  day int
 * @param  interval int
 * @param  weekdays int
 * @desc   Create a weekly recurrence 
 */
function mcal_event_set_recur_weekly($stream_id, $year, $month, $day, $interval, $weekdays) ;

/**
 * @return string
 * @param  stream_id int
 * @param  year int
 * @param  month int
 * @param  day int
 * @param  interval int
 * @desc   Create a yearly recurrence 
 */
function mcal_event_set_recur_yearly($stream_id, $year, $month, $day, $interval) ;

/**
 * @return string
 * @param  stream_id int
 * @param  year int
 * @param  month int
 * @param  day int
 * @param  hour int[optional]
 * @param  min int
 * @param  sec int
 * @desc   Attach a start datetime to an event 
 */
function mcal_event_set_start($stream_id, $year, $month, $day, $hour = null, $min, $sec) ;

/**
 * @return string
 * @param  stream_id int
 * @param  title string
 * @desc   Attach a title to an event 
 */
function mcal_event_set_title($stream_id, $title) ;

/**
 * @return int
 * @param  stream_id int
 * @desc   Delete all events marked for deletion 
 */
function mcal_expunge($stream_id) ;

/**
 * @return object
 * @param  stream_id int
 * @desc   Fetch the current event stored in the stream's event structure 
 */
function mcal_fetch_current_stream_event($stream_id) ;

/**
 * @return int
 * @param  stream_id int
 * @param  eventid int
 * @param  options int[optional]
 * @desc   Fetch an event 
 */
function mcal_fetch_event($stream_id, $eventid, $options = null) ;

/**
 * @return bool
 * @param  year int
 * @desc   Returns true if year is a leap year, false if not 
 */
function mcal_is_leap_year($year) ;

/**
 * @return bool
 * @param  stream_id int
 * @param  year int
 * @param  month int
 * @param  day int
 * @param  hour int
 * @param  min int
 * @param  sec int
 * @desc   List alarms for a given time 
 */
function mcal_list_alarms($stream_id, $year, $month, $day, $hour, $min, $sec) ;

/**
 * @return array
 * @param  stream_id int
 * @param  begindate object
 * @param  enddate object[optional]
 * @desc   Returns list of UIDs for that day or range of days 
 */
function mcal_list_events($stream_id, $begindate, $enddate = null) ;

/**
 * @return object
 * @param  stream_id int
 * @param  weekstart int
 * @param  next array
 * @desc   Returns an object filled with the next date the event occurs, on or after the supplied date.  Returns empty date field if event does not occur or something is invalid. 
 */
function mcal_next_recurrence($stream_id, $weekstart, $next) ;

/**
 * @return int
 * @param  calendar string
 * @param  user string
 * @param  password string
 * @param  options int[optional]
 * @desc   Open an MCAL stream to a calendar 
 */
function mcal_open($calendar, $user, $password, $options = null) ;

/**
 * @return string
 * @param  calendar string
 * @param  user string
 * @param  password string
 * @param  options int[optional]
 * @desc   Open a persistent MCAL stream to a calendar 
 */
function mcal_popen($calendar, $user, $password, $options = null) ;

/**
 * @return string
 * @param  stream_id int
 * @param  src_calendar string
 * @param  dest_calendar string
 * @desc   Rename a calendar 
 */
function mcal_rename_calendar($stream_id, $src_calendar, $dest_calendar) ;

/**
 * @return int
 * @param  stream_id int
 * @param  calendar string
 * @param  options int[optional]
 * @desc   Reopen MCAL stream to a new calendar 
 */
function mcal_reopen($stream_id, $calendar, $options = null) ;

/**
 * @return string
 * @param  stream_id int
 * @param  uid int
 * @desc   Snooze an alarm 
 */
function mcal_snooze($stream_id, $uid) ;

/**
 * @return string
 * @param  stream_id int
 * @desc   Store changes to an event 
 */
function mcal_store_event($stream_id) ;

/**
 * @return bool
 * @param  hour int
 * @param  min int
 * @param  sec int
 * @desc   Returns true if the time is a valid time 
 */
function mcal_time_valid($hour, $min, $sec) ;

/**
 * @return int
 * @param  day int
 * @param  month int
 * @param  year int
 * @desc   Returns the week number of the given date 
 */
function mcal_week_of_year($day, $month, $year) ;

/**
 * @return string
 * @param  cipher int
 * @param  key string
 * @param  data string
 * @param  mode int
 * @param  iv string[optional]
 * @desc   CBC crypt/decrypt data using key key with cipher cipher using optional iv 
 */
function mcrypt_cbc($cipher, $key, $data, $mode, $iv = null) ;

/**
 * @return string
 * @param  cipher int
 * @param  key string
 * @param  data string
 * @param  mode int
 * @param  iv string
 * @desc   CFB crypt/decrypt data using key key with cipher cipher starting with iv 
 */
function mcrypt_cfb($cipher, $key, $data, $mode, $iv) ;

/**
 * @return string
 * @param  size int
 * @param  source int
 * @desc   Create an initialization vector (IV) 
 */
function mcrypt_create_iv($size, $source) ;

/**
 * @return string
 * @param  cipher string
 * @param  key string
 * @param  data string
 * @param  mode string
 * @param  iv string
 * @desc   OFB crypt/decrypt data using key key with cipher cipher starting with iv 
 */
function mcrypt_decrypt($cipher, $key, $data, $mode, $iv) ;

/**
 * @return string
 * @param  cipher int
 * @param  key string
 * @param  data string
 * @param  mode int
 * @desc   ECB crypt/decrypt data using key key with cipher cipher 
 */
function mcrypt_ecb($cipher, $key, $data, $mode) ;

/**
 * @return string
 * @param  td resource
 * @desc   Returns the name of the algorithm specified by the descriptor td 
 */
function mcrypt_enc_get_algorithms_name($td) ;

/**
 * @return int
 * @param  td resource
 * @desc   Returns the block size of the cipher specified by the descriptor td 
 */
function mcrypt_enc_get_block_size($td) ;

/**
 * @return int
 * @param  td resource
 * @desc   Returns the size of the IV in bytes of the algorithm specified by the descriptor td 
 */
function mcrypt_enc_get_iv_size($td) ;

/**
 * @return int
 * @param  td resource
 * @desc   Returns the maximum supported key size in bytes of the algorithm specified by the descriptor td 
 */
function mcrypt_enc_get_key_size($td) ;

/**
 * @return string
 * @param  td resource
 * @desc   Returns the name of the mode specified by the descriptor td 
 */
function mcrypt_enc_get_modes_name($td) ;

/**
 * @return array
 * @param  td resource
 * @desc   This function decrypts the crypttext 
 */
function mcrypt_enc_get_supported_key_sizes($td) ;

/**
 * @return bool
 * @param  td resource
 * @desc   Returns TRUE if the alrogithm is a block algorithms 
 */
function mcrypt_enc_is_block_algorithm($td) ;

/**
 * @return bool
 * @param  td resource
 * @desc   Returns TRUE if the mode is for use with block algorithms 
 */
function mcrypt_enc_is_block_algorithm_mode($td) ;

/**
 * @return bool
 * @param  td resource
 * @desc   Returns TRUE if the mode outputs blocks 
 */
function mcrypt_enc_is_block_mode($td) ;

/**
 * @return int
 * @param  td resource
 * @desc   This function runs the self test on the algorithm specified by the descriptor td 
 */
function mcrypt_enc_self_test($td) ;

/**
 * @return string
 * @param  cipher string
 * @param  key string
 * @param  data string
 * @param  mode string
 * @param  iv string
 * @desc   OFB crypt/decrypt data using key key with cipher cipher starting with iv 
 */
function mcrypt_encrypt($cipher, $key, $data, $mode, $iv) ;

/**
 * @return string
 * @param  td resource
 * @param  data string
 * @desc   This function encrypts the plaintext 
 */
function mcrypt_generic($td, $data) ;

/**
 * @return bool
 * @param  td resource
 * @desc   This function terminates encrypt specified by the descriptor td 
 */
function mcrypt_generic_deinit($td) ;

/**
 * @return bool
 * @param  td resource
 * @desc   This function terminates encrypt specified by the descriptor td 
 */
function mcrypt_generic_end($td) ;

/**
 * @return int
 * @param  td resource
 * @param  key string
 * @param  iv string
 * @desc   This function initializes all buffers for the specific module 
 */
function mcrypt_generic_init($td, $key, $iv) ;

/**
 * @return int
 * @param  cipher int
 * @desc   Get the block size of cipher 
 */
function mcrypt_get_block_size($cipher) ;

/**
 * @return string
 * @param  cipher int
 * @desc   Get the name of cipher 
 */
function mcrypt_get_cipher_name($cipher) ;

/**
 * @return int
 * @param  cipher string
 * @param  module string
 * @desc   Get the IV size of cipher (Usually the same as the blocksize) 
 */
function mcrypt_get_iv_size($cipher, $module) ;

/**
 * @return int
 * @param  cipher int
 * @desc   Get the key size of cipher 
 */
function mcrypt_get_key_size($cipher) ;

/**
 * @return array
 * @param  lib_dir string[optional]
 * @desc   List all algorithms in "module_dir" 
 */
function mcrypt_list_algorithms($lib_dir = null) ;

/**
 * @return array
 * @param  lib_dir string[optional]
 * @desc   List all modes "module_dir" 
 */
function mcrypt_list_modes($lib_dir = null) ;

/**
 * @return bool
 * @param  td resource
 * @desc   Free the descriptor td 
 */
function mcrypt_module_close($td) ;

/**
 * @return int
 * @param  algorithm string
 * @param  lib_dir string[optional]
 * @desc   Returns the block size of the algorithm 
 */
function mcrypt_module_get_algo_block_size($algorithm, $lib_dir = null) ;

/**
 * @return int
 * @param  algorithm string
 * @param  lib_dir string[optional]
 * @desc   Returns the maximum supported key size of the algorithm 
 */
function mcrypt_module_get_algo_key_size($algorithm, $lib_dir = null) ;

/**
 * @return array
 * @param  algorithm string
 * @param  lib_dir string[optional]
 * @desc   This function decrypts the crypttext 
 */
function mcrypt_module_get_supported_key_sizes($algorithm, $lib_dir = null) ;

/**
 * @return bool
 * @param  algorithm string
 * @param  lib_dir string[optional]
 * @desc   Returns TRUE if the algorithm is a block algorithm 
 */
function mcrypt_module_is_block_algorithm($algorithm, $lib_dir = null) ;

/**
 * @return bool
 * @param  mode string
 * @param  lib_dir string[optional]
 * @desc   Returns TRUE if the mode is for use with block algorithms 
 */
function mcrypt_module_is_block_algorithm_mode($mode, $lib_dir = null) ;

/**
 * @return bool
 * @param  mode string
 * @param  lib_dir string[optional]
 * @desc   Returns TRUE if the mode outputs blocks of bytes 
 */
function mcrypt_module_is_block_mode($mode, $lib_dir = null) ;

/**
 * @return resource
 * @param  cipher string
 * @param  cipher_directory string
 * @param  mode string
 * @param  mode_directory string
 * @desc   Opens the module of the algorithm and the mode to be used 
 */
function mcrypt_module_open($cipher, $cipher_directory, $mode, $mode_directory) ;

/**
 * @return bool
 * @param  algorithm string
 * @param  lib_dir string[optional]
 * @desc   Does a self test of the module "module" 
 */
function mcrypt_module_self_test($algorithm, $lib_dir = null) ;

/**
 * @return string
 * @param  cipher int
 * @param  key string
 * @param  data string
 * @param  mode int
 * @param  iv string
 * @desc   OFB crypt/decrypt data using key key with cipher cipher starting with iv 
 */
function mcrypt_ofb($cipher, $key, $data, $mode, $iv) ;

/**
 * @return int
 * @param  conn resource
 * @param  admin_password string
 * @param  usersetup int
 * @desc   Add an MCVE user using usersetup structure 
 */
function mcve_adduser($conn, $admin_password, $usersetup) ;

/**
 * @return int
 * @param  usersetup resource
 * @param  argtype int
 * @param  argval string
 * @desc   Add a value to user configuration structure 
 */
function mcve_adduserarg($usersetup, $argtype, $argval) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @desc   Get unsettled batch totals 
 */
function mcve_bt($conn, $username, $password) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Check to see if a transaction has completed 
 */
function mcve_checkstatus($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @desc   Verify Password 
 */
function mcve_chkpwd($conn, $username, $password) ;

/**
 * @return int
 * @param  conn resource
 * @param  admin_password string
 * @param  new_password string
 * @desc   Change the system administrator's password 
 */
function mcve_chngpwd($conn, $admin_password, $new_password) ;

/**
 * @return int
 * @param  conn resource
 * @param  &array int
 * @desc   Number of complete authorizations in queue, returning an array of their identifiers 
 */
function mcve_completeauthorizations($conn, &$array) ;

/**
 * @return int
 * @param  conn resource
 * @desc   Establish the connection to MCVE 
 */
function mcve_connect($conn) ;

/**
 * @return string
 * @param  conn resource
 * @desc   Get a textual representation of why a connection failed 
 */
function mcve_connectionerror($conn) ;

/**
 * @return bool
 * @param  conn resource
 * @param  identifier int
 * @desc   Delete specified transaction from MCVE_CONN structure 
 */
function mcve_deleteresponse($conn, $identifier) ;

/**
 * @return bool
 * @param  conn resource
 * @param  identifier int
 * @desc   Delete specified transaction from MCVE_CONN structure 
 */
function mcve_deletetrans($conn, $identifier) ;

/**
 * @return void
 * @param  usersetup resource
 * @desc   Deallocate data associated with usersetup structure 
 */
function mcve_deleteusersetup($usersetup) ;

/**
 * @return int
 * @param  conn resource
 * @param  admin_password string
 * @param  username string
 * @desc   Delete an MCVE user account 
 */
function mcve_deluser($conn, $admin_password, $username) ;

/**
 * @return void
 * @param  conn resource
 * @desc   Destroy the connection and MCVE_CONN structure 
 */
function mcve_destroyconn($conn) ;

/**
 * @return void
 * @desc   Free memory associated with IP/SSL connectivity 
 */
function mcve_destroyengine() ;

/**
 * @return int
 * @param  conn resource
 * @param  admin_password string
 * @param  username string
 * @desc   Disable an active MCVE user account 
 */
function mcve_disableuser($conn, $admin_password, $username) ;

/**
 * @return int
 * @param  conn resource
 * @param  admin_password string
 * @param  usersetup int
 * @desc   Edit MCVE user using usersetup structure 
 */
function mcve_edituser($conn, $admin_password, $usersetup) ;

/**
 * @return int
 * @param  conn resource
 * @param  admin_password string
 * @param  username string
 * @desc   Enable an inactive MCVE user account 
 */
function mcve_enableuser($conn, $admin_password, $username) ;

/**
 * @return int
 * @param  conn resiurce
 * @param  username string
 * @param  password string
 * @param  trackdata string
 * @param  account string
 * @param  expdate string
 * @param  amount float
 * @param  authcode string
 * @param  comments string
 * @param  clerkid string
 * @param  stationid string
 * @param  ptrannum int
 * @desc   Send a FORCE to MCVE.  (typically, a phone-authorization) 
 */
function mcve_force($conn, $username, $password, $trackdata, $account, $expdate, $amount, $authcode, $comments, $clerkid, $stationid, $ptrannum) ;

/**
 * @return string
 * @param  conn resource
 * @param  identifier int
 * @param  column string
 * @param  row int
 * @desc   Get a specific cell from a comma delimited response by column name 
 */
function mcve_getcell($conn, $identifier, $column, $row) ;

/**
 * @return string
 * @param  conn resource
 * @param  identifier int
 * @param  column int
 * @param  row int
 * @desc   Get a specific cell from a comma delimited response by column number 
 */
function mcve_getcellbynum($conn, $identifier, $column, $row) ;

/**
 * @return string
 * @param  conn resource
 * @param  identifier int
 * @desc   Get the RAW comma delimited data returned from MCVE 
 */
function mcve_getcommadelimited($conn, $identifier) ;

/**
 * @return string
 * @param  conn resource
 * @param  identifier int
 * @param  column_num int
 * @desc   Get the name of the column in a comma-delimited response 
 */
function mcve_getheader($conn, $identifier, $column_num) ;

/**
 * @return string
 * @param  usersetup resource
 * @param  argtype int
 * @desc   Grab a value from usersetup structure 
 */
function mcve_getuserarg($usersetup, $argtype) ;

/**
 * @return string
 * @param  conn resource
 * @param  identifier long
 * @param  key int
 * @desc   Get a user response parameter 
 */
function mcve_getuserparam($conn, $identifier, $key) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @param  type int
 * @param  account string
 * @param  clerkid string
 * @param  stationid string
 * @param  comments string
 * @param  ptrannum int
 * @param  startdate string
 * @param  enddate string
 * @desc   
 */
function mcve_gft($conn, $username, $password, $type, $account, $clerkid, $stationid, $comments, $ptrannum, $startdate, $enddate) ;

/**
 * @return int
 * @param  conn int
 * @param  username string
 * @param  password string
 * @param  type int
 * @param  account string
 * @param  batch string
 * @param  clerkid string
 * @param  stationid string
 * @param  comments string
 * @param  ptrannum int
 * @param  startdate string
 * @param  enddate string
 * @desc   Audit MCVE for settled transactions 
 */
function mcve_gl($conn, $username, $password, $type, $account, $batch, $clerkid, $stationid, $comments, $ptrannum, $startdate, $enddate) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @param  type int
 * @param  account string
 * @param  clerkid string
 * @param  stationid string
 * @param  comments string
 * @param  ptrannum int
 * @param  startdate string
 * @param  enddate string
 * @desc   Audit MCVE for Unsettled Transactions 
 */
function mcve_gut($conn, $username, $password, $type, $account, $clerkid, $stationid, $comments, $ptrannum, $startdate, $enddate) ;

/**
 * @return resource
 * @desc   Create and initialize an MCVE_CONN structure 
 */
function mcve_initconn() ;

/**
 * @return int
 * @param  location string
 * @desc   Ready the client for IP/SSL Communication 
 */
function mcve_initengine($location) ;

/**
 * @return resource
 * @desc   Initialize structure to store user data 
 */
function mcve_initusersetup() ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Checks to see if response is comma delimited 
 */
function mcve_iscommadelimited($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  admin_password string
 * @desc   List statistics for all users on MCVE system 
 */
function mcve_liststats($conn, $admin_password) ;

/**
 * @return int
 * @param  conn resource
 * @param  admin_password string
 * @desc   List all users on MCVE system 
 */
function mcve_listusers($conn, $admin_password) ;

/**
 * @return bool
 * @param  conn resource
 * @param  secs int
 * @desc   
 */
function mcve_maxconntimeout($conn, $secs) ;

/**
 * @return int
 * @param  conn resource
 * @desc   Perform communication with MCVE (send/receive data)   Non-blocking 
 */
function mcve_monitor($conn) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Number of columns returned in a comma delimited response 
 */
function mcve_numcolumns($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Number of rows returned in a comma delimited response 
 */
function mcve_numrows($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @param  trackdata string
 * @param  account string
 * @param  expdate string
 * @param  amount float
 * @param  street string
 * @param  zip string
 * @param  cv string
 * @param  comments string
 * @param  clerkid string
 * @param  stationid string
 * @param  ptrannum int
 * @desc   Send an OVERRIDE to MCVE 
 */
function mcve_override($conn, $username, $password, $trackdata, $account, $expdate, $amount, $street, $zip, $cv, $comments, $clerkid, $stationid, $ptrannum) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Parse the comma delimited response so mcve_getcell, etc will work 
 */
function mcve_parsecommadelimited($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @desc   Send a ping request to MCVE 
 */
function mcve_ping($conn) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @param  trackdata string
 * @param  account string
 * @param  expdate string
 * @param  amount float
 * @param  street string
 * @param  zip string
 * @param  cv string
 * @param  comments string
 * @param  clerkid string
 * @param  stationid string
 * @param  ptrannum int
 * @desc   Send a PREAUTHORIZATION to MCVE 
 */
function mcve_preauth($conn, $username, $password, $trackdata, $account, $expdate, $amount, $street, $zip, $cv, $comments, $clerkid, $stationid, $ptrannum) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @param  finalamount float
 * @param  sid int
 * @param  ptrannum int
 * @desc   Complete a PREAUTHORIZATION... Ready it for settlement 
 */
function mcve_preauthcompletion($conn, $username, $password, $finalamount, $sid, $ptrannum) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @param  clerkid string
 * @param  stationid string
 * @param  comments string
 * @param  ptrannum int
 * @desc   Audit MCVE for a list of transactions in the outgoing queue 
 */
function mcve_qc($conn, $username, $password, $clerkid, $stationid, $comments, $ptrannum) ;

/**
 * @return string
 * @param  conn resource
 * @param  identifier long
 * @param  key string
 * @desc   Get a custom response parameter 
 */
function mcve_responseparam($conn, $identifier, $key) ;

/**
 * @return int
 * @param  conn int
 * @param  username string
 * @param  password string
 * @param  trackdata string
 * @param  account string
 * @param  expdate string
 * @param  amount float
 * @param  comments string
 * @param  clerkid string
 * @param  stationid string
 * @param  ptrannum int
 * @desc   Issue a RETURN or CREDIT to MCVE 
 */
function mcve_return($conn, $username, $password, $trackdata, $account, $expdate, $amount, $comments, $clerkid, $stationid, $ptrannum) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Grab the exact return code from the transaction 
 */
function mcve_returncode($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Check to see if the transaction was successful 
 */
function mcve_returnstatus($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @param  trackdata string
 * @param  account string
 * @param  expdate string
 * @param  amount float
 * @param  street string
 * @param  zip string
 * @param  cv string
 * @param  comments string
 * @param  clerkid string
 * @param  stationid string
 * @param  ptrannum int
 * @desc   Send a SALE to MCVE 
 */
function mcve_sale($conn, $username, $password, $trackdata, $account, $expdate, $amount, $street, $zip, $cv, $comments, $clerkid, $stationid, $ptrannum) ;

/**
 * @return int
 * @param  conn resource
 * @param  tf int
 * @desc   
 */
function mcve_setblocking($conn, $tf) ;

/**
 * @return int
 * @param  conn resource
 * @param  directory string
 * @desc   Set the connection method to Drop-File 
 */
function mcve_setdropfile($conn, $directory) ;

/**
 * @return int
 * @param  conn resource
 * @param  host string
 * @param  port int
 * @desc   Set the connection method to IP 
 */
function mcve_setip($conn, $host, $port) ;

/**
 * @return int
 * @param  conn resource
 * @param  host string
 * @param  port int
 * @desc   Set the connection method to SSL 
 */
function mcve_setssl($conn, $host, $port) ;

/**
 * @return int
 * @param  sslkeyfile string
 * @param  sslcertfile string
 * @desc   
 */
function mcve_setssl_files($sslkeyfile, $sslcertfile) ;

/**
 * @return int
 * @param  conn resource
 * @param  seconds int
 * @desc   
 */
function mcve_settimeout($conn, $seconds) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @param  batch string
 * @desc   Issue a settlement command to do a batch deposit 
 */
function mcve_settle($conn, $username, $password, $batch) ;

/**
 * @return string
 * @param  code string
 * @desc   Get a textual representation of the return_avs 
 */
function mcve_text_avs($code) ;

/**
 * @return string
 * @param  code string
 * @desc   Get a textual representation of the return_code 
 */
function mcve_text_code($code) ;

/**
 * @return string
 * @param  code int
 * @desc   Get a textual representation of the return_cv 
 */
function mcve_text_cv($code) ;

/**
 * @return string
 * @param  conn resource
 * @param  identifier int
 * @desc   Get the authorization number returned for the transaction (alpha-numeric) 
 */
function mcve_transactionauth($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Get the Address Verification return status 
 */
function mcve_transactionavs($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Get the batch number associated with the transaction 
 */
function mcve_transactionbatch($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Get the CVC2/CVV2/CID return status 
 */
function mcve_transactioncv($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   
 */
function mcve_transactionid($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier int
 * @desc   Get the ITEM number in the associated batch for this transaction 
 */
function mcve_transactionitem($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @desc   Check to see if outgoing buffer is clear 
 */
function mcve_transactionssent($conn) ;

/**
 * @return string
 * @param  conn resource
 * @param  identifier int
 * @desc   Get verbiage (text) return from MCVE or processing institution 
 */
function mcve_transactiontext($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @desc   Number of transactions in client-queue 
 */
function mcve_transinqueue($conn) ;

/**
 * @return int
 * @param  conn resource
 * @desc   Start a new transaction 
 */
function mcve_transnew($conn) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier long
 * @param  key int
 * @vararg ...
 * @desc   Add a parameter to a transaction 
 */
function mcve_transparam($conn, $identifier, $key) ;

/**
 * @return int
 * @param  conn resource
 * @param  identifier long
 * @desc   Finalize and send the transaction 
 */
function mcve_transsend($conn, $identifier) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @desc   Get a list of all Unsettled batches 
 */
function mcve_ub($conn, $username, $password) ;

/**
 * @return int
 * @param  microsecs long
 * @desc   Wait x microsecs 
 */
function mcve_uwait($microsecs) ;

/**
 * @return bool
 * @param  conn resource
 * @param  tf int
 * @desc   
 */
function mcve_verifyconnection($conn, $tf) ;

/**
 * @return bool
 * @param  conn resource
 * @param  tf int
 * @desc   
 */
function mcve_verifysslcert($conn, $tf) ;

/**
 * @return int
 * @param  conn resource
 * @param  username string
 * @param  password string
 * @param  sid int
 * @param  ptrannum int
 * @desc   VOID a transaction in the settlement queue 
 */
function mcve_void($conn, $username, $password, $sid, $ptrannum) ;

/**
 * @return string
 * @param  str string
 * @desc   Calculate the md5 hash of a string 
 */
function md5($str) ;

/**
 * @return string
 * @param  filename string
 * @desc   Calculate the md5 hash of given filename 
 */
function md5_file($filename) ;

/**
 * @return string
 * @param  td resource
 * @param  data string
 * @desc   This function decrypts the plaintext 
 */
function mdecrypt_generic($td, $data) ;

/**
 * @return int
 * @desc   Returns the allocated by PHP memory 
 */
function memory_get_usage() ;

/**
 * @return string
 * @param  text string
 * @param  phones int
 * @desc   Break english phrases down into their phonemes 
 */
function metaphone($text, $phones) ;

/**
 * @return bool
 * @param  object object
 * @param  method string
 * @desc   Checks if the class method exists 
 */
function method_exists($object, $method) ;

/**
 * @return string
 * @param  hash int
 * @param  data string
 * @param  key string[optional]
 * @desc   Hash data with hash 
 */
function mhash($hash, $data, $key = null) ;

/**
 * @return int
 * @desc   Gets the number of available hashes 
 */
function mhash_count() ;

/**
 * @return int
 * @param  hash int
 * @desc   Gets the block size of hash 
 */
function mhash_get_block_size($hash) ;

/**
 * @return string
 * @param  hash int
 * @desc   Gets the name of hash 
 */
function mhash_get_hash_name($hash) ;

/**
 * @return string
 * @param  hash int
 * @param  input_password string
 * @param  salt string
 * @param  bytes int
 * @desc   Generates a key using hash functions 
 */
function mhash_keygen_s2k($hash, $input_password, $salt, $bytes) ;

/**
 * @return string
 * @desc   Returns a string containing the current time in seconds and microseconds 
 */
function microtime() ;

/**
 * @return string
 * @param  filename string
 * @desc   Return content-type for file 
 */
function mime_content_type($filename) ;

/**
 * @return mixed
 * @param  arg1 mixed
 * @param  arg2 mixed[optional]
 * @vararg ... mixed
 * @desc   Return the lowest value in an array or a series of arguments 
 */
function min($arg1, $arg2 = null) ;

/**
 * @return void
 * @param  threshold int
 * @desc   Set cubic threshold (?) 
 */
function ming_setcubicthreshold ($threshold) ;

/**
 * @return void
 * @param  scale int
 * @desc   Set scale (?) 
 */
function ming_setscale($scale) ;

/**
 * @return void
 * @param  version int
 * @desc   Use SWF version (?) 
 */
function ming_useswfversion($version) ;

/**
 * @return bool
 * @param  pathname string
 * @param  mode int
 * @desc   Create a directory 
 */
function mkdir($pathname, $mode) ;

/**
 * @return int
 * @param  hour int
 * @param  min int
 * @param  sec int
 * @param  mon int
 * @param  day int
 * @param  year int
 * @desc   Get UNIX timestamp for a date 
 */
function mktime($hour, $min, $sec, $mon, $day, $year) ;

/**
 * @return string
 * @param  format string
 * @param  value float
 * @desc   Convert monetary value(s) to string 
 */
function money_format($format, $value) ;

/**
 * @return void
 * @param  dx float
 * @param  dy float
 * @desc   Displaces this SWFDisplayItem by (dx, dy) in movie coordinates 
 */
function move($dx, $dy) ;

/**
 * @return bool
 * @param  path string
 * @param  new_path string
 * @desc   Move a file if and only if it was created by an upload 
 */
function move_uploaded_file($path, $new_path) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @desc   Moves the pen from its current location by vector (x, y) 
 */
function movepen($x, $y) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @desc   Moves the pen to shape coordinates (x, y) 
 */
function movepento($x, $y) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @desc   Moves this SWFText object's current pen position to (x, y) in text coordinates 
 */
function moveto($x, $y) ;

/**
 * @return string
 * @param  fn_name string
 * @param  param1 string[optional]
 * @vararg ...
 * @param  param4 string[optional]
 * @desc   Call the plugin function named fn_name 
 */
function msession_call($fn_name, $param1 = null, $param4 = null) ;

/**
 * @return bool
 * @param  host string
 * @param  port string
 * @desc   Connect to msession sever 
 */
function msession_connect($host, $port) ;

/**
 * @return int
 * @desc   Get session count 
 */
function msession_count() ;

/**
 * @return bool
 * @param  session string
 * @desc   Create a session 
 */
function msession_create($session) ;

/**
 * @return bool
 * @param  name string
 * @desc   Destroy a session 
 */
function msession_destroy($name) ;

/**
 * @return void
 * @desc   Disconnect from msession server 
 */
function msession_disconnect() ;

/**
 * @return array
 * @param  name string
 * @param  value string
 * @desc   Find all sessions with name and value 
 */
function msession_find($name, $value) ;

/**
 * @return string
 * @param  session string
 * @param  name string
 * @param  default_value string
 * @desc   Get value from session 
 */
function msession_get($session, $name, $default_value) ;

/**
 * @return array
 * @param  session string
 * @desc   Get array of msession variables  
 */
function msession_get_array($session) ;

/**
 * @return string
 * @param  session string
 * @desc   Get data session unstructured data. (PHP sessions use this)  
 */
function msession_get_data($session) ;

/**
 * @return string
 * @param  session string
 * @param  name string
 * @desc   Increment value in session 
 */
function msession_inc($session, $name) ;

/**
 * @return array
 * @desc   List all sessions  
 */
function msession_list() ;

/**
 * @return array
 * @param  name string
 * @desc   return associative array of value:session for all sessions with a variable named 'name' 
 */
function msession_listvar($name) ;

/**
 * @return int
 * @param  name string
 * @desc   Lock a session 
 */
function msession_lock($name) ;

/**
 * @return string
 * @param  session string
 * @param  val string
 * @param  param string[optional]
 * @desc   Call the personality plugin escape function 
 */
function msession_plugin($session, $val, $param = null) ;

/**
 * @return string
 * @param  num_chars int
 * @desc   Get random string 
 */
function msession_randstr($num_chars) ;

/**
 * @return bool
 * @param  session string
 * @param  name string
 * @param  value string
 * @desc   Set value in session 
 */
function msession_set($session, $name, $value) ;

/**
 * @return bool
 * @param  session string
 * @param  tuples array
 * @desc   Set msession variables from an array
 */
function msession_set_array($session, $tuples) ;

/**
 * @return bool
 * @param  session string
 * @param  value string
 * @desc   Set data session unstructured data. (PHP sessions use this)  
 */
function msession_set_data($session, $value) ;

/**
 * @return int
 * @param  name string
 * @desc   Lock a session 
 */
function msession_stat($name) ;

/**
 * @return int
 * @param  session string
 * @param  param int[optional]
 * @desc   Set/get session timeout 
 */
function msession_timeout($session, $param = null) ;

/**
 * @return string
 * @param  num_chars int
 * @desc   Get uniq id 
 */
function msession_uniq($num_chars) ;

/**
 * @return int
 * @param  session string
 * @param  key int
 * @desc   Unlock a session 
 */
function msession_unlock($session, $key) ;

/**
 * @return resource
 * @param  key long
 * @param  perms long[optional]
 * @desc   Attach to a message queue 
 */
function msg_get_queue($key, $perms = null) ;

/**
 * @return mixed
 * @param  queue resource
 * @param  desiredmsgtype long
 * @param  &msgtype long
 * @param  maxsize long
 * @param  message mixed
 * @param  unserialize bool[optional]
 * @param  flags long[optional]
 * @param  errorcode long
 * @desc   Send a message of type msgtype (must be > 0) to a message queue 
 */
function msg_receive($queue, $desiredmsgtype, &$msgtype, $maxsize, $message, $unserialize = true, $flags = null, $errorcode) ;

/**
 * @return bool
 * @param  queue resource
 * @desc   Destroy the queue 
 */
function msg_remove_queue($queue) ;

/**
 * @return bool
 * @param  queue resource
 * @param  msgtype long
 * @param  message mixed
 * @param  serialize bool[optional]
 * @param  blocking bool[optional]
 * @param  errorcode long[optional]
 * @desc   Send a message of type msgtype (must be > 0) to a message queue 
 */
function msg_send($queue, $msgtype, $message, $serialize = true, $blocking = true, $errorcode = null) ;

/**
 * @return array
 * @param  queue resource
 * @param  data array
 * @desc   Set information for a message queue 
 */
function msg_set_queue($queue, $data) ;

/**
 * @return array
 * @param  queue resource
 * @desc   Returns information about a message queue 
 */
function msg_stat_queue($queue) ;

/**
 * @return int
 * @param  database_name string
 * @param  query string
 * @param  link_identifier int[optional]
 * @desc   Send an SQL query to mSQL 
 */
function msql($database_name, $query, $link_identifier = null) ;

/**
 * @return int
 * @param  query int
 * @desc   Return number of affected rows 
 */
function msql_affected_rows($query) ;

/**
 * @return int
 * @param  link_identifier int[optional]
 * @desc   Close an mSQL connection 
 */
function msql_close($link_identifier = null) ;

/**
 * @return int
 * @param  hostname string[optional]
 * @param  username string[optional]
 * @param  password string[optional]
 * @desc   Open a connection to an mSQL Server 
 */
function msql_connect($hostname = null, $username = null, $password = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Create an mSQL database 
 */
function msql_create_db($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Create an mSQL database 
 */
function msql_createdb($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  query int
 * @param  row_number int
 * @desc   Move internal result pointer 
 */
function msql_data_seek($query, $row_number) ;

/**
 * @return int
 * @param  database_name string
 * @param  query string
 * @param  link_identifier int[optional]
 * @desc   Send an SQL query to mSQL 
 */
function msql_db_query($database_name, $query, $link_identifier = null) ;

/**
 * @return int
 * @param  query int
 * @param  row int
 * @param  field mixed[optional]
 * @desc   Get result data 
 */
function msql_dbname($query, $row, $field = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Drop (delete) an mSQL database 
 */
function msql_drop_db($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Drop (delete) an mSQL database 
 */
function msql_dropdb($database_name, $link_identifier = null) ;

/**
 * @return string
 * @param  link_identifier int[optional]
 * @desc   Returns the text of the error message from previous mSQL operation 
 */
function msql_error($link_identifier = null) ;

/**
 * @return array
 * @param  query int
 * @param  result_type int[optional]
 * @desc   Fetch a result row as an associative array 
 */
function msql_fetch_array($query, $result_type = null) ;

/**
 * @return object
 * @param  query int
 * @param  field_offset int[optional]
 * @desc   Get column information from a result and return as an object 
 */
function msql_fetch_field($query, $field_offset = null) ;

/**
 * @return object
 * @param  query int
 * @param  result_type int[optional]
 * @desc   Fetch a result row as an object 
 */
function msql_fetch_object($query, $result_type = null) ;

/**
 * @return array
 * @param  query int
 * @desc   Get a result row as an enumerated array 
 */
function msql_fetch_row($query) ;

/**
 * @return string
 * @param  query int
 * @param  field_offset int
 * @desc   Get the flags associated with the specified field in a result 
 */
function msql_field_flags($query, $field_offset) ;

/**
 * @return int
 * @param  query int
 * @param  field_offet int
 * @desc   Returns the length of the specified field 
 */
function msql_field_len($query, $field_offet) ;

/**
 * @return string
 * @param  query int
 * @param  field_index int
 * @desc   Get the name of the specified field in a result 
 */
function msql_field_name($query, $field_index) ;

/**
 * @return int
 * @param  query int
 * @param  field_offset int
 * @desc   Set result pointer to a specific field offset 
 */
function msql_field_seek($query, $field_offset) ;

/**
 * @return string
 * @param  query int
 * @param  field_offset int
 * @desc   Get name of the table the specified field is in 
 */
function msql_field_table($query, $field_offset) ;

/**
 * @return string
 * @param  query int
 * @param  field_offset int
 * @desc   Get the type of the specified field in a result 
 */
function msql_field_type($query, $field_offset) ;

/**
 * @return string
 * @param  query int
 * @param  field_offset int
 * @desc   Get the flags associated with the specified field in a result 
 */
function msql_fieldflags($query, $field_offset) ;

/**
 * @return int
 * @param  query int
 * @param  field_offet int
 * @desc   Returns the length of the specified field 
 */
function msql_fieldlen($query, $field_offet) ;

/**
 * @return string
 * @param  query int
 * @param  field_index int
 * @desc   Get the name of the specified field in a result 
 */
function msql_fieldname($query, $field_index) ;

/**
 * @return string
 * @param  query int
 * @param  field_offset int
 * @desc   Get name of the table the specified field is in 
 */
function msql_fieldtable($query, $field_offset) ;

/**
 * @return string
 * @param  query int
 * @param  field_offset int
 * @desc   Get the type of the specified field in a result 
 */
function msql_fieldtype($query, $field_offset) ;

/**
 * @return int
 * @param  query int
 * @desc   Free result memory 
 */
function msql_free_result($query) ;

/**
 * @return int
 * @param  query int
 * @desc   Free result memory 
 */
function msql_freeresult($query) ;

/**
 * @return int
 * @param  link_identifier int[optional]
 * @desc   List databases available on an mSQL server 
 */
function msql_list_dbs($link_identifier = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  table_name string
 * @param  link_identifier int[optional]
 * @desc   List mSQL result fields 
 */
function msql_list_fields($database_name, $table_name, $link_identifier = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   List tables in an mSQL database 
 */
function msql_list_tables($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  link_identifier int[optional]
 * @desc   List databases available on an mSQL server 
 */
function msql_listdbs($link_identifier = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  table_name string
 * @param  link_identifier int[optional]
 * @desc   List mSQL result fields 
 */
function msql_listfields($database_name, $table_name, $link_identifier = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   List tables in an mSQL database 
 */
function msql_listtables($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  query int
 * @desc   Get number of fields in a result 
 */
function msql_num_fields($query) ;

/**
 * @return int
 * @param  query int
 * @desc   Get number of rows in a result 
 */
function msql_num_rows($query) ;

/**
 * @return int
 * @param  query int
 * @desc   Get number of fields in a result 
 */
function msql_numfields($query) ;

/**
 * @return int
 * @param  query int
 * @desc   Get number of rows in a result 
 */
function msql_numrows($query) ;

/**
 * @return int
 * @param  hostname string[optional]
 * @param  username string[optional]
 * @param  password string[optional]
 * @desc   Open a persistent connection to an mSQL Server 
 */
function msql_pconnect($hostname = null, $username = null, $password = null) ;

/**
 * @return int
 * @param  query string
 * @param  link_identifier int[optional]
 * @desc   Send an SQL query to mSQL 
 */
function msql_query($query, $link_identifier = null) ;

/**
 * @return string
 * @param  string string
 * @desc   Make regular expression for case insensitive match 
 */
function msql_regcase($string) ;

/**
 * @return int
 * @param  query int
 * @param  row int
 * @param  field mixed[optional]
 * @desc   Get result data 
 */
function msql_result($query, $row, $field = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Select an mSQL database 
 */
function msql_select_db($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Select an mSQL database 
 */
function msql_selectdb($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  query int
 * @param  row int
 * @param  field mixed[optional]
 * @desc   Get result data 
 */
function msql_tablename($query, $row, $field = null) ;

/**
 * @return int
 * @param  link_id int[optional]
 * @desc   Get number of affected rows in last query 
 */
function mssql_affected_rows($link_id = null) ;

/**
 * @return bool
 * @param  stmt resource
 * @param  param_name string
 * @param  var mixed
 * @param  typ int
 * @desc   
 */
function mssql_bind($stmt, $param_name, $var, $typ) ;

/**
 * @return bool
 * @param  link_id int[optional]
 * @desc   Close Sybase connection 
 */
function mssql_close($link_id = null) ;

/**
 * @return int
 * @param  host string[optional]
 * @param  user string[optional]
 * @param  password string[optional]
 * @param  charset string[optional]
 * @param  appname string[optional]
 * @desc   Open Sybase server connection 
 */
function mssql_connect($host = null, $user = null, $password = null, $charset = null, $appname = null) ;

/**
 * @return bool
 * @param  result int
 * @param  offset int
 * @desc   Move internal row pointer 
 */
function mssql_data_seek($result, $offset) ;

/**
 * @return void
 * @param  retry_count int
 * @desc   Sets deadlock retry count 
 */
function mssql_deadlock_retry_count($retry_count) ;

/**
 * @return mixed
 * @param  stmt resource
 * @param  skip_results bool[optional]
 * @desc   Executes a stored procedure on a MS-SQL server database 
 */
function mssql_execute($stmt, $skip_results = false) ;

/**
 * @return array
 * @param  result int
 * @desc   Fetch row as array 
 */
function mssql_fetch_array($result) ;

/**
 * @return array
 * @param  result int
 * @desc   Fetch row as array without numberic indices 
 */
function mssql_fetch_assoc($result) ;

/**
 * @return int
 * @param  result_index resource
 * @desc   Returns the next batch of records 
 */
function mssql_fetch_batch($result_index) ;

/**
 * @return object
 * @param  result int
 * @param  offset int[optional]
 * @desc   Get field information 
 */
function mssql_fetch_field($result, $offset = null) ;

/**
 * @return object
 * @param  result int
 * @param  object mixed[optional]
 * @desc   Fetch row as object 
 */
function mssql_fetch_object($result, $object = null) ;

/**
 * @return array
 * @param  result int
 * @desc   Get row as enumerated array 
 */
function mssql_fetch_row($result) ;

/**
 * @return int
 * @param  result_id resource
 * @param  offset int[optional]
 * @desc   Get the length of a MS-SQL field 
 */
function mssql_field_length($result_id, $offset = null) ;

/**
 * @return string
 * @param  result_id resource
 * @param  offset int[optional]
 * @desc   Returns the name of the field given by offset in the result set given by result_id 
 */
function mssql_field_name($result_id, $offset = null) ;

/**
 * @return bool
 * @param  result int
 * @param  offset int
 * @desc   Set field offset 
 */
function mssql_field_seek($result, $offset) ;

/**
 * @return string
 * @param  result_id resource
 * @param  offset int[optional]
 * @desc   Returns the type of a field 
 */
function mssql_field_type($result_id, $offset = null) ;

/**
 * @return bool
 * @param  result int
 * @desc   Free result memory 
 */
function mssql_free_result($result) ;

/**
 * @return bool
 * @param  result_index resource
 * @desc   Free a MS-SQL statement index 
 */
function mssql_free_statement($result_index) ;

/**
 * @return string
 * @desc   Returns the last message from server (over min_message_severity) 
 */
function mssql_get_last_message() ;

/**
 * @return string
 * @param  binary string
 * @param  short_format int[optional]
 * @desc   Converts a 16 byte binary GUID to a string  
 */
function mssql_guid_string($binary, $short_format = null) ;

/**
 * @return int
 * @param  sp_name string
 * @param  conn_id resource[optional]
 * @desc   Initializes a stored procedure or a remote stored procedure  
 */
function mssql_init($sp_name, $conn_id = null) ;

/**
 * @return void
 * @param  severity int
 * @desc   Sets minimum client severity 
 */
function mssql_min_client_severity($severity) ;

/**
 * @return void
 * @param  severity int
 * @desc   Sets the minimum error severity 
 */
function mssql_min_error_severity($severity) ;

/**
 * @return void
 * @param  severity int
 * @desc   Sets the minimum message severity 
 */
function mssql_min_message_severity($severity) ;

/**
 * @return void
 * @param  severity int
 * @desc   Sets minimum server severity 
 */
function mssql_min_server_severity($severity) ;

/**
 * @return bool
 * @param  result_id resource
 * @desc   Move the internal result pointer to the next result 
 */
function mssql_next_result($result_id) ;

/**
 * @return int
 * @param  result int
 * @desc   Get number of fields in result 
 */
function mssql_num_fields($result) ;

/**
 * @return int
 * @param  result int
 * @desc   Get number of rows in result 
 */
function mssql_num_rows($result) ;

/**
 * @return int
 * @param  host string[optional]
 * @param  user string[optional]
 * @param  password string[optional]
 * @param  charset string[optional]
 * @param  appname string[optional]
 * @desc   Open persistent Sybase connection 
 */
function mssql_pconnect($host = null, $user = null, $password = null, $charset = null, $appname = null) ;

/**
 * @return int
 * @param  query string
 * @param  link_id int[optional]
 * @desc   Send Sybase query 
 */
function mssql_query($query, $link_id = null) ;

/**
 * @return string
 * @param  result int
 * @param  row int
 * @param  field mixed
 * @desc   Get result data 
 */
function mssql_result($result, $row, $field) ;

/**
 * @return int
 * @param  conn_id resource
 * @desc   Returns the number of records affected by the query 
 */
function mssql_rows_affected($conn_id) ;

/**
 * @return bool
 * @param  database string
 * @param  link_id int[optional]
 * @desc   Select Sybase database 
 */
function mssql_select_db($database, $link_id = null) ;

/**
 * @return bool
 * @param  error_func mixed
 * @desc   
 */
function mssql_set_message_handler($error_func) ;

/**
 * @return int
 * @param  query string
 * @param  link_id int[optional]
 * @desc   Send Sybase query 
 */
function mssql_unbuffered_query($query, $link_id = null) ;

/**
 * @return int
 * @desc   Returns the maximum value a random number from Mersenne Twister can have 
 */
function mt_getrandmax() ;

/**
 * @return int
 * @param  min int[optional]
 * @param  max int
 * @desc   Returns a random number from Mersenne Twister 
 */
function mt_rand($min = null, $max) ;

/**
 * @return void
 * @param  seed int[optional]
 * @desc   Seeds Mersenne Twister random number generator 
 */
function mt_srand($seed = null) ;

/**
 * @return void
 * @param  r float
 * @param  g float
 * @param  b float
 * @param  a float[optional]
 * @desc   Sets the multiply color part of this SWFDisplayItem's CXform to (r, g, b [, a]), a defaults to 1.0 
 */
function multcolor($r, $g, $b, $a = null) ;

/**
 * @return int
 * @param  link_identifier int[optional]
 * @desc   Gets number of affected rows in previous MySQL operation 
 */
function mysql_affected_rows($link_identifier = null) ;

/**
 * @return string
 * @param  link_identifier int[optional]
 * @desc   Returns the default character set for the current connection 
 */
function mysql_client_encoding($link_identifier = null) ;

/**
 * @return bool
 * @param  link_identifier int[optional]
 * @desc   Close a MySQL connection 
 */
function mysql_close($link_identifier = null) ;

/**
 * @return resource
 * @param  hostname string[optional]
 * @param  username string[optional]
 * @param  password string[optional]
 * @param  new bool[optional]
 * @param  flags int[optional]
 * @desc   Opens a connection to a MySQL Server 
 */
function mysql_connect($hostname = null, $username = null, $password = null, $new = null, $flags = null) ;

/**
 * @return bool
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Create a MySQL database 
 */
function mysql_create_db($database_name, $link_identifier = null) ;

/**
 * @return bool
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Create a MySQL database 
 */
function mysql_createdb($database_name, $link_identifier = null) ;

/**
 * @return bool
 * @param  result resource
 * @param  row_number int
 * @desc   Move internal result pointer 
 */
function mysql_data_seek($result, $row_number) ;

/**
 * @return mixed
 * @param  result resource
 * @param  row int
 * @param  field mixed[optional]
 * @desc   Gets result data 
 */
function mysql_db_name($result, $row, $field = null) ;

/**
 * @return resource
 * @param  database_name string
 * @param  query string
 * @param  link_identifier int[optional]
 * @desc   Sends an SQL query to MySQL 
 */
function mysql_db_query($database_name, $query, $link_identifier = null) ;

/**
 * @return mixed
 * @param  result resource
 * @param  row int
 * @param  field mixed[optional]
 * @desc   Gets result data 
 */
function mysql_dbname($result, $row, $field = null) ;

/**
 * @return bool
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Drops (delete) a MySQL database 
 */
function mysql_drop_db($database_name, $link_identifier = null) ;

/**
 * @return bool
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Drops (delete) a MySQL database 
 */
function mysql_dropdb($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  link_identifier int[optional]
 * @desc   Returns the number of the error message from previous MySQL operation 
 */
function mysql_errno($link_identifier = null) ;

/**
 * @return string
 * @param  link_identifier int[optional]
 * @desc   Returns the text of the error message from previous MySQL operation 
 */
function mysql_error($link_identifier = null) ;

/**
 * @return string
 * @param  to_be_escaped string
 * @desc   Escape string for mysql query 
 */
function mysql_escape_string($to_be_escaped) ;

/**
 * @return array
 * @param  result resource
 * @param  result_type int[optional]
 * @desc   Fetch a result row as an array (associative, numeric or both) 
 */
function mysql_fetch_array($result, $result_type = null) ;

/**
 * @return array
 * @param  result resource
 * @desc   Fetch a result row as an associative array 
 */
function mysql_fetch_assoc($result) ;

/**
 * @return object
 * @param  result resource
 * @param  field_offset int[optional]
 * @desc   Gets column information from a result and return as an object 
 */
function mysql_fetch_field($result, $field_offset = null) ;

/**
 * @return array
 * @param  result resource
 * @desc   Gets max data size of each column in a result 
 */
function mysql_fetch_lengths($result) ;

/**
 * @return object
 * @param  result resource
 * @param  result_type int[optional]
 * @desc   Fetch a result row as an object 
 */
function mysql_fetch_object($result, $result_type = null) ;

/**
 * @return array
 * @param  result resource
 * @desc   Gets a result row as an enumerated array 
 */
function mysql_fetch_row($result) ;

/**
 * @return string
 * @param  result resource
 * @param  field_offset int
 * @desc   Gets the flags associated with the specified field in a result 
 */
function mysql_field_flags($result, $field_offset) ;

/**
 * @return int
 * @param  result resource
 * @param  field_offset int
 * @desc   Returns the length of the specified field 
 */
function mysql_field_len($result, $field_offset) ;

/**
 * @return string
 * @param  result resource
 * @param  field_index int
 * @desc   Gets the name of the specified field in a result 
 */
function mysql_field_name($result, $field_index) ;

/**
 * @return bool
 * @param  result resource
 * @param  field_offset int
 * @desc   Sets result pointer to a specific field offset 
 */
function mysql_field_seek($result, $field_offset) ;

/**
 * @return string
 * @param  result resource
 * @param  field_offset int
 * @desc   Gets name of the table the specified field is in 
 */
function mysql_field_table($result, $field_offset) ;

/**
 * @return string
 * @param  result resource
 * @param  field_offset int
 * @desc   Gets the type of the specified field in a result 
 */
function mysql_field_type($result, $field_offset) ;

/**
 * @return string
 * @param  result resource
 * @param  field_offset int
 * @desc   Gets the flags associated with the specified field in a result 
 */
function mysql_fieldflags($result, $field_offset) ;

/**
 * @return int
 * @param  result resource
 * @param  field_offset int
 * @desc   Returns the length of the specified field 
 */
function mysql_fieldlen($result, $field_offset) ;

/**
 * @return string
 * @param  result resource
 * @param  field_index int
 * @desc   Gets the name of the specified field in a result 
 */
function mysql_fieldname($result, $field_index) ;

/**
 * @return string
 * @param  result resource
 * @param  field_offset int
 * @desc   Gets name of the table the specified field is in 
 */
function mysql_fieldtable($result, $field_offset) ;

/**
 * @return string
 * @param  result resource
 * @param  field_offset int
 * @desc   Gets the type of the specified field in a result 
 */
function mysql_fieldtype($result, $field_offset) ;

/**
 * @return bool
 * @param  result resource
 * @desc   Free result memory 
 */
function mysql_free_result($result) ;

/**
 * @return bool
 * @param  result resource
 * @desc   Free result memory 
 */
function mysql_freeresult($result) ;

/**
 * @return string
 * @desc   Returns a string that represents the client library version 
 */
function mysql_get_client_info() ;

/**
 * @return string
 * @param  link_identifier int[optional]
 * @desc   Returns a string describing the type of connection in use, including the server host name 
 */
function mysql_get_host_info($link_identifier = null) ;

/**
 * @return int
 * @param  link_identifier int[optional]
 * @desc   Returns the protocol version used by current connection 
 */
function mysql_get_proto_info($link_identifier = null) ;

/**
 * @return string
 * @param  link_identifier int[optional]
 * @desc   Returns a string that represents the server version number 
 */
function mysql_get_server_info($link_identifier = null) ;

/**
 * @return string
 * @param  link_identifier int[optional]
 * @desc   Returns a string containing information about the most recent query 
 */
function mysql_info($link_identifier = null) ;

/**
 * @return int
 * @param  link_identifier int[optional]
 * @desc   Gets the ID generated from the previous INSERT operation 
 */
function mysql_insert_id($link_identifier = null) ;

/**
 * @return resource
 * @param  link_identifier int[optional]
 * @desc   List databases available on a MySQL server 
 */
function mysql_list_dbs($link_identifier = null) ;

/**
 * @return resource
 * @param  database_name string
 * @param  table_name string
 * @param  link_identifier int[optional]
 * @desc   List MySQL result fields 
 */
function mysql_list_fields($database_name, $table_name, $link_identifier = null) ;

/**
 * @return resource
 * @param  link_identifier int[optional]
 * @desc   Returns a result set describing the current server threads 
 */
function mysql_list_processes($link_identifier = null) ;

/**
 * @return resource
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   List tables in a MySQL database 
 */
function mysql_list_tables($database_name, $link_identifier = null) ;

/**
 * @return resource
 * @param  link_identifier int[optional]
 * @desc   List databases available on a MySQL server 
 */
function mysql_listdbs($link_identifier = null) ;

/**
 * @return resource
 * @param  database_name string
 * @param  table_name string
 * @param  link_identifier int[optional]
 * @desc   List MySQL result fields 
 */
function mysql_listfields($database_name, $table_name, $link_identifier = null) ;

/**
 * @return resource
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   List tables in a MySQL database 
 */
function mysql_listtables($database_name, $link_identifier = null) ;

/**
 * @return int
 * @param  result resource
 * @desc   Gets number of fields in a result 
 */
function mysql_num_fields($result) ;

/**
 * @return int
 * @param  result resource
 * @desc   Gets number of rows in a result 
 */
function mysql_num_rows($result) ;

/**
 * @return int
 * @param  result resource
 * @desc   Gets number of fields in a result 
 */
function mysql_numfields($result) ;

/**
 * @return int
 * @param  result resource
 * @desc   Gets number of rows in a result 
 */
function mysql_numrows($result) ;

/**
 * @return resource
 * @param  hostname string[optional]
 * @param  username string[optional]
 * @param  password string[optional]
 * @param  flags int[optional]
 * @desc   Opens a persistent connection to a MySQL Server 
 */
function mysql_pconnect($hostname = null, $username = null, $password = null, $flags = null) ;

/**
 * @return bool
 * @param  link_identifier int[optional]
 * @desc   Ping a server connection. If no connection then reconnect. 
 */
function mysql_ping($link_identifier = null) ;

/**
 * @return resource
 * @param  query string
 * @param  link_identifier int[optional]
 * @desc   Sends an SQL query to MySQL 
 */
function mysql_query($query, $link_identifier = null) ;

/**
 * @return string
 * @param  to_be_escaped string
 * @param  link_identifier int[optional]
 * @desc   Escape special characters in a string for use in a SQL statement, taking into account the current charset of the connection 
 */
function mysql_real_escape_string($to_be_escaped, $link_identifier = null) ;

/**
 * @return mixed
 * @param  result resource
 * @param  row int
 * @param  field mixed[optional]
 * @desc   Gets result data 
 */
function mysql_result($result, $row, $field = null) ;

/**
 * @return bool
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Selects a MySQL database 
 */
function mysql_select_db($database_name, $link_identifier = null) ;

/**
 * @return bool
 * @param  database_name string
 * @param  link_identifier int[optional]
 * @desc   Selects a MySQL database 
 */
function mysql_selectdb($database_name, $link_identifier = null) ;

/**
 * @return string
 * @param  link_identifier int[optional]
 * @desc   Returns a string containing status information 
 */
function mysql_stat($link_identifier = null) ;

/**
 * @return mixed
 * @param  result resource
 * @param  row int
 * @param  field mixed[optional]
 * @desc   Gets result data 
 */
function mysql_table_name($result, $row, $field = null) ;

/**
 * @return mixed
 * @param  result resource
 * @param  row int
 * @param  field mixed[optional]
 * @desc   Gets result data 
 */
function mysql_tablename($result, $row, $field = null) ;

/**
 * @return int
 * @param  link_identifier int[optional]
 * @desc   Returns the thread id of current connection 
 */
function mysql_thread_id($link_identifier = null) ;

/**
 * @return resource
 * @param  query string
 * @param  link_identifier int[optional]
 * @desc   Sends an SQL query to MySQL, without fetching and buffering the result rows 
 */
function mysql_unbuffered_query($query, $link_identifier = null) ;

/**
 * @return array
 * @desc   
 */
function name() ;

/**
 * @return bool
 * @param  href string
 * @param  prefix string
 * @desc   Adds namespace declaration 
 */
function namespace_decl($href, $prefix) ;

/**
 * @return string
 * @desc   Returns namespace uri of node 
 */
function namespace_uri() ;

/**
 * @return void
 * @param  array_arg array
 * @desc   Sort an array using case-insensitive natural sort 
 */
function natcasesort($array_arg) ;

/**
 * @return void
 * @param  array_arg array
 * @desc   Sort an array using natural sort 
 */
function natsort($array_arg) ;

/**
 * @return int
 * @param  ch int
 * @desc   Adds character at current position and advance cursor 
 */
function ncurses_addch($ch) ;

/**
 * @return int
 * @param  s string
 * @param  n int
 * @desc   Adds attributed string with specified length at current position 
 */
function ncurses_addchnstr($s, $n) ;

/**
 * @return int
 * @param  s string
 * @desc   Adds attributed string at current position 
 */
function ncurses_addchstr($s) ;

/**
 * @return int
 * @param  s string
 * @param  n int
 * @desc   Adds string with specified length at current position 
 */
function ncurses_addnstr($s, $n) ;

/**
 * @return int
 * @param  text string
 * @desc   Outputs text at current position 
 */
function ncurses_addstr($text) ;

/**
 * @return int
 * @param  fg int
 * @param  bg int
 * @desc   Defines default colors for color 0 
 */
function ncurses_assume_default_colors($fg, $bg) ;

/**
 * @return int
 * @param  attributes int
 * @desc   Turns off the given attributes 
 */
function ncurses_attroff($attributes) ;

/**
 * @return int
 * @param  attributes int
 * @desc   Turns on the given attributes 
 */
function ncurses_attron($attributes) ;

/**
 * @return int
 * @param  attributes int
 * @desc   Sets given attributes 
 */
function ncurses_attrset($attributes) ;

/**
 * @return int
 * @desc   Returns baudrate of terminal 
 */
function ncurses_baudrate() ;

/**
 * @return int
 * @desc   Let the terminal beep 
 */
function ncurses_beep() ;

/**
 * @return int
 * @param  attrchar int
 * @desc   Sets background property for terminal screen 
 */
function ncurses_bkgd($attrchar) ;

/**
 * @return void
 * @param  attrchar int
 * @desc   Controls screen background 
 */
function ncurses_bkgdset($attrchar) ;

/**
 * @return int
 * @param  left int
 * @param  right int
 * @param  top int
 * @param  bottom int
 * @param  tl_corner int
 * @param  tr_corner int
 * @param  bl_corner int
 * @param  br_corner int
 * @desc   Draws a border around the screen using attributed characters 
 */
function ncurses_border($left, $right, $top, $bottom, $tl_corner, $tr_corner, $bl_corner, $br_corner) ;

/**
 * @return int
 * @param  panel resource
 * @desc   Moves a visible panel to the bottom of the stack 
 */
function ncurses_bottom_panel($panel) ;

/**
 * @return bool
 * @desc   Checks if we can change terminals colors 
 */
function ncurses_can_change_color() ;

/**
 * @return bool
 * @desc   Switches of input buffering 
 */
function ncurses_cbreak() ;

/**
 * @return bool
 * @desc   Clears screen 
 */
function ncurses_clear() ;

/**
 * @return bool
 * @desc   Clears screen from current position to bottom 
 */
function ncurses_clrtobot() ;

/**
 * @return bool
 * @desc   Clears screen from current position to end of line 
 */
function ncurses_clrtoeol() ;

/**
 * @return int
 * @param  color int
 * @param  &r int
 * @param  &g int
 * @param  &b int
 * @desc   Gets the RGB value for color 
 */
function ncurses_color_content($color, &$r, &$g, &$b) ;

/**
 * @return int
 * @param  pair int
 * @desc   Sets fore- and background color 
 */
function ncurses_color_set($pair) ;

/**
 * @return int
 * @param  visibility int
 * @desc   Sets cursor state 
 */
function ncurses_curs_set($visibility) ;

/**
 * @return bool
 * @desc   Saves terminals (program) mode 
 */
function ncurses_def_prog_mode() ;

/**
 * @return bool
 * @desc   Saves terminal (shell) mode
 */
function ncurses_def_shell_mode() ;

/**
 * @return int
 * @param  definition string
 * @param  keycode int
 * @desc   Defines a keycode 
 */
function ncurses_define_key($definition, $keycode) ;

/**
 * @return int
 * @param  panel resource
 * @desc   Remove panel from the stack and delete it (but not the associated window) 
 */
function ncurses_del_panel($panel) ;

/**
 * @return int
 * @param  milliseconds int
 * @desc   Delays output on terminal using padding characters 
 */
function ncurses_delay_output($milliseconds) ;

/**
 * @return bool
 * @desc   Deletes character at current position, move rest of line left 
 */
function ncurses_delch() ;

/**
 * @return bool
 * @desc   Deletes line at current position, move rest of screen up 
 */
function ncurses_deleteln() ;

/**
 * @return int
 * @param  window resource
 * @desc   Deletes a ncurses window 
 */
function ncurses_delwin($window) ;

/**
 * @return bool
 * @desc   Writes all prepared refreshes to terminal 
 */
function ncurses_doupdate() ;

/**
 * @return bool
 * @desc   Activates keyboard input echo 
 */
function ncurses_echo() ;

/**
 * @return int
 * @param  character int
 * @desc   Single character output including refresh 
 */
function ncurses_echochar($character) ;

/**
 * @return int
 * @desc   Stops using ncurses, clean up the screen 
 */
function ncurses_end() ;

/**
 * @return bool
 * @desc   Erases terminal screen 
 */
function ncurses_erase() ;

/**
 * @return string
 * @desc   Returns current erase character 
 */
function ncurses_erasechar() ;

/**
 * @return int
 * @desc   
 */
function ncurses_filter() ;

/**
 * @return bool
 * @desc   Flashes terminal screen (visual bell) 
 */
function ncurses_flash() ;

/**
 * @return bool
 * @desc   Flushes keyboard input buffer 
 */
function ncurses_flushinp() ;

/**
 * @return int
 * @desc   Reads a character from keyboard 
 */
function ncurses_getch() ;

/**
 * @return void
 * @param  window resource
 * @param  &y int
 * @param  &x int
 * @desc   Returns the size of a window 
 */
function ncurses_getmaxyx($window, &$y, &$x) ;

/**
 * @return bool
 * @param  mevent array
 * @desc   Reads mouse event from queue 
 */
function ncurses_getmouse($mevent) ;

/**
 * @return void
 * @param  window resource
 * @param  &y int
 * @param  &x int
 * @desc   Returns the current cursor position for a window 
 */
function ncurses_getyx($window, &$y, &$x) ;

/**
 * @return int
 * @param  tenth int
 * @desc   Puts terminal into halfdelay mode 
 */
function ncurses_halfdelay($tenth) ;

/**
 * @return bool
 * @desc   Checks if terminal has colors 
 */
function ncurses_has_colors() ;

/**
 * @return bool
 * @desc   Checks for insert- and delete-capabilities 
 */
function ncurses_has_ic() ;

/**
 * @return bool
 * @desc   Checks for line insert- and delete-capabilities 
 */
function ncurses_has_il() ;

/**
 * @return int
 * @param  keycode int
 * @desc   Checks for presence of a function key on terminal keyboard 
 */
function ncurses_has_key($keycode) ;

/**
 * @return int
 * @param  panel resource
 * @desc   Remove panel from the stack, making it invisible 
 */
function ncurses_hide_panel($panel) ;

/**
 * @return int
 * @param  charattr int
 * @param  n int
 * @desc   Draws a horizontal line at current position using an attributed character and max. n characters long 
 */
function ncurses_hline($charattr, $n) ;

/**
 * @return string
 * @desc   Gets character and attribute at current position 
 */
function ncurses_inch() ;

/**
 * @return int
 * @desc   Initializes ncurses 
 */
function ncurses_init() ;

/**
 * @return int
 * @param  color int
 * @param  r int
 * @param  g int
 * @param  b int
 * @desc   Sets new RGB value for color 
 */
function ncurses_init_color($color, $r, $g, $b) ;

/**
 * @return int
 * @param  pair int
 * @param  fg int
 * @param  bg int
 * @desc   Allocates a color pair 
 */
function ncurses_init_pair($pair, $fg, $bg) ;

/**
 * @return int
 * @param  character int
 * @desc   Inserts character moving rest of line including character at current position 
 */
function ncurses_insch($character) ;

/**
 * @return int
 * @param  count int
 * @desc   Inserts lines before current line scrolling down (negative numbers delete and scroll up) 
 */
function ncurses_insdelln($count) ;

/**
 * @return bool
 * @desc   Inserts a line, move rest of screen down 
 */
function ncurses_insertln() ;

/**
 * @return int
 * @param  text string
 * @desc   Inserts string at current position, moving rest of line right 
 */
function ncurses_insstr($text) ;

/**
 * @return int
 * @param  buffer string
 * @desc   Reads string from terminal screen 
 */
function ncurses_instr($buffer) ;

/**
 * @return bool
 * @desc   Ncurses is in endwin mode, normal screen output may be performed 
 */
function ncurses_isendwin() ;

/**
 * @return int
 * @param  keycode int
 * @param  enable bool
 * @desc   Enables or disable a keycode 
 */
function ncurses_keyok($keycode, $enable) ;

/**
 * @return int
 * @param  window resource
 * @param  bf bool
 * @desc   Turns keypad on or off 
 */
function ncurses_keypad($window, $bf) ;

/**
 * @return string
 * @desc   Returns current line kill character 
 */
function ncurses_killchar() ;

/**
 * @return string
 * @desc   Returns terminal description 
 */
function ncurses_longname() ;

/**
 * @return long
 * @param  window resource
 * @param  _8bit bool
 * @desc   Enables/Disable 8-bit meta key information 
 */
function ncurses_meta($window, $_8bit) ;

/**
 * @return bool
 * @param  y int
 * @param  x int
 * @param  toscreen bool
 * @desc   Transforms coordinates 
 */
function ncurses_mouse_trafo($y, $x, $toscreen) ;

/**
 * @return int
 * @param  milliseconds int
 * @desc   Sets timeout for mouse button clicks 
 */
function ncurses_mouseinterval($milliseconds) ;

/**
 * @return int
 * @param  newmask int
 * @param  &oldmask int
 * @desc   Returns and sets mouse options 
 */
function ncurses_mousemask($newmask, &$oldmask) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @desc   Moves output position 
 */
function ncurses_move($y, $x) ;

/**
 * @return int
 * @param  panel resource
 * @param  startx int
 * @param  starty int
 * @desc   Moves a panel so that it's upper-left corner is at [startx, starty] 
 */
function ncurses_move_panel($panel, $startx, $starty) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @param  c int
 * @desc   Moves current position and add character 
 */
function ncurses_mvaddch($y, $x, $c) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @param  s string
 * @param  n int
 * @desc   Moves position and add attrributed string with specified length 
 */
function ncurses_mvaddchnstr($y, $x, $s, $n) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @param  s string
 * @desc   Moves position and add attributed string 
 */
function ncurses_mvaddchstr($y, $x, $s) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @param  s string
 * @param  n int
 * @desc   Moves position and add string with specified length 
 */
function ncurses_mvaddnstr($y, $x, $s, $n) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @param  s string
 * @desc   Moves position and add string 
 */
function ncurses_mvaddstr($y, $x, $s) ;

/**
 * @return int
 * @param  old_y int
 * @param  old_x int
 * @param  new_y int
 * @param  new_x int
 * @desc   Moves cursor immediately 
 */
function ncurses_mvcur($old_y, $old_x, $new_y, $new_x) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @desc   Moves position and delete character, shift rest of line left 
 */
function ncurses_mvdelch($y, $x) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @desc   Moves position and get character at new position 
 */
function ncurses_mvgetch($y, $x) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @param  attrchar int
 * @param  n int
 * @desc   Sets new position and draw a horizontal line using an attributed character and max. n characters long 
 */
function ncurses_mvhline($y, $x, $attrchar, $n) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @desc   Moves position and get attributed character at new position 
 */
function ncurses_mvinch($y, $x) ;

/**
 * @return int
 * @param  y int
 * @param  x int
 * @param  attrchar int
 * @param  n int
 * @desc   Sets new position and draw a vertical line using an attributed character and max. n characters long 
 */
function ncurses_mvvline($y, $x, $attrchar, $n) ;

/**
 * @return int
 * @param  window resource
 * @param  y int
 * @param  x int
 * @param  text string
 * @desc   Adds string at new position in window 
 */
function ncurses_mvwaddstr($window, $y, $x, $text) ;

/**
 * @return int
 * @param  milliseconds int
 * @desc   Sleep 
 */
function ncurses_napms($milliseconds) ;

/**
 * @return resource
 * @param  window resource
 * @desc   Create a new panel and associate it with window 
 */
function ncurses_new_panel($window) ;

/**
 * @return resource
 * @param  rows int
 * @param  cols int
 * @desc   Creates a new pad (window) 
 */
function ncurses_newpad($rows, $cols) ;

/**
 * @return int
 * @param  rows int
 * @param  cols int
 * @param  y int
 * @param  x int
 * @desc   Creates a new window 
 */
function ncurses_newwin($rows, $cols, $y, $x) ;

/**
 * @return bool
 * @desc   Translates newline and carriage return / line feed 
 */
function ncurses_nl() ;

/**
 * @return bool
 * @desc   Switches terminal to cooked mode 
 */
function ncurses_nocbreak() ;

/**
 * @return bool
 * @desc   Switches off keyboard input echo 
 */
function ncurses_noecho() ;

/**
 * @return bool
 * @desc   Do not ranslate newline and carriage return / line feed 
 */
function ncurses_nonl() ;

/**
 * @return int
 * @desc   Do not flush on signal characters
 */
function ncurses_noqiflush() ;

/**
 * @return bool
 * @desc   Switches terminal out of raw mode 
 */
function ncurses_noraw() ;

/**
 * @return int
 * @param  pair int
 * @param  &f int
 * @param  &b int
 * @desc   Gets the RGB value for color 
 */
function ncurses_pair_content($pair, &$f, &$b) ;

/**
 * @return int
 * @param  panel resource
 * @desc   Returns the panel above panel. If panel is null, returns the bottom panel in the stack 
 */
function ncurses_panel_above($panel) ;

/**
 * @return int
 * @param  panel resource
 * @desc   Returns the panel below panel. If panel is null, returns the top panel in the stack 
 */
function ncurses_panel_below($panel) ;

/**
 * @return int
 * @param  panel resource
 * @desc   Returns the window associated with panel 
 */
function ncurses_panel_window($panel) ;

/**
 * @return int
 * @param  pad resource
 * @param  pminrow int
 * @param  pmincol int
 * @param  sminrow int
 * @param  smincol int
 * @param  smaxrow int
 * @param  smaxcol int
 * @desc   Copys a region from a pad into the virtual screen 
 */
function ncurses_pnoutrefresh($pad, $pminrow, $pmincol, $sminrow, $smincol, $smaxrow, $smaxcol) ;

/**
 * @return int
 * @param  pad resource
 * @param  pminrow int
 * @param  pmincol int
 * @param  sminrow int
 * @param  smincol int
 * @param  smaxrow int
 * @param  smaxcol int
 * @desc   Copys a region from a pad into the virtual screen 
 */
function ncurses_prefresh($pad, $pminrow, $pmincol, $sminrow, $smincol, $smaxrow, $smaxcol) ;

/**
 * @return int
 * @param  text string
 * @desc   ??? 
 */
function ncurses_putp($text) ;

/**
 * @return int
 * @desc   Flushes on signal characters 
 */
function ncurses_qiflush() ;

/**
 * @return bool
 * @desc   Switches terminal into raw mode 
 */
function ncurses_raw() ;

/**
 * @return int
 * @param  ch int
 * @desc   Refresh screen 
 */
function ncurses_refresh($ch) ;

/**
 * @return int
 * @param  panel resource
 * @param  window resource
 * @desc   Replaces the window associated with panel 
 */
function ncurses_replace_panel($panel, $window) ;

/**
 * @return int
 * @desc   Resets the prog mode saved by def_prog_mode 
 */
function ncurses_reset_prog_mode() ;

/**
 * @return int
 * @desc   Resets the shell mode saved by def_shell_mode 
 */
function ncurses_reset_shell_mode() ;

/**
 * @return bool
 * @desc   Restores saved terminal state 
 */
function ncurses_resetty() ;

/**
 * @return bool
 * @desc   Saves terminal state 
 */
function ncurses_savetty() ;

/**
 * @return int
 * @param  filename string
 * @desc   Dumps screen content to file 
 */
function ncurses_scr_dump($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Initializes screen from file dump 
 */
function ncurses_scr_init($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Restores screen from file dump 
 */
function ncurses_scr_restore($filename) ;

/**
 * @return int
 * @param  filename string
 * @desc   Inherits screen from file dump 
 */
function ncurses_scr_set($filename) ;

/**
 * @return int
 * @param  count int
 * @desc   Scrolls window content up or down without changing current position 
 */
function ncurses_scrl($count) ;

/**
 * @return int
 * @param  panel resource
 * @desc   Places an invisible panel on top of the stack, making it visible 
 */
function ncurses_show_panel($panel) ;

/**
 * @return bool
 * @desc   Returns current soft label keys attribute 
 */
function ncurses_slk_attr() ;

/**
 * @return int
 * @param  intarg int
 * @desc   ??? 
 */
function ncurses_slk_attroff($intarg) ;

/**
 * @return int
 * @param  intarg int
 * @desc   ??? 
 */
function ncurses_slk_attron($intarg) ;

/**
 * @return int
 * @param  intarg int
 * @desc   ??? 
 */
function ncurses_slk_attrset($intarg) ;

/**
 * @return bool
 * @desc   Clears soft label keys from screen 
 */
function ncurses_slk_clear() ;

/**
 * @return int
 * @param  intarg int
 * @desc   Sets color for soft label keys
 */
function ncurses_slk_color($intarg) ;

/**
 * @return int
 * @param  intarg int
 * @desc   Inits soft label keys 
 */
function ncurses_slk_init($intarg) ;

/**
 * @return bool
 * @desc   Copies soft label keys to virtual screen 
 */
function ncurses_slk_noutrefresh() ;

/**
 * @return bool
 * @desc   Copies soft label keys to screen 
 */
function ncurses_slk_refresh() ;

/**
 * @return bool
 * @desc   Restores soft label keys 
 */
function ncurses_slk_restore() ;

/**
 * @return bool
 * @param  labelnr int
 * @param  label string
 * @param  format int
 * @desc   Sets function key labels 
 */
function ncurses_slk_set($labelnr, $label, $format) ;

/**
 * @return bool
 * @desc   Forces output when ncurses_slk_noutrefresh is performed 
 */
function ncurses_slk_touch() ;

/**
 * @return int
 * @desc   Stops using 'standout' attribute 
 */
function ncurses_standend() ;

/**
 * @return int
 * @desc   Starts using 'standout' attribute 
 */
function ncurses_standout() ;

/**
 * @return int
 * @desc   Starts using colors 
 */
function ncurses_start_color() ;

/**
 * @return bool
 * @desc   Returns a logical OR of all attribute flags supported by terminal 
 */
function ncurses_termattrs() ;

/**
 * @return string
 * @desc   Returns terminal name 
 */
function ncurses_termname() ;

/**
 * @return void
 * @param  millisec int
 * @desc   Sets timeout for special key sequences 
 */
function ncurses_timeout($millisec) ;

/**
 * @return int
 * @param  panel resource
 * @desc   Moves a visible panel to the top of the stack 
 */
function ncurses_top_panel($panel) ;

/**
 * @return int
 * @param  fd int
 * @desc   Specifys different filedescriptor for typeahead checking 
 */
function ncurses_typeahead($fd) ;

/**
 * @return int
 * @param  keycode int
 * @desc   Puts a character back into the input stream 
 */
function ncurses_ungetch($keycode) ;

/**
 * @return int
 * @param  mevent array
 * @desc   Pushes mouse event to queue 
 */
function ncurses_ungetmouse($mevent) ;

/**
 * @return void
 * @desc   Refreshes the virtual screen to reflect the relations between panels in the stack. 
 */
function ncurses_update_panels() ;

/**
 * @return bool
 * @desc   Assigns terminal default colors to color id -1 
 */
function ncurses_use_default_colors() ;

/**
 * @return void
 * @param  flag bool
 * @desc   Controls use of environment information about terminal size 
 */
function ncurses_use_env($flag) ;

/**
 * @return int
 * @param  flag bool
 * @desc   Controls use of extended names in terminfo descriptions 
 */
function ncurses_use_extended_names($flag) ;

/**
 * @return int
 * @param  intarg int
 * @desc   ??? 
 */
function ncurses_vidattr($intarg) ;

/**
 * @return int
 * @param  charattr int
 * @param  n int
 * @desc   Draws a vertical line at current position using an attributed character and max. n characters long 
 */
function ncurses_vline($charattr, $n) ;

/**
 * @return int
 * @param  window resource
 * @param  ch int
 * @desc   Adds character at current position in a window and advance cursor 
 */
function ncurses_waddch($window, $ch) ;

/**
 * @return int
 * @param  window resource
 * @param  str string
 * @param  n int[optional]
 * @desc   Outputs text at current postion in window 
 */
function ncurses_waddstr($window, $str, $n = null) ;

/**
 * @return int
 * @param  window resource
 * @param  left int
 * @param  right int
 * @param  top int
 * @param  bottom int
 * @param  tl_corner int
 * @param  tr_corner int
 * @param  bl_corner int
 * @param  br_corner int
 * @desc   Draws a border around the window using attributed characters 
 */
function ncurses_wborder($window, $left, $right, $top, $bottom, $tl_corner, $tr_corner, $bl_corner, $br_corner) ;

/**
 * @return int
 * @param  window resource
 * @desc   Clears window 
 */
function ncurses_wclear($window) ;

/**
 * @return int
 * @param  window resource
 * @param  color_pair int
 * @desc   Sets windows color pairings 
 */
function ncurses_wcolor_set($window, $color_pair) ;

/**
 * @return long
 * @param  window resource
 * @desc   Erase window contents 
 */
function ncurses_werase($window) ;

/**
 * @return int
 * @param  window resource
 * @desc   Reads a character from keyboard (window) 
 */
function ncurses_wgetch($window) ;

/**
 * @return int
 * @param  window resource
 * @param  charattr int
 * @param  n int
 * @desc   Draws a horizontal line in a window at current position using an attributed character and max. n characters long 
 */
function ncurses_whline($window, $charattr, $n) ;

/**
 * @return bool
 * @param  window resource
 * @param  y int
 * @param  x int
 * @param  toscreen bool
 * @desc   Transforms window/stdscr coordinates 
 */
function ncurses_wmouse_trafo($window, $y, $x, $toscreen) ;

/**
 * @return int
 * @param  window resource
 * @param  y int
 * @param  x int
 * @desc   Moves windows output position 
 */
function ncurses_wmove($window, $y, $x) ;

/**
 * @return int
 * @param  window resource
 * @desc   Copies window to virtual screen 
 */
function ncurses_wnoutrefresh($window) ;

/**
 * @return int
 * @param  window resource
 * @desc   Refreshes window on terminal screen 
 */
function ncurses_wrefresh($window) ;

/**
 * @return int
 * @param  window resource
 * @param  charattr int
 * @param  n int
 * @desc   Draws a vertical line in a window at current position using an attributed character and max. n characters long 
 */
function ncurses_wvline($window, $charattr, $n) ;

/**
 * @return object
 * @param  name string
 * @param  content string
 * @desc   Adds child node to parent node 
 */
function new_child($name, $content) ;

/**
 * @return object
 * @param  version string
 * @desc   Creates new xmldoc 
 */
function new_xmldoc($version) ;

/**
 * @return mixed
 * @param  array_arg array
 * @desc   Move array argument's internal pointer to the next element and return it 
 */
function next($array_arg) ;

/**
 * @return object
 * @desc   Returns next child from list of children 
 */
function next_sibling() ;

/**
 * @return void
 * @desc   Moves the sprite to the next frame 
 */
function nextframe() ;

/**
 * @return string
 * @param  MSGID1 string
 * @param  MSGID2 string
 * @param  N int
 * @desc   Plural version of gettext() 
 */
function ngettext($MSGID1, $MSGID2, $N) ;

/**
 * @return string
 * @param  str string
 * @desc   Converts newlines to HTML line breaks 
 */
function nl2br($str) ;

/**
 * @return string
 * @param  item int
 * @desc   Query language and locale information 
 */
function nl_langinfo($item) ;

/**
 * @return object
 * @param  name string
 * @desc   Creates node 
 */
function node($name) ;

/**
 * @return int
 * @param  node int[optional]
 * @desc   Returns list of children nodes 
 */
function node_children($node = null) ;

/**
 * @return array
 * @desc   
 */
function node_name() ;

/**
 * @return int
 * @param  node int[optional]
 * @desc   Returns list of namespaces 
 */
function node_namespace($node = null) ;

/**
 * @return array
 * @desc   Returns list of attribute names 
 */
function node_specified() ;

/**
 * @return int
 * @desc   Returns the type of the node 
 */
function node_type() ;

/**
 * @return array
 * @desc   Returns list of attribute names 
 */
function node_value() ;

/**
 * @return array
 * @desc   Returns list of notations 
 */
function notations() ;

/**
 * @return array
 * @param  server string
 * @param  mailbox string
 * @param  msg_number int
 * @desc   Opens the message msg_number in the specified mailbox on the specified server (leave server blank for local) and returns an array of body text lines 
 */
function notes_body($server, $mailbox, $msg_number) ;

/**
 * @return string
 * @param  from_database_name string
 * @param  to_database_name string
 * @param  title string[optional]
 * @desc   Creates a note using form form_name 
 */
function notes_copy_db($from_database_name, $to_database_name, $title = null) ;

/**
 * @return bool
 * @param  database_name string
 * @desc   Creates a Lotus Notes database 
 */
function notes_create_db($database_name) ;

/**
 * @return string
 * @param  database_name string
 * @param  form_name string
 * @desc   Creates a note using form form_name 
 */
function notes_create_note($database_name, $form_name) ;

/**
 * @return bool
 * @param  database_name string
 * @desc   Drops a Lotus Notes database 
 */
function notes_drop_db($database_name) ;

/**
 * @return bool
 * @param  database_name string
 * @param  name string
 * @param  type string[optional]
 * @desc   Returns a note id found in database_name 
 */
function notes_find_note($database_name, $name, $type = null) ;

/**
 * @return object
 * @param  server string
 * @param  mailbox string
 * @param  msg_number int
 * @desc   Opens the message msg_number in the specified mailbox on the specified server (leave server blank for local) 
 */
function notes_header_info($server, $mailbox, $msg_number) ;

/**
 * @return bool
 * @param  db string
 * @desc   ??? 
 */
function notes_list_msgs($db) ;

/**
 * @return string
 * @param  database_name string
 * @param  user_name string
 * @param  note_id string
 * @desc   Marks a note_id as read for the User user_name.  Note: user_name must be fully distinguished user name 
 */
function notes_mark_read($database_name, $user_name, $note_id) ;

/**
 * @return string
 * @param  database_name string
 * @param  user_name string
 * @param  note_id string
 * @desc   Marks a note_id as unread for the User user_name.  Note: user_name must be fully distinguished user name 
 */
function notes_mark_unread($database_name, $user_name, $note_id) ;

/**
 * @return bool
 * @param  database_name string
 * @param  name string
 * @desc   Creates a navigator name, in database_name 
 */
function notes_nav_create($database_name, $name) ;

/**
 * @return string
 * @param  database_name string
 * @param  keywords string
 * @desc   Finds notes that match keywords in database_name.  The note(s) that are returned must be converted to base 16. Example base_convert($note_id, "10", "16") 
 */
function notes_search($database_name, $keywords) ;

/**
 * @return string
 * @param  database_name string
 * @param  user_name string
 * @desc   Returns the unread note id's for the current User user_name.  Note: user_name must be fully distinguished user name 
 */
function notes_unread($database_name, $user_name) ;

/**
 * @return string
 * @param  database_name string
 * @desc   Gets the Lotus Notes version 
 */
function notes_version($database_name) ;

/**
 * @return array
 * @desc   Get all headers from the request 
 */
function nsapi_request_headers() ;

/**
 * @return array
 * @desc   Get all headers from the response 
 */
function nsapi_response_headers() ;

/**
 * @return bool
 * @param  uri string
 * @desc   Perform an NSAPI sub-request 
 */
function nsapi_virtual($uri) ;

/**
 * @return string
 * @param  number float
 * @param  num_decimal_places int[optional]
 * @param  dec_seperator string[optional]
 * @param  thousands_seperator string
 * @desc   Formats a number with grouped thousands 
 */
function number_format($number, $num_decimal_places = null, $dec_seperator = null, $thousands_seperator) ;

/**
 * @return bool
 * @desc   Clean (delete) the current output buffer 
 */
function ob_clean() ;

/**
 * @return bool
 * @desc   Clean the output buffer, and delete current output buffer 
 */
function ob_end_clean() ;

/**
 * @return bool
 * @desc   Flush (send) the output buffer, and delete current output buffer 
 */
function ob_end_flush() ;

/**
 * @return bool
 * @desc   Flush (send) contents of the output buffer. The last buffer content is sent to next buffer 
 */
function ob_flush() ;

/**
 * @return bool
 * @desc   Get current buffer contents and delete current output buffer 
 */
function ob_get_clean() ;

/**
 * @return string
 * @desc   Return the contents of the output buffer 
 */
function ob_get_contents() ;

/**
 * @return bool
 * @desc   Get current buffer contents, flush (send) the output buffer, and delete current output buffer 
 */
function ob_get_flush() ;

/**
 * @return string
 * @desc   Return the length of the output buffer 
 */
function ob_get_length() ;

/**
 * @return int
 * @desc   Return the nesting level of the output buffer 
 */
function ob_get_level() ;

/**
 * @return false|array
 * @param  full_status bool[optional]
 * @desc   Return the status of the active or all output buffers 
 */
function ob_get_status($full_status = null) ;

/**
 * @return string
 * @param  str string
 * @param  mode int
 * @desc   Encode str based on accept-encoding setting - designed to be called from ob_start() 
 */
function ob_gzhandler($str, $mode) ;

/**
 * @return string
 * @param  contents string
 * @param  status int
 * @desc   Returns str in output buffer converted to the iconv.output_encoding character set 
 */
function ob_iconv_handler($contents, $status) ;

/**
 * @return void
 * @param  flag int[optional]
 * @desc   Turn implicit flush on/off and is equivalent to calling flush() after every output call 
 */
function ob_implicit_flush($flag = null) ;

/**
 * @return false|array
 * @desc   
 */
function ob_list_handlers() ;

/**
 * @return bool
 * @param  user_function string|array[optional]
 * @param  chunk_size int[optional]
 * @param  erase bool[optional]
 * @desc   Turn on Output Buffering (specifying an optional output handler). 
 */
function ob_start($user_function = null, $chunk_size = null, $erase = null) ;

/**
 * @return bool
 * @param  stmt int
 * @param  name string
 * @param  &var mixed
 * @param  maxlength int[optional]
 * @param  type int[optional]
 * @desc   Bind a PHP variable to an Oracle placeholder by name 
 */
function ocibindbyname($stmt, $name, &$var, $maxlength = null, $type = null) ;

/**
 * @return bool
 * @param  stmt int
 * @desc   Prepare a new row of data for reading 
 */
function ocicancel($stmt) ;









/**
 * @return bool
 * @param  stmt int
 * @param  col int
 * @desc   Tell whether a column is NULL 
 */
function ocicolumnisnull($stmt, $col) ;

/**
 * @return string
 * @param  stmt int
 * @param  col int
 * @desc   Tell the name of a column 
 */
function ocicolumnname($stmt, $col) ;

/**
 * @return int
 * @param  stmt int
 * @param  col int
 * @desc   Tell the precision of a column 
 */
function ocicolumnprecision($stmt, $col) ;

/**
 * @return int
 * @param  stmt int
 * @param  col int
 * @desc   Tell the scale of a column 
 */
function ocicolumnscale($stmt, $col) ;

/**
 * @return int
 * @param  stmt int
 * @param  col int
 * @desc   Tell the maximum data size of a column 
 */
function ocicolumnsize($stmt, $col) ;

/**
 * @return mixed
 * @param  stmt int
 * @param  col int
 * @desc   Tell the data type of a column 
 */
function ocicolumntype($stmt, $col) ;

/**
 * @return mixed
 * @param  stmt int
 * @param  col int
 * @desc   Tell the raw oracle data type of a column 
 */
function ocicolumntyperaw($stmt, $col) ;

/**
 * @return bool
 * @param  conn int
 * @desc   Commit the current context 
 */
function ocicommit($conn) ;

/**
 * @return bool
 * @param  stmt int
 * @param  name string
 * @param  &var mixed
 * @param  type int[optional]
 * @desc   Define a PHP variable to an Oracle column by name 
 */
function ocidefinebyname($stmt, $name, &$var, $type = null) ;

/**
 * @return array
 * @param  stmt|conn|global int[optional]
 * @desc   Return the last error of stmt|conn|global. If no error happened returns false. 
 */
function ocierror($stmt = null) ;

/**
 * @return bool
 * @param  stmt int
 * @param  mode int[optional]
 * @desc   Execute a parsed statement 
 */
function ociexecute($stmt, $mode = null) ;

/**
 * @return bool
 * @param  stmt int
 * @desc   Prepare a new row of data for reading 
 */
function ocifetch($stmt) ;

/**
 * @return int
 * @param  stmt int
 * @param  &output array
 * @param  mode int[optional]
 * @desc   Fetch a row of result data into an array 
 */
function ocifetchinto($stmt, &$output, $mode = null) ;

/**
 * @return int
 * @param  stmt int
 * @param  &output array
 * @param  skip int
 * @param  maxrows int[optional]
 * @param  flags int[optional]
 * @desc   Fetch all rows of result data into an array 
 */
function ocifetchstatement($stmt, &$output, $skip, $maxrows = null, $flags = null) ;


/**
 * @return bool
 * @param  stmt int
 * @desc   Free all resources associated with a statement 
 */
function ocifreecursor($stmt) ;


/**
 * @return bool
 * @param  stmt int
 * @desc   Free all resources associated with a statement 
 */
function ocifreestatement($stmt) ;

/**
 * @return void
 * @param  onoff int
 * @desc   Toggle internal debugging output for the OCI extension 
 */
function ociinternaldebug($onoff) ;


/**
 * @return bool
 * @param  conn int
 * @desc   Disconnect from database 
 */
function ocilogoff($conn) ;

/**
 * @return int
 * @param  user string
 * @param  pass string
 * @param  db string[optional]
 * @desc   
 */
function ocilogon($user, $pass, $db = null) ;

/**
 * @return bool
 * @param  connection int
 * @param  tdo string
 * @param  schema string[optional]
 * @desc   Initialize a new collection 
 */
function ocinewcollection($connection, $tdo, $schema = null) ;

/**
 * @return int
 * @param  conn int
 * @desc   Return a new cursor (Statement-Handle) - use this to bind ref-cursors! 
 */
function ocinewcursor($conn) ;

/**
 * @return string
 * @param  connection int
 * @param  type int[optional]
 * @desc   Initialize a new empty descriptor LOB/FILE (LOB is default) 
 */
function ocinewdescriptor($connection, $type = null) ;

/**
 * @return int
 * @param  user string
 * @param  pass string
 * @param  db string[optional]
 * @desc   Connect to an Oracle database and log on. returns a new session 
 */
function ocinlogon($user, $pass, $db = null) ;

/**
 * @return int
 * @param  stmt int
 * @desc   Return the number of result columns in a statement 
 */
function ocinumcols($stmt) ;

/**
 * @return int
 * @param  conn int
 * @param  query string
 * @desc   Parse a query and return a statement 
 */
function ociparse($conn, $query) ;

/**
 * @return bool
 * @param  conn int
 * @param  username string
 * @param  old_password string
 * @param  new_password string
 * @desc   changes the password of an account
 */
function ocipasswordchange($conn, $username, $old_password, $new_password) ;

/**
 * @return int
 * @param  user string
 * @param  pass string
 * @param  db string[optional]
 * @desc   Connect to an Oracle database using a persistent connection and log on. Returns a new session. 
 */
function ociplogon($user, $pass, $db = null) ;

/**
 * @return string
 * @param  stmt int
 * @param  column mixed
 * @desc   Return a single column of result data 
 */
function ociresult($stmt, $column) ;

/**
 * @return bool
 * @param  conn int
 * @desc   Rollback the current context 
 */
function ocirollback($conn) ;

/**
 * @return int
 * @param  stmt int
 * @desc   Return the row count of an OCI statement 
 */
function ocirowcount($stmt) ;



/**
 * @return string
 * @param  conn int
 * @desc   Return a string containing server version information 
 */
function ociserverversion($conn) ;

/**
 * @return int
 * @param  stmt int
 * @param  prefetch_rows int
 * @desc   sets the number of rows to be prefetched on execute to prefetch_rows for stmt 
 */
function ocisetprefetch($stmt, $prefetch_rows) ;

/**
 * @return string
 * @param  stmt int
 * @desc   Return the query type of an OCI statement 
 */
function ocistatementtype($stmt) ;



/**
 * @return int
 * @param  octal_number string
 * @desc   Returns the decimal equivalent of an octal string 
 */
function octdec($octal_number) ;

/**
 * @return mixed
 * @param  connection_id resource
 * @param  OnOff int[optional]
 * @desc   Toggle autocommit mode or get status 
 */
function odbc_autocommit($connection_id, $OnOff = null) ;

/**
 * @return bool
 * @param  result_id int
 * @param  mode int
 * @desc   Handle binary column data 
 */
function odbc_binmode($result_id, $mode) ;

/**
 * @return void
 * @param  connection_id resource
 * @desc   Close an ODBC connection 
 */
function odbc_close($connection_id) ;

/**
 * @return void
 * @desc   Close all ODBC connections 
 */
function odbc_close_all() ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  catalog string
 * @param  schema string
 * @param  table string
 * @param  column string
 * @desc   Returns a result identifier that can be used to fetch a list of columns and associated privileges for the specified table 
 */
function odbc_columnprivileges($connection_id, $catalog, $schema, $table, $column) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  qualifier string
 * @param  owner string
 * @param  table_name string
 * @param  column_name string
 * @desc   Returns a result identifier that can be used to fetch a list of column names in specified tables 
 */
function odbc_columns($connection_id, $qualifier, $owner, $table_name, $column_name) ;

/**
 * @return bool
 * @param  connection_id resource
 * @desc   Commit an ODBC transaction 
 */
function odbc_commit($connection_id) ;

/**
 * @return resource
 * @param  DSN string
 * @param  user string
 * @param  password string
 * @param  cursor_option int[optional]
 * @desc   Connect to a datasource 
 */
function odbc_connect($DSN, $user, $password, $cursor_option = null) ;

/**
 * @return string
 * @param  result_id resource
 * @desc   Get cursor name 
 */
function odbc_cursor($result_id) ;

/**
 * @return array
 * @param  connection_id resource
 * @param  fetch_type int
 * @desc   Return information about the currently connected data source 
 */
function odbc_data_source($connection_id, $fetch_type) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  query string
 * @param  flags int[optional]
 * @desc   Prepare and execute an SQL statement 
 */
function odbc_do($connection_id, $query, $flags = null) ;

/**
 * @return string
 * @param  connection_id resource[optional]
 * @desc   Get the last error code 
 */
function odbc_error($connection_id = null) ;

/**
 * @return string
 * @param  connection_id resource[optional]
 * @desc   Get the last error message 
 */
function odbc_errormsg($connection_id = null) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  query string
 * @param  flags int[optional]
 * @desc   Prepare and execute an SQL statement 
 */
function odbc_exec($connection_id, $query, $flags = null) ;

/**
 * @return bool
 * @param  result_id resource
 * @param  parameters_array array[optional]
 * @desc   Execute a prepared statement 
 */
function odbc_execute($result_id, $parameters_array = null) ;

/**
 * @return array
 * @param  result int
 * @param  rownumber int[optional]
 * @desc   Fetch a result row as an associative array 
 */
function odbc_fetch_array($result, $rownumber = null) ;

/**
 * @return int
 * @param  result_id resource
 * @param  result_array array
 * @param  rownumber int[optional]
 * @desc   Fetch one result row into an array 
 */
function odbc_fetch_into($result_id, $result_array, $rownumber = null) ;

/**
 * @return object
 * @param  result int
 * @param  rownumber int[optional]
 * @desc   Fetch a result row as an object 
 */
function odbc_fetch_object($result, $rownumber = null) ;

/**
 * @return bool
 * @param  result_id resource
 * @param  row_number int[optional]
 * @desc   Fetch a row 
 */
function odbc_fetch_row($result_id, $row_number = null) ;

/**
 * @return int
 * @param  result_id resource
 * @param  field_number int
 * @desc   Get the length (precision) of a column 
 */
function odbc_field_len($result_id, $field_number) ;

/**
 * @return string
 * @param  result_id resource
 * @param  field_number int
 * @desc   Get a column name 
 */
function odbc_field_name($result_id, $field_number) ;

/**
 * @return int
 * @param  result_id resource
 * @param  field_name string
 * @desc   Return column number 
 */
function odbc_field_num($result_id, $field_name) ;

/**
 * @return int
 * @param  result_id resource
 * @param  field_number int
 * @desc   Get the length (precision) of a column 
 */
function odbc_field_precision($result_id, $field_number) ;

/**
 * @return int
 * @param  result_id resource
 * @param  field_number int
 * @desc   Get the scale of a column 
 */
function odbc_field_scale($result_id, $field_number) ;

/**
 * @return string
 * @param  result_id resource
 * @param  field_number int
 * @desc   Get the datatype of a column 
 */
function odbc_field_type($result_id, $field_number) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  pk_qualifier string
 * @param  pk_owner string
 * @param  pk_table string
 * @param  fk_qualifier string
 * @param  fk_owner string
 * @param  fk_table string
 * @desc   Returns a result identifier to either a list of foreign keys in the specified table or a list of foreign keys in other tables that refer to the primary key in the specified table 
 */
function odbc_foreignkeys($connection_id, $pk_qualifier, $pk_owner, $pk_table, $fk_qualifier, $fk_owner, $fk_table) ;

/**
 * @return bool
 * @param  result_id resource
 * @desc   Free resources associated with a result 
 */
function odbc_free_result($result_id) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  data_type int[optional]
 * @desc   Returns a result identifier containing information about data types supported by the data source 
 */
function odbc_gettypeinfo($connection_id, $data_type = null) ;

/**
 * @return bool
 * @param  result_id int
 * @param  length int
 * @desc   Handle LONG columns 
 */
function odbc_longreadlen($result_id, $length) ;

/**
 * @return bool
 * @param  result_id resource
 * @desc   Checks if multiple results are avaiable 
 */
function odbc_next_result($result_id) ;

/**
 * @return int
 * @param  result_id resource
 * @desc   Get number of columns in a result 
 */
function odbc_num_fields($result_id) ;

/**
 * @return int
 * @param  result_id resource
 * @desc   Get number of rows in a result 
 */
function odbc_num_rows($result_id) ;

/**
 * @return resource
 * @param  DSN string
 * @param  user string
 * @param  password string
 * @param  cursor_option int[optional]
 * @desc   Establish a persistent connection to a datasource 
 */
function odbc_pconnect($DSN, $user, $password, $cursor_option = null) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  query string
 * @desc   Prepares a statement for execution 
 */
function odbc_prepare($connection_id, $query) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  qualifier string
 * @param  owner string
 * @param  table string
 * @desc   Returns a result identifier listing the column names that comprise the primary key for a table 
 */
function odbc_primarykeys($connection_id, $qualifier, $owner, $table) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  qualifier string[optional]
 * @param  owner string
 * @param  proc string
 * @param  column string
 * @desc   Returns a result identifier containing the list of input and output parameters, as well as the columns that make up the result set for the specified procedures 
 */
function odbc_procedurecolumns($connection_id, $qualifier = null, $owner, $proc, $column) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  qualifier string[optional]
 * @param  owner string
 * @param  name string
 * @desc   Returns a result identifier containg the list of procedure names in a datasource 
 */
function odbc_procedures($connection_id, $qualifier = null, $owner, $name) ;

/**
 * @return mixed
 * @param  result_id resource
 * @param  field mixed
 * @desc   Get result data 
 */
function odbc_result($result_id, $field) ;

/**
 * @return int
 * @param  result_id resource
 * @param  format string[optional]
 * @desc   Print result as HTML table 
 */
function odbc_result_all($result_id, $format = null) ;

/**
 * @return bool
 * @param  connection_id resource
 * @desc   Rollback a transaction 
 */
function odbc_rollback($connection_id) ;

/**
 * @return bool
 * @param  conn_id|result_id resource
 * @param  which int
 * @param  option int
 * @param  value int
 * @desc   Sets connection or statement options 
 */
function odbc_setoption($conn_id, $which, $option, $value) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  type int
 * @param  qualifier string
 * @param  owner string
 * @param  table string
 * @param  scope int
 * @param  nullable int
 * @desc   Returns a result identifier containing either the optimal set of columns that uniquely identifies a row in the table or columns that are automatically updated when any value in the row is updated by a transaction 
 */
function odbc_specialcolumns($connection_id, $type, $qualifier, $owner, $table, $scope, $nullable) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  qualifier string
 * @param  owner string
 * @param  name string
 * @param  unique int
 * @param  accuracy int
 * @desc   Returns a result identifier that contains statistics about a single table and the indexes associated with the table 
 */
function odbc_statistics($connection_id, $qualifier, $owner, $name, $unique, $accuracy) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  qualifier string
 * @param  owner string
 * @param  name string
 * @desc   Returns a result identifier containing a list of tables and the privileges associated with each table 
 */
function odbc_tableprivileges($connection_id, $qualifier, $owner, $name) ;

/**
 * @return resource
 * @param  connection_id resource
 * @param  qualifier string[optional]
 * @param  owner string
 * @param  name string
 * @param  table_types string
 * @desc   Call the SQLTables function 
 */
function odbc_tables($connection_id, $qualifier = null, $owner, $name, $table_types) ;

/**
 * @return mixed
 * @param  path string
 * @desc   Open a directory and return a dir_handle 
 */
function opendir($path) ;

/**
 * @return bool
 * @param  ident string
 * @param  option int
 * @param  facility int
 * @desc   Open connection to system logger 
 */
function openlog($ident, $option, $facility) ;

/**
 * @return bool
 * @param  csr resource
 * @param  &out string
 * @param  notext bool[optional]
 * @desc   Exports a CSR to file or a var 
 */
function openssl_csr_export($csr, &$out, $notext = true) ;

/**
 * @return bool
 * @param  csr resource
 * @param  outfilename string
 * @param  notext bool[optional]
 * @desc   Exports a CSR to file 
 */
function openssl_csr_export_to_file($csr, $outfilename, $notext = true) ;

/**
 * @return bool
 * @param  dn array
 * @param  &privkey resource
 * @param  configargs array[optional]
 * @param  extraattribs array
 * @desc   Generates a privkey and CSR 
 */
function openssl_csr_new($dn, &$privkey, $configargs = null, $extraattribs) ;

/**
 * @return resource
 * @param  csr mixed
 * @param  x509 mixed
 * @param  priv_key mixed
 * @param  days long
 * @param  config_args array[optional]
 * @param  serial long[optional]
 * @desc   Signs a cert with another CERT 
 */
function openssl_csr_sign($csr, $x509, $priv_key, $days, $config_args = null, $serial = null) ;

/**
 * @return mixed
 * @desc   Returns a description of the last error, and alters the index of the error messages. Returns false when the are no more messages 
 */
function openssl_error_string() ;

/**
 * @return void
 * @param  key int
 * @desc   Frees a key 
 */
function openssl_free_key($key) ;

/**
 * @return int
 * @param  key string
 * @param  passphrase string[optional]
 * @desc   Gets private keys 
 */
function openssl_get_privatekey($key, $passphrase = null) ;

/**
 * @return int
 * @param  cert mixed
 * @desc   Gets public key from X.509 certificate 
 */
function openssl_get_publickey($cert) ;

/**
 * @return bool
 * @param  data string
 * @param  opendata &string
 * @param  ekey string
 * @param  privkey mixed
 * @desc   Opens data 
 */
function openssl_open($data, $opendata, $ekey, $privkey) ;

/**
 * @return bool
 * @param  infilename string
 * @param  outfilename string
 * @param  recipcert mixed
 * @param  recipkey mixed[optional]
 * @desc   Decrypts the S/MIME message in the file name infilename and output the results to the file name outfilename.  recipcert is a CERT for one of the recipients. recipkey specifies the private key matching recipcert, if recipcert does not include the key 
 */
function openssl_pkcs7_decrypt($infilename, $outfilename, $recipcert, $recipkey = null) ;

/**
 * @return bool
 * @param  infile string
 * @param  outfile string
 * @param  recipcerts mixed
 * @param  headers array
 * @param  flags long[optional]
 * @desc   Encrypts the message in the file named infile with the certificates in recipcerts and output the result to the file named outfile 
 */
function openssl_pkcs7_encrypt($infile, $outfile, $recipcerts, $headers, $flags = null) ;

/**
 * @return bool
 * @param  infile string
 * @param  outfile string
 * @param  signcert mixed
 * @param  signkey mixed
 * @param  headers array
 * @param  flags long[optional]
 * @param  extracertsfilename string[optional]
 * @desc   Signs the MIME message in the file named infile with signcert/signkey and output the result to file name outfile. headers lists plain text headers to exclude from the signed portion of the message, and should include to, from and subject as a minimum 
 */
function openssl_pkcs7_sign($infile, $outfile, $signcert, $signkey, $headers, $flags = null, $extracertsfilename = null) ;

/**
 * @return bool
 * @param  filename string
 * @param  flags long
 * @param  signerscerts string[optional]
 * @param  cainfo array[optional]
 * @param  extracerts string[optional]
 * @desc   Verifys that the data block is intact, the signer is who they say they are, and returns the CERTs of the signers 
 */
function openssl_pkcs7_verify($filename, $flags, $signerscerts = null, $cainfo = null, $extracerts = null) ;

/**
 * @return bool
 * @param  key mixed
 * @param  out &mixed
 * @param  passphrase string[optional]
 * @param  config_args array[optional]
 * @desc   Gets an exportable representation of a key into a string or file 
 */
function openssl_pkey_export($key, $out, $passphrase = null, $config_args = null) ;

/**
 * @return bool
 * @param  key mixed
 * @param  outfilename string
 * @param  passphrase string[optional]
 * @param  config_args array
 * @desc   Gets an exportable representation of a key into a file 
 */
function openssl_pkey_export_to_file($key, $outfilename, $passphrase = null, $config_args) ;

/**
 * @return void
 * @param  key int
 * @desc   Frees a key 
 */
function openssl_pkey_free($key) ;

/**
 * @return int
 * @param  key string
 * @param  passphrase string[optional]
 * @desc   Gets private keys 
 */
function openssl_pkey_get_private($key, $passphrase = null) ;

/**
 * @return int
 * @param  cert mixed
 * @desc   Gets public key from X.509 certificate 
 */
function openssl_pkey_get_public($cert) ;

/**
 * @return resource
 * @param  configargs array[optional]
 * @desc   Generates a new private key 
 */
function openssl_pkey_new($configargs = null) ;

/**
 * @return bool
 * @param  data string
 * @param  &decrypted string
 * @param  key mixed
 * @param  padding int[optional]
 * @desc   Decrypts data with private key 
 */
function openssl_private_decrypt($data, &$decrypted, $key, $padding = null) ;

/**
 * @return bool
 * @param  data string
 * @param  crypted string
 * @param  key mixed
 * @param  padding int[optional]
 * @desc   Encrypts data with private key 
 */
function openssl_private_encrypt($data, $crypted, $key, $padding = null) ;

/**
 * @return bool
 * @param  data string
 * @param  crypted string
 * @param  key resource
 * @param  padding int[optional]
 * @desc   Decrypts data with public key 
 */
function openssl_public_decrypt($data, $crypted, $key, $padding = null) ;

/**
 * @return bool
 * @param  data string
 * @param  crypted string
 * @param  key mixed
 * @param  padding int[optional]
 * @desc   Encrypts data with public key 
 */
function openssl_public_encrypt($data, $crypted, $key, $padding = null) ;

/**
 * @return int
 * @param  data string
 * @param  sealdata &string
 * @param  ekeys &array
 * @param  pubkeys array
 * @desc   Seals data 
 */
function openssl_seal($data, $sealdata, $ekeys, $pubkeys) ;

/**
 * @return bool
 * @param  data string
 * @param  signature &string
 * @param  key mixed
 * @desc   Signs data 
 */
function openssl_sign($data, $signature, $key) ;

/**
 * @return int
 * @param  data string
 * @param  signature string
 * @param  key mixed
 * @desc   Verifys data 
 */
function openssl_verify($data, $signature, $key) ;

/**
 * @return bool
 * @param  cert mixed
 * @param  key mixed
 * @desc   Checks if a private key corresponds to a CERT 
 */
function openssl_x509_check_private_key($cert, $key) ;

/**
 * @return int
 * @param  x509cert mixed
 * @param  purpose int
 * @param  cainfo array
 * @param  untrustedfile string[optional]
 * @desc   Checks the CERT to see if it can be used for the purpose in purpose. cainfo holds information about trusted CAs 
 */
function openssl_x509_checkpurpose($x509cert, $purpose, $cainfo, $untrustedfile = null) ;

/**
 * @return bool
 * @param  x509 mixed
 * @param  &out string
 * @param  notext bool[optional]
 * @desc   Exports a CERT to file or a var 
 */
function openssl_x509_export($x509, &$out, $notext = true) ;

/**
 * @return bool
 * @param  x509 mixed
 * @param  outfilename string
 * @param  notext bool[optional]
 * @desc   Exports a CERT to file or a var 
 */
function openssl_x509_export_to_file($x509, $outfilename, $notext = true) ;

/**
 * @return void
 * @param  x509 resource
 * @desc   Frees X.509 certificates 
 */
function openssl_x509_free($x509) ;

/**
 * @return array
 * @param  x509 mixed
 * @param  shortnames bool[optional]
 * @desc   Returns an array of the fields/values of the CERT 
 */
function openssl_x509_parse($x509, $shortnames = true) ;

/**
 * @return resource
 * @param  cert mixed
 * @desc   Reads X.509 certificates 
 */
function openssl_x509_read($cert) ;

/**
 * @return int
 * @param  cursor int
 * @param  php_variable_name string
 * @param  sql_parameter_name string
 * @param  length int
 * @param  type int[optional]
 * @desc   Bind a PHP variable to an Oracle parameter 
 */
function ora_bind($cursor, $php_variable_name, $sql_parameter_name, $length, $type = null) ;

/**
 * @return int
 * @param  cursor int
 * @desc   Close an Oracle cursor 
 */
function ora_close($cursor) ;

/**
 * @return string
 * @param  cursor int
 * @param  column int
 * @desc   Get the name of an Oracle result column 
 */
function ora_columnname($cursor, $column) ;

/**
 * @return int
 * @param  cursor int
 * @param  column int
 * @desc   Return the size of the column 
 */
function ora_columnsize($cursor, $column) ;

/**
 * @return string
 * @param  cursor int
 * @param  column int
 * @desc   Get the type of an Oracle result column 
 */
function ora_columntype($cursor, $column) ;

/**
 * @return int
 * @param  connection int
 * @desc   Commit an Oracle transaction 
 */
function ora_commit($connection) ;

/**
 * @return int
 * @param  connection int
 * @desc   Disable automatic commit 
 */
function ora_commitoff($connection) ;

/**
 * @return int
 * @param  connection int
 * @desc   Enable automatic commit 
 */
function ora_commiton($connection) ;

/**
 * @return int
 * @param  connection int
 * @param  cursor int
 * @desc   Parse and execute a statement and fetch first result row 
 */
function ora_do($connection, $cursor) ;

/**
 * @return string
 * @param  cursor_or_connection int
 * @desc   Get an Oracle error message 
 */
function ora_error($cursor_or_connection) ;

/**
 * @return int
 * @param  cursor_or_connection int
 * @desc   Get an Oracle error code 
 */
function ora_errorcode($cursor_or_connection) ;

/**
 * @return int
 * @param  cursor int
 * @desc   Execute a parsed statement 
 */
function ora_exec($cursor) ;

/**
 * @return int
 * @param  cursor int
 * @desc   Fetch a row of result data from a cursor 
 */
function ora_fetch($cursor) ;

/**
 * @return int
 * @param  cursor int
 * @param  result array
 * @param  flags int[optional]
 * @desc   Fetch a row into the specified result array 
 */
function ora_fetch_into($cursor, $result, $flags = null) ;

/**
 * @return mixed
 * @param  cursor int
 * @param  column int
 * @desc   Get data from a fetched row 
 */
function ora_getcolumn($cursor, $column) ;

/**
 * @return int
 * @param  connection int
 * @desc   Close an Oracle connection 
 */
function ora_logoff($connection) ;

/**
 * @return int
 * @param  user string
 * @param  password string
 * @desc   Open an Oracle connection 
 */
function ora_logon($user, $password) ;

/**
 * @return int
 * @param  cursor int
 * @desc   Returns the numbers of columns in a result 
 */
function ora_numcols($cursor) ;

/**
 * @return int
 * @param  cursor int
 * @desc   Returns the number of rows in a result 
 */
function ora_numrows($cursor) ;

/**
 * @return int
 * @param  connection int
 * @desc   Open an Oracle cursor 
 */
function ora_open($connection) ;

/**
 * @return int
 * @param  cursor int
 * @param  sql_statement string
 * @param  defer int[optional]
 * @desc   Parse an Oracle SQL statement 
 */
function ora_parse($cursor, $sql_statement, $defer = null) ;

/**
 * @return int
 * @param  user string
 * @param  password string
 * @desc   Open a persistent Oracle connection 
 */
function ora_plogon($user, $password) ;

/**
 * @return int
 * @param  connection int
 * @desc   Roll back an Oracle transaction 
 */
function ora_rollback($connection) ;

/**
 * @return int
 * @param  character string
 * @desc   Returns ASCII value of character 
 */
function ord($character) ;

/**
 * @return int
 * @param  compression int[optional]
 * @desc   
 */
function output($compression = null) ;

/**
 * @return bool
 * @param  name string
 * @param  value string
 * @desc   Add URL rewriter values 
 */
function output_add_rewrite_var($name, $value) ;

/**
 * @return bool
 * @desc   Reset(clear) URL rewriter values 
 */
function output_reset_rewrite_vars() ;

/**
 * @return void
 * @param  class_entry string
 * @desc   Enables property and method call overloading for a class. 
 */
function overload($class_entry) ;

/**
 * @return int
 * @param  connection_id int
 * @param  OnOff int
 * @desc   
 */
function ovrimos_autocommit($connection_id, $OnOff) ;

/**
 * @return void
 * @param  connection int
 * @desc   Close a connection 
 */
function ovrimos_close($connection) ;

/**
 * @return int
 * @param  connection_id int
 * @desc   Commit an ovrimos transaction 
 */
function ovrimos_commit($connection_id) ;

/**
 * @return int
 * @param  host string
 * @param  db string
 * @param  user string
 * @param  password string
 * @desc   Connect to an Ovrimos database 
 */
function ovrimos_connect($host, $db, $user, $password) ;

/**
 * @return string
 * @param  result_id int
 * @desc   Get cursor name 
 */
function ovrimos_cursor($result_id) ;

/**
 * @return int
 * @param  connection_id int
 * @param  query string
 * @desc   Prepare and execute an SQL statement 
 */
function ovrimos_do($connection_id, $query) ;

/**
 * @return int
 * @param  connection_id int
 * @param  query string
 * @desc   Prepare and execute an SQL statement 
 */
function ovrimos_exec($connection_id, $query) ;

/**
 * @return int
 * @param  result_id int
 * @param  parameters_array array[optional]
 * @desc   Execute a prepared statement 
 */
function ovrimos_execute($result_id, $parameters_array = null) ;

/**
 * @return int
 * @param  result_id int
 * @param  result_array array
 * @param  how string[optional]
 * @param  rownumber int[optional]
 * @desc   
 */
function ovrimos_fetch_into($result_id, $result_array, $how = null, $rownumber = null) ;

/**
 * @return int
 * @param  result_id int
 * @param  how int[optional]
 * @param  row_number int[optional]
 * @desc   
 */
function ovrimos_fetch_row($result_id, $how = null, $row_number = null) ;

/**
 * @return int
 * @param  result_id int
 * @param  field_number int
 * @desc   Get the length of a column 
 */
function ovrimos_field_len($result_id, $field_number) ;

/**
 * @return string
 * @param  result_id int
 * @param  field_number int
 * @desc   Get a column name 
 */
function ovrimos_field_name($result_id, $field_number) ;

/**
 * @return int
 * @param  result_id int
 * @param  field_name string
 * @desc   Return column number 
 */
function ovrimos_field_num($result_id, $field_name) ;

/**
 * @return string
 * @param  result_id int
 * @param  field_number int
 * @desc   Get the datatype of a column 
 */
function ovrimos_field_type($result_id, $field_number) ;

/**
 * @return int
 * @param  result_id int
 * @desc   Free resources associated with a result 
 */
function ovrimos_free_result($result_id) ;

/**
 * @return int
 * @param  result_id int
 * @param  length int
 * @desc   Handle LONG columns 
 */
function ovrimos_longreadlen($result_id, $length) ;

/**
 * @return int
 * @param  result_id int
 * @desc   Get number of columns in a result 
 */
function ovrimos_num_fields($result_id) ;

/**
 * @return int
 * @param  result_id int
 * @desc   Get number of rows in a result 
 */
function ovrimos_num_rows($result_id) ;

/**
 * @return int
 * @param  connection_id int
 * @param  query string
 * @desc   Prepares a statement for execution 
 */
function ovrimos_prepare($connection_id, $query) ;

/**
 * @return string
 * @param  result_id int
 * @param  field mixed
 * @desc   Get result data 
 */
function ovrimos_result($result_id, $field) ;

/**
 * @return int
 * @param  result_id int
 * @param  format string[optional]
 * @desc   Print result as HTML table 
 */
function ovrimos_result_all($result_id, $format = null) ;

/**
 * @return int
 * @param  connection_id int
 * @desc   Rollback a transaction 
 */
function ovrimos_rollback($connection_id) ;

/**
 * @return int
 * @param  conn_id|result_id int
 * @param  which int
 * @param  option int
 * @param  value int
 * @desc   Sets connection or statement options 
 */
function ovrimos_setoption($conn_id, $which, $option, $value) ;

/**
 * @return object
 * @desc   Returns document this node belongs to 
 */
function owner_document() ;

/**
 * @return string
 * @param  format string
 * @param  arg1 mixed
 * @param  arg2 mixed[optional]
 * @vararg ... mixed
 * @desc   Takes one or more arguments and packs them into a binary string according to the format argument 
 */
function pack($format, $arg1, $arg2 = null) ;

/**
 * @return object
 * @desc   Returns parent of node 
 */
function parent() ;

/**
 * @return object
 * @desc   Returns parent of node 
 */
function parent_node() ;

/**
 * @return array
 * @param  filename string
 * @param  process_sections bool[optional]
 * @desc   Parse configuration file 
 */
function parse_ini_file($filename, $process_sections = null) ;

/**
 * @return void
 * @param  encoded_string string
 * @param  result array[optional]
 * @desc   Parses GET/POST/COOKIE data and sets global variables 
 */
function parse_str($encoded_string, $result = null) ;

/**
 * @return array
 * @param  url string
 * @desc   Parse a URL and return its components 
 */
function parse_url($url) ;

/**
 * @return void
 * @param  command string
 * @param  return_value int[optional]
 * @desc   Execute an external program and display raw output 
 */
function passthru($command, $return_value = null) ;

/**
 * @return array
 * @param  path string
 * @desc   Returns information about a certain string 
 */
function pathinfo($path) ;

/**
 * @return int
 * @param  fp resource
 * @desc   Close a file pointer opened by popen() 
 */
function pclose($fp) ;

/**
 * @return int
 * @param  seconds int
 * @desc   Set an alarm clock for delivery of a signal
 */
function pcntl_alarm($seconds) ;

/**
 * @return bool
 * @param  path string
 * @param  args array[optional]
 * @param  envs array[optional]
 * @desc   Executes specified program in current process space as defined by exec(2) 
 */
function pcntl_exec($path, $args = null, $envs = null) ;

/**
 * @return int
 * @desc   Forks the currently running process following the same behavior as the UNIX fork() system call
 */
function pcntl_fork() ;

/**
 * @return bool
 * @param  signo long
 * @param  handle mixed
 * @param  restart_syscalls bool[optional]
 * @desc   Assigns a system signal handler to a PHP function 
 */
function pcntl_signal($signo, $handle, $restart_syscalls = null) ;

/**
 * @return int
 * @param  pid long
 * @param  status long
 * @param  options long
 * @desc   Waits on or returns the status of a forked child as defined by the waitpid() system call 
 */
function pcntl_waitpid($pid, $status, $options) ;

/**
 * @return int
 * @param  status long
 * @desc   Returns the status code of a child's exit 
 */
function pcntl_wexitstatus($status) ;

/**
 * @return bool
 * @param  status long
 * @desc   Returns true if the child status code represents a successful exit 
 */
function pcntl_wifexited($status) ;

/**
 * @return bool
 * @param  status long
 * @desc   Returns true if the child status code represents a process that was terminated due to a signal 
 */
function pcntl_wifsignaled($status) ;

/**
 * @return bool
 * @param  status long
 * @desc   Returns true if the child status code represents a stopped process (WUNTRACED must have been used with waitpid) 
 */
function pcntl_wifstopped($status) ;

/**
 * @return int
 * @param  status long
 * @desc   Returns the number of the signal that caused the process to stop who's status code is passed 
 */
function pcntl_wstopsig($status) ;

/**
 * @return int
 * @param  status long
 * @desc   Returns the number of the signal that terminated the process who's status code is passed  
 */
function pcntl_wtermsig($status) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  xll float
 * @param  yll float
 * @param  xur float
 * @param  xur float
 * @param  title string
 * @param  text string
 * @desc   Sets annotation (depreciated use pdf_add_note instead) 
 */
function pdf_add_annotation($pdfdoc, $xll, $yll, $xur, $xur, $title, $text) ;

/**
 * @return int
 * @param  pdfdoc int
 * @param  text string
 * @param  parent int[optional]
 * @param  open int
 * @desc   Adds bookmark for current page 
 */
function pdf_add_bookmark($pdfdoc, $text, $parent = null, $open) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  llx float
 * @param  lly float
 * @param  urx float
 * @param  ury float
 * @param  filename string
 * @desc   Adds link to web resource 
 */
function pdf_add_launchlink($pdfdoc, $llx, $lly, $urx, $ury, $filename) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  llx float
 * @param  lly float
 * @param  urx float
 * @param  ury float
 * @param  page int
 * @param  dest string
 * @desc   Adds link to web resource 
 */
function pdf_add_locallink($pdfdoc, $llx, $lly, $urx, $ury, $page, $dest) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  llx float
 * @param  lly float
 * @param  urx float
 * @param  ury float
 * @param  contents string
 * @param  title string
 * @param  icon string
 * @param  open int
 * @desc   Sets annotation 
 */
function pdf_add_note($pdfdoc, $llx, $lly, $urx, $ury, $contents, $title, $icon, $open) ;

/**
 * @return int
 * @param  pdfdoc int
 * @param  text string
 * @param  parent int[optional]
 * @param  open int
 * @desc   Adds bookmark for current page 
 */
function pdf_add_outline($pdfdoc, $text, $parent = null, $open) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  llx float
 * @param  lly float
 * @param  urx float
 * @param  ury float
 * @param  filename string
 * @param  page int
 * @param  dest string
 * @desc   Adds link to PDF document 
 */
function pdf_add_pdflink($pdfdoc, $llx, $lly, $urx, $ury, $filename, $page, $dest) ;

/**
 * @return void
 * @param  pdf int
 * @param  image int
 * @desc   * Add an existing image as thumbnail for the current page. 
 */
function pdf_add_thumbnail($pdf, $image) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  llx float
 * @param  lly float
 * @param  urx float
 * @param  ury float
 * @param  url string
 * @desc   Adds link to web resource 
 */
function pdf_add_weblink($pdfdoc, $llx, $lly, $urx, $ury, $url) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  radius float
 * @param  start float
 * @param  end float
 * @desc   Draws an arc 
 */
function pdf_arc($pdfdoc, $x, $y, $radius, $start, $end) ;

/**
 * @return void
 * @param  pdf int
 * @param  x float
 * @param  y float
 * @param  r float
 * @param  alpha float
 * @param  beta float
 * @desc   * Draw a clockwise circular arc from alpha to beta degrees. 
 */
function pdf_arcn($pdf, $x, $y, $r, $alpha, $beta) ;

/**
 * @return void
 * @param  pdf int
 * @param  lly float
 * @param  lly float
 * @param  urx float
 * @param  ury float
 * @param  filename string
 * @param  description string
 * @param  author string
 * @param  mimetype string
 * @param  icon string
 * @desc   Adds a file attachment annotation at the rectangle specified by his lower left and upper right corners 
 */
function pdf_attach_file($pdf, $lly, $lly, $urx, $ury, $filename, $description, $author, $mimetype, $icon) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  width float
 * @param  height float
 * @desc   Starts page 
 */
function pdf_begin_page($pdfdoc, $width, $height) ;

/**
 * @return int
 * @param  pdf int
 * @param  width float
 * @param  height float
 * @param  xstep float
 * @param  ystep float
 * @param  painttype int
 * @desc   * Start a new pattern definition. 
 */
function pdf_begin_pattern($pdf, $width, $height, $xstep, $ystep, $painttype) ;

/**
 * @return int
 * @param  pdf int
 * @param  width float
 * @param  height float
 * @desc   * Start a new template definition. 
 */
function pdf_begin_template($pdf, $width, $height) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  radius float
 * @desc   Draws a circle 
 */
function pdf_circle($pdfdoc, $x, $y, $radius) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Clips to current path 
 */
function pdf_clip($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Closes the pdf document 
 */
function pdf_close($pdfdoc) ;

/**
 * @return void
 * @param  pdf int
 * @param  pdfimage int
 * @desc   Closes the PDF image 
 */
function pdf_close_image($pdf, $pdfimage) ;

/**
 * @return void
 * @param  pdf int
 * @param  doc int
 * @desc   * Close all open page handles, and close the input PDF document. 
 */
function pdf_close_pdi($pdf, $doc) ;

/**
 * @return void
 * @param  pdf int
 * @param  page int
 * @desc   * Close the page handle, and free all page-related resources. 
 */
function pdf_close_pdi_page($pdf, $page) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Close path 
 */
function pdf_closepath($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Close, fill and stroke current path 
 */
function pdf_closepath_fill_stroke($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Close path and draw line along path 
 */
function pdf_closepath_stroke($pdfdoc) ;

/**
 * @return void
 * @param  pdf int
 * @param  a float
 * @param  b float
 * @param  c float
 * @param  d float
 * @param  e float
 * @param  f float
 * @desc   Concatenates a matrix to the current transformation matrix for text and graphics 
 */
function pdf_concat($pdf, $a, $b, $c, $d, $e, $f) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  text string
 * @desc   Output text in next line 
 */
function pdf_continue_text($pdfdoc, $text) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  x1 float
 * @param  y1 float
 * @param  x2 float
 * @param  y2 float
 * @param  x3 float
 * @param  y3 float
 * @desc   Draws a curve 
 */
function pdf_curveto($pdfdoc, $x1, $y1, $x2, $y2, $x3, $y3) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @desc   Deletes the PDF object 
 */
function pdf_delete($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Ends page 
 */
function pdf_end_page($pdfdoc) ;

/**
 * @return void
 * @param  pdf int
 * @desc   * Finish the pattern definition. 
 */
function pdf_end_pattern($pdf) ;

/**
 * @return void
 * @param  pdf int
 * @desc   * Finish the template definition. 
 */
function pdf_end_template($pdf) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Ends current path 
 */
function pdf_endpath($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Fill current path 
 */
function pdf_fill($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Fill and stroke current path 
 */
function pdf_fill_stroke($pdfdoc) ;

/**
 * @return int
 * @param  pdfdoc int
 * @param  fontname string
 * @param  encoding string
 * @param  embed int[optional]
 * @desc   Prepares the font fontname for later use with pdf_setfont() 
 */
function pdf_findfont($pdfdoc, $fontname, $encoding, $embed = null) ;

/**
 * @return int
 * @param  pdfdoc int
 * @desc   Fetches the full buffer containig the generated PDF data 
 */
function pdf_get_buffer($pdfdoc) ;

/**
 * @return int
 * @param  pdfdoc int
 * @desc   Gets the current font 
 */
function pdf_get_font($pdfdoc) ;

/**
 * @return string
 * @param  pdfdoc int
 * @desc   Gets the current font name 
 */
function pdf_get_fontname($pdfdoc) ;

/**
 * @return float
 * @param  pdfdoc int
 * @desc   Gets the current font size 
 */
function pdf_get_fontsize($pdfdoc) ;

/**
 * @return int
 * @param  pdf int
 * @param  pdfimage int
 * @desc   Returns the height of an image 
 */
function pdf_get_image_height($pdf, $pdfimage) ;

/**
 * @return int
 * @param  pdf int
 * @param  pdfimage int
 * @desc   Returns the width of an image 
 */
function pdf_get_image_width($pdf, $pdfimage) ;

/**
 * @return int
 * @desc   Returns the major version number of the PDFlib 
 */
function pdf_get_majorversion() ;

/**
 * @return int
 * @desc   Returns the minor version number of the PDFlib 
 */
function pdf_get_minorversion() ;

/**
 * @return string
 * @param  pdfdoc int
 * @param  key string
 * @param  modifier mixed
 * @desc   Gets arbitrary parameters 
 */
function pdf_get_parameter($pdfdoc, $key, $modifier) ;

/**
 * @return string
 * @param  pdf int
 * @param  key string
 * @param  doc int
 * @param  page int
 * @param  index int
 * @desc   * Get the contents of some PDI document parameter with string type. 
 */
function pdf_get_pdi_parameter($pdf, $key, $doc, $page, $index) ;

/**
 * @return float
 * @param  pdf int
 * @param  key string
 * @param  doc int
 * @param  page int
 * @param  index int
 * @desc   * Get the contents of some PDI document parameter with numerical type. 
 */
function pdf_get_pdi_value($pdf, $key, $doc, $page, $index) ;

/**
 * @return float
 * @param  pdfdoc int
 * @param  key string
 * @param  modifier float
 * @desc   Gets arbitrary value 
 */
function pdf_get_value($pdfdoc, $key, $modifier) ;

/**
 * @return void
 * @param  pdf int
 * @desc   * Reset all implicit color and graphics state parameters to their defaults. 
 */
function pdf_initgraphics($pdf) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @desc   Draws a line 
 */
function pdf_lineto($pdfdoc, $x, $y) ;

/**
 * @return int
 * @param  pdf int
 * @param  spotname string
 * @desc   * Make a named spot color from the current color. 
 */
function pdf_makespotcolor($pdf, $spotname) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @desc   Sets current point 
 */
function pdf_moveto($pdfdoc, $x, $y) ;

/**
 * @return int
 * @desc   Creates a new PDF object 
 */
function pdf_new() ;

/**
 * @return int
 * @param  filedesc int[optional]
 * @desc   Opens a new pdf document. If filedesc is NULL, document is created in memory. This is the old interface, only for compatibility use pdf_new + pdf_open_file instead 
 */
function pdf_open($filedesc = null) ;

/**
 * @return int
 * @param  pdf int
 * @param  filename string
 * @param  width int
 * @param  height int
 * @param  bitreverse int
 * @param  k int
 * @param  blackls1 int
 * @desc   Opens an image file with raw CCITT G3 or G4 compresed bitmap data 
 */
function pdf_open_ccitt($pdf, $filename, $width, $height, $bitreverse, $k, $blackls1) ;

/**
 * @return int
 * @param  pdfdoc int
 * @param  filename char[optional]
 * @desc   Opens a new PDF document. If filename is NULL, document is created in memory. This is not yet fully supported 
 */
function pdf_open_file($pdfdoc, $filename = null) ;

/**
 * @return int
 * @param  pdf int
 * @param  giffile string
 * @desc   Opens a GIF file and returns an image for placement in a pdf object 
 */
function pdf_open_gif($pdf, $giffile) ;

/**
 * @return int
 * @param  pdf int
 * @param  type string
 * @param  source string
 * @param  data string
 * @param  length long
 * @param  width int
 * @param  height int
 * @param  components int
 * @param  bpc int
 * @param  params string
 * @desc   Opens an image of the given type and returns an image for placement in a PDF document 
 */
function pdf_open_image($pdf, $type, $source, $data, $length, $width, $height, $components, $bpc, $params) ;

/**
 * @return int
 * @param  pdf int
 * @param  type string
 * @param  file string
 * @param  stringparam string
 * @param  intparam int
 * @desc   Opens an image file of the given type and returns an image for placement in a PDF document 
 */
function pdf_open_image_file($pdf, $type, $file, $stringparam, $intparam) ;

/**
 * @return int
 * @param  pdf int
 * @param  jpegfile string
 * @desc   Opens a JPEG file and returns an image for placement in a PDF document 
 */
function pdf_open_jpeg($pdf, $jpegfile) ;

/**
 * @return int
 * @param  pdf int
 * @param  image int
 * @desc   Takes an GD image and returns an image for placement in a PDF document 
 */
function pdf_open_memory_image($pdf, $image) ;

/**
 * @return int
 * @param  pdf int
 * @param  filename string
 * @param  stringparam string
 * @param  intparam int
 * @desc   * Open an existing PDF document and prepare it for later use. 
 */
function pdf_open_pdi($pdf, $filename, $stringparam, $intparam) ;

/**
 * @return int
 * @param  pdf int
 * @param  doc int
 * @param  page int
 * @param  label string
 * @desc   * Prepare a page for later use with PDF_place_image(). 
 */
function pdf_open_pdi_page($pdf, $doc, $page, $label) ;

/**
 * @return int
 * @param  pdf int
 * @param  pngfile string
 * @desc   Opens a PNG file and returns an image for placement in a PDF document 
 */
function pdf_open_png($pdf, $pngfile) ;

/**
 * @return int
 * @param  pdf int
 * @param  tifffile string
 * @desc   Opens a TIFF file and returns an image for placement in a PDF document 
 */
function pdf_open_tiff($pdf, $tifffile) ;

/**
 * @return void
 * @param  pdf int
 * @param  pdfimage int
 * @param  x float
 * @param  y float
 * @param  scale float
 * @desc   Places image in the PDF document 
 */
function pdf_place_image($pdf, $pdfimage, $x, $y, $scale) ;

/**
 * @return void
 * @param  pdf int
 * @param  page int
 * @param  x float
 * @param  y float
 * @param  sx float
 * @param  sy float
 * @desc   * Place a PDF page with the lower left corner at (x, y), and scale it. 
 */
function pdf_place_pdi_page($pdf, $page, $x, $y, $sx, $sy) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @param  width float
 * @param  height float
 * @desc   Draws a rectangle 
 */
function pdf_rect($pdfdoc, $x, $y, $width, $height) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Restores formerly saved enviroment 
 */
function pdf_restore($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  angle float
 * @desc   Sets rotation 
 */
function pdf_rotate($pdfdoc, $angle) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Saves current enviroment 
 */
function pdf_save($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  x_scale float
 * @param  y_scale float
 * @desc   Sets scaling 
 */
function pdf_scale($pdfdoc, $x_scale, $y_scale) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  red float
 * @param  green float
 * @param  blue float
 * @desc   Sets color of box surounded all kinds of annotations and links 
 */
function pdf_set_border_color($pdfdoc, $red, $green, $blue) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  black float
 * @param  white float
 * @desc   Sets the border dash style of all kinds of annotations and links 
 */
function pdf_set_border_dash($pdfdoc, $black, $white) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  style string
 * @param  width float
 * @desc   Sets style of box surounding all kinds of annotations and link 
 */
function pdf_set_border_style($pdfdoc, $style, $width) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  space float
 * @desc   Sets character spacing 
 */
function pdf_set_char_spacing($pdfdoc, $space) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  duration float
 * @desc   Sets duration between pages 
 */
function pdf_set_duration($pdfdoc, $duration) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  font string
 * @param  size float
 * @param  encoding string
 * @param  embed int[optional]
 * @desc   Select the current font face, size and encoding 
 */
function pdf_set_font($pdfdoc, $font, $size, $encoding, $embed = null) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  scale float
 * @desc   Sets horizontal scaling of text 
 */
function pdf_set_horiz_scaling($pdfdoc, $scale) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  fieldname string
 * @param  value string
 * @desc   Fills an info field of the document 
 */
function pdf_set_info($pdfdoc, $fieldname, $value) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  author string
 * @desc   Fills the author field of the document 
 */
function pdf_set_info_author($pdfdoc, $author) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  creator string
 * @desc   Fills the creator field of the document 
 */
function pdf_set_info_creator($pdfdoc, $creator) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  keywords string
 * @desc   Fills the keywords field of the document 
 */
function pdf_set_info_keywords($pdfdoc, $keywords) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  subject string
 * @desc   Fills the subject field of the document 
 */
function pdf_set_info_subject($pdfdoc, $subject) ;

/**
 * @return bool
 * @param  pdfdoc int
 * @param  title string
 * @desc   Fills the title field of the document 
 */
function pdf_set_info_title($pdfdoc, $title) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  distance float
 * @desc   Sets distance between text lines 
 */
function pdf_set_leading($pdfdoc, $distance) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  key string
 * @param  value string
 * @desc   Sets arbitrary parameters 
 */
function pdf_set_parameter($pdfdoc, $key, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @desc   Sets the position of text for the next pdf_show call 
 */
function pdf_set_text_pos($pdfdoc, $x, $y) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  mode int
 * @desc   Determines how text is rendered 
 */
function pdf_set_text_rendering($pdfdoc, $mode) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets the text rise 
 */
function pdf_set_text_rise($pdfdoc, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  transition int
 * @desc   Sets transition between pages 
 */
function pdf_set_transition($pdfdoc, $transition) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  key string
 * @param  value float
 * @desc   Sets arbitrary value 
 */
function pdf_set_value($pdfdoc, $key, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  space float
 * @desc   Sets spacing between words 
 */
function pdf_set_word_spacing($pdfdoc, $space) ;

/**
 * @return void
 * @param  pdf int
 * @param  type string
 * @param  colorspace string
 * @param  c1 float
 * @param  c2 float[optional]
 * @param  c3 float[optional]
 * @param  c4 float[optional]
 * @desc   * Set the current color space and color. 
 */
function pdf_setcolor($pdf, $type, $colorspace, $c1, $c2 = null, $c3 = null, $c4 = null) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  black float
 * @param  white float
 * @desc   Sets dash pattern 
 */
function pdf_setdash($pdfdoc, $black, $white) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets flatness 
 */
function pdf_setflat($pdfdoc, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  font int
 * @param  fontsize float
 * @desc   Sets the current font in the fiven fontsize 
 */
function pdf_setfont($pdfdoc, $font, $fontsize) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets drawing and filling color to gray value 
 */
function pdf_setgray($pdfdoc, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets filling color to gray value 
 */
function pdf_setgray_fill($pdfdoc, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets drawing color to gray value 
 */
function pdf_setgray_stroke($pdfdoc, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  value int
 * @desc   Sets linecap parameter 
 */
function pdf_setlinecap($pdfdoc, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  value int
 * @desc   Sets linejoin parameter 
 */
function pdf_setlinejoin($pdfdoc, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  width float
 * @desc   Sets line width 
 */
function pdf_setlinewidth($pdfdoc, $width) ;

/**
 * @return void
 * @param  pdf int
 * @param  a float
 * @param  b float
 * @param  c float
 * @param  d float
 * @param  e float
 * @param  f float
 * @desc   Explicitly set the current transformation matrix. 
 */
function pdf_setmatrix($pdf, $a, $b, $c, $d, $e, $f) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  value float
 * @desc   Sets miter limit 
 */
function pdf_setmiterlimit($pdfdoc, $value) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  darray float
 * @desc   Sets more complicated dash pattern 
 */
function pdf_setpolydash($pdfdoc, $darray) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  red float
 * @param  green float
 * @param  blue float
 * @desc   Sets drawing and filling color to RGB color value 
 */
function pdf_setrgbcolor($pdfdoc, $red, $green, $blue) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  red float
 * @param  green float
 * @param  blue float
 * @desc   Sets filling color to RGB color value 
 */
function pdf_setrgbcolor_fill($pdfdoc, $red, $green, $blue) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  red float
 * @param  green float
 * @param  blue float
 * @desc   Sets drawing color to RGB color value 
 */
function pdf_setrgbcolor_stroke($pdfdoc, $red, $green, $blue) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  text string
 * @desc   Output text at current position 
 */
function pdf_show($pdfdoc, $text) ;

/**
 * @return int
 * @param  pdfdoc int
 * @param  text string
 * @param  x_koor float
 * @param  y_koor float
 * @param  width float
 * @param  height float
 * @param  mode string
 * @param  feature string[optional]
 * @desc   Output text formated in a boxed 
 */
function pdf_show_boxed($pdfdoc, $text, $x_koor, $y_koor, $width, $height, $mode, $feature = null) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  text string
 * @param  x_koor float
 * @param  y_koor float
 * @desc   Output text at position 
 */
function pdf_show_xy($pdfdoc, $text, $x_koor, $y_koor) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  xangle float
 * @param  yangle float
 * @desc   Skew the coordinate system 
 */
function pdf_skew($pdfdoc, $xangle, $yangle) ;

/**
 * @return float
 * @param  pdfdoc int
 * @param  text string
 * @param  font int[optional]
 * @param  size float
 * @desc   Returns width of text in current font 
 */
function pdf_stringwidth($pdfdoc, $text, $font = null, $size) ;

/**
 * @return void
 * @param  pdfdoc int
 * @desc   Draw line along path path 
 */
function pdf_stroke($pdfdoc) ;

/**
 * @return void
 * @param  pdfdoc int
 * @param  x float
 * @param  y float
 * @desc   Sets origin of coordinate system 
 */
function pdf_translate($pdfdoc, $x, $y) ;

/**
 * @return void
 * @desc   Shuts down the Payflow Pro library 
 */
function pfpro_cleanup() ;

/**
 * @return void
 * @desc   Initializes the Payflow Pro library 
 */
function pfpro_init() ;

/**
 * @return array
 * @param  parmlist array
 * @param  hostaddress string[optional]
 * @param  port int[optional]
 * @param  timeout int[optional]
 * @param  proxyAddress string[optional]
 * @param  proxyPort int[optional]
 * @param  proxyLogon string[optional]
 * @param  proxyPassword string[optional]
 * @desc   Payflow Pro transaction processing using arrays 
 */
function pfpro_process($parmlist, $hostaddress = null, $port = null, $timeout = null, $proxyAddress = null, $proxyPort = null, $proxyLogon = null, $proxyPassword = null) ;

/**
 * @return string
 * @param  parmlist string
 * @param  hostaddress string[optional]
 * @param  port int[optional]
 * @param  timeout int[optional]
 * @param  proxyAddress string[optional]
 * @param  proxyPort int[optional]
 * @param  proxyLogon string[optional]
 * @param  proxyPassword string[optional]
 * @desc   Raw Payflow Pro transaction processing 
 */
function pfpro_process_raw($parmlist, $hostaddress = null, $port = null, $timeout = null, $proxyAddress = null, $proxyPort = null, $proxyLogon = null, $proxyPassword = null) ;

/**
 * @return string
 * @desc   Returns the version of the Payflow Pro library 
 */
function pfpro_version() ;

/**
 * @return int
 * @param  hostname string
 * @param  port int
 * @param  errno int[optional]
 * @param  errstr string[optional]
 * @param  timeout float[optional]
 * @param  context resource[optional]
 * @desc   Open persistent Internet or Unix domain socket connection 
 */
function pfsockopen($hostname, $port, $errno = null, $errstr = null, $timeout = null, $context = null) ;

/**
 * @return int
 * @param  result resource
 * @desc   Returns the number of affected tuples 
 */
function pg_affected_rows($result) ;

/**
 * @return bool
 * @param  connection resource
 * @desc   Cancel request 
 */
function pg_cancel_query($connection) ;

/**
 * @return string
 * @param  connection resource[optional]
 * @desc   Get the current client encoding 
 */
function pg_client_encoding($connection = null) ;

/**
 * @return string
 * @param  connection resource[optional]
 * @desc   Get the current client encoding 
 */
function pg_clientencoding($connection = null) ;

/**
 * @return bool
 * @param  connection resource[optional]
 * @desc   Close a PostgreSQL connection 
 */
function pg_close($connection = null) ;

/**
 * @return int
 * @param  result resource
 * @desc   Returns the number of affected tuples 
 */
function pg_cmdtuples($result) ;

/**
 * @return bool
 * @param  connection resource
 * @desc   Get connection is busy or not 
 */
function pg_connection_busy($connection) ;

/**
 * @return bool
 * @param  connection resource
 * @desc   Reset connection (reconnect) 
 */
function pg_connection_reset($connection) ;

/**
 * @return int
 * @param  connnection resource
 * @desc   Get connection status 
 */
function pg_connection_status($connnection) ;

/**
 * @return array
 * @param  db resource
 * @param  table string
 * @param  values array
 * @param  options int
 * @desc   Check and convert values for PostgreSQL SQL statement 
 */
function pg_convert($db, $table, $values, $options) ;

/**
 * @return bool
 * @param  connection resource
 * @param  table_name string
 * @param  rows array
 * @param  delimiter string[optional]
 * @param  null_as string[optional]
 * @desc   Copy table from array 
 */
function pg_copy_from($connection, $table_name, $rows, $delimiter = null, $null_as = null) ;

/**
 * @return array
 * @param  connection resource
 * @param  table_name string
 * @param  delimiter string[optional]
 * @param  null_as string[optional]
 * @desc   Copy table to array 
 */
function pg_copy_to($connection, $table_name, $delimiter = null, $null_as = null) ;

/**
 * @return string
 * @param  connection resource[optional]
 * @desc   Get the database name 
 */
function pg_dbname($connection = null) ;

/**
 * @return mixed
 * @param  db resource
 * @param  table string
 * @param  ids array
 * @param  options int
 * @desc   Delete records has ids (id=>value) 
 */
function pg_delete($db, $table, $ids, $options) ;

/**
 * @return bool
 * @param  connection resource[optional]
 * @desc   Sync with backend. Completes the Copy command 
 */
function pg_end_copy($connection = null) ;

/**
 * @return string
 * @param  connection resource[optional]
 * @desc   Get the error message string 
 */
function pg_errormessage($connection = null) ;

/**
 * @return string
 * @param  data string
 * @desc   Escape binary for bytea type  
 */
function pg_escape_bytea($data) ;

/**
 * @return string
 * @param  data string
 * @desc   Escape string for text/char type 
 */
function pg_escape_string($data) ;

/**
 * @return resource
 * @param  connection resource[optional]
 * @param  query string
 * @desc   Execute a query 
 */
function pg_exec($connection = null, $query) ;

/**
 * @return array
 * @param  result resource
 * @desc   Fetch all rows into array 
 */
function pg_fetch_all($result) ;

/**
 * @return array
 * @param  result resource
 * @param  row int[optional]
 * @param  result_type int[optional]
 * @desc   Fetch a row as an array 
 */
function pg_fetch_array($result, $row = null, $result_type = null) ;

/**
 * @return array
 * @param  result resource
 * @param  row int[optional]
 * @desc   Fetch a row as an assoc array 
 */
function pg_fetch_assoc($result, $row = null) ;

/**
 * @return object
 * @param  result resource
 * @param  row int[optional]
 * @desc   Fetch a row as an object 
 */
function pg_fetch_object($result, $row = null) ;

/**
 * @return mixed
 * @param  result resource
 * @param  row_number int[optional]
 * @param  field_name mixed
 * @desc   Returns values from a result identifier 
 */
function pg_fetch_result($result, $row_number = null, $field_name) ;

/**
 * @return array
 * @param  result resource
 * @param  row int[optional]
 * @param  result_type int[optional]
 * @desc   Get a row as an enumerated array 
 */
function pg_fetch_row($result, $row = null, $result_type = null) ;

/**
 * @return int
 * @param  result resource
 * @param  row int[optional]
 * @param  field_name_or_number mixed
 * @desc   Test if a field is NULL 
 */
function pg_field_is_null($result, $row = null, $field_name_or_number) ;

/**
 * @return string
 * @param  result resource
 * @param  field_number int
 * @desc   Returns the name of the field 
 */
function pg_field_name($result, $field_number) ;

/**
 * @return int
 * @param  result resource
 * @param  field_name string
 * @desc   Returns the field number of the named field 
 */
function pg_field_num($result, $field_name) ;

/**
 * @return int
 * @param  result resource
 * @param  row int[optional]
 * @param  field_name_or_number mixed
 * @desc   Returns the printed length 
 */
function pg_field_prtlen($result, $row = null, $field_name_or_number) ;

/**
 * @return int
 * @param  result resource
 * @param  field_number int
 * @desc   Returns the internal size of the field 
 */
function pg_field_size($result, $field_number) ;

/**
 * @return string
 * @param  result resource
 * @param  field_number int
 * @desc   Returns the type name for the given field 
 */
function pg_field_type($result, $field_number) ;

/**
 * @return int
 * @param  result resource
 * @param  row int[optional]
 * @param  field_name_or_number mixed
 * @desc   Test if a field is NULL 
 */
function pg_fieldisnull($result, $row = null, $field_name_or_number) ;

/**
 * @return string
 * @param  result resource
 * @param  field_number int
 * @desc   Returns the name of the field 
 */
function pg_fieldname($result, $field_number) ;

/**
 * @return int
 * @param  result resource
 * @param  field_name string
 * @desc   Returns the field number of the named field 
 */
function pg_fieldnum($result, $field_name) ;

/**
 * @return int
 * @param  result resource
 * @param  row int[optional]
 * @param  field_name_or_number mixed
 * @desc   Returns the printed length 
 */
function pg_fieldprtlen($result, $row = null, $field_name_or_number) ;

/**
 * @return int
 * @param  result resource
 * @param  field_number int
 * @desc   Returns the internal size of the field 
 */
function pg_fieldsize($result, $field_number) ;

/**
 * @return string
 * @param  result resource
 * @param  field_number int
 * @desc   Returns the type name for the given field 
 */
function pg_fieldtype($result, $field_number) ;

/**
 * @return bool
 * @param  result resource
 * @desc   Free result memory 
 */
function pg_free_result($result) ;

/**
 * @return bool
 * @param  result resource
 * @desc   Free result memory 
 */
function pg_freeresult($result) ;

/**
 * @return resource
 * @param  connection resource[optional]
 * @param  result_type
 * @desc   Get asynchronous notification 
 */
function pg_get_notify($connection = null, $result_type) ;

/**
 * @return resource
 * @param  connection resource[optional]
 * @desc   Get backend(server) pid 
 */
function pg_get_pid($connection = null) ;

/**
 * @return resource
 * @param  connection resource
 * @desc   Get asynchronous query result 
 */
function pg_get_result($connection) ;

/**
 * @return string
 * @param  result resource
 * @desc   Returns the last object identifier 
 */
function pg_getlastoid($result) ;

/**
 * @return string
 * @param  connection resource[optional]
 * @desc   Returns the host name associated with the connection 
 */
function pg_host($connection = null) ;

/**
 * @return mixed
 * @param  db resource
 * @param  table string
 * @param  values array
 * @param  options int
 * @desc   Insert values (filed=>value) to table 
 */
function pg_insert($db, $table, $values, $options) ;

/**
 * @return string
 * @param  connection resource[optional]
 * @desc   Get the error message string 
 */
function pg_last_error($connection = null) ;

/**
 * @return string
 * @param  connection resource
 * @desc   Returns the last notice set by the backend 
 */
function pg_last_notice($connection) ;

/**
 * @return string
 * @param  result resource
 * @desc   Returns the last object identifier 
 */
function pg_last_oid($result) ;

/**
 * @return bool
 * @param  large_object resource
 * @desc   Close a large object 
 */
function pg_lo_close($large_object) ;

/**
 * @return int
 * @param  connection resource[optional]
 * @desc   Create a large object 
 */
function pg_lo_create($connection = null) ;

/**
 * @return bool
 * @param  connection resource[optional]
 * @param  objoid int
 * @param  filename string
 * @desc   Export large object direct to filesystem 
 */
function pg_lo_export($connection = null, $objoid, $filename) ;

/**
 * @return int
 * @param  connection resource[optional]
 * @param  filename string
 * @desc   Import large object direct from filesystem 
 */
function pg_lo_import($connection = null, $filename) ;

/**
 * @return resource
 * @param  connection resource[optional]
 * @param  large_object_oid int
 * @param  mode string
 * @desc   Open a large object and return fd 
 */
function pg_lo_open($connection = null, $large_object_oid, $mode) ;

/**
 * @return string
 * @param  large_object resource
 * @param  len int[optional]
 * @desc   Read a large object 
 */
function pg_lo_read($large_object, $len = null) ;

/**
 * @return int
 * @param  large_object resource
 * @desc   Read a large object and send straight to browser 
 */
function pg_lo_read_all($large_object) ;

/**
 * @return bool
 * @param  large_object resource
 * @param  offset int
 * @param  whence int[optional]
 * @desc   Seeks position of large object 
 */
function pg_lo_seek($large_object, $offset, $whence = null) ;

/**
 * @return int
 * @param  large_object resource
 * @desc   Returns current position of large object 
 */
function pg_lo_tell($large_object) ;

/**
 * @return bool
 * @param  connection resource[optional]
 * @param  large_object_oid string
 * @desc   Delete a large object 
 */
function pg_lo_unlink($connection = null, $large_object_oid) ;

/**
 * @return int
 * @param  large_object resource
 * @param  buf string
 * @param  len int[optional]
 * @desc   Write a large object 
 */
function pg_lo_write($large_object, $buf, $len = null) ;

/**
 * @return bool
 * @param  large_object resource
 * @desc   Close a large object 
 */
function pg_loclose($large_object) ;

/**
 * @return int
 * @param  connection resource[optional]
 * @desc   Create a large object 
 */
function pg_locreate($connection = null) ;

/**
 * @return bool
 * @param  connection resource[optional]
 * @param  objoid int
 * @param  filename string
 * @desc   Export large object direct to filesystem 
 */
function pg_loexport($connection = null, $objoid, $filename) ;

/**
 * @return int
 * @param  connection resource[optional]
 * @param  filename string
 * @desc   Import large object direct from filesystem 
 */
function pg_loimport($connection = null, $filename) ;

/**
 * @return resource
 * @param  connection resource[optional]
 * @param  large_object_oid int
 * @param  mode string
 * @desc   Open a large object and return fd 
 */
function pg_loopen($connection = null, $large_object_oid, $mode) ;

/**
 * @return string
 * @param  large_object resource
 * @param  len int[optional]
 * @desc   Read a large object 
 */
function pg_loread($large_object, $len = null) ;

/**
 * @return int
 * @param  large_object resource
 * @desc   Read a large object and send straight to browser 
 */
function pg_loreadall($large_object) ;

/**
 * @return bool
 * @param  connection resource[optional]
 * @param  large_object_oid string
 * @desc   Delete a large object 
 */
function pg_lounlink($connection = null, $large_object_oid) ;

/**
 * @return int
 * @param  large_object resource
 * @param  buf string
 * @param  len int[optional]
 * @desc   Write a large object 
 */
function pg_lowrite($large_object, $buf, $len = null) ;

/**
 * @return array
 * @param  db resource
 * @param  table string
 * @desc   Get meta_data 
 */
function pg_meta_data($db, $table) ;

/**
 * @return int
 * @param  result resource
 * @desc   Return the number of fields in the result 
 */
function pg_num_fields($result) ;

/**
 * @return int
 * @param  result resource
 * @desc   Return the number of rows in the result 
 */
function pg_num_rows($result) ;

/**
 * @return int
 * @param  result resource
 * @desc   Return the number of fields in the result 
 */
function pg_numfields($result) ;

/**
 * @return int
 * @param  result resource
 * @desc   Return the number of rows in the result 
 */
function pg_numrows($result) ;

/**
 * @return string
 * @param  connection resource[optional]
 * @desc   Get the options associated with the connection 
 */
function pg_options($connection = null) ;

/**
 * @return resource
 * @param  connection_string_|_ string
 * @param  port string
 * @param  options string[optional]
 * @param  tty string[optional]
 * @param  database string
 * @desc   Open a persistent PostgreSQL connection 
 */
function pg_pconnect($connection_string_, $port, $options = null, $tty = null, $database) ;

/**
 * @return bool
 * @param  connection resource
 * @desc   Ping database. If connection is bad, try to reconnect. 
 */
function pg_ping($connection) ;

/**
 * @return int
 * @param  connection resource[optional]
 * @desc   Return the port number associated with the connection 
 */
function pg_port($connection = null) ;

/**
 * @return bool
 * @param  connection resource[optional]
 * @param  query string
 * @desc   Send null-terminated string to backend server
 */
function pg_put_line($connection = null, $query) ;

/**
 * @return resource
 * @param  connection resource[optional]
 * @param  query string
 * @desc   Execute a query 
 */
function pg_query($connection = null, $query) ;

/**
 * @return mixed
 * @param  result resource
 * @param  row_number int[optional]
 * @param  field_name mixed
 * @desc   Returns values from a result identifier 
 */
function pg_result($result, $row_number = null, $field_name) ;

/**
 * @return string
 * @param  result resource
 * @desc   Get error message associated with result 
 */
function pg_result_error($result) ;

/**
 * @return mixed
 * @param  result resource
 * @param  offset int
 * @desc   Set internal row offset 
 */
function pg_result_seek($result, $offset) ;

/**
 * @return int
 * @param  result resource
 * @param  result_type long
 * @desc   Get status of query result 
 */
function pg_result_status($result, $result_type) ;

/**
 * @return mixed
 * @param  db resource
 * @param  table string
 * @param  ids array
 * @param  options int
 * @desc   Select records that has ids (id=>value) 
 */
function pg_select($db, $table, $ids, $options) ;

/**
 * @return bool
 * @param  connection resource
 * @param  qeury string
 * @desc   Send asynchronous query 
 */
function pg_send_query($connection, $qeury) ;

/**
 * @return int
 * @param  connection resource[optional]
 * @param  encoding string
 * @desc   Set client encoding 
 */
function pg_set_client_encoding($connection = null, $encoding) ;

/**
 * @return int
 * @param  connection resource[optional]
 * @param  encoding string
 * @desc   Set client encoding 
 */
function pg_setclientencoding($connection = null, $encoding) ;

/**
 * @return bool
 * @param  filename string
 * @param  mode string[optional]
 * @param  connection resource[optional]
 * @desc   Enable tracing a PostgreSQL connection 
 */
function pg_trace($filename, $mode = null, $connection = null) ;

/**
 * @return string
 * @param  connection resource[optional]
 * @desc   Return the tty name associated with the connection 
 */
function pg_tty($connection = null) ;

/**
 * @return string
 * @param  data string
 * @desc   Unescape binary for bytea type  
 */
function pg_unescape_bytea($data) ;

/**
 * @return bool
 * @param  connection resource[optional]
 * @desc   Disable tracing of a PostgreSQL connection 
 */
function pg_untrace($connection = null) ;

/**
 * @return mixed
 * @param  db resource
 * @param  table string
 * @param  fields array
 * @param  ids array
 * @param  options int
 * @desc   Update table using values (field=>value) and ids (id=>value) 
 */
function pg_update($db, $table, $fields, $ids, $options) ;

/**
 * @return string
 * @desc   Return the special ID used to request the PHP logo in phpinfo screens
 */
function php_egg_logo_guid() ;

/**
 * @return string
 * @desc   Return comma-separated string of .ini files parsed from the additional ini dir 
 */
function php_ini_scanned_files() ;

/**
 * @return string
 * @desc   Return the special ID used to request the PHP logo in phpinfo screens
 */
function php_logo_guid() ;

/**
 * @return string
 * @desc   Return the current SAPI module name 
 */
function php_sapi_name() ;

/**
 * @return void
 * @param  INTERNAL_FUNCTION_PARAMETERS
 * @param  st int
 * @desc   
 */
function php_snmpv3($INTERNAL_FUNCTION_PARAMETERS, $st) ;

/**
 * @return string
 * @desc   Return information about the system PHP was built on 
 */
function php_uname() ;

/**
 * @return void
 * @param  flag int[optional]
 * @desc   Prints the list of people who've contributed to the PHP project 
 */
function phpcredits($flag = null) ;

/**
 * @return void
 * @param  what int[optional]
 * @desc   Output a page of useful information about PHP and the current request 
 */
function phpinfo($what = null) ;

/**
 * @return string
 * @param  extension string[optional]
 * @desc   Return the current PHP version 
 */
function phpversion($extension = null) ;

/**
 * @return float
 * @desc   Returns an approximation of pi 
 */
function pi() ;

/**
 * @return void
 * @param  f_org string
 * @param  f_dest string
 * @param  d_height int
 * @param  d_width int
 * @param  threshold int
 * @desc   Convert PNG image to WBMP image 
 */
function png2wbmp ($f_org, $f_dest, $d_height, $d_width, $threshold) ;

/**
 * @return resource
 * @param  command string
 * @param  mode string
 * @desc   Execute a command and open either a read or a write pipe to it 
 */
function popen($command, $mode) ;

/**
 * @return mixed
 * @param  array_arg array
 * @desc   Return the element currently pointed to by the internal array pointer 
 */
function pos($array_arg) ;

/**
 * @return string
 * @desc   Generate terminal path name (POSIX.1, 4.7.1) 
 */
function posix_ctermid() ;

/**
 * @return int
 * @desc   Retrieve the error number set by the last posix function which failed. 
 */
function posix_errno() ;

/**
 * @return int
 * @desc   Retrieve the error number set by the last posix function which failed. 
 */
function posix_get_last_error() ;

/**
 * @return string
 * @desc   Get working directory pathname (POSIX.1, 5.2.2) 
 */
function posix_getcwd() ;

/**
 * @return int
 * @desc   Get the current effective group id (POSIX.1, 4.2.1) 
 */
function posix_getegid() ;

/**
 * @return int
 * @desc   Get the current effective user id (POSIX.1, 4.2.1) 
 */
function posix_geteuid() ;

/**
 * @return int
 * @desc   Get the current group id (POSIX.1, 4.2.1) 
 */
function posix_getgid() ;

/**
 * @return array
 * @param  gid long
 * @desc   Group database access (POSIX.1, 9.2.1) 
 */
function posix_getgrgid($gid) ;

/**
 * @return array
 * @param  groupname string
 * @desc   Group database access (POSIX.1, 9.2.1) 
 */
function posix_getgrnam($groupname) ;

/**
 * @return array
 * @desc   Get supplementary group id's (POSIX.1, 4.2.3) 
 */
function posix_getgroups() ;

/**
 * @return string
 * @desc   Get user name (POSIX.1, 4.2.4) 
 */
function posix_getlogin() ;

/**
 * @return int
 * @desc   Get the process group id of the specified process (This is not a POSIX function, but a SVR4ism, so we compile conditionally) 
 */
function posix_getpgid() ;

/**
 * @return int
 * @desc   Get current process group id (POSIX.1, 4.3.1) 
 */
function posix_getpgrp() ;

/**
 * @return int
 * @desc   Get the current process id (POSIX.1, 4.1.1) 
 */
function posix_getpid() ;

/**
 * @return int
 * @desc   Get the parent process id (POSIX.1, 4.1.1) 
 */
function posix_getppid() ;

/**
 * @return array
 * @param  groupname string
 * @desc   User database access (POSIX.1, 9.2.2) 
 */
function posix_getpwnam($groupname) ;

/**
 * @return array
 * @param  uid long
 * @desc   User database access (POSIX.1, 9.2.2) 
 */
function posix_getpwuid($uid) ;

/**
 * @return int
 * @desc   Get system resource consumption limits (This is not a POSIX function, but a BSDism and a SVR4ism. We compile conditionally) 
 */
function posix_getrlimit() ;

/**
 * @return int
 * @desc   Get process group id of session leader (This is not a POSIX function, but a SVR4ism, so be compile conditionally) 
 */
function posix_getsid() ;

/**
 * @return int
 * @desc   Get the current user id (POSIX.1, 4.2.1) 
 */
function posix_getuid() ;

/**
 * @return bool
 * @param  fd int
 * @desc   Determine if filedesc is a tty (POSIX.1, 4.7.1) 
 */
function posix_isatty($fd) ;

/**
 * @return bool
 * @param  pid int
 * @param  sig int
 * @desc   Send a signal to a process (POSIX.1, 3.3.2) 
 */
function posix_kill($pid, $sig) ;

/**
 * @return bool
 * @param  pathname string
 * @param  mode int
 * @desc   Make a FIFO special file (POSIX.1, 5.4.2) 
 */
function posix_mkfifo($pathname, $mode) ;

/**
 * @return bool
 * @param  uid long
 * @desc   Set effective group id 
 */
function posix_setegid($uid) ;

/**
 * @return bool
 * @param  uid long
 * @desc   Set effective user id 
 */
function posix_seteuid($uid) ;

/**
 * @return bool
 * @param  uid int
 * @desc   Set group id (POSIX.1, 4.2.2) 
 */
function posix_setgid($uid) ;

/**
 * @return bool
 * @param  pid int
 * @param  pgid int
 * @desc   Set process group id for job control (POSIX.1, 4.3.3) 
 */
function posix_setpgid($pid, $pgid) ;

/**
 * @return int
 * @desc   Create session and set process group id (POSIX.1, 4.3.2) 
 */
function posix_setsid() ;

/**
 * @return bool
 * @param  uid long
 * @desc   Set user id (POSIX.1, 4.2.2) 
 */
function posix_setuid($uid) ;

/**
 * @return string
 * @param  errno int
 * @desc   Retrieve the system error message associated with the given errno. 
 */
function posix_strerror($errno) ;

/**
 * @return array
 * @desc   Get process times (POSIX.1, 4.5.2) 
 */
function posix_times() ;

/**
 * @return string
 * @param  fd int
 * @desc   Determine terminal device name (POSIX.1, 4.7.2) 
 */
function posix_ttyname($fd) ;

/**
 * @return array
 * @desc   Get system name (POSIX.1, 4.4.1) 
 */
function posix_uname() ;

/**
 * @return number
 * @param  base number
 * @param  exponent number
 * @desc   Returns base raised to the power of exponent. Returns integer result when possible 
 */
function pow($base, $exponent) ;

/**
 * @return string
 * @desc   Returns namespace prefix of node 
 */
function prefix() ;

/**
 * @return array
 * @param  regex string
 * @param  input array
 * @desc   Searches array and returns entries which match regex 
 */
function preg_grep($regex, $input) ;

/**
 * @return int
 * @param  pattern string
 * @param  subject string
 * @param  subpatterns array[optional]
 * @param  flags int[optional]
 * @param  offset int[optional]
 * @desc   Perform a Perl-style regular expression match 
 */
function preg_match($pattern, $subject, $subpatterns = null, $flags = null, $offset = null) ;

/**
 * @return int
 * @param  pattern string
 * @param  subject string
 * @param  subpatterns array
 * @param  flags int[optional]
 * @param  offset int[optional]
 * @desc   Perform a Perl-style global regular expression match 
 */
function preg_match_all($pattern, $subject, $subpatterns, $flags = null, $offset = null) ;

/**
 * @return string
 * @param  str string
 * @param  delim_char string
 * @desc   Quote regular expression characters plus an optional character 
 */
function preg_quote($str, $delim_char) ;

/**
 * @return string
 * @param  regex mixed
 * @param  replace mixed
 * @param  subject mixed
 * @param  limit int[optional]
 * @desc   Perform Perl-style regular expression replacement. 
 */
function preg_replace($regex, $replace, $subject, $limit = null) ;

/**
 * @return string
 * @param  regex mixed
 * @param  callback mixed
 * @param  subject mixed
 * @param  limit int[optional]
 * @desc   Perform Perl-style regular expression replacement using replacement callback. 
 */
function preg_replace_callback($regex, $callback, $subject, $limit = null) ;

/**
 * @return array
 * @param  pattern string
 * @param  subject string
 * @param  limit int[optional]
 * @param  flags int[optional]
 * @desc   Split string into an array using a perl-style regular expression as a delimiter 
 */
function preg_split($pattern, $subject, $limit = null, $flags = null) ;

/**
 * @return mixed
 * @param  array_arg array
 * @desc   Move array argument's internal pointer to the previous element and return it 
 */
function prev($array_arg) ;

/**
 * @return object
 * @desc   Returns previous child from list of children 
 */
function previous_sibling() ;

/**
 * @return bool
 * @param  var mixed
 * @param  return bool[optional]
 * @desc   Prints out or returns information about the specified variable 
 */
function print_r($var, $return = null) ;

/**
 * @return int
 * @param  format string
 * @param  arg1 mixed[optional]
 * @vararg ... mixed
 * @desc   Output a formatted string 
 */
function printf($format, $arg1 = null) ;

/**
 * @return int
 * @param  process resource
 * @desc   close a process opened by proc_open 
 */
function proc_close($process) ;

/**
 * @return resource
 * @param  command string
 * @param  descriptorspec array
 * @param  &pipes array
 * @desc   Run a process with more control over it's file descriptors 
 */
function proc_open($command, $descriptorspec, &$pipes) ;

/**
 * @return object
 * @param  xslstylesheet object
 * @param  xmldoc object
 * @param  xslt_parameters array[optional]
 * @param  xpath_parameters bool[optional]
 * @param  profileFilename string[optional]
 * @desc   Perform an XSLT transformation 
 */
function process($xslstylesheet, $xmldoc, $xslt_parameters = null, $xpath_parameters = null, $profileFilename = null) ;

/**
 * @return bool
 * @param  target string
 * @param  data string
 * @desc   Adds processing instruction 
 */
function processing_instruction($target, $data) ;

/**
 * @return int
 * @param  pspell int
 * @param  word string
 * @desc   Adds a word to a personal list 
 */
function pspell_add_to_personal($pspell, $word) ;

/**
 * @return int
 * @param  pspell int
 * @param  word string
 * @desc   Adds a word to the current session 
 */
function pspell_add_to_session($pspell, $word) ;

/**
 * @return int
 * @param  pspell int
 * @param  word string
 * @desc   Returns true if word is valid 
 */
function pspell_check($pspell, $word) ;

/**
 * @return int
 * @param  pspell int
 * @desc   Clears the current session 
 */
function pspell_clear_session($pspell) ;

/**
 * @return int
 * @param  language string
 * @param  spelling string[optional]
 * @param  jargon string[optional]
 * @param  encoding string[optional]
 * @desc   Create a new config to be used later to create a manager 
 */
function pspell_config_create($language, $spelling = null, $jargon = null, $encoding = null) ;

/**
 * @return int
 * @param  conf int
 * @param  ignore int
 * @desc   Ignore words <= n chars 
 */
function pspell_config_ignore($conf, $ignore) ;

/**
 * @return int
 * @param  conf int
 * @param  mode long
 * @desc   Select mode for config (PSPELL_FAST, PSPELL_NORMAL or PSPELL_BAD_SPELLERS) 
 */
function pspell_config_mode($conf, $mode) ;

/**
 * @return int
 * @param  conf int
 * @param  personal string
 * @desc   Use a personal dictionary for this config 
 */
function pspell_config_personal($conf, $personal) ;

/**
 * @return int
 * @param  conf int
 * @param  repl string
 * @desc   Use a personal dictionary with replacement pairs for this config 
 */
function pspell_config_repl($conf, $repl) ;

/**
 * @return int
 * @param  conf int
 * @param  runtogether bool
 * @desc   Consider run-together words as valid components 
 */
function pspell_config_runtogether($conf, $runtogether) ;

/**
 * @return int
 * @param  conf int
 * @param  save bool
 * @desc   Save replacement pairs when personal list is saved for this config 
 */
function pspell_config_save_repl($conf, $save) ;

/**
 * @return int
 * @param  language string
 * @param  spelling string[optional]
 * @param  jargon string[optional]
 * @param  encoding string[optional]
 * @param  mode int[optional]
 * @desc   Load a dictionary 
 */
function pspell_new($language, $spelling = null, $jargon = null, $encoding = null, $mode = null) ;

/**
 * @return int
 * @param  config int
 * @desc   Load a dictionary based on the given config 
 */
function pspell_new_config($config) ;

/**
 * @return int
 * @param  personal string
 * @param  language string
 * @param  spelling string[optional]
 * @param  jargon string[optional]
 * @param  encoding string[optional]
 * @param  mode int[optional]
 * @desc   Load a dictionary with a personal wordlist
 */
function pspell_new_personal($personal, $language, $spelling = null, $jargon = null, $encoding = null, $mode = null) ;

/**
 * @return int
 * @param  pspell int
 * @desc   Saves the current (personal) wordlist 
 */
function pspell_save_wordlist($pspell) ;

/**
 * @return int
 * @param  pspell int
 * @param  misspell string
 * @param  correct string
 * @desc   Notify the dictionary of a user-selected replacement 
 */
function pspell_store_replacement($pspell, $misspell, $correct) ;

/**
 * @return array
 * @param  pspell int
 * @param  word string
 * @desc   Returns array of suggestions 
 */
function pspell_suggest($pspell, $word) ;

/**
 * @return string
 * @desc   Returns public id of notation node 
 */
function public_id() ;

/**
 * @return bool
 * @param  setting string
 * @desc   Set the value of an environment variable 
 */
function putenv($setting) ;

/**
 * @return string
 * @desc   Returns the error string from the last QDOM operation or FALSE if no errors occured.
 */
function qdom_error() ;

/**
 * @return object
 * @param  string
 * @desc   creates a tree of an xml string 
 */
function qdom_tree($string) ;

/**
 * @return string
 * @param  str string
 * @desc   Convert a quoted-printable string to an 8 bit string 
 */
function quoted_printable_decode($str) ;

/**
 * @return string
 * @param  str string
 * @desc   Quotes meta characters 
 */
function quotemeta($str) ;

/**
 * @return float
 * @param  number float
 * @desc   Converts the radian number to the equivalent number in degrees 
 */
function rad2deg($number) ;

/**
 * @return int
 * @param  min int[optional]
 * @param  max int
 * @desc   Returns a random number 
 */
function rand($min = null, $max) ;

/**
 * @return array
 * @param  low mixed
 * @param  high mixed
 * @desc   Create an array containing the range of integers or characters from low to high (inclusive) 
 */
function range($low, $high) ;

/**
 * @return string
 * @param  str string
 * @desc   Decodes URL-encodes string 
 */
function rawurldecode($str) ;

/**
 * @return string
 * @param  str string
 * @desc   URL-encodes string 
 */
function rawurlencode($str) ;

/**
 * @return array|false
 * @param  filename string
 * @param  sections_needed[optional]
 * @param  sub_arrays[optional]
 * @param  read_thumbnail
 * @desc   Reads header data from the JPEG/TIFF image filename and optionally reads the internal thumbnails 
 */
function read_exif_data($filename, $sections_needed = null, $sub_arrays = null, $read_thumbnail) ;

/**
 * @return string
 * @param  dir_handle resource[optional]
 * @desc   Read directory entry from dir_handle 
 */
function readdir($dir_handle = null) ;

/**
 * @return int
 * @param  filename string
 * @param  use_include_path int[optional]
 * @desc   Output a file or a URL 
 */
function readfile($filename, $use_include_path = null) ;

/**
 * @return int
 * @param  filename string
 * @param  use_include_path int[optional]
 * @desc   Output a .gz-file 
 */
function readgzfile($filename, $use_include_path = null) ;

/**
 * @return string
 * @param  prompt string[optional]
 * @desc   Reads a line 
 */
function readline($prompt = null) ;

/**
 * @return void
 * @param  prompt string[optional]
 * @desc   Adds a line to the history 
 */
function readline_add_history($prompt = null) ;

/**
 * @return void
 * @desc   Clears the history 
 */
function readline_clear_history() ;

/**
 * @return void
 * @param  funcname string
 * @desc   Readline completion function? 
 */
function readline_completion_function($funcname) ;

/**
 * @return mixed
 * @param  varname string[optional]
 * @param  newvalue string[optional]
 * @desc   Gets/sets various internal readline variables. 
 */
function readline_info($varname = null, $newvalue = null) ;

/**
 * @return array
 * @desc   Lists the history 
 */
function readline_list_history() ;

/**
 * @return int
 * @param  filename string[optional]
 * @param  from int[optional]
 * @param  to int[optional]
 * @desc   Reads the history 
 */
function readline_read_history($filename = null, $from = null, $to = null) ;

/**
 * @return int
 * @param  filename string[optional]
 * @desc   Writes the history 
 */
function readline_write_history($filename = null) ;

/**
 * @return string
 * @param  filename string
 * @desc   Return the target of a symbolic link 
 */
function readlink($filename) ;

/**
 * @return string
 * @param  path string
 * @desc   Return the resolved path 
 */
function realpath($path) ;

/**
 * @return string
 * @param  request string
 * @param  str string
 * @desc   Recode string str according to request string 
 */
function recode($request, $str) ;

/**
 * @return bool
 * @param  request string
 * @param  input resource
 * @param  output resource
 * @desc   Recode file input into file output according to request 
 */
function recode_file($request, $input, $output) ;

/**
 * @return string
 * @param  request string
 * @param  str string
 * @desc   Recode string str according to request string 
 */
function recode_string($request, $str) ;

/**
 * @return void
 * @param  function_name string
 * @desc   Register a user-level function to be called on request termination 
 */
function register_shutdown_function($function_name) ;

/**
 * @return bool
 * @param  function_name string
 * @param  arg mixed[optional]
 * @vararg ... mixed
 * @desc   Registers a tick callback function 
 */
function register_tick_function($function_name, $arg = null) ;

/**
 * @return void
 * @param  SWFDisplayItem object
 * @desc   Remove the named character from the sprite's display list 
 */
function remove($SWFDisplayItem) ;

/**
 * @return string
 * @param  attrname string
 * @desc   Removes given attribute 
 */
function remove_attribute($attrname) ;

/**
 * @return object
 * @param  domnode object
 * @desc   Removes node from list of children 
 */
function remove_child($domnode) ;

/**
 * @return bool
 * @param  old_name string
 * @param  new_name string
 * @desc   Rename a file 
 */
function rename($old_name, $new_name) ;

/**
 * @return object
 * @param  newnode object
 * @param  oldnode object
 * @desc   Replaces node in list of children 
 */
function replace_child($newnode, $oldnode) ;

/**
 * @return object
 * @param  domnode object
 * @desc   Replaces one node with another node 
 */
function replace_node($domnode) ;

/**
 * @return mixed
 * @param  array_arg array
 * @desc   Set array argument's internal pointer to the first element and return it 
 */
function reset($array_arg) ;

/**
 * @return void
 * @desc   Restores the previously defined error handler function 
 */
function restore_error_handler() ;

/**
 * @return void
 * @desc   Restore the value of the include_path configuration option 
 */
function restore_include_path() ;

/**
 * @return int
 * @param  xslstylesheet object
 * @param  xmldoc object
 * @param  filename string
 * @param  compression int
 * @desc   output XSLT result to File 
 */
function result_dump_file($xslstylesheet, $xmldoc, $filename, $compression) ;

/**
 * @return string
 * @param  xslstylesheet object
 * @param  xmldoc object
 * @desc   output XSLT result to memory 
 */
function result_dump_mem($xslstylesheet, $xmldoc) ;

/**
 * @return void
 * @param  dir_handle resource[optional]
 * @desc   Rewind dir_handle back to the start 
 */
function rewind($dir_handle = null) ;


/**
 * @return bool
 * @param  dirname string
 * @desc   Remove a directory 
 */
function rmdir($dirname) ;

/**
 * @return object
 * @param  domnode int
 * @desc   Returns root node of document 
 */
function root($domnode) ;

/**
 * @return void
 * @param  degrees float
 * @desc   Rotates this SWFDisplayItem the given (clockwise) degrees from its current orientation 
 */
function rotate($degrees) ;

/**
 * @return void
 * @param  degrees float
 * @desc   Rotates this SWFFill the given (clockwise) degrees from its original orientation 
 */
function rotateto($degrees) ;

/**
 * @return float
 * @param  number float
 * @param  precision int[optional]
 * @desc   Returns the number rounded to specified precision 
 */
function round($number, $precision = null) ;

/**
 * @return bool
 * @param  array_arg array
 * @param  sort_flags int[optional]
 * @desc   Sort an array in reverse order 
 */
function rsort($array_arg, $sort_flags = null) ;

/**
 * @return string
 * @param  str string
 * @param  character_mask string[optional]
 * @desc   Removes trailing whitespace 
 */
function rtrim($str, $character_mask = null) ;

/**
 * @return bool
 * @param  lob object
 * @desc   Saves a large object 
 */
function save($lob) ;

/**
 * @return bool
 * @param  lob object
 * @desc   Saves a large object file 
 */
function savefile($lob) ;

/**
 * @return int
 * @param  x stream
 * @param  compression int[optional]
 * @desc   
 */
function savetofile($x, $compression = null) ;

/**
 * @return void
 * @param  xScale float
 * @param  yScale float
 * @desc   Multiplies this SWFDisplayItem's current x scale by xScale, its y scale by yScale 
 */
function scale($xScale, $yScale) ;

/**
 * @return void
 * @param  xScale float
 * @param  yScale float[optional]
 * @desc   Scales this SWFFill by xScale in the x direction, yScale in the y, or both to xScale if only one arg 
 */
function scaleto($xScale, $yScale = null) ;

/**
 * @return int
 * @param  id int
 * @desc   Acquires the semaphore with the given id, blocking if necessary 
 */
function sem_acquire($id) ;

/**
 * @return int
 * @param  key int
 * @param  max_acquire int[optional]
 * @param  perm int[optional]
 * @param  auto_release int[optional]
 * @desc   Return an id for the semaphore with the given key, and allow max_acquire (default 1) processes to acquire it simultaneously 
 */
function sem_get($key, $max_acquire = null, $perm = null, $auto_release = null) ;

/**
 * @return int
 * @param  id int
 * @desc   Releases the semaphore with the given id 
 */
function sem_release($id) ;

/**
 * @return int
 * @param  id int
 * @desc   Removes semaphore from Unix systems 
 */
function sem_remove($id) ;

/**
 * @return string
 * @param  variable mixed
 * @desc   Returns a string representation of variable (which can later be unserialized) 
 */
function serialize($variable) ;

/**
 * @return int
 * @param  new_cache_expire int[optional]
 * @desc   Return the current cache expire. If new_cache_expire is given, the current cache_expire is replaced with new_cache_expire 
 */
function session_cache_expire($new_cache_expire = null) ;

/**
 * @return string
 * @param  new_cache_limiter string[optional]
 * @desc   Return the current cache limiter. If new_cache_limited is given, the current cache_limiter is replaced with new_cache_limiter 
 */
function session_cache_limiter($new_cache_limiter = null) ;

/**
 * @return bool
 * @param  data string
 * @desc   Deserializes data and reinitializes the variables 
 */
function session_decode($data) ;

/**
 * @return bool
 * @desc   Destroy the current session and all data associated with it 
 */
function session_destroy() ;

/**
 * @return string
 * @desc   Serializes the current setup and returns the serialized representation 
 */
function session_encode() ;

/**
 * @return array
 * @desc   Return the session cookie parameters 
 */
function session_get_cookie_params() ;

/**
 * @return string
 * @param  newid string[optional]
 * @desc   Return the current session id. If newid is given, the session id is replaced with newid 
 */
function session_id($newid = null) ;

/**
 * @return bool
 * @param  varname string
 * @desc   Checks if a variable is registered in session 
 */
function session_is_registered($varname) ;

/**
 * @return string
 * @param  newname string[optional]
 * @desc   Return the current module name used for accessing session data. If newname is given, the module name is replaced with newname 
 */
function session_module_name($newname = null) ;

/**
 * @return string
 * @param  newname string[optional]
 * @desc   Return the current session name. If newname is given, the session name is replaced with newname 
 */
function session_name($newname = null) ;

/**
 * @return bool
 * @desc   Update the current session id with a newly generated one. 
 */
function session_regenerate_id() ;

/**
 * @return bool
 * @param  var_names mixed
 * @vararg ... mixed
 * @desc   Adds varname(s) to the list of variables which are freezed at the session end 
 */
function session_register($var_names) ;

/**
 * @return string
 * @param  newname string[optional]
 * @desc   Return the current save path passed to module_name. If newname is given, the save path is replaced with newname 
 */
function session_save_path($newname = null) ;

/**
 * @return void
 * @param  lifetime int
 * @param  path string[optional]
 * @param  domain string[optional]
 * @param  secure bool[optional]
 * @desc   Set session cookie parameters 
 */
function session_set_cookie_params($lifetime, $path = null, $domain = null, $secure = null) ;

/**
 * @return void
 * @param  open string
 * @param  close string
 * @param  read string
 * @param  write string
 * @param  destroy string
 * @param  gc string
 * @desc   Sets user-level functions 
 */
function session_set_save_handler($open, $close, $read, $write, $destroy, $gc) ;

/**
 * @return bool
 * @desc   Begin session - reinitializes freezed variables, registers browsers etc 
 */
function session_start() ;

/**
 * @return bool
 * @param  varname string
 * @desc   Removes varname from the list of variables which are freezed at the session end 
 */
function session_unregister($varname) ;

/**
 * @return void
 * @desc   Unset all registered variables 
 */
function session_unset() ;

/**
 * @return void
 * @desc   Write session data and end session 
 */
function session_write_close() ;

/**
 * @return bool
 * @param  attrname string
 * @param  value string
 * @desc   Sets value of given attribute 
 */
function set_attribute($attrname, $value) ;

/**
 * @return bool
 * @param  attr object
 * @desc   Sets value of given attribute 
 */
function set_attribute_node($attr) ;

/**
 * @return bool
 * @param  content string
 * @desc   Sets content of a node 
 */
function set_content($content) ;

/**
 * @return string
 * @param  error_handler string
 * @desc   Sets a user-defined error handler function.  Returns the previously defined error handler, or false on error 
 */
function set_error_handler($error_handler) ;

/**
 * @return int
 * @param  fp resource
 * @param  buffer int
 * @desc   Set file write buffer 
 */
function set_file_buffer($fp, $buffer) ;

/**
 * @return string
 * @param  varname string
 * @param  newvalue string
 * @desc   Sets the include_path configuration option 
 */
function set_include_path($varname, $newvalue) ;

/**
 * @return bool
 * @param  mode bool
 * @desc   Determines how to handle blanks 
 */
function set_keep_blanks($mode) ;

/**
 * @return bool
 * @param  new_setting int
 * @desc   Set the current active configuration setting of magic_quotes_runtime and return previous 
 */
function set_magic_quotes_runtime($new_setting) ;

/**
 * @return bool
 * @param  name string
 * @desc   Sets name of a node 
 */
function set_name($name) ;

/**
 * @return void
 * @param  uri string
 * @param  prefix string[optional]
 * @desc   Sets the namespace of a node 
 */
function set_namespace($uri, $prefix = null) ;

/**
 * @return bool
 * @param  socket resource
 * @param  mode int
 * @desc   Set blocking/non-blocking mode on a socket 
 */
function set_socket_blocking($socket, $mode) ;

/**
 * @return bool
 * @param  seconds int
 * @desc   Sets the maximum time a script can run 
 */
function set_time_limit($seconds) ;

/**
 * @return void
 * @param  SWFAction object
 * @desc   Sets the action to perform when button is pressed 
 */
function setaction($SWFAction) ;

/**
 * @return void
 * @param  r int
 * @param  g int
 * @param  b int
 * @desc   Sets background color (r,g,b) 
 */
function setbackground($r, $g, $b) ;

/**
 * @return void
 * @param  width float
 * @param  height float
 * @desc   Sets the width and height of this textfield 
 */
function setbounds($width, $height) ;

/**
 * @return void
 * @param  r int
 * @param  g int
 * @param  b int
 * @param  a int[optional]
 * @desc   Sets the color of this textfield 
 */
function setcolor($r, $g, $b, $a = null) ;

/**
 * @return bool
 * @param  name string
 * @param  value string[optional]
 * @param  expires int[optional]
 * @param  path string[optional]
 * @param  domain string[optional]
 * @param  secure bool[optional]
 * @desc   Send a cookie 
 */
function setcookie($name, $value = null, $expires = null, $path = null, $domain = null, $secure = null) ;

/**
 * @return void
 * @param  depth int
 * @desc   Sets this SWFDisplayItem's z-depth to depth.  Items with higher depth values are drawn on top of those with lower values 
 */
function setdepth($depth) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @desc   Sets movie dimension 
 */
function setdimension($x, $y) ;

/**
 * @return void
 * @param  SWFCharacter object
 * @desc   Sets the character for this button's down state 
 */
function setdown($SWFCharacter) ;

/**
 * @return void
 * @param  font object
 * @desc   Sets the font for this textfield 
 */
function setfont($font) ;

/**
 * @return void
 * @param  frames int
 * @desc   Sets the number of frames in this SWFSprite 
 */
function setframes($frames) ;

/**
 * @return void
 * @param  height float
 * @desc   Sets the font height of this textfield 
 */
function setheight($height) ;

/**
 * @return void
 * @param  SWFCharacter object
 * @desc   Sets the character for this button's hit test state 
 */
function sethit($SWFCharacter) ;

/**
 * @return void
 * @param  indentation float
 * @desc   Sets the indentation of the first line of this textfield 
 */
function setindentation($indentation) ;

/**
 * @return void
 * @param  arg1 int
 * @param  g int[optional]
 * @param  b int
 * @param  a int[optional]
 * @desc   Sets the right side fill style to fill in case only one parameter is passed. When 3 or 4 parameters are passed they are treated as : int r, int g, int b, int a . Solid fill is performed in this case before setting right side fill type. 
 */
function setleftfill($arg1, $g = null, $b, $a = null) ;

/**
 * @return void
 * @param  margin float
 * @desc   Sets the left margin of this textfield 
 */
function setleftmargin($margin) ;

/**
 * @return void
 * @param  width int
 * @param  r int
 * @param  g int
 * @param  b int
 * @param  a int[optional]
 * @desc   Sets the current line style for this SWFShape 
 */
function setline($width, $r, $g, $b, $a = null) ;

/**
 * @return void
 * @param  space float
 * @desc   Sets the line spacing of this textfield 
 */
function setlinespacing($space) ;

/**
 * @return string
 * @param  category mixed
 * @param  locale string
 * @vararg ... string
 * @desc   Set locale information 
 */
function setlocale($category, $locale) ;

/**
 * @return void
 * @param  left float
 * @param  right float
 * @desc   Sets both margins of this textfield 
 */
function setmargins($left, $right) ;

/**
 * @return void
 * @param  a float
 * @param  b float
 * @param  c float
 * @param  d float
 * @param  x float
 * @param  y float
 * @desc   Sets the item's transform matrix 
 */
function setmatrix($a, $b, $c, $d, $x, $y) ;

/**
 * @return void
 * @param  var_name string
 * @desc   Sets the variable name of this textfield 
 */
function setname($var_name) ;

/**
 * @return void
 * @param  SWFCharacter object
 * @desc   Sets the character for this button's over state 
 */
function setover($SWFCharacter) ;

/**
 * @return void
 * @param  rate float
 * @desc   Sets movie rate 
 */
function setrate($rate) ;

/**
 * @return void
 * @param  ratio float
 * @desc   Sets this SWFDisplayItem's ratio to ratio.  Obviously only does anything if displayitem was created from an SWFMorph 
 */
function setratio($ratio) ;

/**
 * @return void
 * @param  margin float
 * @desc   Sets the right margin of this textfield 
 */
function setrightmargin($margin) ;

/**
 * @return void
 * @param  spacing float
 * @desc   Sets this SWFText object's current letterspacing to given spacing 
 */
function setspacing($spacing) ;

/**
 * @return bool
 * @param  var mixed
 * @param  type string
 * @desc   Set the type of the variable 
 */
function settype($var, $type) ;

/**
 * @return void
 * @param  SWFCharacter object
 * @desc   Sets the character for this button's up state 
 */
function setup($SWFCharacter) ;

/**
 * @return string
 * @param  str string
 * @desc   Calculate the sha1 hash of a string 
 */
function sha1($str) ;

/**
 * @return string
 * @param  filename string
 * @desc   Calculate the sha1 hash of given filename 
 */
function sha1_file($filename) ;

/**
 * @return string
 * @param  cmd string
 * @desc   Execute command via shell and return complete output as string 
 */
function shell_exec($cmd) ;

/**
 * @return int
 * @param  key int
 * @param  memsize int[optional]
 * @param  perm int[optional]
 * @desc   Creates or open a shared memory segment 
 */
function shm_attach($key, $memsize = null, $perm = null) ;

/**
 * @return int
 * @param  shm_identifier int
 * @desc   Disconnects from shared memory segment 
 */
function shm_detach($shm_identifier) ;

/**
 * @return mixed
 * @param  id int
 * @param  variable_key int
 * @desc   Returns a variable from shared memory 
 */
function shm_get_var($id, $variable_key) ;

/**
 * @return int
 * @param  shm_identifier int
 * @param  variable_key int
 * @param  variable mixed
 * @desc   Inserts or updates a variable in shared memory 
 */
function shm_put_var($shm_identifier, $variable_key, $variable) ;

/**
 * @return int
 * @param  shm_identifier int
 * @desc   Removes shared memory from Unix systems 
 */
function shm_remove($shm_identifier) ;

/**
 * @return int
 * @param  id int
 * @param  variable_key int
 * @desc   Removes variable from shared memory 
 */
function shm_remove_var($id, $variable_key) ;

/**
 * @return void
 * @param  shmid int
 * @desc   closes a shared memory segment 
 */
function shmop_close ($shmid) ;

/**
 * @return bool
 * @param  shmid int
 * @desc   mark segment for deletion 
 */
function shmop_delete ($shmid) ;

/**
 * @return int
 * @param  key int
 * @param  flags string
 * @param  mode int
 * @param  size int
 * @desc   gets and attaches a shared memory segment 
 */
function shmop_open ($key, $flags, $mode, $size) ;

/**
 * @return string
 * @param  shmid int
 * @param  start int
 * @param  count int
 * @desc   reads from a shm segment 
 */
function shmop_read ($shmid, $start, $count) ;

/**
 * @return int
 * @param  shmid int
 * @desc   returns the shm size 
 */
function shmop_size ($shmid) ;

/**
 * @return int
 * @param  shmid int
 * @param  data string
 * @param  offset int
 * @desc   writes to a shared memory segment 
 */
function shmop_write ($shmid, $data, $offset) ;

/**
 * @return bool
 * @param  file_name string
 * @param  return bool[optional]
 * @desc   Syntax highlight a source file 
 */
function show_source($file_name, $return = null) ;

/**
 * @return bool
 * @param  array_arg array
 * @desc   Randomly shuffle the contents of an array 
 */
function shuffle($array_arg) ;

/**
 * @return int
 * @param  str1 string
 * @param  str2 string
 * @param  percent float[optional]
 * @desc   Calculates the similarity between two strings 
 */
function similar_text($str1, $str2, $percent = null) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the sine of the number in radians 
 */
function sin($number) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the hyperbolic sine of the number, defined as (exp(number) - exp(-number))/2 
 */
function sinh($number) ;

/**
 * @return int
 * @param  collection object
 * @desc   Return the size of a collection 
 */
function size($collection) ;

/**
 * @return int
 * @param  var mixed
 * @param  mode int[optional]
 * @desc   Count the number of elements in a variable (usually an array) 
 */
function sizeof($var, $mode = null) ;

/**
 * @return void
 * @param  xSkew float
 * @desc   Adds xSkew to this SWFDisplayItem's x skew value 
 */
function skewx($xSkew) ;

/**
 * @return void
 * @param  xSkew float
 * @desc   Sets this SWFFill's x skew value to xSkew 
 */
function skewxto($xSkew) ;

/**
 * @return void
 * @param  ySkew float
 * @desc   Adds ySkew to this SWFDisplayItem's y skew value 
 */
function skewy($ySkew) ;

/**
 * @return void
 * @param  ySkew float
 * @desc   Sets this SWFFill's y skew value to ySkew 
 */
function skewyto($ySkew) ;

/**
 * @return void
 * @param  seconds int
 * @desc   Delay for a given number of seconds 
 */
function sleep($seconds) ;

/**
 * @return int
 * @param  host string
 * @param  sec_name string
 * @param  sec_level string
 * @param  auth_protocol string
 * @param  auth_passphrase string
 * @param  priv_protocol string
 * @param  priv_passphrase string
 * @param  object_id string
 * @param  timeout int[optional]
 * @param  retries int[optional]
 * @desc   Fetch the value of a SNMP object 
 */
function snmp3_get($host, $sec_name, $sec_level, $auth_protocol, $auth_passphrase, $priv_protocol, $priv_passphrase, $object_id, $timeout = null, $retries = null) ;

/**
 * @return int
 * @param  host string
 * @param  sec_name string
 * @param  sec_level string
 * @param  auth_protocol string
 * @param  auth_passphrase string
 * @param  priv_protocol string
 * @param  priv_passphrase string
 * @param  object_id string
 * @param  timeout int[optional]
 * @param  retries int[optional]
 * @desc   Fetch the value of a SNMP object 
 */
function snmp3_real_walk($host, $sec_name, $sec_level, $auth_protocol, $auth_passphrase, $priv_protocol, $priv_passphrase, $object_id, $timeout = null, $retries = null) ;

/**
 * @return int
 * @param  host string
 * @param  sec_name string
 * @param  sec_level string
 * @param  auth_protocol string
 * @param  auth_passphrase string
 * @param  priv_protocol string
 * @param  priv_passphrase string
 * @param  object_id string
 * @param  type string
 * @param  value mixed
 * @param  timeout int[optional]
 * @param  retries int[optional]
 * @desc   Fetch the value of a SNMP object 
 */
function snmp3_set($host, $sec_name, $sec_level, $auth_protocol, $auth_passphrase, $priv_protocol, $priv_passphrase, $object_id, $type, $value, $timeout = null, $retries = null) ;

/**
 * @return int
 * @param  host string
 * @param  sec_name string
 * @param  sec_level string
 * @param  auth_protocol string
 * @param  auth_passphrase string
 * @param  priv_protocol string
 * @param  priv_passphrase string
 * @param  object_id string
 * @param  timeout int[optional]
 * @param  retries int[optional]
 * @desc   Fetch the value of a SNMP object 
 */
function snmp3_walk($host, $sec_name, $sec_level, $auth_protocol, $auth_passphrase, $priv_protocol, $priv_passphrase, $object_id, $timeout = null, $retries = null) ;

/**
 * @return bool
 * @desc   Return the current status of quick_print 
 */
function snmp_get_quick_print() ;

/**
 * @return int
 * @desc   Return the method how the SNMP values will be returned 
 */
function snmp_get_valueretrieval() ;

/**
 * @return void
 * @param  enum_print int
 * @desc   Return all values that are enums with their enum value instead of the raw integer 
 */
function snmp_set_enum_print($enum_print) ;

/**
 * @return void
 * @param  oid_numeric_print int
 * @desc   Return all objects including their respective object id withing the specified one 
 */
function snmp_set_oid_numeric_print($oid_numeric_print) ;

/**
 * @return void
 * @param  quick_print int
 * @desc   Return all objects including their respective object id withing the specified one 
 */
function snmp_set_quick_print($quick_print) ;

/**
 * @return int
 * @param  method int
 * @desc   Specify the method how the SNMP values will be returned 
 */
function snmp_set_valueretrieval($method) ;

/**
 * @return string
 * @param  host string
 * @param  community string
 * @param  object_id string
 * @param  timeout int[optional]
 * @param  retries int[optional]
 * @desc   Fetch a SNMP object 
 */
function snmpget($host, $community, $object_id, $timeout = null, $retries = null) ;

/**
 * @return array
 * @param  host string
 * @param  community string
 * @param  object_id string
 * @param  timeout int[optional]
 * @param  retries int[optional]
 * @desc   Return all objects including their respective object id withing the specified one 
 */
function snmprealwalk($host, $community, $object_id, $timeout = null, $retries = null) ;

/**
 * @return int
 * @param  host string
 * @param  community string
 * @param  object_id string
 * @param  type string
 * @param  value mixed
 * @param  timeout int[optional]
 * @param  retries int[optional]
 * @desc   Set the value of a SNMP object 
 */
function snmpset($host, $community, $object_id, $type, $value, $timeout = null, $retries = null) ;

/**
 * @return array
 * @param  host string
 * @param  community string
 * @param  object_id string
 * @param  timeout int[optional]
 * @param  retries int[optional]
 * @desc   Return all objects under the specified object id 
 */
function snmpwalk($host, $community, $object_id, $timeout = null, $retries = null) ;

/**
 * @return array
 * @param  host string
 * @param  community string
 * @param  object_id string
 * @param  timeout int[optional]
 * @param  retries int[optional]
 * @desc   Return all objects including their respective object id withing the specified one 
 */
function snmpwalkoid($host, $community, $object_id, $timeout = null, $retries = null) ;

/**
 * @return resource
 * @param  socket resource
 * @desc   Accepts a connection on the listening socket fd 
 */
function socket_accept($socket) ;

/**
 * @return bool
 * @param  socket resource
 * @param  addr string
 * @param  port int[optional]
 * @desc   Binds an open socket to a listening port, port is only specified in AF_INET family. 
 */
function socket_bind($socket, $addr, $port = null) ;

/**
 * @return void
 * @param  socket resource[optional]
 * @desc   Clears the error on the socket or the last error code. 
 */
function socket_clear_error($socket = null) ;

/**
 * @return void
 * @param  socket resource
 * @desc   Closes a file descriptor 
 */
function socket_close($socket) ;

/**
 * @return bool
 * @param  socket resource
 * @param  addr string
 * @param  port int[optional]
 * @desc   Opens a connection to addr:port on the socket specified by socket 
 */
function socket_connect($socket, $addr, $port = null) ;

/**
 * @return resource
 * @param  domain int
 * @param  type int
 * @param  protocol int
 * @desc   Creates an endpoint for communication in the domain specified by domain, of type specified by type 
 */
function socket_create($domain, $type, $protocol) ;

/**
 * @return resource
 * @param  port int
 * @param  backlog int
 * @desc   Opens a socket on port to accept connections 
 */
function socket_create_listen($port, $backlog) ;

/**
 * @return bool
 * @param  domain int
 * @param  type int
 * @param  protocol int
 * @param  &fd array
 * @desc   Creates a pair of indistinguishable sockets and stores them in fds. 
 */
function socket_create_pair($domain, $type, $protocol, &$fd) ;

/**
 * @return mixed
 * @param  socket resource
 * @param  level int
 * @param  optname int
 * @desc   Gets socket options for the socket 
 */
function socket_get_option($socket, $level, $optname) ;

/**
 * @return resource
 * @param  fp resource
 * @desc   Retrieves header/meta data from streams/file pointers 
 */
function socket_get_status($fp) ;

/**
 * @return mixed
 * @param  socket resource
 * @param  level int
 * @param  optname int
 * @desc   Gets socket options for the socket 
 */
function socket_getopt($socket, $level, $optname) ;

/**
 * @return bool
 * @param  socket resource
 * @param  &addr string
 * @param  &port int
 * @desc   Queries the remote side of the given socket which may either result in host/port or in a UNIX filesystem path, dependent on its type. 
 */
function socket_getpeername($socket, &$addr, &$port) ;

/**
 * @return bool
 * @param  socket resource
 * @param  &addr string
 * @param  &port int
 * @desc   Queries the remote side of the given socket which may either result in host/port or in a UNIX filesystem path, dependent on its type. 
 */
function socket_getsockname($socket, &$addr, &$port) ;

/**
 * @return bool
 * @param  iovec resource
 * @param  iov_len int
 * @desc   Adds a new vector to the scatter/gather array 
 */
function socket_iovec_add($iovec, $iov_len) ;

/**
 * @return resource
 * @param  num_vectors int
 * @vararg ... int
 * @desc   Builds a 'struct iovec' for use with sendmsg, recvmsg, writev, and readv 
 */
function socket_iovec_alloc($num_vectors) ;

/**
 * @return bool
 * @param  iovec resource
 * @param  iov_pos int
 * @desc   Deletes a vector from an array of vectors 
 */
function socket_iovec_delete($iovec, $iov_pos) ;

/**
 * @return string
 * @param  iovec resource
 * @param  iovec_position int
 * @desc   Returns the data held in the iovec specified by iovec_id[iovec_position] 
 */
function socket_iovec_fetch($iovec, $iovec_position) ;

/**
 * @return bool
 * @param  iovec resource
 * @desc   Frees the iovec specified by iovec_id 
 */
function socket_iovec_free($iovec) ;

/**
 * @return bool
 * @param  iovec resource
 * @param  iovec_position int
 * @param  new_val string
 * @desc   Sets the data held in iovec_id[iovec_position] to new_val 
 */
function socket_iovec_set($iovec, $iovec_position, $new_val) ;

/**
 * @return int
 * @param  socket resource[optional]
 * @desc   Returns the last socket error (either the last used or the provided socket resource) 
 */
function socket_last_error($socket = null) ;

/**
 * @return bool
 * @param  socket resource
 * @param  backlog int
 * @desc   Sets the maximum number of connections allowed to be waited for on the socket specified by fd 
 */
function socket_listen($socket, $backlog) ;

/**
 * @return string
 * @param  socket resource
 * @param  length int
 * @param  type int[optional]
 * @desc   Reads a maximum of length bytes from socket 
 */
function socket_read($socket, $length, $type = null) ;

/**
 * @return bool
 * @param  socket resource
 * @param  iovec_id resource
 * @desc   Reads from an fd, using the scatter-gather array defined by iovec_id 
 */
function socket_readv($socket, $iovec_id) ;

/**
 * @return int
 * @param  socket resource
 * @param  &buf string
 * @param  len int
 * @param  flags int
 * @desc   Receives data from a connected socket 
 */
function socket_recv($socket, &$buf, $len, $flags) ;

/**
 * @return int
 * @param  socket resource
 * @param  &buf string
 * @param  len int
 * @param  flags int
 * @param  &name string
 * @param  &port int[optional]
 * @desc   Receives data from a socket, connected or not 
 */
function socket_recvfrom($socket, &$buf, $len, $flags, &$name, &$port) ;

/**
 * @return bool
 * @param  socket resource
 * @param  iovec resource
 * @param  &control array
 * @param  &controllen int
 * @param  &flags int
 * @param  &addr string
 * @param  &port int[optional]
 * @desc   Used to receive messages on a socket, whether connection-oriented or not 
 */
function socket_recvmsg($socket, $iovec, &$control, &$controllen, &$flags, &$addr, &$port) ;

/**
 * @return int
 * @param  &read_fds array
 * @param  &write_fds array
 * @param  except_fds &array
 * @param  tv_sec int
 * @param  tv_usec int
 * @desc   Runs the select() system call on the sets mentioned with a timeout specified by tv_sec and tv_usec 
 */
function socket_select(&$read_fds, &$write_fds, $except_fds, $tv_sec, $tv_usec) ;

/**
 * @return int
 * @param  socket resource
 * @param  buf string
 * @param  len int
 * @param  flags int
 * @desc   Sends data to a connected socket 
 */
function socket_send($socket, $buf, $len, $flags) ;

/**
 * @return bool
 * @param  socket resource
 * @param  iovec resource
 * @param  flags int
 * @param  addr string
 * @param  port int[optional]
 * @desc   Sends a message to a socket, regardless of whether it is connection-oriented or not 
 */
function socket_sendmsg($socket, $iovec, $flags, $addr, $port = null) ;

/**
 * @return int
 * @param  socket resource
 * @param  buf string
 * @param  len int
 * @param  flags int
 * @param  addr string
 * @param  port int[optional]
 * @desc   Sends a message to a socket, whether it is connected or not 
 */
function socket_sendto($socket, $buf, $len, $flags, $addr, $port = null) ;

/**
 * @return bool
 * @param  socket resource
 * @desc   Sets blocking mode on a socket resource 
 */
function socket_set_block($socket) ;

/**
 * @return bool
 * @param  socket resource
 * @param  mode int
 * @desc   Set blocking/non-blocking mode on a socket or stream 
 */
function socket_set_blocking($socket, $mode) ;

/**
 * @return bool
 * @param  socket resource
 * @desc   Sets nonblocking mode on a socket resource 
 */
function socket_set_nonblock($socket) ;

/**
 * @return bool
 * @param  socket resource
 * @param  level int
 * @param  optname int
 * @param  optval int|array
 * @desc   Sets socket options for the socket 
 */
function socket_set_option($socket, $level, $optname, $optval) ;

/**
 * @return bool
 * @param  stream resource
 * @param  seconds int
 * @param  microseconds int
 * @desc   Set timeout on stream read to seconds + microseonds 
 */
function socket_set_timeout($stream, $seconds, $microseconds) ;

/**
 * @return bool
 * @param  socket resource
 * @param  level int
 * @param  optname int
 * @param  optval int|array
 * @desc   Sets socket options for the socket 
 */
function socket_setopt($socket, $level, $optname, $optval) ;

/**
 * @return bool
 * @param  socket resource
 * @param  how int
 * @desc   Shuts down a socket for receiving, sending, or both. 
 */
function socket_shutdown($socket, $how) ;

/**
 * @return string
 * @param  errno int
 * @desc   Returns a string describing an error 
 */
function socket_strerror($errno) ;

/**
 * @return int
 * @param  socket resource
 * @param  buf string
 * @param  length int
 * @desc   Writes the buffer to the socket resource, length is optional 
 */
function socket_write($socket, $buf, $length) ;

/**
 * @return bool
 * @param  socket resource
 * @param  iovec_id resource
 * @desc   Writes to a file descriptor, fd, using the scatter-gather array defined by iovec_id 
 */
function socket_writev($socket, $iovec_id) ;

/**
 * @return bool
 * @param  result_id resource
 * @desc   
 */
function solid_fetch_prev($result_id) ;

/**
 * @return bool
 * @param  array_arg array
 * @param  sort_flags int[optional]
 * @desc   Sort an array 
 */
function sort($array_arg, $sort_flags = null) ;

/**
 * @return string
 * @param  str string
 * @desc   Calculate the soundex key of a string 
 */
function soundex($str) ;

/**
 * @return array
 * @desc   Returns list of attribute names 
 */
function specified() ;

/**
 * @return array
 * @param  pattern string
 * @param  string string
 * @param  limit int[optional]
 * @desc   Split string into array by regular expression 
 */
function split($pattern, $string, $limit = null) ;

/**
 * @return array
 * @param  pattern string
 * @param  string string
 * @param  limit int[optional]
 * @desc   Split string into array by regular expression case-insensitive 
 */
function spliti($pattern, $string, $limit = null) ;

/**
 * @return string
 * @param  format string
 * @param  arg1 mixed[optional]
 * @vararg ... mixed
 * @desc   Return a formatted string 
 */
function sprintf($format, $arg1 = null) ;

/**
 * @return string
 * @param  string string
 * @desc   Make regular expression for case insensitive match 
 */
function sql_regcase($string) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the square root of the number 
 */
function sqrt($number) ;

/**
 * @return void
 * @param  seed int[optional]
 * @desc   Seeds random number generator 
 */
function srand($seed = null) ;

/**
 * @return mixed
 * @param  str string
 * @param  format string
 * @vararg ... string
 * @desc   Implements an ANSI C compatible sscanf 
 */
function sscanf($str, $format) ;

/**
 * @return bool
 * @desc   starts a document
 */
function start_document() ;

/**
 * @return bool
 * @param  tagname string
 * @param  attributes array
 * @desc   Starts an element and adds attributes
 */
function start_element($tagname, $attributes) ;

/**
 * @return array
 * @param  filename string
 * @desc   Give information about a file 
 */
function stat($filename) ;

/**
 * @return string
 * @param  input string
 * @param  pad_length int
 * @param  pad_string string[optional]
 * @param  pad_type int[optional]
 * @desc   Returns input string padded on the left or right to specified length with pad_string 
 */
function str_pad($input, $pad_length, $pad_string = null, $pad_type = null) ;

/**
 * @return string
 * @param  input string
 * @param  mult int
 * @desc   Returns the input string repeat mult times 
 */
function str_repeat($input, $mult) ;

/**
 * @return mixed
 * @param  search mixed
 * @param  replace mixed
 * @param  subject mixed
 * @desc   Replaces all occurrences of search in haystack with replace 
 */
function str_replace($search, $replace, $subject) ;

/**
 * @return string
 * @param  str string
 * @desc   Perform the rot13 transform on a string 
 */
function str_rot13($str) ;

/**
 * @return void
 * @param  str string
 * @desc   Shuffles string. One permutation of all possible is created 
 */
function str_shuffle($str) ;

/**
 * @return mixed
 * @param  str string
 * @param  format int[optional]
 * @desc   
 */
function str_word_count($str, $format = null) ;

/**
 * @return int
 * @param  str1 string
 * @param  str2 string
 * @desc   Binary safe case-insensitive string comparison 
 */
function strcasecmp($str1, $str2) ;

/**
 * @return string
 * @param  haystack string
 * @param  needle string
 * @desc   Finds first occurrence of a string within another 
 */
function strchr($haystack, $needle) ;

/**
 * @return int
 * @param  str1 string
 * @param  str2 string
 * @desc   Binary safe string comparison 
 */
function strcmp($str1, $str2) ;

/**
 * @return int
 * @param  str1 string
 * @param  str2 string
 * @desc   Compares two strings using the current locale 
 */
function strcoll($str1, $str2) ;

/**
 * @return int
 * @param  str string
 * @param  mask string
 * @param  start[optional]
 * @param  len[optional]
 * @desc   Finds length of initial segment consisting entirely of characters not found in mask. If start or/and length is provide works like strcspn(substr($s,$start,$len),$bad_chars) 
 */
function strcspn($str, $mask, $start = null, $len = null) ;

/**
 * @return resource
 * @param  options array[optional]
 * @desc   Create a file context and optionally set parameters 
 */
function stream_context_create($options = null) ;

/**
 * @return array
 * @param  context|resource_stream resource
 * @desc   Retrieve options for a stream/wrapper/context 
 */
function stream_context_get_options($context) ;

/**
 * @return bool
 * @param  context|resource_stream resource
 * @param  wrappername string
 * @param  optionname string
 * @param  value mixed
 * @desc   Set an option for a wrapper 
 */
function stream_context_set_option($context, $wrappername, $optionname, $value) ;

/**
 * @return bool
 * @param  context|resource_stream resource
 * @param  options array
 * @desc   Set parameters for a file context 
 */
function stream_context_set_params($context, $options) ;

/**
 * @return bool
 * @param  stream resource
 * @param  filtername string
 * @param  filterparams string
 * @desc   Append a filter to a stream 
 */
function stream_filter_append($stream, $filtername, $filterparams) ;

/**
 * @return bool
 * @param  stream resource
 * @param  filtername string
 * @param  filterparams string
 * @desc   Prepend a filter to a stream 
 */
function stream_filter_prepend($stream, $filtername, $filterparams) ;

/**
 * @return resource
 * @param  fp resource
 * @desc   Retrieves header/meta data from streams/file pointers 
 */
function stream_get_meta_data($fp) ;

/**
 * @return bool
 * @param  protocol string
 * @param  classname string
 * @desc   Registers a custom URL protocol handler class 
 */
function stream_register_wrapper($protocol, $classname) ;

/**
 * @return int
 * @param  &read_streams array
 * @param  &write_streams array
 * @param  &except_streams array
 * @param  tv_sec int
 * @param  tv_usec int
 * @desc   Runs the select() system call on the sets of streams with a timeout specified by tv_sec and tv_usec 
 */
function stream_select(&$read_streams, &$write_streams, &$except_streams, $tv_sec, $tv_usec) ;

/**
 * @return bool
 * @param  socket resource
 * @param  mode int
 * @desc   Set blocking/non-blocking mode on a socket or stream 
 */
function stream_set_blocking($socket, $mode) ;

/**
 * @return bool
 * @param  stream resource
 * @param  seconds int
 * @param  microseconds int
 * @desc   Set timeout on stream read to seconds + microseonds 
 */
function stream_set_timeout($stream, $seconds, $microseconds) ;

/**
 * @return int
 * @param  fp resource
 * @param  buffer int
 * @desc   Set file write buffer 
 */
function stream_set_write_buffer($fp, $buffer) ;

/**
 * @return bool
 * @param  protocol string
 * @param  classname string
 * @desc   Registers a custom URL protocol handler class 
 */
function stream_wrapper_register($protocol, $classname) ;

/**
 * @return void
 * @param  file mixed
 * @desc   Sets sound stream of the SWF movie. The parameter can be stream or string. 
 */
function streammp3($file) ;

/**
 * @return string
 * @param  format string
 * @param  timestamp int[optional]
 * @desc   Format a local time/date according to locale settings 
 */
function strftime($format, $timestamp = null) ;

/**
 * @return string
 * @param  str string
 * @param  allowable_tags string[optional]
 * @desc   Strips HTML and PHP tags from a string 
 */
function strip_tags($str, $allowable_tags = null) ;

/**
 * @return string
 * @param  str string
 * @desc   Strips backslashes from a string. Uses C-style conventions 
 */
function stripcslashes($str) ;

/**
 * @return string
 * @param  str string
 * @desc   Strips backslashes from a string 
 */
function stripslashes($str) ;

/**
 * @return string
 * @param  haystack string
 * @param  needle string
 * @desc   Finds first occurrence of a string within another, case insensitive 
 */
function stristr($haystack, $needle) ;

/**
 * @return int
 * @param  str string
 * @desc   Get string length 
 */
function strlen($str) ;

/**
 * @return int
 * @param  s1 string
 * @param  s2 string
 * @desc   Returns the result of case-insensitive string comparison using 'natural' algorithm 
 */
function strnatcasecmp($s1, $s2) ;

/**
 * @return int
 * @param  s1 string
 * @param  s2 string
 * @desc   Returns the result of string comparison using 'natural' algorithm 
 */
function strnatcmp($s1, $s2) ;

/**
 * @return int
 * @param  str1 string
 * @param  str2 string
 * @param  len int
 * @desc   Binary safe string comparison 
 */
function strncasecmp($str1, $str2, $len) ;

/**
 * @return int
 * @param  str1 string
 * @param  str2 string
 * @param  len int
 * @desc   Binary safe string comparison 
 */
function strncmp($str1, $str2, $len) ;

/**
 * @return int
 * @param  haystack string
 * @param  needle string
 * @param  offset int[optional]
 * @desc   Finds position of first occurrence of a string within another 
 */
function strpos($haystack, $needle, $offset = null) ;

/**
 * @return string
 * @param  haystack string
 * @param  needle string
 * @desc   Finds the last occurrence of a character in a string within another 
 */
function strrchr($haystack, $needle) ;

/**
 * @return string
 * @param  str string
 * @desc   Reverse a string 
 */
function strrev($str) ;

/**
 * @return int
 * @param  haystack string
 * @param  needle string
 * @desc   Finds position of last occurrence of a character in a string within another 
 */
function strrpos($haystack, $needle) ;

/**
 * @return int
 * @param  str string
 * @param  mask string
 * @param  start[optional]
 * @param  len[optional]
 * @desc   Finds length of initial segment consisting entirely of characters found in mask. If start or/and length is provided works like strspn(substr($s,$start,$len),$good_chars) 
 */
function strspn($str, $mask, $start = null, $len = null) ;

/**
 * @return string
 * @param  haystack string
 * @param  needle string
 * @desc   Finds first occurrence of a string within another 
 */
function strstr($haystack, $needle) ;

/**
 * @return string
 * @param  str string[optional]
 * @param  token string
 * @desc   Tokenize a string 
 */
function strtok($str = null, $token) ;

/**
 * @return string
 * @param  str string
 * @desc   Makes a string lowercase 
 */
function strtolower($str) ;

/**
 * @return int
 * @param  time string
 * @param  now int
 * @desc   Convert string representation of date and time to a timestamp 
 */
function strtotime($time, $now) ;

/**
 * @return string
 * @param  str string
 * @desc   Makes a string uppercase 
 */
function strtoupper($str) ;

/**
 * @return string
 * @param  str string
 * @param  from string
 * @param  to string
 * @desc   Translates characters in str using given translation tables 
 */
function strtr($str, $from, $to) ;

/**
 * @return string
 * @param  var mixed
 * @desc   Get the string value of a variable 
 */
function strval($var) ;

/**
 * @return string
 * @param  str string
 * @param  start int
 * @param  length int[optional]
 * @desc   Returns part of a string 
 */
function substr($str, $start, $length = null) ;

/**
 * @return int
 * @param  haystack string
 * @param  needle string
 * @desc   Returns the number of times a substring occurs in the string 
 */
function substr_count($haystack, $needle) ;

/**
 * @return string
 * @param  str string
 * @param  repl string
 * @param  start int
 * @param  length int[optional]
 * @desc   Replaces part of a string with another string 
 */
function substr_replace($str, $repl, $start, $length = null) ;

/**
 * @return void
 * @param  url string
 * @param  target string
 * @desc   Gets the specified url 
 */
function swf_actiongeturl($url, $target) ;

/**
 * @return void
 * @param  frame_number int
 * @desc   Causes the Flash movie to display the specified frame, frame_number, and then stop. 
 */
function swf_actiongotoframe($frame_number) ;

/**
 * @return void
 * @param  label string
 * @desc   Causes the flash movie to display the frame with the given label and then stop 
 */
function swf_actiongotolabel($label) ;

/**
 * @return void
 * @desc   Goes foward one frame 
 */
function swf_actionnextframe() ;

/**
 * @return void
 * @desc   Starts playing the Flash movie from the current frame 
 */
function swf_actionplay() ;

/**
 * @return void
 * @desc   Goes backward one frame 
 */
function swf_actionprevframe() ;

/**
 * @return void
 * @param  target string
 * @desc   Sets the context for actions 
 */
function swf_actionsettarget($target) ;

/**
 * @return void
 * @desc   Stops playing the Flash movie at the current frame 
 */
function swf_actionstop() ;

/**
 * @return void
 * @desc   Toggles between high and low quality 
 */
function swf_actiontogglequality() ;

/**
 * @return void
 * @param  frame int
 * @param  skipcount int
 * @desc   If the specified frame has not been loaded, skip the specified number of actions in the action list 
 */
function swf_actionwaitforframe($frame, $skipcount) ;

/**
 * @return void
 * @param  state int
 * @param  objid int
 * @param  depth int
 * @desc   Controls the location, appearance and active area of the current button 
 */
function swf_addbuttonrecord($state, $objid, $depth) ;

/**
 * @return void
 * @param  r float
 * @param  g float
 * @param  b float
 * @param  a float
 * @desc   Set the global add color to the rgba value specified 
 */
function swf_addcolor($r, $g, $b, $a) ;

/**
 * @return void
 * @desc   Close a Shockwave flash file that was opened with swf_openfile 
 */
function swf_closefile() ;

/**
 * @return void
 * @param  objid int
 * @param  imgname string
 * @desc   Defines a bitmap given the name of a .gif .rgb .jpeg or .fi image. The image will be converted into Flash jpeg or Flash color map format 
 */
function swf_definebitmap($objid, $imgname) ;

/**
 * @return void
 * @param  fontid int
 * @param  name string
 * @desc   Defines a font. name specifies the PostScript name of the font to use. This font also becomes the current font.  
 */
function swf_definefont($fontid, $name) ;

/**
 * @return void
 * @param  objid int
 * @param  x1 float
 * @param  y1 float
 * @param  x2 float
 * @param  y2 float
 * @param  width float
 * @desc   Create a line with object id, objid, starting from x1, y1 and going to x2, y2 with width, width 
 */
function swf_defineline($objid, $x1, $y1, $x2, $y2, $width) ;

/**
 * @return void
 * @param  obj_id int
 * @param  coords array
 * @param  npoints int
 * @param  width float
 * @desc   Define a Polygon from an array of x,y coordinates, coords. 
 */
function swf_definepoly($obj_id, $coords, $npoints, $width) ;

/**
 * @return void
 * @param  objid int
 * @param  x1 float
 * @param  y1 float
 * @param  x2 float
 * @param  y2 float
 * @param  width float
 * @desc   Create a rectangle with object id, objid, the upper lefthand coordinate is given by x1, y1 the bottom right coordinate is x2, y2 and with is the width of the line 
 */
function swf_definerect($objid, $x1, $y1, $x2, $y2, $width) ;

/**
 * @return void
 * @param  objid int
 * @param  str string
 * @param  docCenter int
 * @desc   defines a text string using the current font, current fontsize and current font slant. If docCenter is 1, the word is centered in x 
 */
function swf_definetext($objid, $str, $docCenter) ;

/**
 * @return void
 * @desc   Complete the definition of the current button 
 */
function swf_endbutton() ;

/**
 * @return void
 * @desc   Ends the list of actions to perform for the current frame 
 */
function swf_enddoaction() ;

/**
 * @return void
 * @desc   Completes the definition of the current shape 
 */
function swf_endshape() ;

/**
 * @return void
 * @desc   End the current symbol 
 */
function swf_endsymbol() ;

/**
 * @return void
 * @param  height float
 * @desc   Sets the current font's height to the value specified by height 
 */
function swf_fontsize($height) ;

/**
 * @return void
 * @param  slant float
 * @desc   Set the current font slant to the angle indicated by slant 
 */
function swf_fontslant($slant) ;

/**
 * @return void
 * @param  track
 * @desc   Sets the current font tracking to the specified value, track 
 */
function swf_fonttracking($track) ;

/**
 * @return array
 * @param  bitmapid int
 * @desc   Returns an array of information about a bitmap specified by bitmapid 
 */
function swf_getbitmapinfo($bitmapid) ;

/**
 * @return array
 * @desc   Get information about the current font 
 */
function swf_getfontinfo() ;

/**
 * @return int
 * @desc   Returns the current frame 
 */
function swf_getframe() ;

/**
 * @return void
 * @param  name string
 * @desc   Adds string name to the current frame 
 */
function swf_labelframe($name) ;

/**
 * @return void
 * @param  vx float
 * @param  vy float
 * @param  vz float
 * @param  px float
 * @param  py float
 * @param  pz float
 * @param  twist float
 * @desc   Defines a viewing transformation by giving the view position vx, vy, vz, and the coordinates of a reference point in the scene at px, py, pz. Twist controls a rotation along the viewer's z axis 
 */
function swf_lookat($vx, $vy, $vz, $px, $py, $pz, $twist) ;

/**
 * @return void
 * @param  depth int
 * @param  how int
 * @desc   Updates the position and/or color of the object 
 */
function swf_modifyobject($depth, $how) ;

/**
 * @return void
 * @param  r float
 * @param  g float
 * @param  b float
 * @param  a float
 * @desc   Sets the global multiply color to the rgba value specified 
 */
function swf_mulcolor($r, $g, $b, $a) ;

/**
 * @return int
 * @desc   Returns a free objid 
 */
function swf_nextid() ;

/**
 * @return void
 * @param  transitions int
 * @desc   Describes a transition used to trigger an action list 
 */
function swf_oncondition($transitions) ;

/**
 * @return void
 * @param  name string
 * @param  xsize float
 * @param  ysize float
 * @param  framerate float
 * @param  r float
 * @param  g float
 * @param  b float
 * @desc   Create a Shockwave Flash file given by name, with width xsize and height ysize at a frame rate of framerate and a background color specified by a red value of r, green value of g and a blue value of b 
 */
function swf_openfile($name, $xsize, $ysize, $framerate, $r, $g, $b) ;

/**
 * @return void
 * @param  xmin float
 * @param  xmax float
 * @param  ymin float
 * @param  ymax float
 * @param  zmin float
 * @param  zmax float
 * @desc   Defines an orthographic mapping of user coordinates onto the current viewport 
 */
function swf_ortho($xmin, $xmax, $ymin, $ymax, $zmin, $zmax) ;

/**
 * @return void
 * @param  xmin float
 * @param  xmax float
 * @param  ymin float
 * @param  ymax float
 * @desc   Defines a 2-D orthographic mapping of user coordinates onto the current viewport 
 */
function swf_ortho2($xmin, $xmax, $ymin, $ymax) ;

/**
 * @return void
 * @param  fovy float
 * @param  aspect float
 * @param  near float
 * @param  far float
 * @desc   Define a perspective projection transformation. 
 */
function swf_perspective($fovy, $aspect, $near, $far) ;

/**
 * @return void
 * @param  objid int
 * @param  depth int
 * @desc   Places the object, objid, in the current frame at depth, depth 
 */
function swf_placeobject($objid, $depth) ;

/**
 * @return void
 * @param  dist float
 * @param  azimuth float
 * @param  incidence float
 * @param  twist float
 * @desc   Defines he viewer's position in polar coordinates 
 */
function swf_polarview($dist, $azimuth, $incidence, $twist) ;

/**
 * @return void
 * @desc   Restore a previous transformation matrix 
 */
function swf_popmatrix() ;

/**
 * @return void
 * @param  doit int
 * @desc   This enables or disables rounding of the translation when objects are places or moved 
 */
function swf_posround($doit) ;

/**
 * @return void
 * @desc   Push the current transformation matrix onto the stack 
 */
function swf_pushmatrix() ;

/**
 * @return void
 * @param  depth int
 * @desc   Removes the object at the specified depth 
 */
function swf_removeobject($depth) ;

/**
 * @return void
 * @param  angle float
 * @param  axis string
 * @desc   Rotate the current transformation by the given angle about x, y, or z axis. The axis may be 'x', 'y', or 'z' 
 */
function swf_rotate($angle, $axis) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @param  z float
 * @desc   Scale the current transformation 
 */
function swf_scale($x, $y, $z) ;

/**
 * @return void
 * @param  fontid int
 * @desc   Sets fontid to the current font 
 */
function swf_setfont($fontid) ;

/**
 * @return void
 * @param  frame_number int
 * @desc   Set the current frame number to the number given by frame_number 
 */
function swf_setframe($frame_number) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @param  r float
 * @param  ang1 float
 * @param  ang2 float
 * @desc   Draws a circular arc from ang1 to ang2. The center of the circle is given by x, and y. r specifies the radius of the arc 
 */
function swf_shapearc($x, $y, $r, $ang1, $ang2) ;

/**
 * @return void
 * @param  x1 float
 * @param  y1 float
 * @param  x2 float
 * @param  y2 float
 * @desc   Draws a quadratic bezier curve starting at the current position using x1, y1 as an off curve control point and using x2, y2 as the end point. The current position is then set to x2, y2. 
 */
function swf_shapecurveto($x1, $y1, $x2, $y2) ;

/**
 * @return void
 * @param  x1 float
 * @param  y1 float
 * @param  x2 float
 * @param  y2 float
 * @param  x3 float
 * @param  y3 float
 * @desc   Draws a cubic bezier curve starting at the current position using x1, y1 and x2, y2 as off curve control points and using x3,y3 as the end point.  The current position is then sent to x3, y3 
 */
function swf_shapecurveto3($x1, $y1, $x2, $y2, $x3, $y3) ;

/**
 * @return void
 * @param  bitmapid int
 * @desc   Sets the current fill mode to clipped bitmap fill. Pixels from the previously defined bitmapid will be used to fill areas 
 */
function swf_shapefillbitmapclip($bitmapid) ;

/**
 * @return void
 * @param  bitmapid int
 * @desc   Sets the current fill mode to tiled bitmap fill. Pixels from the previously defined bitmapid will be used to fill areas 
 */
function swf_shapefillbitmaptile($bitmapid) ;

/**
 * @return void
 * @desc   Turns off filling 
 */
function swf_shapefilloff() ;

/**
 * @return void
 * @param  r float
 * @param  g float
 * @param  b float
 * @param  a float
 * @desc   Sets the current fill style to a solid fill with the specified rgba color 
 */
function swf_shapefillsolid($r, $g, $b, $a) ;

/**
 * @return void
 * @param  r float
 * @param  g float
 * @param  b float
 * @param  a float
 * @param  width float
 * @desc   Create a line with color defined by rgba, and a width of width 
 */
function swf_shapelinesolid($r, $g, $b, $a, $width) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @desc   Draws a line from the current position to x,y, the current position is then set to x,y 
 */
function swf_shapelineto($x, $y) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @desc   swf_shapemoveto moves the current position to the given x,y. 
 */
function swf_shapemoveto($x, $y) ;

/**
 * @return void
 * @desc   Finish the current frame 
 */
function swf_showframe() ;

/**
 * @return void
 * @param  objid int
 * @param  type int
 * @desc   Start a button with an object id, objid and a type of either TYPE_MENUBUTTON or TYPE_PUSHBUTTON 
 */
function swf_startbutton($objid, $type) ;

/**
 * @return void
 * @desc   Starts the description of an action list for the current frame 
 */
function swf_startdoaction() ;

/**
 * @return void
 * @param  objid int
 * @desc   Initialize a new shape with object id, objid 
 */
function swf_startshape($objid) ;

/**
 * @return void
 * @param  objid int
 * @desc   Create a new symbol with object id, objid 
 */
function swf_startsymbol($objid) ;

/**
 * @return void
 * @param  str string
 * @desc   Calculates the width of a string, str, using the current fontsize & current font 
 */
function swf_textwidth($str) ;

/**
 * @return void
 * @param  x float
 * @param  y float
 * @param  z float
 * @desc   Translate the current transformation 
 */
function swf_translate($x, $y, $z) ;

/**
 * @return void
 * @param  xmin float
 * @param  xmax float
 * @param  ymin float
 * @param  ymax float
 * @desc   Selects an area on the drawing surface for future drawing 
 */
function swf_viewport($xmin, $xmax, $ymin, $ymax) ;

/**
 * @return object
 * @param  string
 * @desc   Returns a new SWFAction object, compiling the given script 
 */
function swfaction($string) ;


/**
 * @return class
 * @param  file mixed
 * @param  maskfile mixed[optional]
 * @desc   Returns a new SWFBitmap object from jpg (with optional mask) or dbl file 
 */
function swfbitmap($file, $maskfile = null) ;




/**
 * @return object
 * @desc   Returns a new SWFButton object 
 */
function swfbutton() ;




/**
 * @return int
 * @param  str string
 * @desc   Returns the action flag for keyPress(char) 
 */
function swfbutton_keypress($str) ;























/**
 * @return class
 * @desc   Returns a new SWFFill object 
 */
function swffill() ;







/**
 * @return object
 * @param  filename string
 * @desc   Returns a new SWFFont object from given file 
 */
function swffont($filename) ;






/**
 * @return class
 * @desc   Returns a new SWFGradient object 
 */
function swfgradient() ;



/**
 * @return object
 * @desc   Returns a new SWFMorph object 
 */
function swfmorph() ;




/**
 * @return object
 * @param  version int
 * @desc   Creates swfmovie object according to the passed version 
 */
function swfmovie($version) ;



/**
 * @return void
 * @param  SWFBlock object
 * @desc   
 */
function swfmovie_labelframe($SWFBlock) ;

/**
 * @return void
 * @desc   
 */
function swfmovie_nextframe() ;









/**
 * @return object
 * @desc   Returns a new SWFShape object 
 */
function swfshape() ;















/**
 * @return class
 * @desc   Returns a new SWFSprite object 
 */
function swfsprite() ;







/**
 * @return class
 * @desc   Returns new SWFText object 
 */
function swftext() ;












/**
 * @return object
 * @param  flags int[optional]
 * @desc   Returns a new SWFTextField object 
 */
function swftextfield($flags = null) ;














/**
 * @return int
 * @param  link_id int[optional]
 * @desc   Get number of affected rows in last query 
 */
function sybase_affected_rows($link_id = null) ;

/**
 * @return bool
 * @param  link_id int[optional]
 * @desc   Close Sybase connection 
 */
function sybase_close($link_id = null) ;

/**
 * @return int
 * @param  host string[optional]
 * @param  user string[optional]
 * @param  password string[optional]
 * @param  charset string[optional]
 * @param  appname string[optional]
 * @desc   Open Sybase server connection 
 */
function sybase_connect($host = null, $user = null, $password = null, $charset = null, $appname = null) ;

/**
 * @return bool
 * @param  result int
 * @param  offset int
 * @desc   Move internal row pointer 
 */
function sybase_data_seek($result, $offset) ;

/**
 * @return void
 * @param  retry_count int
 * @desc   Sets deadlock retry count 
 */
function sybase_deadlock_retry_count($retry_count) ;

/**
 * @return array
 * @param  result int
 * @desc   Fetch row as array 
 */
function sybase_fetch_array($result) ;

/**
 * @return array
 * @param  result int
 * @desc   Fetch row as array without numberic indices 
 */
function sybase_fetch_assoc($result) ;

/**
 * @return object
 * @param  result int
 * @param  offset int[optional]
 * @desc   Get field information 
 */
function sybase_fetch_field($result, $offset = null) ;

/**
 * @return object
 * @param  result int
 * @param  object mixed[optional]
 * @desc   Fetch row as object 
 */
function sybase_fetch_object($result, $object = null) ;

/**
 * @return array
 * @param  result int
 * @desc   Get row as enumerated array 
 */
function sybase_fetch_row($result) ;

/**
 * @return bool
 * @param  result int
 * @param  offset int
 * @desc   Set field offset 
 */
function sybase_field_seek($result, $offset) ;

/**
 * @return bool
 * @param  result int
 * @desc   Free result memory 
 */
function sybase_free_result($result) ;

/**
 * @return string
 * @desc   Returns the last message from server (over min_message_severity) 
 */
function sybase_get_last_message() ;

/**
 * @return void
 * @param  severity int
 * @desc   Sets minimum client severity 
 */
function sybase_min_client_severity($severity) ;

/**
 * @return void
 * @param  severity int
 * @desc   Sets the minimum error severity 
 */
function sybase_min_error_severity($severity) ;

/**
 * @return void
 * @param  severity int
 * @desc   Sets the minimum message severity 
 */
function sybase_min_message_severity($severity) ;

/**
 * @return void
 * @param  severity int
 * @desc   Sets minimum server severity 
 */
function sybase_min_server_severity($severity) ;

/**
 * @return int
 * @param  result int
 * @desc   Get number of fields in result 
 */
function sybase_num_fields($result) ;

/**
 * @return int
 * @param  result int
 * @desc   Get number of rows in result 
 */
function sybase_num_rows($result) ;

/**
 * @return int
 * @param  host string[optional]
 * @param  user string[optional]
 * @param  password string[optional]
 * @param  charset string[optional]
 * @param  appname string[optional]
 * @desc   Open persistent Sybase connection 
 */
function sybase_pconnect($host = null, $user = null, $password = null, $charset = null, $appname = null) ;

/**
 * @return int
 * @param  query string
 * @param  link_id int[optional]
 * @desc   Send Sybase query 
 */
function sybase_query($query, $link_id = null) ;

/**
 * @return string
 * @param  result int
 * @param  row int
 * @param  field mixed
 * @desc   Get result data 
 */
function sybase_result($result, $row, $field) ;

/**
 * @return bool
 * @param  database string
 * @param  link_id int[optional]
 * @desc   Select Sybase database 
 */
function sybase_select_db($database, $link_id = null) ;

/**
 * @return bool
 * @param  error_func mixed
 * @desc   
 */
function sybase_set_message_handler($error_func) ;

/**
 * @return int
 * @param  query string
 * @param  link_id int[optional]
 * @desc   Send Sybase query 
 */
function sybase_unbuffered_query($query, $link_id = null) ;

/**
 * @return int
 * @param  target string
 * @param  link string
 * @desc   Create a symbolic link 
 */
function symlink($target, $link) ;

/**
 * @return bool
 * @param  priority int
 * @param  message string
 * @desc   Generate a system log message 
 */
function syslog($priority, $message) ;

/**
 * @return int
 * @param  command string
 * @param  return_value int[optional]
 * @desc   Execute an external program and display output 
 */
function system($command, $return_value = null) ;

/**
 * @return string
 * @desc   Returns system ID of notation node 
 */
function system_id() ;

/**
 * @return string
 * @desc   Returns tag name of element node 
 */
function tagname() ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the tangent of the number in radians 
 */
function tan($number) ;

/**
 * @return float
 * @param  number float
 * @desc   Returns the hyperbolic tangent of the number, defined as sinh(number)/cosh(number) 
 */
function tanh($number) ;

/**
 * @return array
 * @desc   Returns target of pi 
 */
function target() ;

/**
 * @return string
 * @param  dir string
 * @param  prefix string
 * @desc   Create a unique filename in a directory 
 */
function tempnam($dir, $prefix) ;

/**
 * @return bool
 * @param  content string
 * @desc   Add string tocontent of a node 
 */
function text_concat($content) ;

/**
 * @return string
 * @param  domain string
 * @desc   Set the textdomain to "domain". Returns the current domain 
 */
function textdomain($domain) ;

/**
 * @return int
 * @desc   Return current UNIX timestamp 
 */
function time() ;

/**
 * @return resource
 * @desc   Create a temporary file that will be deleted automatically after use 
 */
function tmpfile() ;

/**
 * @return array
 * @param  source string
 * @desc   
 */
function token_get_all($source) ;

/**
 * @return string
 * @param  type int
 * @desc   
 */
function token_name($type) ;

/**
 * @return bool
 * @param  filename string
 * @param  time int[optional]
 * @param  atime int[optional]
 * @desc   Set modification time of file 
 */
function touch($filename, $time = null, $atime = null) ;

/**
 * @return void
 * @param  messsage string
 * @param  error_type int[optional]
 * @desc   Generates a user-level error/warning/notice message 
 */
function trigger_error($messsage, $error_type = null) ;

/**
 * @return bool
 * @param  collection object
 * @param  num
 * @desc   Trim num elements from the end of a collection 
 */
function trim($collection, $num) ;

/**
 * @return bool
 * @param  array_arg array
 * @param  cmp_function string
 * @desc   Sort an array with a user-defined comparison function and maintain index association 
 */
function uasort($array_arg, $cmp_function) ;

/**
 * @return string
 * @param  str string
 * @desc   Makes a string's first character uppercase 
 */
function ucfirst($str) ;

/**
 * @return string
 * @param  str string
 * @desc   Uppercase the first character of every word in a string 
 */
function ucwords($str) ;

/**
 * @return int
 * @param  agent int
 * @param  var int
 * @param  val string
 * @desc   Add mnoGoSearch search restrictions 
 */
function udm_add_search_limit($agent, $var, $val) ;

/**
 * @return int
 * @param  dbaddr string
 * @param  dbmode string[optional]
 * @desc   Allocate mnoGoSearch session 
 */
function udm_alloc_agent($dbaddr, $dbmode = null) ;

/**
 * @return int
 * @param  dbaddr array
 * @desc   Allocate mnoGoSearch session 
 */
function udm_alloc_agent_array($dbaddr) ;

/**
 * @return int
 * @desc   Get mnoGoSearch API version 
 */
function udm_api_version() ;

/**
 * @return array
 * @param  agent int
 * @param  category string
 * @desc   Get mnoGoSearch categories list with the same root 
 */
function udm_cat_list($agent, $category) ;

/**
 * @return array
 * @param  agent int
 * @param  category string
 * @desc   Get mnoGoSearch categories path from the root to the given catgory 
 */
function udm_cat_path($agent, $category) ;

/**
 * @return int
 * @param  agent int
 * @param  charset string
 * @desc   Check if the given charset is known to mnogosearch 
 */
function udm_check_charset($agent, $charset) ;

/**
 * @return int
 * @param  agent int
 * @param  link int
 * @param  doc_id string
 * @desc   Open connection to stored  
 */
function udm_check_stored($agent, $link, $doc_id) ;

/**
 * @return int
 * @param  agent int
 * @desc   Clear all mnoGoSearch search restrictions 
 */
function udm_clear_search_limits($agent) ;

/**
 * @return int
 * @param  agent int
 * @param  link int
 * @desc   Open connection to stored  
 */
function udm_close_stored($agent, $link) ;

/**
 * @return int
 * @param  agent int
 * @param  str string
 * @desc   Return CRC32 checksum of gived string 
 */
function udm_crc32($agent, $str) ;

/**
 * @return int
 * @param  agent int
 * @desc   Get mnoGoSearch error number 
 */
function udm_errno($agent) ;

/**
 * @return string
 * @param  agent int
 * @desc   Get mnoGoSearch error message 
 */
function udm_error($agent) ;

/**
 * @return int
 * @param  agent int
 * @param  query string
 * @desc   Perform search 
 */
function udm_find($agent, $query) ;

/**
 * @return int
 * @param  agent int
 * @desc   Free mnoGoSearch session 
 */
function udm_free_agent($agent) ;

/**
 * @return int
 * @param  agent int
 * @desc   Free memory allocated for ispell data 
 */
function udm_free_ispell_data($agent) ;

/**
 * @return int
 * @param  res int
 * @desc   mnoGoSearch free result 
 */
function udm_free_res($res) ;

/**
 * @return int
 * @param  agent int
 * @desc   Get total number of documents in database 
 */
function udm_get_doc_count($agent) ;

/**
 * @return string
 * @param  res int
 * @param  row int
 * @param  field int
 * @desc   Fetch mnoGoSearch result field 
 */
function udm_get_res_field($res, $row, $field) ;

/**
 * @return string
 * @param  res int
 * @param  row int
 * @param  field string
 * @desc   Fetch mnoGoSearch result field 
 */
function udm_get_res_field_ex($res, $row, $field) ;

/**
 * @return string
 * @param  res int
 * @param  param int
 * @desc   Get mnoGoSearch result parameters 
 */
function udm_get_res_param($res, $param) ;

/**
 * @return int
 * @param  agent int
 * @param  str string
 * @desc   Return Hash32 checksum of gived string 
 */
function udm_hash32($agent, $str) ;

/**
 * @return int
 * @param  agent int
 * @param  var int
 * @param  val1 string
 * @param  charset string[optional]
 * @param  val2 string
 * @param  flag int
 * @desc   Load ispell data 
 */
function udm_load_ispell_data($agent, $var, $val1, $charset = null, $val2, $flag) ;

/**
 * @return int
 * @param  agent int
 * @param  res int
 * @param  row int
 * @desc   Perform search 
 */
function udm_make_excerpt($agent, $res, $row) ;

/**
 * @return int
 * @param  agent int
 * @param  storedaddr string
 * @desc   Open connection to stored  
 */
function udm_open_stored($agent, $storedaddr) ;

/**
 * @return int
 * @param  agent int
 * @param  str string
 * @desc   Parses query string, initialises variables and search limits taken from it 
 */
function udm_parse_query_string($agent, $str) ;

/**
 * @return int
 * @param  agent int
 * @param  var int
 * @param  val string
 * @desc   Set mnoGoSearch agent session parameters 
 */
function udm_set_agent_param($agent, $var, $val) ;

/**
 * @return int
 * @param  agent int
 * @param  var string
 * @param  val string
 * @desc   Set mnoGoSearch agent session parameters extended 
 */
function udm_set_agent_param_ex($agent, $var, $val) ;

/**
 * @return bool
 * @param  array_arg array
 * @param  cmp_function string
 * @desc   Sort an array by keys using a user-defined comparison function 
 */
function uksort($array_arg, $cmp_function) ;

/**
 * @return int
 * @param  mask int[optional]
 * @desc   Return or change the umask 
 */
function umask($mask = null) ;

/**
 * @return string
 * @param  prefix string
 * @param  more_entropy bool[optional]
 * @desc   Generates a unique ID 
 */
function uniqid($prefix, $more_entropy = null) ;

/**
 * @return int
 * @param  timestamp int[optional]
 * @desc   Convert UNIX timestamp to Julian Day 
 */
function unixtojd($timestamp = null) ;

/**
 * @return void
 * @param  node object[optional]
 * @desc   Deletes the node from tree, but not from memory
 */
function unlink($node = null) ;

/**
 * @return void
 * @param  node object[optional]
 * @desc   Deletes the node from tree, but not from memory
 */
function unlink_node($node = null) ;

/**
 * @return array
 * @param  format string
 * @param  input string
 * @desc   Unpack binary string into named array elements according to format argument 
 */
function unpack($format, $input) ;

/**
 * @return void
 * @param  function_name string
 * @desc   Unregisters a tick callback function 
 */
function unregister_tick_function($function_name) ;

/**
 * @return mixed
 * @param  variable_representation string
 * @desc   Takes a string representation of variable and recreates it 
 */
function unserialize($variable_representation) ;

/**
 * @return string
 * @param  str string
 * @desc   Decodes URL-encoded string 
 */
function urldecode($str) ;

/**
 * @return string
 * @param  str string
 * @desc   URL-encodes string 
 */
function urlencode($str) ;

/**
 * @return void
 * @param  messsage string
 * @param  error_type int[optional]
 * @desc   Generates a user-level error/warning/notice message 
 */
function user_error($messsage, $error_type = null) ;

/**
 * @return void
 * @param  micro_seconds int
 * @desc   Delay for a given number of micro seconds 
 */
function usleep($micro_seconds) ;

/**
 * @return bool
 * @param  array_arg array
 * @param  cmp_function string
 * @desc   Sort an array by values using a user-defined comparison function 
 */
function usort($array_arg, $cmp_function) ;

/**
 * @return string
 * @param  data string
 * @desc   Converts a UTF-8 encoded string to ISO-8859-1 
 */
function utf8_decode($data) ;

/**
 * @return string
 * @param  data string
 * @desc   Encodes an ISO-8859-1 string to UTF-8 
 */
function utf8_encode($data) ;

/**
 * @return bool
 * @param  &error array
 * @desc   Validates a DomDocument according to his DTD
 */
function validate(&$error) ;

/**
 * @return array
 * @desc   Returns list of attribute names 
 */
function value() ;

/**
 * @return void
 * @param  var mixed
 * @desc   Dumps a string representation of variable to output 
 */
function var_dump($var) ;

/**
 * @return mixed
 * @param  var mixed
 * @param  return bool[optional]
 * @desc   Outputs or returns a string representation of a variable 
 */
function var_export($var, $return = null) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function velocis_autocommit($index) ;

/**
 * @return bool
 * @param  id int
 * @desc   
 */
function velocis_close($id) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function velocis_commit($index) ;

/**
 * @return int
 * @param  server string
 * @param  user string
 * @param  pass string
 * @desc   
 */
function velocis_connect($server, $user, $pass) ;

/**
 * @return int
 * @param  index int
 * @param  exec_str string
 * @desc   
 */
function velocis_exec($index, $exec_str) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function velocis_fetch($index) ;

/**
 * @return string
 * @param  index int
 * @param  col int
 * @desc   
 */
function velocis_fieldname($index, $col) ;

/**
 * @return int
 * @param  index int
 * @desc   
 */
function velocis_fieldnum($index) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function velocis_freeresult($index) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function velocis_off_autocommit($index) ;

/**
 * @return mixed
 * @param  index int
 * @param  col int
 * @desc   
 */
function velocis_result($index, $col) ;

/**
 * @return bool
 * @param  index int
 * @desc   
 */
function velocis_rollback($index) ;

/**
 * @return int
 * @param  ver1 string
 * @param  ver2 string
 * @param  oper string[optional]
 * @desc   Compares two "PHP-standardized" version number strings 
 */
function version_compare($ver1, $ver2, $oper = null) ;

/**
 * @return bool
 * @param  uri string
 * @desc   Perform an NSAPI sub-request 
 */
function virtual($uri) ;

/**
 * @return int
 * @param  format string
 * @param  args array
 * @desc   Output a formatted string 
 */
function vprintf($format, $args) ;

/**
 * @return string
 * @param  format string
 * @param  args array
 * @desc   Return a formatted string 
 */
function vsprintf($format, $args) ;

/**
 * @return int
 * @param  window resource
 * @param  attrs int
 * @desc   Turns off attributes for a window 
 */
function wattroff($window, $attrs) ;

/**
 * @return int
 * @param  window resource
 * @param  attrs int
 * @desc   Turns on attributes for a window 
 */
function wattron($window, $attrs) ;

/**
 * @return int
 * @param  window resource
 * @param  attrs int
 * @desc   Set the attributes for a window 
 */
function wattrset($window, $attrs) ;

/**
 * @return int
 * @param  packet_id int
 * @param  var_names mixed
 * @vararg ... mixed
 * @desc   Serializes given variables and adds them to packet given by packet_id 
 */
function wddx_add_vars($packet_id, $var_names) ;

/**
 * @return mixed
 * @param  packet string
 * @desc   Deserializes given packet and returns a PHP value 
 */
function wddx_deserialize($packet) ;

/**
 * @return string
 * @param  packet_id int
 * @desc   Ends specified WDDX packet and returns the string containing the packet 
 */
function wddx_packet_end($packet_id) ;

/**
 * @return int
 * @param  comment string[optional]
 * @desc   Starts a WDDX packet with optional comment and returns the packet id 
 */
function wddx_packet_start($comment = null) ;

/**
 * @return string
 * @param  var mixed
 * @param  comment string[optional]
 * @desc   Creates a new packet and serializes the given value 
 */
function wddx_serialize_value($var, $comment = null) ;

/**
 * @return string
 * @param  var_name mixed
 * @vararg ... mixed
 * @desc   Creates a new packet and serializes given variables into a struct 
 */
function wddx_serialize_vars($var_name) ;

/**
 * @return string
 * @param  str string
 * @param  width int[optional]
 * @param  break string[optional]
 * @param  cut int[optional]
 * @desc   Wraps buffer to selected number of characters using string break char 
 */
function wordwrap($str, $width = null, $break = null, $cut = null) ;

/**
 * @return bool
 * @param  stmt int
 * @param  loc int
 * @param  var string
 * @desc   Return the row count of an OCI statement 
 */
function writetemporary($stmt, $loc, $var) ;

/**
 * @return bool
 * @param  lob object
 * @param  filename string[optional]
 * @param  start int[optional]
 * @param  length int[optional]
 * @desc   Writes a large object into a file 
 */
function writetofile($lob, $filename = null, $start = null, $length = null) ;

/**
 * @return int
 * @param  window resource
 * @desc   End standout mode for a window 
 */
function wstandend($window) ;

/**
 * @return int
 * @param  window resource
 * @desc   Enter standout mode for a window 
 */
function wstandout($window) ;

/**
 * @return int
 * @desc   Substitutues xincludes in a DomDocument 
 */
function xinclude() ;

/**
 * @return string
 * @param  code int
 * @desc   Get XML parser error string 
 */
function xml_error_string($code) ;

/**
 * @return int
 * @param  parser resource
 * @desc   Get current byte index for an XML parser 
 */
function xml_get_current_byte_index($parser) ;

/**
 * @return int
 * @param  parser resource
 * @desc   Get current column number for an XML parser 
 */
function xml_get_current_column_number($parser) ;

/**
 * @return int
 * @param  parser resource
 * @desc   Get current line number for an XML parser 
 */
function xml_get_current_line_number($parser) ;

/**
 * @return int
 * @param  parser resource
 * @desc   Get XML parser error code 
 */
function xml_get_error_code($parser) ;

/**
 * @return int
 * @param  parser resource
 * @param  data string
 * @param  isFinal int[optional]
 * @desc   Start parsing an XML document 
 */
function xml_parse($parser, $data, $isFinal = null) ;

/**
 * @return int
 * @param  parser resource
 * @param  data string
 * @param  &struct array
 * @param  &index array
 * @desc   Parsing a XML document 
 */
function xml_parse_into_struct($parser, $data, &$struct, &$index) ;

/**
 * @return resource
 * @param  encoding string[optional]
 * @desc   Create an XML parser 
 */
function xml_parser_create($encoding = null) ;

/**
 * @return resource
 * @param  encoding string[optional]
 * @param  sep string[optional]
 * @desc   Create an XML parser 
 */
function xml_parser_create_ns($encoding = null, $sep = null) ;

/**
 * @return int
 * @param  parser resource
 * @desc   Free an XML parser 
 */
function xml_parser_free($parser) ;

/**
 * @return int
 * @param  parser resource
 * @param  option int
 * @desc   Get options from an XML parser 
 */
function xml_parser_get_option($parser, $option) ;

/**
 * @return int
 * @param  parser resource
 * @param  option int
 * @param  value mixed
 * @desc   Set options in an XML parser 
 */
function xml_parser_set_option($parser, $option, $value) ;

/**
 * @return int
 * @param  parser resource
 * @param  hdl string
 * @desc   Set up character data handler 
 */
function xml_set_character_data_handler($parser, $hdl) ;

/**
 * @return int
 * @param  parser resource
 * @param  hdl string
 * @desc   Set up default handler 
 */
function xml_set_default_handler($parser, $hdl) ;

/**
 * @return int
 * @param  parser resource
 * @param  shdl string
 * @param  ehdl string
 * @desc   Set up start and end element handlers 
 */
function xml_set_element_handler($parser, $shdl, $ehdl) ;

/**
 * @return int
 * @param  parser resource
 * @param  hdl string
 * @desc   Set up character data handler 
 */
function xml_set_end_namespace_decl_handler($parser, $hdl) ;

/**
 * @return int
 * @param  parser resource
 * @param  hdl string
 * @desc   Set up external entity reference handler 
 */
function xml_set_external_entity_ref_handler($parser, $hdl) ;

/**
 * @return int
 * @param  parser resource
 * @param  hdl string
 * @desc   Set up notation declaration handler 
 */
function xml_set_notation_decl_handler($parser, $hdl) ;

/**
 * @return int
 * @param  parser resource
 * @param  &obj object
 * @desc   Set up object which should be used for callbacks 
 */
function xml_set_object($parser, &$obj) ;

/**
 * @return int
 * @param  parser resource
 * @param  hdl string
 * @desc   Set up processing instruction (PI) handler 
 */
function xml_set_processing_instruction_handler($parser, $hdl) ;

/**
 * @return int
 * @param  parser resource
 * @param  hdl string
 * @desc   Set up character data handler 
 */
function xml_set_start_namespace_decl_handler($parser, $hdl) ;

/**
 * @return int
 * @param  parser resource
 * @param  hdl string
 * @desc   Set up unparsed entity declaration handler 
 */
function xml_set_unparsed_entity_decl_handler($parser, $hdl) ;


/**
 * @return object
 * @param  filename string
 * @param  mode int
 * @param  error array
 * @desc   Creates DOM object of XML document in file 
 */
function xmldocfile($filename, $mode, $error) ;

/**
 * @return array
 * @param  xml string
 * @param  encoding string[optional]
 * @desc   Decodes XML into native PHP types 
 */
function xmlrpc_decode($xml, $encoding = null) ;

/**
 * @return array
 * @param  xml string
 * @param  method string&
 * @param  encoding string[optional]
 * @desc   Decodes XML into native PHP types 
 */
function xmlrpc_decode_request($xml, $method, $encoding = null) ;

/**
 * @return string
 * @param  value mixed
 * @desc   Generates XML for a PHP value 
 */
function xmlrpc_encode($value) ;

/**
 * @return string
 * @param  method string
 * @param  params mixed
 * @desc   Generates XML for a method request 
 */
function xmlrpc_encode_request($method, $params) ;

/**
 * @return string
 * @param  value mixed
 * @desc   Gets xmlrpc type for a PHP value. Especially useful for base64 and datetime strings 
 */
function xmlrpc_get_type($value) ;

/**
 * @return bool
 * @param  array
 * @desc   Determines if an array value represents an XMLRPC fault. 
 */
function xmlrpc_is_fault($array) ;

/**
 * @return array
 * @param  xml string
 * @desc   Decodes XML into a list of method descriptions 
 */
function xmlrpc_parse_method_descriptions($xml) ;

/**
 * @return int
 * @param  server handle
 * @param  desc array
 * @desc   Adds introspection documentation  
 */
function xmlrpc_server_add_introspection_data($server, $desc) ;

/**
 * @return mixed
 * @param  server handle
 * @param  xml string
 * @param  user_data mixed
 * @param  output_options array[optional]
 * @desc   Parses XML requests and call methods 
 */
function xmlrpc_server_call_method($server, $xml, $user_data, $output_options = null) ;

/**
 * @return handle
 * @desc   Creates an xmlrpc server 
 */
function xmlrpc_server_create() ;

/**
 * @return int
 * @param  server handle
 * @desc   Destroys server resources 
 */
function xmlrpc_server_destroy($server) ;

/**
 * @return bool
 * @param  server handle
 * @param  function string
 * @desc   Register a PHP function to generate documentation 
 */
function xmlrpc_server_register_introspection_callback($server, $function) ;

/**
 * @return bool
 * @param  server handle
 * @param  method_name string
 * @param  function string
 * @desc   Register a PHP function to handle method matching method_name 
 */
function xmlrpc_server_register_method($server, $method_name, $function) ;

/**
 * @return bool
 * @param  value string
 * @param  type string
 * @desc   Sets xmlrpc type, base64 or datetime, for a PHP string value 
 */
function xmlrpc_set_type($value, $type) ;

/**
 * @return object
 * @param  xmltree string
 * @desc   Creates a tree of PHP objects from an XML document 
 */
function xmltree($xmltree) ;






/**
 * @return int
 * @param  xpathctx_handle int[optional]
 * @param  str string
 * @desc   Evaluates the XPtr Location Path in the given string 
 */
function xptr_eval($xpathctx_handle = null, $str) ;


/**
 * @return string
 * @desc   Returns the information on the compilation settings of the backend 
 */
function xslt_backend_info() ;

/**
 * @return string
 * @desc   Returns the name of the Backend (here "Sablotron")
 */
function xslt_backend_name() ;

/**
 * @return string
 * @desc   Returns the version number of Sablotron (if available) 
 */
function xslt_backend_version() ;

/**
 * @return resource
 * @desc   Create a new XSLT processor 
 */
function xslt_create() ;

/**
 * @return int
 * @param  processor resource
 * @desc   Error number 
 */
function xslt_errno($processor) ;

/**
 * @return string
 * @param  processor resource
 * @desc   Error string 
 */
function xslt_error($processor) ;

/**
 * @return void
 * @param  processor resource
 * @desc   Free the xslt processor up 
 */
function xslt_free($processor) ;

/**
 * @return int
 * @param  processor resource
 * @desc   Get options on a given xsl processor 
 */
function xslt_getopt($processor) ;

/**
 * @return string
 * @param  processor resource
 * @param  xml string
 * @param  xslt string
 * @param  result mixed
 * @param  args array
 * @param  params array
 * @desc   Perform the xslt transformation 
 */
function xslt_process($processor, $xml, $xslt, $result, $args, $params) ;

/**
 * @return void
 * @param  processor resource
 * @param  base string
 * @desc   Sets the base URI for all XSLT transformations 
 */
function xslt_set_base($processor, $base) ;

/**
 * @return void
 * @param  processor resource
 * @param  encoding string
 * @desc   Set the output encoding for the current stylesheet 
 */
function xslt_set_encoding($processor, $encoding) ;

/**
 * @return void
 * @param  processor resource
 * @param  error_func mixed
 * @desc   Set the error handler, to be called when an XSLT error happens 
 */
function xslt_set_error_handler($processor, $error_func) ;

/**
 * @return void
 * @param  processor resource
 * @param  logfile string
 * @desc   Set the log file to write the errors to (defaults to stderr) 
 */
function xslt_set_log($processor, $logfile) ;

/**
 * @return int
 * @param  parser resource
 * @param  obj object
 * @desc   sets the object in which to resolve callback functions 
 */
function xslt_set_object($parser, $obj) ;

/**
 * @return void
 * @param  processor resource
 * @param  handlers array
 * @desc   Set the SAX handlers to be called when the XML document gets processed 
 */
function xslt_set_sax_handlers($processor, $handlers) ;

/**
 * @return void
 * @param  processor resource
 * @param  handlers array
 * @desc   Set the scheme handlers for the XSLT processor 
 */
function xslt_set_scheme_handlers($processor, $handlers) ;

/**
 * @return int
 * @param  processor resource
 * @param  newmask int
 * @desc   Set options on a given xsl processor 
 */
function xslt_setopt($processor, $newmask) ;

/**
 * @return string
 * @param  id int
 * @desc   Return additional info for last error (empty string if none) 
 */
function yaz_addinfo($id) ;

/**
 * @return int
 * @param  id int
 * @param  package array
 * @desc   Configure CCL package 
 */
function yaz_ccl_conf($id, $package) ;

/**
 * @return int
 * @param  id int
 * @param  query string
 * @param  res array
 * @desc   Parse a CCL query 
 */
function yaz_ccl_parse($id, $query, $res) ;

/**
 * @return int
 * @param  id int
 * @desc   Destory and close target 
 */
function yaz_close($id) ;

/**
 * @return int
 * @param  zurl_ string
 * @desc   Create target with given zurl. Returns positive id if successful. 
 */
function yaz_connect($zurl_) ;

/**
 * @return int
 * @param  id int
 * @param  databases string
 * @desc   Specify the databases within a session 
 */
function yaz_database ($id, $databases) ;

/**
 * @return int
 * @param  id int
 * @param  elementsetname string
 * @desc   Set Element-Set-Name for retrieval 
 */
function yaz_element($id, $elementsetname) ;

/**
 * @return int
 * @param  id int
 * @desc   Return last error number (>0 for bib-1 diagnostic, <0 for other error, 0 for no error 
 */
function yaz_errno($id) ;

/**
 * @return string
 * @param  id int
 * @desc   Return last error message 
 */
function yaz_error($id) ;

/**
 * @return int
 * @param  id int
 * @desc   Inspects Extended Services Result 
 */
function yaz_es_result($id) ;

/**
 * @return int
 * @param  id int
 * @desc   Return number of hits (result count) for last search 
 */
function yaz_hits($id) ;

/**
 * @return int
 * @param  id int
 * @param  package array
 * @desc   Sends Item Order request 
 */
function yaz_itemorder($id, $package) ;

/**
 * @return int
 * @param  id int
 * @desc   Retrieve records 
 */
function yaz_present($id) ;

/**
 * @return int
 * @param  id int
 * @param  start int
 * @param  number int
 * @desc   Set result set start point and number of records to request 
 */
function yaz_range($id, $start, $number) ;

/**
 * @return string
 * @param  id int
 * @param  pos int
 * @param  type string
 * @desc   Return record information at given result set position 
 */
function yaz_record($id, $pos, $type) ;

/**
 * @return int
 * @param  id int
 * @param  type
 * @param  query
 * @param  flags[optional]
 * @desc   Sends Scan Request 
 */
function yaz_scan($id, $type, $query, $flags = null) ;

/**
 * @return int
 * @param  id int
 * @param  options array
 * @desc   Inspects Scan Result 
 */
function yaz_scan_result($id, $options) ;

/**
 * @return int
 * @param  id int
 * @param  schema string
 * @desc   Set Schema for retrieval 
 */
function yaz_schema($id, $schema) ;

/**
 * @return int
 * @param  id int
 * @param  type string
 * @param  query string
 * @desc   Specify query of type for search - returns true if successful 
 */
function yaz_search($id, $type, $query) ;

/**
 * @return int
 * @param  id int
 * @param  sortspec string
 * @desc   Set result set sorting criteria 
 */
function yaz_sort($id, $sortspec) ;

/**
 * @return int
 * @param  id int
 * @param  syntax string
 * @desc   Set record syntax for retrieval 
 */
function yaz_syntax($id, $syntax) ;

/**
 * @return int
 * @param  options array[optional]
 * @desc   Process events. 
 */
function yaz_wait($options = null) ;

/**
 * @return void
 * @param  domain string
 * @param  map string
 * @param  callback string
 * @desc   Traverse the map and call a function on each entry 
 */
function yp_all($domain, $map, $callback) ;

/**
 * @return array
 * @param  domain string
 * @param  map string
 * @desc   Return an array containing the entire map 
 */
function yp_cat($domain, $map) ;

/**
 * @return string
 * @param  errorcode int
 * @desc   Returns the corresponding error string for the given error code 
 */
function yp_err_string($errorcode) ;

/**
 * @return int
 * @desc   Returns the error code from the last call or 0 if no error occured 
 */
function yp_errno() ;

/**
 * @return array
 * @param  domain string
 * @param  map string
 * @desc   Returns the first key as array with $var[$key] and the the line as the value 
 */
function yp_first($domain, $map) ;

/**
 * @return string
 * @desc   Returns the domain or false 
 */
function yp_get_default_domain() ;

/**
 * @return string
 * @param  domain string
 * @param  map string
 * @desc   Returns the machine name of the master 
 */
function yp_master($domain, $map) ;

/**
 * @return string
 * @param  domain string
 * @param  map string
 * @param  key string
 * @desc   Returns the matched line or false 
 */
function yp_match($domain, $map, $key) ;

/**
 * @return array
 * @param  domain string
 * @param  map string
 * @param  key string
 * @desc   Returns an array with $var[$key] and the the line as the value 
 */
function yp_next($domain, $map, $key) ;

/**
 * @return int
 * @param  domain string
 * @param  map string
 * @desc   Returns the order number or false 
 */
function yp_order($domain, $map) ;

/**
 * @return string
 * @desc   Return the special ID used to request the Zend logo in phpinfo screens
 */
function zend_logo_guid() ;

/**
 * @return string
 * @desc   Get the version of the Zend Engine 
 */
function zend_version() ;

/**
 * @return void
 * @param  zip resource
 * @desc   Close a Zip archive 
 */
function zip_close($zip) ;

/**
 * @return void
 * @param  zip_ent resource
 * @desc   Close a zip entry 
 */
function zip_entry_close($zip_ent) ;

/**
 * @return int
 * @param  zip_entry resource
 * @desc   Return the compressed size of a ZZip entry 
 */
function zip_entry_compressedsize($zip_entry) ;

/**
 * @return string
 * @param  zip_entry resource
 * @desc   Return a string containing the compression method used on a particular entry 
 */
function zip_entry_compressionmethod($zip_entry) ;

/**
 * @return int
 * @param  zip_entry resource
 * @desc   Return the actual filesize of a ZZip entry 
 */
function zip_entry_filesize($zip_entry) ;

/**
 * @return string
 * @param  zip_entry resource
 * @desc   Return the name given a ZZip entry 
 */
function zip_entry_name($zip_entry) ;

/**
 * @return bool
 * @param  zip_dp resource
 * @param  zip_entry resource
 * @param  mode string
 * @desc   Open a Zip File, pointed by the resource entry 
 */
function zip_entry_open($zip_dp, $zip_entry, $mode) ;

/**
 * @return string
 * @param  zip_ent resource
 * @desc   Read X bytes from an opened zip entry 
 */
function zip_entry_read($zip_ent) ;

/**
 * @return resource
 * @param  filename string
 * @desc   Open a new zip archive for reading 
 */
function zip_open($filename) ;

/**
 * @return resource
 * @param  zip resource
 * @desc   Returns the next file in the archive 
 */
function zip_read($zip) ;

?>
