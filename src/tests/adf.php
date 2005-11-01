<?php

class test2
{
 function cos($angle)
 {

  exit;

 }
 
    function logMessage($message, $file, $line, $priority = LOG_INFO)
    {
        static $logcheck;
        global $conf;

        if (!$conf['log']['enabled']) {
            return;
        }

        if ($priority > $conf['log']['priority']) {
            return;
        }

        if (!isset($logcheck)) {
            // Try to make sure that we can log messages somehow.
            if (!array_key_exists('log', $conf) ||
                !array_key_exists('type', $conf['log']) ||
                !array_key_exists('name', $conf['log']) ||
                !array_key_exists('ident', $conf['log']) ||
                !array_key_exists('params', $conf['log'])) {
                Horde::fatal(new PEAR_Error('Horde is not correctly configured to log error messages. You must configure at least a text file log in horde/config/horde.php.'), __FILE__, __LINE__, false);
            }
            $logcheck = true;
        }

        include_once 'Log.php';
        $logger = &Log::singleton($conf['log']['type'], $conf['log']['name'],
                                  $conf['log']['ident'], $conf['log']['params']);

        if (!$logger) {
            Horde::fatal(new PEAR_Error('An error has occurred. Furthermore, Horde encountered an error attempting to log this error. Please check your Horde logging configuration in horde/config/horde.php.'), __FILE__, __LINE__, false);
        }

        if (PEAR::isError($message)) {
            $userinfo = $message->getUserInfo();
            $message = $message->getMessage();
            if (!empty($userinfo)) {
                if (is_array($userinfo)) {
                    $userinfo = implode(', ', $userinfo);
                }
                $message .= ': ' . $userinfo;
            }
        }

        $app = array_key_exists('registry', $GLOBALS) ? $GLOBALS['registry']->getApp() : 'horde';
        $message = '[' . $app . '] ' . $message . ' [on line ' . $line . ' of "' . $file . '"]';

        /* Make sure to log in the system's locale. */
        $locale = setlocale(LC_TIME, 0);
        setlocale(LC_TIME, 'C');

        $logger->log($message, $priority);

        /* Restore original locale. */
        setlocale(LC_TIME, $locale);

        return true;
    }

 function cocos($asd)
 {
  
 }
 
 function tocos($asd)
 {
  
 }
 
};
//-------------

function ffnn($asd)
{
}

?>
