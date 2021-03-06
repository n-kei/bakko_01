#ifndef DATA_TYPE_H_INCLUDED
#define DATA_TYPE_H_INCLUDED

/*Arduino内で使うときはコメントを外すこと
 *#if defined(ARDUINO) && ARDUINO >= 100
 *#include "Arduino.h"
 *#else
 *#include "WProgram.h"
 *#endif
 */

#define TRUE   1
#define FALSE  0

/*
*ボタンコマンドの情報を格納する構造体。コントローラのそれぞれのボタンの状態（押されてるかとか）
*の情報を格納する
*/
struct ButtonCommand {
  int a_button;       //aボタンの状態を表すメンバ変数。押されていたらTRUEをとり、押されていなかったらFALSEを取る
  int b_button;      //bボタンの状態を表すメンバ変数。押されていたらTRUEをとり、押されていなかったらFALSEを取る
  int zr_button;     //zrボタンの状態を表すメンバ変数。押されていたらTRUEをとり、押されていなかったらFALSEを取る
  int l_button;      //lボタンの状態を表すメンバ変数。押されていたらTRUEをとり、押されていなかったらFALSEを取る
  int RCservo_angle; //RCサーボのパルス幅を表すメンバ変数。前回のサーボは500 ~ 2500までの値を取っていたが個体差があるため当てにしないこと。

  /*
  *左スティックの状態を格納する構造体。
  */
  struct {
    int width_stick; //スティックの上下の倒し具合の値を格納するメンバ変数。左のスティックは5ビット分の値をとるらしい
    int height_stick; //スティック左右の倒し具合の値を格納するメンバ変数。左のスティックは5ビット分の値をとるらしい
  } LeftStick;


  /*
  *左スティックの状態を格納する構造体。
  */
  struct {
    int width_stick;  //スティック上下の倒し具合の値を格納するメンバ変数。右のスティックは6ビット分の値をとるらしい
    int height_stick;  //スティック左右の倒し具合の値を格納するメンバ変数。右のスティックは6ビット分の値をとるらしい
  } RightStick;

  /*
  *十字キーの状態を格納する構造体。
  */   struct {
    int left;  //十字キーの左キーの状態を表すメンバ変数。押されていたらTRUE、押されていなかったらFALSEを取る
    int right; //十字キーの右キーの状態を表すメンバ変数。押されていたらTRUE、押されていなかったらFALSEを取る
    int up;  //十字キーの上キーの状態を表すメンバ変数。押されていたらTRUE、押されていなかったらFALSEを取る
    int down;  //十字キー下キーの状態を表すメンバ変数。押されていたらTRUE、押されていなかったらFALSEを取る
  } CrossButton;
};

/*
*動作コマンドの情報を格納する構造体。ボタンコマンド情報と現在の動作モード情報を格納する
*/
struct MotionCommand {
  int manual_mode;  //マニュアルモードのフラグ変数。現在のモードがマニュアルモードだったらTRUE,違ったらFALSEを取る
  int grid_mode;    //グリッドモードのフラグ変数。現在のモードがグリッドモードだったらTRUE,違ったらFALSEを取る
  int quick_mode;  //早送りモードのフラグ変数。現在のモードが早送りモードだったらTRUE、違ったらFALSEを取る

  struct ButtonCommand button_command; //現在のボタンの状態
};

/*
*アームポインタの情報を格納する構造体。
*/
struct ArmPointer {
  double x;  //アームポインタのx成分の値を格納するメンバ変数
  double y; //アームポインタのy成分の値を格納するメンバ変数
  double z; //アームポインタのz成分の値を格納するメンバ変数
};

/*
*パワーサーボの割り振り
*/
#define Aservo 0
#define Bservo 1
#define Cservo 2
#define Dservo 3

/*
*サーボの情報を格納する構造体。これを使用するのはraspberry piのみ
*/
struct ServoValue {
  int value_command; //サーボの指令値
  int value_measure; //サーボの観測値
};

union ServoData {
  char all_data[sizeof(struct ServoValue)];
  struct ServoValue servo_value;
};

#endif
