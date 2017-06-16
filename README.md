# 百合

## 使い方
```
$ TACHI=タチ NEKO=ネコ make love
echo "static const char tachi[] = "\"タチ\"";" > 親.h
echo "static const char neko[] = "\"ネコ\"";" >> 親.h
gcc -Wall -O2 -o 百合 百合.c
$ ./百合
百合 コマンド一覧
  妊娠: 妊娠します。
  出産: 出産します。
$ ./百合 妊娠
タチがネコの子を出産しました。
$ ./百合 出産
タチがネコの子を妊娠しました。
```
