#!/bin/sh
sudo apt-get -y install curl vim git openssh-client openssh-server libssl-dev cscope ctags exuberant-ctags build-essential cmake libboost-all-dev libgnome2-bin tmux xclip subversion libbz2-dev net-tools pdftk liblzma-dev google-perftools libgoogle-perftools-dev protobuf-compiler
sudo apt-get install texlive-full texmaker
mkdir ~/bin
scp ppandey@ocean.compbio.cs.cmu.edu:/opt/local/bin/git-repo ~/bin
chmod a+x ~/bin/git-repo
mkdir code
mkdir paper
mkdir personal
cd code
git clone git@github.com:splatlab/kmercounting.git
git clone git@github.com:splatlab/countingqf.git
#git clone git@github.com:splatlab/KMC.git
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
git clone git@github.com:splatlab/iceberghashtable.git
git clone git@bitbucket.org:scalablecms/scalablecms.git
git clone git@bitbucket.org:prashant_pandey/metagnn.git
git clone git@bitbucket.org:prashant_pandey/skewgraphstore.git
git repo clone ppandey@ocean.compbio.cs.cmu.edu:variantstore
git repo clone ppandey@ocean.compbio.cs.cmu.edu:lshaligntests
cd -
cd paper;
git clone git@github.com:splatlab/countingqf-paper.git
#git clone git@github.com:splatlab/nsf-16-515-amqs.git
git clone git@github.com:splatlab/kmercounting-paper.git
git clone git@github.com:splatlab/efficientselect-paper.git
git clone git@github.com:combine-lab/mantis_paper.git
git clone git@github.com:combine-lab/rainbowfish-paper.git
git clone git@github.com:oscarlab/affine-model.git
git clone git@github.com:oscarlab/betrfs-papers.git
git clone git@github.com:prashantpandey/metagnn-paper.git
git clone git@github.com:itshelenxu/gc-paper.git
git repo clone ppandey@ocean.compbio.cs.cmu.edu:variantstorepaper
git repo clone ppandey@ocean.compbio.cs.cmu.edu:lshalign
svn checkout https://svn01.cs.stonybrook.edu/svn/watermelon
cd -
cd personal;
git clone git@bitbucket.org:prashant_pandey/website.git
git clone git@bitbucket.org:prashant_pandey/personaldocs.git
git clone git@bitbucket.org:prashant_pandey/thesis.git
git clone git@github.com:prashantpandey/prashantpandey.github.io.git
git clone git@github.com:prashantpandey/academic-kickstart.git
cd -

