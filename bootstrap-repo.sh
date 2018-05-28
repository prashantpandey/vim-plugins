#!/bin/sh
sudo apt-get -y install curl vim git openssh-client openssh-server libssl-dev cscope ctags exuberant-ctags build-essential cmake libboost-all-dev libgnome2-bin tmux xclip subversion
sudo apt-get install texlive-full texmaker
mkdir code
mkdir paper
mkdir personal
cd code
git clone git@github.com:splatlab/kmercounting.git
git clone git@github.com:splatlab/countingqf.git
git clone git@github.com:splatlab/KMC.git
git clone git@github.com:prashantpandey/firehose.git
git clone git@github.com:splatlab/popcorning.git
git clone git@github.com:splatlab/debgr.git
git clone git@github.com:splatlab/coloreddbg.git
git clone git@github.com:splatlab/cqf.git
git clone git@github.com:splatlab/mantis.git
git clone git@github.com:splatlab/squeakr.git
git clone git@github.com:splatlab/wo-skiplist.git
git clone git@github.com:combine-lab/rainbowfish.git
git clone git@github.com:oscarlab/betrfs.git
git clone git@github.com:oscarlab/betrfs-private.git
git clone git@github.com:oscarlab/Be-Tree.git
git clone git@bitbucket.org:scalablecms/scalablecms.git
cd -
cd paper;
git clone git@github.com:splatlab/countingqf-paper.git
git clone git@github.com:splatlab/nsf-16-515-amqs.git
git clone git@github.com:splatlab/kmercounting-paper.git
git clone git@github.com:splatlab/efficientselect-paper.git
git clone git@github.com:combine-lab/mantis_paper.git
git clone git@github.com:combine-lab/rainbowfish-paper.git
git clone git@github.com:oscarlab/affine-model.git
git clone git@github.com:oscarlab/betrfs-papers.git
cd -
svn checkout  https://svn.cs.stonybrook.edu/repos/watermelon
cd -
cd personal;
git clone git@bitbucket.org:prashant_pandey/website.git
git clone git@bitbucket.org:prashant_pandey/personaldocs.git
git clone git@bitbucket.org:prashant_pandey/thesis.git
cd -



