<?php
/**
 * @file
 * ca_sub_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_sub_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_sub_pages_add_sub_page';
  $page->task = 'page';
  $page->admin_title = 'CA Sub Pages: Add Sub Page';
  $page->admin_description = '';
  $page->path = 'node/%node/add_sub_page';
  $page->access = array(
    'plugins' => array(
      5 => array(
        'name' => 'node_menu_depth',
        'settings' => array(
          'menu' => 'main-menu',
          'menu_depth' => 'p3',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      6 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 13007701,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      7 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'page' => 'page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Sub Page',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sub_pages_add_sub_page__ca_sub_pages_add_worx_aurora';
  $handler->task = 'page';
  $handler->subtask = 'ca_sub_pages_add_sub_page';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'CA Sub Pages: Add Sub Page Worx Aurora Template one',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'ca_sub_pages_add_worx_aurora',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '45b5970e-b707-4c1b-bb86-b2b8292c5747';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e666cf3b-fe56-416c-9ee7-5ef39ef39aad';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'page',
      'context_admin_sub_page' => 1,
      'context_admin_use_node_edit' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e666cf3b-fe56-416c-9ee7-5ef39ef39aad';
    $display->content['new-e666cf3b-fe56-416c-9ee7-5ef39ef39aad'] = $pane;
    $display->panels['first-first'][0] = 'new-e666cf3b-fe56-416c-9ee7-5ef39ef39aad';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e666cf3b-fe56-416c-9ee7-5ef39ef39aad';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sub_pages_add_sub_page_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_sub_pages_add_sub_page';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'page',
    'context_admin_sub_page' => 1,
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_sub_pages_add_sub_page'] = $page;

  return $pages;

}
