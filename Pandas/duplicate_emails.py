import pandas as pd

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    df = person["email"].value_counts()
    df = pd.DataFrame({"Email": df.index, "count": df.values})
    df = df[df["count"] > 1]
    return pd.DataFrame(df["Email"])