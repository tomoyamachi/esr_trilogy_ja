= ソース非公開にする理由

　オープンソースのビジネスモデルを分類する前に、まず排除することで一般的にどんなメリットがあるのかを考えるべきだろう。ソースを非公開にするとき、人はいったいなにを守ろうとしているんだろうか。

　たとえばだれかをやとって、自分の会社用の特別な会計パッケージを書かせたとする。自分の目的のためには、ソースを非公開にしたって、追加のメリットはなにもない。非公開にしたいまともな理由としては、パッケージをほかの人に売りたいか、競合他社にそのパッケージを使わせたくないからだ。

　すぐに出てくる答えは、ソフトの販売価値を守るため、というものだけれど、内部使用のために書かれる 95% のソフトについては、これはあてはまらない。するとほかに、クローズドにしてなにかいいことがあるんだろうか。

　二番目の理由（競争優位を守る）は、ちょっと検討に値する。もしその会計パッケージをオープンソース化したとしよう。それが人気が出てきて、コミュニティからの改良というメリットが出てきた。さて、あなたの競争相手もそれを使い始めた。競合相手は開発コストを支払わずにメリットだけを享受して、あなたの商売を脅かしはじめる。さてこれは、オープンソース化に反対する議論になるだろうか。

　なるかも――そしてならないかも。本当にたずねるべきなのは、開発の負担をオープンソース化で下げることによるメリットと、ただ乗りの競合からくる損害と、どっちが大きいかということだ。多くの人は、このトレードオフについてあまりきちんとした議論をしていない。それは、自分の開発コストをサンクコスト（埋没費用）として扱わないせいだ。ここでの想定では、その会計ソフトはどのみち必要だったわけだ。だからその開発コストを、オープンソース化するコストに含めるのはまちがっている。

　ソースを非公開にする理由の中には、まるでまともとは思えないものもある。たとえば、ソースを非公開にすると、ビジネスシステムがクラッカーや侵入者に対して高セキュリティになるという幻想を抱いている人もいる。もしそうなら、すぐに暗号専門家と話をしてそういう思いこみを治療してもらったほうがいいよ。ほんとうにセキュリティに神経をとがらせているプロは、ソース非公開ソフトのセキュリティを信頼したりなんかしない。かれらはそれを、つらい経験を通じて学びとってきたんだ。セキュリティというのは信頼性の一部だ。アルゴリズムにしてもその実装にしても、十分なピアレビュー（同業者による検査）を経たものだけが、安全なものとして信頼できるんだ。





