from sqlalchemy import create_engine
from timersim_model import Base
engine = create_engine(
    'postgresql+psycopg2://taste:tastedb@localhost/timersim', echo=False)
Base.metadata.create_all(engine)
