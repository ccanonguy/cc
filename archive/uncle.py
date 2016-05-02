t = int(input())

for i in range(t) :
	n = int(input())
	playlist = input().split()
	uncle = int(input())
	song = playlist[uncle - 1]
	playlist.sort()
	print (int(playlist.index(song) + 1))
