Muhammet Burak Göleç
S_ID = 200316027


# Uyarlamış Olduğum Kodun Kaynakları
	https://github.com/CoffeeBeforeArch/cpp_data_structures/tree/master/algorithms/graph_algorithms/bfs
	https://github.com/CoffeeBeforeArch/cpp_data_structures/tree/master/algorithms/graph_algorithms/dfs


# Araştırma ve Algoritmayı Anlamak İçin Kaynaklar
	https://github.com/bloominstituteoftechnology/Graphs
			
	Farklarını Anlatıyor
	https://www.geeksforgeeks.org/difference-between-bfs-and-dfs/ 

# Python
	https://github.com/sidjayas31/Breadth-First-Search-Depth-First-Search-/
	https://github.com/graphoarty/bfs/blob/master/bfs.py

# Java
	https://github.com/rahul1947/SP08-Depth-First-Search
		
	2 Şehir arasında rota bulmaya uyarlanmış bir örneği
	https://github.com/vivekmani28/Graph-algorithms-implementation 

# Cpp Dilinde yazılmış ,Depth-first Search algoritması ile rastgele labirent oluşturan bir örnek
	Maze Generator With Depth-First Search Algorithms
	Aynı algoritma ile çözümede ulaşıla bilir. 
	https://github.com/corporateshark/random-maze-generator 

# Graph Sözlü Çözüm
	Depth-First Search
		Node S
		S den başlarız, ziyater edilmemiş yer var S Stac'e atılır ve ziyaret edildi olarak işaretlenir
		Stack('S')
		Map('S')
		Gidilebilecek farklı rotalar('1','2')

		Node 1
		1'e gittik diyelim , 1' i Stack'e attık Ziyaret edilmemiş yerler var
		Stack('S','1')
		Map('S,1')
		Gidilebilecek farklı rotalar('2','3',''4)

		Node 2
		2'e gittik, 2 Stack de Ziyaret edilmemiş yerler var
		Stack('S','1','2')
		Map('S,1,2')
		Gidilebilecek farklı rotalar('3')


		Node 3
		3'e gittik, 3 Stack de Ziyaret edilmemiş yerler var
		Stack('S','1','2','3')
		Map('S,1,2,3')
		Gidilebilecek farklı rotalar('4,'6','5')


		Node 4
		4'e gittik, 4 Stack de Ziyaret edilmemiş yerler var
		Stack('S','1','2','3','4')
		Map('S,1,2,3,4')
		Gidilebilecek farklı rotalar('7','6')


		Node 6
		6'e gittik, 6 Stack de Ziyaret edilmemiş yerler var
		Stack('S','1','2','3','4','6')
		Map('S,1,2,3,4,6')
		Gidilebilecek farklı rotalar('5')

		Node 5
		5'e gittik, Ziyaret edilebilecek yer yok, 5 stack e atılmadı 
		Stack('S','1','2','3','4','6')
		Map('S,1,2,3,4,6,5')
		Gidilebilecek farklı rotalar("Geriye Doğru Stack çıkarılacak")

		Node 6
		6 ya döndük ,Ziyaret edilebilecek yer yok, 6 stack den atıldı 
		Stack('S','1','2','3','4')
		Map('S,1,2,3,4,6')
		Gidilebilecek farklı rotalar('Geriye Doğru Stack çıkarılacak')

		Node 4
		4'e gittik, 4 Stack de Ziyaret edilmemiş yerler var
		Stack('S','1','2','3','4')
		Map('S,1,2,3,4,6')
		Gidilebilecek farklı rotalar('7')

		Node 7
		7'e gittik, Ziyaret edilebilecek yer yok, 7 stack e atılmadı
		Stack('S','1','2','3','4')
		Map('S,1,2,3,4,6,7')
		Gidilebilecek farklı rotalar('Geriye Doğru Stack çıkarılacak')

		Node 4
		4'e gittik, Ziyaret edilebilecek yer yok, 4 stack den atıldı
		Stack('S','1','2','3')
		Map('S,1,2,3,4,6,7')
		Gidilebilecek farklı rotalar('Geriye Doğru Stack çıkarılacak')

		Node 3
		3'e gittik, Ziyaret edilebilecek yer yok, 3 stack den atıldı
		Stack('S','1','2')
		Map('S,1,2,3,4,6,7')
		Gidilebilecek farklı rotalar('Geriye Doğru Stack çıkarılacak')

		Node 2
		2'e gittik, Ziyaret edilebilecek yer yok, 2 stack den atıldı
		Stack('S','1')
		Map('S,1,2,3,4,6,7')
		Gidilebilecek farklı rotalar('Geriye Doğru Stack çıkarılacak')

		Node 1
		1'e gittik, Ziyaret edilebilecek yer yok, 1 stack den atıldı
		Stack('S')
		Map('S,1,2,3,4,6,7')
		Gidilebilecek farklı rotalar('Geriye Doğru Stack çıkarılacak')

		Node S
		S'e gittik, Ziyaret edilebilecek yer yok, S Stack den çıkarıldı Stack boş 
		Stack()
		Map('S,1,2,3,4,6,7')
		Stack boş Algoritma Tamamlandı


	Breadth-First Search
		Node S
		S den başlarız, ziyater edilmemiş yer var S Kuyruğa atılır ve S Kuyruğa atıldı
		Map('S')
		Gidilebilecek farklı rotalar('1','2')

		Node 1
		1'e gittik , S ziyater edilmemiş yer var  Kuyruğa atılır ve 1 Kuyruğa atıldı
		Kuyruk ('S','1')
		Map('S,1')
		Gidilebilecek farklı rotalar(geri dön ve gidilmemiş diğer yoları tamamla ,S'in)

		Node 2
		2'e gittik , S de ziyater edilmemiş yer yok Kuyrutan S çıkarılır ve 2 Kuyruğa atıldı
		Map('S,1,2')
		Gidilebilecek farklı rotalar(S'in Gidelecek yeri yok, kuyruktaki sayı 1, 1 in gidilecek yerlerine git '3','4')

		Node 3
		3'e gittik , 1  de ziyater edilmemiş yer var ve 3 Kuyruğa atıldı
		Kuyruk ('1','2','3')
		Map('S,1,2','3')
		Gidilebilecek farklı rotalar(geri dön ve gidilmemiş diğer yoları tamamla ,1'in gidilecek yerlerine git '4')

		Node 4
		4'e gittik , 1 de ziyater edilmemiş yer yok Kuyrutan 1 çıkarılır ve 4 Kuyruğa atıldı
		Kuyruk (2','3','4')
		Map('S,1,2,3,4')
		Gidilebilecek farklı rotalar(1'in Gidelecek yeri yok, kuyruktaki sayı 2,)
		
		2 de ziyaret edilecek yer yok Kuyruk düşer
		Kuyruk ('3','4')
		Map('S,1,2,3,4')
		Gidilebilecek farklı rotalar(2'in Gidelecek yeri yok, kuyruktaki sayı 3,gidilecek yerlerine git '5','6')


		Node 5
		5'e gittik, 3 de ziyaret edilmemiş yerler var ve 5 kuyruğa atıldı
		Kuyruk ('3','4','5')
		Map('S,1,2,3,4,5')
		Gidilebilecek farklı rotalar(geri dön ve gidilmemiş diğer yoları tamamla ,3'ün, gidilecek yerlerine git '6')

		Node 6
		6'e gittik, 3 de ziyaret edilmemiş yer yok ve 6 Kuyrupa atıldı
		Kuyruk ('4','5','6')
		Map('S,1,2,3,4,5,6')
		Gidilebilecek farklı rotalar(3'in Gidelecek yeri yok, kuyruktaki sayı 4, gidilecek yerlerine git '7')

		Node 7
		7'e gittik, 4 de ziyaret edilmemiş yer yok ve 7 Kuyrupa atıldı
		Kuyruk ('5','6','7')
		Map('S,1,2,3,4,5,6,7')
		Gidilebilecek farklı rotalar(4'in Gidelecek yeri yok, kuyruktaki sayı 5,)

		5 de ziyaret edilmemiş yer yok 
		Kuyruk ('6','7')
		Gidilebilecek farklı rotalar(5'in Gidelecek yeri yok, kuyruktaki sayı 6,)

		6 de ziyaret edilmemiş yer yok 
		Kuyruk ('7')
		Gidilebilecek farklı rotalar(6'in Gidelecek yeri yok, kuyruktaki sayı 7,)

		7 de ziyaret edilmemiş yer yok 
		Kuyruk ()
		Gidilebilecek farklı rotalar(7'in Gidelecek yeri yok, kuyruk boş)

		Map('S,1,2,3,4,5,6,7')
		Program bitti




