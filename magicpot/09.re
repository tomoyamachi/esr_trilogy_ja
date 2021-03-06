= 間接販売価値モデル

　さはさりながら、間接的な販売価値みたいなものを捕捉できるような、ソフト関係サービスの市場をつくる手はある。この種のモデルとしては、すでに存在するものが 5 つ、アイデアレベルのものが 2 つある（将来はもっと出てくるかもしれない）。




== ロスリーダー・市場ポジション確保

　このモデルでは、オープンソース・ソフトで独占ソフトのポジションをつくりだし、その独占ソフトから直接の収入を得つづける。いちばんよくあるたぐいとしては、オープンソースのクライアントソフトをばらまいて、サーバソフトが売れるようにするとか、ポータルサイトと関連した購読・宣伝収入を得るとかいう例がある。

　Netscape Communications, Inc. は、1998 年はじめに Mozilla ブラウザをオープンソース化したときにこの戦略を追求していた。かれらのブラウザ側での商売は、売り上げの 13% で、マイクロソフトが初めてインターネット・エクスプローラを出荷したときには、すでにこの比率は下がりつづけていた。IE のすさまじいマーケティング（そして後に反トラスト法訴訟の争点となる、いかがわしいバンドル慣行）によって、Netscape のブラウザの市場シェアはすぐにボロボロになり、マイクロソフトがブラウザ市場を独占するのではないか、そしてそのデファクトの力をもって、HTML を左右して、Netscape をサーバ市場からも駆逐するのではないか、という不安が出てきた。

　まだ非常に人気のある Netscape ブラウザをオープンソース化することで、Netscape は実質的に、マイクロソフトによるブラウザ独占の可能性を否定したことになる。かれらは、オープンソースの協力体制がブラウザの開発とデバッグを加速するものと期待し、マイクロソフトのIEが後塵を拝し続けるようにして、かれらが独占的に HTML を決めてしまうのを防いでほしいと願っていたわけだ。

　この戦略はうまくいった。1998 年 11 月、Netscape 社は IE からビジネス市場シェアを奪回しはじめたんだ。Netscape が AOL に 1999 年はじめに買われたとき、Mozilla をそのままつづけさせる競争優位はかなりはっきりしていたので、AOL の最初の公約は、まだアルファ段階でしかない Mozilla プロジェクトのサポートをつづける、というものだった。




== 刺身のツマ

　このモデルは、ハードウェアメーカ用だ（ここでのハードウェアというのは、Ethernet や周辺機器ボードから、コンピュータシステム丸ごとまでなんでも含まれる）。市場の圧力のせいでハード企業もソフトを書いてメンテナンスしなくてはならない（下はデバイスドライバから、設定ツールを経て、上は全 OS にいたるまで）。でも、ソフト自身は収益を産まない。これはオーバーヘッドだ――しかも、しばしばそれがかなりの負担になる。

　この状況では、オープンソース化はだれでも思いつく。失う収入はゼロだから、なにも損はしない。ベンダとして手に入れるものは、劇的に大きくなった開発者プールと、顧客ニーズへの高速で柔軟な対応、そしてピアレビューを通じた信頼性向上だ。たぶん顧客のロイヤルティも高まるだろう。顧客の技術スタッフたちが、そのコードにますます時間をさいて、必要なカスタマイズを行えば行うほどそうなるはずだ。

　ハードウェアのドライバをオープンソース化することについては、ベンダからよく出てくる反論がいくつかある。それをここでの一般的な議論とごちゃまぜにするよりこの問題だけをまとめた「補遺」を書いておいた。 

　オープンソースの「将来に不安がない」効果が特に強いのは、この「刺身のツマ」モデルの場合だ。ハードウェア製品は有限の製造期間とサポート期間しかない。それ以降になると、顧客は自分で何とかするしかない。でもドライバのソースが手に入って、それを必要に応じてパッチできたら、同じ会社の満足したリピート顧客になる可能性が高まる。

　この「刺身のツマ」モデルを採用した非常に劇的な例は、1999 年 3 月半ばに Apple Computer が、MacOS X の核である「Darwin」をオープンソース化すると決断したことだ。




== レシピをまいて、レストランを開け

　このモデルでは、あるソフトウェアを使って、クローズドなソフトのポジションを確立するのではなく（これだと、「ロスリーダー・市場ポジション確保」ケースになる）、サービスのポジションを確立する。

　（むかしはこれを「カミソリを配って、カミソリの刃を売れ」と呼んでいたけれど、でも製品とサービスの結びつきは、カミソリとカミソリの刃のアナロジーほどは緊密なものじゃない。）

　Red Hat をはじめとする Linux ディストリビュータがやっているのは、こういうことだ。かれらが実際に売っているのは、ビット自体という意味でのソフトではない。ちゃんとうごく OS を組み立てて試験することによる付加価値なんだ。さらに、そのOSは売り物になって、同じブランドのほかの OS と互換性があるという保証が（明示的にではなくても）ある。かれらの価値提案のほかの面としては、無料インストールサポートや、サポート契約継続オプションの提示なんかがある。

　オープンソースの市場構築効果は、そもそも最初からサービス的な立場にいるような企業にとっては特に強力なものとなる。最近の、とても示唆的な事例が Digital Creations だ。ここは web サイトのデザイン会社で、1998 年に創業し、複雑なデータベースや取り引きサイトを得意としている。かれらの主要ツール、この企業の知的所有権の至宝は、オブジェクト出版ソフトで、いくつか名前を変えて装いも変わってきたけれど、いまはZopeと呼ばれているソフトだ。

　Digital Creations の連中がベンチャーキャピタルを探しにいったとき、かれらがつかまえてきた VC は、この予想市場ニッチと、その人々、そしてそのツールを慎重に評価した。そしてかれは、Digital Creations に対し、Zope をオープンソースにしなさいと提言したんだ。

　伝統的なソフト産業の基準からすると、これは完全に発狂した動きにしか見えない。従来のビジネススクール型の知恵だと、Zope みたいな中核知的所有権は、その会社の至宝であって、なにがあろうとくれてやるようなものじゃない。でもこの VC は、2 つのからみあった洞察をもっていた。一つは、Zope の真の核となる資産は、実はその人々の脳と技能だ、ということ。そして、Zope は秘密兵器としてよりも、市場作成ツールとしてのほうが、高い価値を生み出しそうだということ。

　これを理解するには、2 つのシナリオを比べてみよう。伝統的なシナリオでは、Zope は Digital Creation の秘密兵器のままだ。ここでは仮に、それがとても強力なものだとしよう。結果として、この企業は優れた品質のものを短期間で提供する能力を持っている――が、だれもそれを知らないわけだ。顧客を満足させるのは簡単だけれど、そもそもの顧客層をつくりだすのが一苦労だ。

　ところが VC は、Zope をオープンソースにすることで、Digital Creation の真の資産 ―― その人々 ―― についてのすばらしい宣伝になると見て取ったわけだ。Zope を評価した顧客は、インハウスで Zope についてのノウハウを開発するよりも、同社の専門家を雇ったほうがいいと思うだろうというのがかれの予想だった。

　Zope の重役の一人は、それ以来公然と、オープンソース戦略が「ほかでは考えられなかったような門戸も開いてくれた」と語っている。潜在的な顧客は、確かにこの状況の論理に応じた行動をとった ―― そして Digital Creations も、それに応じて繁栄している。

　もう一つ、ホヤホヤの例が @<href>{http://www.e-smith.net/, e-smith, inc} だ。この会社は、Linux をカスタマイズした、オープンソースのターンキー・インターネットサーバソフトのサポート契約を売っている。その重役の一人は、e-smithのソフトの無料ダウンロードが増えていることに触れて、こう語っている：「@<href>{http://www.globetechnology.com/gam/News/19990625/BAND.html, ほとんどの会社は、これをソフトの海賊コピーだと考えるでしょう、ウチは無料マーケティングだと考えているんです}」




== アクセサリー

　このモデルでは、オープンソース・ソフトのアクセサリーを売ることになる。いちばん低いところでは、コーヒーカップやTシャツ。ハイエンドでは、質の高い編集と製本でのドキュメンテーション。

　アクセサリー会社としては、オープンソース関連ソフトのすぐれた参考書をたくさん出している出版社 O'Reilly Associates がいい例だ。オライリーは、有名なオープンソース・ハッカー（たとえば Perl のラリー・ウォールやブライアン・ベーレンドルフ）を実際に雇っている。これは、選んだ市場での評判を高めるためだ。




== 未来をフリーに、現在を売れ

　このモデルでは、クローズドなライセンスでバイナリとソースをリリースするけれど、そのライセンスに期限をつける。たとえば、フリーな再配布は認め、商業利用は有料にして、リリースの 1 年後か、あるいはベンダが倒産・廃業した場合には GPL になるようなライセンスを書けばいい。

　このモデルでは、顧客はその製品がニーズにあわせてカスタマイズできるのが確実にわかる。ソースが手に入るからだ。その製品は、将来の不安がない ―― ライセンスは、最初の会社がつぶれても、オープンソースコミュニティがそれを引き継げると保証しているから。

　販売価格と販売量は、こういう顧客の期待に基づいているので、最初の企業としては、完全なクローズドソースのライセンスでリリースするときよりも高い収入を得られるはずだ。さらに古いコードが GPL 化されるから、念入りなピアレビューも受けるし、もとの作者としては 75% のメンテナンスコストも、ある程度節約できることになる。

　このモデルは、Aladdin Enterprises がうまいこと採用している。かれらは有名な Ghostscript を開発している（Postscriptのインタープリタで、それを各種プリンタの独自言語に変換する）。

　このモデルの最大の欠点は、製品サイクル初期にはライセンスがクローズドなので、ピアレビューが受けられないという点だ。ピアレビューが必要になるのは、まさにその開発初期なのに。




== ソフトをフリーに、ブランドを売れ

　これは実例のないビジネスモデルだ。ソフト技術をオープンソース化して、テストスイートや、互換性標準を持っておく。そしてユーザに対し、その技術の実装が、同ブランドをつけた他製品すべてと互換性があるという証明ブランドを発行する。

　（Sun Microsystems は、Java や Jini をこういうふうに扱えばいいのに）




== ソフトをフリーに、コンテンツを売れ

　これもまた、まだ実例のないビジネスモデルだ。株価のリアルタイム表示サービスのようなものを考えて欲しい。価値はクライアントにもサーバにもない。客観的に信頼できる情報を提供することにある。だからソフトはすべてオープンソース化して、コンテンツの購読を売ろう。ハッカーたちがクライアントを新しいプラットホームに移植して、それをいろいろ保守拡張してくれるにつれて、市場は自動的に拡大する。

　（だからこそAOLはアクセス用のクライアントソフトをオープンソース化すべきなんだ）






