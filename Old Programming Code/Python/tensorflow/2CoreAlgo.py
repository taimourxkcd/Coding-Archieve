import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from IPython.display import clear_output
from six.moves import urllib

import tensorflow.compat.v2.feature_column as fc

import tensorflow as tf 

#load dataset
dftrain = pd.read_csv('https://storage.googleapis.com/tf-datasets/titanic/train.csv') #training data 
dfeval = pd.read_csv('https://storage.googleapis.com/tf-datasets/titanic/eval.csv') #testing data
# prin  t(dftrain.head())
y_train = dftrain.pop('survived')
y_eval = dfeval.pop('survived')
# (dftrain.head()) 
# print(y_train)
# print(dftrain["age"])
# print(dftrain.loc[0], y_train.loc[0])


# dftrain.head()
# dftrain.describe()
# dftrain.shape
# print(y_train.head())

# dftrain.age.hist(bins=20)
# dftrain.sex.value_counts().plot(kind='barh')
# dftrain['class'].value_counts().plot(kind='barh')
pd.concat([dftrain, y_train], axis=1).groupby('sex').survived.mean().plot(kind='barh').sex_xlabel('% survive') # does not work 




dftrain = pd.read_csv('https://storage.googleapis.com/tf-datasets/titanic/train.csv') #training data 
dfeval = pd.read_csv('https://storage.googleapis.com/tf-datasets/titanic/eval.csv') #testing data# prin  t(dftrain.head())
y_train = dftrain.pop('survived')
y_eval = dfeval.pop('survived')

CATEGORICAL_COLUMNS = ['sex', 'n_siblings_spouses', 'parch', 'class', 'deck', 'embark_town', 'alone']
NUMERIC_COLUMNS = ['age', 'fare']

feature_columns = []
for feature_name in CATEGORICAL_COLUMNS:
  vocabulary = dftrain[feature_name].unique()
  feature_columns.append(tf.feature_column.numeric_column(feature_name, dtype=(tf.float32)))
for feature_name in NUMERIC_COLUMNS:
  feature_columns.append(tf.feature_column.numeric_column(feature_name, dtype=tf.float32))

print(feature_columns)


def make_input_fn(data_df, label_df, num_epocs=10, shuffle=True, batch_size=32):
  def input_function():
    ds = tf.data.Dataset.from_tensor_slices(dict(data_df), label_df)
    if shuffle:
      ds = ds.shuffle(1000)
    ds = ds.batch(batch_size).repeat(num_epocs)
    return ds
  return input_function 

train_input_fn = make_input_fn(dftrain, y_train)
eval_input_fn = make_input_fn(dfeval, y_eval, num_epocs=1, shuffle=False)
train_input_fn()

linear_est = tf.estimator.LinearClassifier(feature_columns=feature_columns)

linear_est.train(train_input_fn)
result = linear_est.evaluate(eval_input_fn)


clear_output()
print(result['accuracy'])