## permission

# this directory contain executables scripts such as :

0-iam_betty :su betty
1-who_am_i :  whoami
2-groups : groups
3-new_owner : chown betty hello
4-empty : touch hello
5-execute : chmod u+x hello
6-multiple_permissions : chmod ug+x,o+r hello
7-everybody : chmod ugo+x hello
8-James_Bond : chmod 007 hello
9-John_Doe: chmod 753 hello
10-mirror_permissions: chmod --reference=olleh hello
11-directories_permissions: chmod a+x */
12-directory_permissions: mkdir -m 751 my_dir
13-change_group: chown root:school hello
14-change_owner_and_group: chown vincent:staff *
15-symbolic_link_permissions: chown -h vincent:staff _hello
16-if_only: chown --from=guillaume vincent hello
