###### 2022summer self practice
## *Machine Learning*
### - MNIST 手寫阿拉伯數字辨識

安裝完所有所需套件後
使用keras內建的MNIST手寫字符數據集
其中訓練集有60,000張28x28像素灰度圖像， 測試集則有10,000張
搭被OpenCV中KNN套件

###### 步驟如下
- 首先轉換資料格式及形狀
- 使用openCV內建KNN套件 設定參數 並開始訓練
- 訓練完後 儲存模型並使用測試集進行測試
- 準確率為 0.9688
- 將要辨識的黑白手寫阿拉伯數字置於鏡頭前
- 紅色框框上方將顯示辨識結果  
 [參考程式碼](https://github.com/cuitepoundcake/2022summer/blob/main/new_ju.ipynb)
![MNIST_KNN_AdobeExpress (1)](https://user-images.githubusercontent.com/109210243/179028969-ecadc25d-0188-452c-af8e-c4e64e95894b.gif)  

> ##### *心得*  
> 我認為其實對於新手而言最大的難題是了解以及安裝各個套件的部分，畢竟網路上已有許多程式資源可參考，然安裝還是得自行操作  
> 然而安裝完成也對於程式運作的整個進程熟悉後，後續就是要再加深對於各個套件的熟悉度，才能加以利用以訓練模型  

### - Titanic (my first Kaggle practice)
搜尋機器學習入門找到的第一個題目就是鐵達尼生存預測，覺得很有趣於是來試試  
test data裡面有各個乘客的不同基本資料，我先把一些較難以判斷的資訊刪掉後，以較為簡略的方式去訓練模型  
使用3種classification algorithms :  
○1.logistic regression ([code](https://github.com/cuitepoundcake/2022summer/blob/main/Titanic.ipynb))  
○2.naïve bayes ([code](https://github.com/cuitepoundcake/2022summer/blob/main/Titanic_NB.ipynb))  
○3.decision tree ([code](https://github.com/cuitepoundcake/2022summer/blob/main/Titanic_DecisionTree.ipynb))    

準確率如下表:
|type of algorithm | accuracy |
|------------------|----------|
|Logistic Regression|0.810055  |
|Naive Bayes |0.776536|
|Decision Tree |0.815642|  
由結果可知，以上述方式處理資料後，準確率最高的方式為使用Decision Tree  

上傳logistic regression至kaggle:  
> ![image](https://user-images.githubusercontent.com/109210243/179790582-f917495c-5483-4479-967c-85128c8e4280.png)  
準確率尚可但並不高，以後對機器學習更熟悉後會想更進一步思考該如何運用不同訊息去增加準確率  


---

## *1102 Algorithm*
#### Dinamic Programming
*0/1 Knapsack Problem*
> **question**  
> There are *n* programming assignments and *m* minutes until the deadline.
Each assignment has ![image](https://user-images.githubusercontent.com/109210243/179786110-7d8b1b61-9d2b-4004-bea5-fd6e172847e9.png)
 points, and it takes ![image](https://user-images.githubusercontent.com/109210243/179786241-22f1499f-6bc5-4e0e-b201-cfa981557b94.png)
 minutes continuously.
Find the maximum score that you can achieve.  
> - Input Format :   
> Input starts with two integers *n* and *m* Each of the following *n* lines contains two integers ![image](https://user-images.githubusercontent.com/109210243/179786148-e5e2fc91-dcef-469b-9b3b-e8eb4bedbbc6.png)
 and ![image](https://user-images.githubusercontent.com/109210243/179786255-d186df12-ddd4-4f87-93e9-6776e7da471c.png)  
> - Output Format :  
> Output the maximum score that you can achieve.  
- 我的作法 : 用 vector of vector 建立 table 來填表    
 <code>vector<vector<int>> table(n+1, vector<int> (time+1));
    for(int i=0; i<time+1; i++){  
        table[0][i] = 0;  
    }  
    for(int i=0; i<n+1; i++){  
        table[i][0] = 0;  
    }</code>  
  
- 典型的01背包背包就是填表格
 這也是我覺得DP最奇妙的部分
 單純看表格來理解的畫概念似乎很簡單  
 仔細去思索卻對於其能考量各種情況下的 optimal solution 而感到驚奇不已  
 我認為這就是 DP 此章節最大的魅力所在  
#### Graph
> **question**  
> Due to the impact of the epidemic, there have been so few plane flights that it may not be possible to get anywhere on the planet by plane alone. Please confirm if this problem exists.  
Suppose there are N cities and M routes, choose two cities *u* and *v* from N, and make *u* reach *v* through some routes, and *v* can also reach *u*, which means you can get anywhere by plane.  
> - Input Format :  
  There are some test cases.
The first line of each test case consists of two integers N and M, where N represents the number of cities and M represents the number of routes, if either N or M is 0, it means Finish.  
Then there are Ｍ routes, each line consisting of three integers *u*, *v*,  describing the status of the route.  
 *u*, *v* represent routes from *u* to *v*.  *d* stands for two-way or one-way, *d* is 1 for one-way, 2 for two-way.  
> - Output Format :  
  For each test case, of any two cities can reach each other, output 1, otherwise output 0.  
  
  
  
