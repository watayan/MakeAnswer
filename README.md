# MakeAnswer
WaPEN用のanswer.jsを生成する。

##使い方
次のように自動採点用の問題，入力例，出力例を書いたファイルを作り，拡張子quizで保存しておきます。
    [TITLE]
    最大公約数
    [QUESTION]
    2つの整数を受け取って，最大公約数を表示しなさい。
    [INPUT]
    9
    12
    [OUTPUT]
    3
    [INPUT]
    32768
    729
    [OUTPUT]
    1
これらを結合したanswer.jsを出力します。
