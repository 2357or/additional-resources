# 追加資料
「n進数変換機構の設計」の追加資料のトップページです。


## 連絡
**デモの作成が完了したらここに動画のリンクを載せます。 (遅れています。申し訳ありません。完成次第、Lick biz のチャンネルで報告します。)**

**[謝罪] 発表映像に使用した機構に一部ミスがありました。詳しくはこの[動画](https://youtu.be/g-iwI_A3a5w)の12:14~に載せました。すみませんでした。**

気軽に質問、感想などお願いします。  
また、本ページの誤字、不明点、誤りがありましたらご連絡していたたけるとうれしいです。(issue, pull requestでも可です[[リポジトリ](https://github.com/2357or/additional-resources)])


<br>


## 詳しい機構解説
10分間の発表で伝えきれなかった詳しい機構の仕組み(計算等含めて)の解説をしました。  
以下のハイパーリンクから飛ぶことができます。  
- [発表映像 高画質  (09:53)](https://youtu.be/FI3c_mOsdIg)
- [機構コンセプトの構築  (10:49)](https://youtu.be/TlpKPEhMsRQ)
- [16進数への変換 ギア比計算  (11:19)](https://youtu.be/Ds27-iqx3fo)
- [16進数への変換 プーリーの移動量  (12:45)](https://youtu.be/g-iwI_A3a5w)
- 入力から出力へ(22日投稿)
<br>


## 機構について
[こちら](/components.md)で細かいパラメーター、設計方法を見ることができます。

各コンポーネントは  
モジュール：1  
圧力角: 20度  
で設計しています。

また、CADは「AUTODESK Fusion360」を使用しています。


<br>


## 開発環境について
[こちら](/environment.md)で細かいバージョンやソフトウェア情報をみることができます。

使用した主なツール、用途は以下です。  
Fusion360: モデリング  
ibisPaint X: 設計図作成  
Numi: 計算、メモ


<br>


## 動画、パワーポイントで使用した専門用語の解説
[こちら](/word_def.md)で動画で出てきた順(＋関連語)の説明をしています。

ほかにも不明な単語がありましたら連絡お願いします。


<br>


## 開発中に使用したツールについて
複数のweb上のツールを利用したました。  
[こちら](/tool.md)でそのリンク、用途を載せました。

また、進数変換(基数変換)を自分で計算するのが面倒だったので、C++ にてプログラムを作成してます。  
ソースコードは[こちら](/resources/cpp/radix_conversion.cpp)です。    
自由につかっていただいて構いません。 だいぶ競技プログラミングに近い書き方になってますが数十分で作成したものなので許してください。


<br>


## 3Dモデルやプロジェクトデータについて
連絡いただければデータを渡すことは可能だと思います。  
Fusion360で出力可能なファイル形式[https://knowledge.autodesk.com/ja/support/fusion-360/learn-explore/caas/sfdcarticles/sfdcarticles/JPN/Export-format-options-for-Fusion-360.html](https://knowledge.autodesk.com/ja/support/fusion-360/learn-explore/caas/sfdcarticles/sfdcarticles/JPN/Export-format-options-for-Fusion-360.html)

