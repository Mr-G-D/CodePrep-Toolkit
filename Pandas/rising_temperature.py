import pandas as pd
import datetime as dt

def rising_temperature(df: pd.DataFrame) -> pd.DataFrame:
    df = df.sort_values(by=["recordDate"])
    df['diff'] = df['temperature'].diff()
    df['dated'] = df['recordDate'].diff().dt.days
    return df[(df["diff"] > 0) & (df["dated"] == 1)][["id"]]