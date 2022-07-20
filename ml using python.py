import numpy as np
import panda as pd 
import seaborn as sns 
 #data creation
np.array([10,20,40,80,90])
np.arange(1,10)
np.random.randint(1,100,10)
data=np.random.randint(1,100,(10,2))
#organize
pd.DataFrame(data)
pd.DataFrame(d=data, columns=['jan','Feb'])
df=pd.read_csv('regression.csv')
#data visualize
sns.scatterplot(data=df, x='x',y='y')
#Data Cleaning
df.isnull().sum()
#Data analysis with machine learning
#Linear Regression
#importing library sci-kit

from sklearn.linear_model import LinearRegression

 mymodel=LinearRegression()

 #training
mymodel.score(df[['x']],df['y'])


 #prediction
mymodel.predict(df[['x']])

#check model is right or not 
 mymodel.score(df[['x']],df['y'])


