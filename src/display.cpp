#include "main.h"
#include "gif-pros/gifclass.hpp"

extern Gif gif;

int auton_num;

// static lv_res_t btn1_auton(lv_obj_t * btn) { auton_num = 1; return LV_RES_OK; } //redback
// static lv_res_t btn2_auton(lv_obj_t * btn) { auton_num = 2; return LV_RES_OK; } // blueblack
// static lv_res_t btn3_auton(lv_obj_t * btn) { auton_num = 3; return LV_RES_OK; }
// static lv_res_t btn4_auton(lv_obj_t * btn) { auton_num = 4; return LV_RES_OK; }
// static lv_res_t btn5_auton(lv_obj_t * btn) { auton_num = 5; return LV_RES_OK; }


void display() {  // tesseract gif with tesseract text at bottom runs during opcontrol

  // init display
  static lv_style_t background_style;
  lv_style_copy(&background_style, &lv_style_plain);
  background_style.body.main_color = LV_COLOR_WHITE;
  background_style.body.grad_color = LV_COLOR_WHITE;

  lv_obj_t *scr = lv_obj_create(NULL, NULL);
  lv_obj_set_style(scr, &background_style);
  lv_scr_load(scr);

  // gif

  lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
  lv_obj_set_size(obj, 165, 165);
  lv_obj_set_style(obj, &lv_style_transp);
  lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, -20);

  Gif* gif = new Gif ("/usd/tesseractres.gif", obj);

  // styles
  static lv_style_t title_style;
  lv_style_copy(&title_style, &lv_style_plain);
  title_style.text.font = &lv_font_dejavu_20;
  title_style.text.color = LV_COLOR_BLACK;

  // text
  lv_obj_t *tesseract_title = lv_label_create(scr, NULL);
  lv_obj_set_style(tesseract_title, &title_style);
  lv_label_set_text(tesseract_title, "TESSERACT");
  lv_obj_align(tesseract_title, NULL, LV_ALIGN_IN_BOTTOM_MID, 0, -10);
}

void redsmallscr() { // red back scr with text runs during comp disabled
  // init display
  static lv_style_t background_style;
  lv_style_copy(&background_style, &lv_style_plain);
  background_style.body.main_color = LV_COLOR_RED;
  background_style.body.grad_color = LV_COLOR_RED;

  lv_obj_t *scr = lv_obj_create(NULL, NULL);
  lv_obj_set_style(scr, &background_style);
  lv_scr_load(scr);

  // styles
  static lv_style_t title_style;
  lv_style_copy(&title_style, &lv_style_plain);
  title_style.text.font = &lv_font_dejavu_20;
  title_style.text.color = LV_COLOR_BLACK;

  //text
  lv_obj_t *tesseract_title = lv_label_create(scr, NULL);
  lv_obj_set_style(tesseract_title, &title_style);
  lv_label_set_text(tesseract_title, "RED SMALL");
  lv_obj_align(tesseract_title, NULL, LV_ALIGN_CENTER, 0, 0);

  //button
  // lv_obj_t * label = lv_label_create(lv_scr_act(), NULL);
  // lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_size(label, 0, 0);
  //
  // lv_obj_t * btn1 = lv_btn_create(lv_scr_act(), NULL); // red back
  // lv_cont_set_fit(btn1, false, false);
  // lv_obj_set_size(btn1, 700, 400);
  // lv_obj_align(btn1, label, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_free_num(btn1, 1);
  // lv_btn_set_toggle(btn1, true);
  // lv_btn_set_action(btn1, LV_BTN_ACTION_PR, btn1_auton);
  //
  // label = lv_label_create(btn1, NULL);
  // lv_label_set_text(label, "RED BACK");
}

void bluesmallscr() { // blue back scr with text runs during comp disabled
  // init display
  static lv_style_t background_style;
  lv_style_copy(&background_style, &lv_style_plain);
  background_style.body.main_color = LV_COLOR_BLUE;
  background_style.body.grad_color = LV_COLOR_BLUE;

  lv_obj_t *scr = lv_obj_create(NULL, NULL);
  lv_obj_set_style(scr, &background_style);
  lv_scr_load(scr);

  // styles
  static lv_style_t title_style;
  lv_style_copy(&title_style, &lv_style_plain);
  title_style.text.font = &lv_font_dejavu_20;
  title_style.text.color = LV_COLOR_BLACK;

  //text
  lv_obj_t *tesseract_title = lv_label_create(scr, NULL);
  lv_obj_set_style(tesseract_title, &title_style);
  lv_label_set_text(tesseract_title, "BLUE SMALL");
  lv_obj_align(tesseract_title, NULL, LV_ALIGN_CENTER, 0, 0);

  //button
  // lv_obj_t * label = lv_label_create(lv_scr_act(), NULL);
  // lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_size(label, 0, 0);
  //
  // lv_obj_t * btn1 = lv_btn_create(lv_scr_act(), NULL); // red back
  // lv_cont_set_fit(btn1, false, false);
  // lv_obj_set_size(btn1, 700, 400);
  // lv_obj_align(btn1, label, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_free_num(btn1, 1);
  // lv_btn_set_toggle(btn1, true);
  // lv_btn_set_action(btn1, LV_BTN_ACTION_PR, btn2_auton);
  //
  // label = lv_label_create(btn1, NULL);
  // lv_label_set_text(label, "BLUE BACK");
}
void redbigscr() {
  // init display
  static lv_style_t background_style;
  lv_style_copy(&background_style, &lv_style_plain);
  background_style.body.main_color = LV_COLOR_RED;
  background_style.body.grad_color = LV_COLOR_RED;

  lv_obj_t *scr = lv_obj_create(NULL, NULL);
  lv_obj_set_style(scr, &background_style);
  lv_scr_load(scr);

  // styles
  static lv_style_t title_style;
  lv_style_copy(&title_style, &lv_style_plain);
  title_style.text.font = &lv_font_dejavu_20;
  title_style.text.color = LV_COLOR_BLACK;

  //text
  lv_obj_t *tesseract_title = lv_label_create(scr, NULL);
  lv_obj_set_style(tesseract_title, &title_style);
  lv_label_set_text(tesseract_title, "RED BIG");
  lv_obj_align(tesseract_title, NULL, LV_ALIGN_CENTER, 0, 0);

  //button
  // lv_obj_t * label = lv_label_create(lv_scr_act(), NULL);
  // lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_size(label, 0, 0);
  //
  // lv_obj_t * btn1 = lv_btn_create(lv_scr_act(), NULL); // red back
  // lv_cont_set_fit(btn1, false, false);
  // lv_obj_set_size(btn1, 700, 400);
  // lv_obj_align(btn1, label, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_free_num(btn1, 1);
  // lv_btn_set_toggle(btn1, true);
  // lv_btn_set_action(btn1, LV_BTN_ACTION_PR, btn4_auton);
  //
  // label = lv_label_create(btn1, NULL);
  // lv_label_set_text(label, "RED FRONT");
}
void bluebigscr() {
  // init display
  static lv_style_t background_style;
  lv_style_copy(&background_style, &lv_style_plain);
  background_style.body.main_color = LV_COLOR_BLUE;
  background_style.body.grad_color = LV_COLOR_BLUE;

  lv_obj_t *scr = lv_obj_create(NULL, NULL);
  lv_obj_set_style(scr, &background_style);
  lv_scr_load(scr);

  // styles
  static lv_style_t title_style;
  lv_style_copy(&title_style, &lv_style_plain);
  title_style.text.font = &lv_font_dejavu_20;
  title_style.text.color = LV_COLOR_BLACK;

  //text
  lv_obj_t *tesseract_title = lv_label_create(scr, NULL);
  lv_obj_set_style(tesseract_title, &title_style);
  lv_label_set_text(tesseract_title, "RED BIG");
  lv_obj_align(tesseract_title, NULL, LV_ALIGN_CENTER, 0, 0);

  //button
  // lv_obj_t * label = lv_label_create(lv_scr_act(), NULL);
  // lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_size(label, 0, 0);
  //
  // lv_obj_t * btn1 = lv_btn_create(lv_scr_act(), NULL); // red back
  // lv_cont_set_fit(btn1, false, false);
  // lv_obj_set_size(btn1, 700, 400);
  // lv_obj_align(btn1, label, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_free_num(btn1, 1);
  // lv_btn_set_toggle(btn1, true);
  // lv_btn_set_action(btn1, LV_BTN_ACTION_PR, btn3_auton);
  //
  // label = lv_label_create(btn1, NULL);
  // lv_label_set_text(label, "BLUE FRONT");
}
void skillsscr() {
  // init display
  static lv_style_t background_style;
  lv_style_copy(&background_style, &lv_style_plain);
  background_style.body.main_color = LV_COLOR_BLUE;
  background_style.body.grad_color = LV_COLOR_RED;

  lv_obj_t *scr = lv_obj_create(NULL, NULL);
  lv_obj_set_style(scr, &background_style);
  lv_scr_load(scr);

  // styles
  static lv_style_t title_style;
  lv_style_copy(&title_style, &lv_style_plain);
  title_style.text.font = &lv_font_dejavu_20;
  title_style.text.color = LV_COLOR_BLACK;

  //text
  lv_obj_t *tesseract_title = lv_label_create(scr, NULL);
  lv_obj_set_style(tesseract_title, &title_style);
  lv_label_set_text(tesseract_title, "SKILLS");
  lv_obj_align(tesseract_title, NULL, LV_ALIGN_CENTER, 0, 0);

  //button
  // lv_obj_t * label = lv_label_create(lv_scr_act(), NULL);
  // lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_size(label, 0, 0);
  //
  // lv_obj_t * btn1 = lv_btn_create(lv_scr_act(), NULL); // red back
  // lv_cont_set_fit(btn1, false, false);
  // lv_obj_set_size(btn1, 700, 400);
  // lv_obj_align(btn1, label, LV_ALIGN_CENTER, 0, 0);
  // lv_obj_set_free_num(btn1, 1);
  // lv_btn_set_toggle(btn1, true);
  // lv_btn_set_action(btn1, LV_BTN_ACTION_PR, btn5_auton);
  //
  // label = lv_label_create(btn1, NULL);
  // lv_label_set_text(label, "SKILLS");
}
