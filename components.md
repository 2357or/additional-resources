# 機構について

今回作成した機構のパラメータについて記載しています。

単位はFusion内では[mm]となっていますが、実際に[mm]だと非常に小さくなってしまうので、比としてとらえてください

## 目次
- [機構の全体像](#機構の全体像 ワイヤーフレーム)
- [平歯車の設計](#平歯車の設計)
- [すぐばかさ歯車の設計](#すぐばかさ歯車の設計)
- [ラックギアの設計](#ラックギアの設計)
- [プーリーの設計](#プーリーの設計)

<br>

## 機構の全体像 ワイヤーフレーム

<img src="resources/image/0index.png" alt="0全体">
<br>
[1面正](resources/image/1front.png)
<br>
[2上](resources/image/2top.png)
<br>
[3右斜め](resources/image/3rightOblique.png)
<br>
[4右](resources/image/4right.png)
<br>
[5下](resources/image/5bottom.png)
<br>
[6左](resources/image/6left.png)
<br>
[7左斜め](resources/image/7leftOblique.png)
<br>

## 平歯車の設計
Fusion360の「ツール」から「アドインとスクリプト」より「SpurGear]を使用した。

**パラメータ**

| 名前               | 値                |
| :---               | :---:             |
| Pressure Angle     | 20°              |
| Module             | 1                 |
| Number of Teeth    | 任意              |
| Backlash           | 0                 |
| Root Fillet Radius | 0.5               |
| Gear Thicknes      | 任意              |
| Hole Diameter      | 2                 |
| Pich Diameter      | (Number of Teeth) |

<br>

## すぐばかさ歯車の設計
「GF Gear Generator」 を「Fusion360 App Store」より入手し、実行。  
「ツール」より「GF Gear Generator」で「90°Bevel Gears」を選択。

**パラメータ**

| 名前                           | 値    |
| :----                          | :---: |
| Module                         | 1     |
| Number of teeth for the Wheel  | 任意  |
| Number of teeth for the pinion | 任意  |
| Pressure angle                 | 20°  |

<br>

## ラックギアの設計
「GF Gear Generator」 を「Fusion360 App Store」より入手し、実行。  
「ツール」より「GF Gear Generator」で「Helical/Straight Gear Rack」を選択。

**パラメータ**

| 名前            | 値     |
| :-----          | :----: |
| Module          | 1      |
| Number of teerh | 任意   |
| Rack thickness  | 任意   |
| Pressure angle  | 20°   |
| Helix angle     | 0      |
| Rack height     | 任意   |

<br>

## プーリーの設計
「スケッチ」と「ロフト」を使って作成  
動力に近い方をinput, 遠い方を output と分けると

**パラメータ**

| 名前                 | input 値 | output 値 |
| :---                 | :-----:  | :-----:   |
| 内側の円直径         | 40       | 8         |
| 外側の円直径         | 88       | 48        |
| 厚み(縁の暑さを除く) | 10       | 10        |

<br>

以下の内容は詳しくは[詳しい機構解説 16真数への変換](index.md/#詳しい機構解説)参照

**直径比**

| 倍率 | input 値 | output 値 |
| :--- | :-----:  | :-----:   |
| 1    | 45       | 45        |
| 2    | 30       | 60        |
| 4    | 18       | 72        |
| 8    | 10       | 80        |


**プーリーのずらす量の決定**

断面は y = 2x の直線になっている。  
-> 2cm 半径を小さくしたい -> y = 2(x-1) にする  
    また、この pulley は左右についているため、4cm 半径を小さくしたい  
    	-> y = 2(x-1)  
 -> 一般的に、、4n cm 半径を小さくしたいならば y = 2(x-n) にする  
現在状態 は 半径 45cm になっているので、10 まで小さくしたい  
 -> よって直線は y = 2(x-(35/4))  
               y = 2(x-8.75)  

scale1 = (45-45)/4  // y = 2x = 0  
scale2 = (45-30)/4  // y = 2(x-3.75) = 3.75  
scale4 = (45-18)/4  // y = 2(x-6.75) = 6.75  
scale8 = (45-10)/4  // y = 2(x-8.75)
