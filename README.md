###### 2022summer self practice
##### Machine Learning
###### MNIST 手寫阿拉伯數字辨識
嘗試使用兩個不同演算法
1.CNN
2.KNN

安裝完所有所需套件後
使用keras內建的MNIST手寫字符數據集
其中訓練集有60,000張28x28像素灰度圖像， 測試集則有10,000張

###### 步驟如下
- 首先轉換資料格式集型態
- 使用openCV內建KNN套件 設定參數 並開始訓練
- 訓練完後 儲存模型並使用測試集進行測試
- 準確率為 0.9688
- 將要辨識的黑白手寫阿拉伯數字至於鏡頭前
- 紅色框框上方將顯示辨識結果
- ![MNIST_KNN_AdobeExpress (1)](https://user-images.githubusercontent.com/109210243/179028969-ecadc25d-0188-452c-af8e-c4e64e95894b.gif)
