<?php

$plugin = array(
  'title' => t('Two Three Column with a Right Sidebar'),
  'category' => t('Base Three Layouts'),
  'icon' => 'two_three_col_right_sidebar.png',
  'theme' => 'two_three_col_right_sidebar',
  'admin css' => '../basethree_layouts_panels_admin.css',
  'regions' => array(
    'top_left' => t('Top Left'),
    'sidebar' => t('Sidebar'),
    'bottom_left' => t('Bottom Left'),
    'bottom_right' => t('Bottom Right'),
  ),
);
