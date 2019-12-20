

class TV {
private:
    char *producator;
    char *model;
    float dim[3];
    float diag;
public:
    TV();
    TV(char *,char *, float [], float);
    ~TV();
    void modif(char*, char*, float[],float);
    void modif(const TV&);
    void afis() const;
    char *getProd()const;
    float getDiag()const;

};
