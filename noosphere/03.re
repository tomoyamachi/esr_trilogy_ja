= 放縦な理論と純潔な実践


　とはいえこうした変化すべてを通じて、「フリーソフト」や「オープンソース」がなんであるかについては、おおまかな合意を得た理論が維持され続けていた。この共通理論のいちばんはっきりした表現は、いろんなオープンソース・ライセンスにみることができる。そのすべてにはきわめて重要な共通要素があるんだ。



　1997年に、こういう共通要素が蒸留されて Debian フリーソフトウェア・ガイドラインとなり、これが@<href>{http://www.opensource.org/, Open Source Definition}になった。OSD の定義したガイドラインのもとでは、オープンソースのライセンスはオープンソース・ソフトを変更（そしてその変更版を再配布）する権利をだれにでも無条件に認めなくてはならない。


　だから OSD（そして GPL、BSD ライセンス、Perl の Artisitic License など OSD 対応のライセンス群）の暗黙の理論というのは、だれもがなんでもハックできるというものだ。どんなオープンソース製品（たとえば FSFの gcc C コンパイラとか）でも、6人くらいがソースを複製してそれを勝手にちがった発展方向に向けて変えてしまい、しかもみんなが「これぞ本家本元」と主張する、といったことは十分可能だし、それを止めるものはなにもない。


　でも実際には、こんな「分裂」はほとんど絶対に起きないといっていい。大プロジェクトの分裂はすごくまれだし、いつも名前が変わるうえ、世間的にもなぜそれが正当かについて、大量の説明が行われる。GNU Emacs/Xemacs の分裂や、さまざまな BSD 系グループの分裂なんかでは、分離派たちは自分たちが非常に強力なコミュニティ規範に逆らって行動していると感じていたのは明らかだ @<fn>{SP}。


　実際問題として（そして「だれでもなんでもハックできる」という合意があるという理屈とは正反対に）、オープンソース文化は入念ながらほとんど認識されていない所有権の慣習を持っている。この慣習によって、だれがソフトを変更できるか、どういう状況でそれが変更できるか、そして（特に）だれが変更バージョンを再配布してコミュニティに戻せるか、が規定されているんだ。


　ある文化の禁忌（タブー）は、そこでの規範をシャープに浮かび上がらせる。だから、だいじなタブーをここでまとめておくと、あとあと役にたつだろう。

 *プロジェクトの分岐に対してはすごく強い社会的な圧力がある。どうしてもこれが必要なんだという請願のもとで、世間に対してもその行為を正当化する訴えがたくさん行われ、そしてプロジェクトの名前も変えない限り、それは起こらない。

 *プロジェクトへの変更を、モデレータたちの協力なしに行うといい顔をされない。ただし、基本的に些末な移植上のフィックスなどはのぞく。

 *ある人の名前をプロジェクトの歴史やクレジットや管理者リストからのぞくのは、当人のはっきりした合意なしには@<strong>{絶対に行われない}。

　この論文ではこれから、こうしたタブーと所有についての慣習を検討する。それらがどう機能するかというだけでなく、それが明らかにしているオープンソース・コミュニティの根底にある社会的な力学やインセンティブ構造についても見ていこう。


//footnote[SP][　Linux と BSD の世界とのおもしろいちがいの一つは、Linux のカーネル（および関連する OS の中心的なユーティリティ）は一度も分裂していないけれど、BSD は少なくとも 3 回は分裂しているということだ。これがおもしろいのは、BSD グループの社会構造は中央集権化されていて、権限をはっきりと線引きすることで分裂を防ぐようになっているのに、中央集権化されていなくて不定型なLinuxコミュニティは分裂を防ぐような手段をまったく講じていないからだ。開発をなるべく開放したほうが、いちばん分裂しにくくなるとしか思えない！@<br>{}　Henry Spencer <@<href>{mailto:henry@spsystems.net, henry@spsystems.net}> の考えによれば、一般に政治的なシステムの安定性は、その政治プロセスへの参入障壁の高さに反比例するのではないか、とのこと。かれの分析は、ここで引用するだけの価値がある：@<br>{}「比較的オープンな民主主義の大きな強みの一つは、ほとんどの潜在的革命家は自分の目的を達成するのに、システムを利用したほうがシステムを攻撃するよりも簡単だと判断する、ということだ。各種組織が協力して「敷居を上げて」、不満を持った小集団が自分の目標を多少なりとも達成するのをむずかしくすると、この強みはすぐに消えてしまう。@<br>{} （同じような原理は経済でも見られる。開放市場では競合がいちばん激しく、さらに最高で最低価格の製品が得られるのがふつうだ。このため、既存企業としては、新規参入をなるべくむずかしくするのがいちばん利益になる――たとえば政府に対し、コンピュータに入念な RFI テストを義務づけさせたり、ポケットが深くない限り、複雑すぎて1から実装するのが実質的に不可能な「合意に基づく」規格を作ったりするわけだ。参入障壁がいちばん強力な市場は、革命家、たとえばインターネットや、司法省対ベルシステムの独禁法裁判などからいちばん攻撃を受けやすい市場でもある。） @<br>{} 　参入障壁の低いオープンなプロセスは、分離させるより、むしろ参加をうながす。分離による高いオーバーヘッドなしに成果が得られるからだ。その成果は、分離したら達成できるものほどはすごくないかもしれないけれど、必要コストは低いし、多くの人はこれをがまんできる範囲のトレードオフだと判断する。（スペイン政府がフランコの反バスク法を廃止して、バスク地方に独自の学校と一定の自治権を与えたら、バスク独立運動のほとんどは一瞬で消えた。それでは不十分だと固執したのは、ゴリゴリのマルクス主義者だけだった。）」]


