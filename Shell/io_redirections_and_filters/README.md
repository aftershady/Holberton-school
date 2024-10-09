## io redirections and files

# this directory contain executables scripts :

0-hello_world: echo "Hello, World"
print string

1-confused_smiley: echo '"(Ôo)'\'
printf string with special characters

2-hellofile: cat /etc/passwd
printf passwd file text

3-twofiles: cat /etc/passwd /etc/hosts
printf passwd file text & hots file text

4-lastlines: tail /etc/passwd
print the 10 last lines of passwd file

5-firstlines: head /etc/passwd
print the 10 first lines of passwd file

6-third_line: cat iacta | head -n 3 | tail -n 1
print the 3 first lines and last line of iacta file

7-file: echo "Best School" > \\\*\\\\"'\"Best School\"\\'"\\\\\*\$\\\?\\\*\\\*\\\*\\\*\\\*\:\)
print

8-cwd_state: ls -la > ls_cwd_content
put ls -a in the file script ls_cwd_content

9-duplicate_last_line:  cat iacta | tail -n 1 >> iacta
take the last line and add it to the end of iacta file


10-no_more_js: find . -type f -name  "*.js" -delete
delete all .js files


11-directories : find . -type d ! -name . ! -name .. | wc -l


12-newest_files: find . -type f | ls -1t | head -10


13-unique : cat | sort |uniq -u


14-findthatword : grep root /etc/passwd


15-countthatword: grep bin /etc/passwd | wc -l


16-whatsnext: grep -A3 root /etc/passwd


17-hidethisword: grep -v bin /etc/passwd


18-letteronly: grep a /etc/ssh/sshd_config


19-AZ :tr "Ac" "Ze"


20-hiago: tr -d "cC"


21-reverse: rev


22-users_and_homes: cut -d: -f 1,6 /etc/passwd | sort

