#!/bin/sh
sudo apt-get -y install vim git openssh-client openssh-server libssl-dev cscope ctags exuberant-ctags build-essential cmake libboost-all-dev libgnome2-bin tmux
mkdir code
mkdir paper
cd code
git clone git@github.com:splatlab/kmercounting.git
git clone git@github.com:splatlab/countingqf.git
git clone git@github.com:splatlab/KMC.git
git clone git@github.com:prashantpandey/firehose.git
git clone git@github.com:splatlab/wo-skiplist.git
cd -
cd paper;
git clone git@github.com:splatlab/countingqf-paper.git
git clone git@github.com:splatlab/nsf-16-515-amqs.git
git clone git@github.com:splatlab/kmercounting-paper.git
cd -

