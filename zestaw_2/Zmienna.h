typedef struct myFloat {
  float data;
} myFloat;


int getInt(myFloat f)
{
    return (int)f.data;
}
