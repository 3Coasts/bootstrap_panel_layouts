<?php
/**
 * @file   twocol_8_4_stacked.inc
 * @author António P. P. Almeida <appa@perusio.net>
 * @date   Fri Apr 15 16:51:31 2011
 *
 * @brief  The panels layout plugin for the two column 77/23 stacked layout.
 *
 *
 */

// Plugin definition.
$plugin = array(
  'title' => t('Two column 8 4 stacked'),
  'category' => t('Base Three Layouts'),
  'icon' => 'twocol_8_4_stacked.png',
  'theme' => 'twocol_8_4_stacked',
  'admin css' => '../basethree_layouts_panels_admin.css',
  'regions' => array(
    'header' => t('header'),
    'left' => t('left'),
    'right' => t('right'),
    'footer' => t('footer'),
  ),
);
