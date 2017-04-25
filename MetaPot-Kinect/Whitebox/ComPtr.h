
template<typename T>
class ComPtr
{
private:

    T* ptr;

public:

    ~ComPtr()
    {
        if ( ptr != nullptr ){
            ptr->Release();
            ptr = nullptr;
        }
    }

    T** operator & ()
    {
        return &ptr;
    }

    T* operator -> ()
    {
        return ptr;
    }

    operator T* ()
    {
        return ptr;
    }
};
