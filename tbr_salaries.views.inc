<?php

/** 
* Implementation of hook_views_data
*/

function  tbr_salaries_views_data() {
   error_log("Loading views");
   $data['salaries']['table']['group'] = t('TBR Salaries Data');
   $data['salaries']['table']['base'] = array(
      'field' => 'id',
      'title' => t('salaries'),
      'help' => t('Autoincremented ID field, to enable views integration'),
      'database' => 'tbr_data_salaries',
      'weight' => -10,
   );

   $data['salaries']['institution'] = array(
      'title' => t('Salary Employee Institution'),
      'help' => t('Salary Employee Institution'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
    
   $data['salaries']['lastname'] = array(
      'title' => t('Salary Employee Last Name'),
      'help' => t('Salary Employee Last Name'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
    
   $data['salaries']['firstname'] = array(
      'title' => t('Salary Employee First Name'),
      'help' => t('Salary Employee First Name'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
       $data['salaries']['jobtitle'] = array(
      'title' => t('Salary Employee Job Title'),
      'help' => t('Salary Employee Job Title'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
   $data['salaries']['department'] = array(
      'title' => t('Salary Employee Department'),
      'help' => t('Department'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
   $data['salaries']['fte'] = array(
      'title' => t('Salary Employee FTE'),
      'help' => t('Salary Employee FTE'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );
    
   $data['salaries']['salary1'] = array(
      'title' => t('Salary Employee Salary'),
      'help' => t('Salary Employee Salary'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

    $data['salaries']['year'] = array(
      'title' => t('Salary Year'),
      'help' => t('Salary Year'),
      'field' => array(
         'handler' => 'views_handler_field',
         'click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   return $data;

}
