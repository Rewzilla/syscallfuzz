<?php

// pulls a list of system calls from the URL below
// formats them into C arrays to be pasted into the tool

$syscalls = file_get_contents("https://raw.githubusercontent.com/gregose/syscall-table/master/www/syscalls-2.6.35.4.js");
$syscalls = json_decode($syscalls, true);

$syscalls = $syscalls["aaData"];

$newarr = array();

foreach($syscalls as $syscall) {

	$newarr[] = array(
		"number" => $syscall[0],
		"name" => $syscall[1],
		"eax" => empty($syscall[0]) ? "empty" : $syscall[0],
		"ebx" => empty($syscall[4]) ? "empty" : "set", // $syscall[4]["type"],
		"ecx" => empty($syscall[5]) ? "empty" : "set", // $syscall[5]["type"],
		"edx" => empty($syscall[6]) ? "empty" : "set", // $syscall[6]["type"],
		"esi" => empty($syscall[7]) ? "empty" : "set", // $syscall[7]["type"],
		"edi" => empty($syscall[8]) ? "empty" : "set", // $syscall[8]["type"],
	);
}

$ref = array(
	3 => "eax",
	4 => "ebx",
	5 => "ecx",
	6 => "edx",
	7 => "esi",
	8 => "edi",
);

$simple = array();

foreach($newarr as $item) {

	$paramcount = 0;
	for($i=3; $i<8; $i++) {
		if($item[$ref[$i]] != "empty")
			$paramcount++;
	}

	$tmp = array(
		"name" => $item["name"],
		"number" => $item["number"],
		"params" => $paramcount,
	);

	$simple[] = $tmp;

}

$sorted = array(
	array(),
	array(),
	array(),
	array(),
	array(),
	array(),
);

foreach($simple as $item) {

	$sorted[$item["params"]][] = array(
		"name" => $item["name"],
		"number" => $item["number"],
	);

}

for($i=0; $i<=5; $i++) {

	echo "int syscalls_".$i."[] = {\n";
	foreach($sorted[$i] as $syscall) {
		echo "\t".$syscall["number"].",\t// ".$syscall["name"]."\n"; 
	}
	echo "};\n";
	echo "int syscalls_".$i."_len = ".count($sorted[$i]).";\n\n";

}