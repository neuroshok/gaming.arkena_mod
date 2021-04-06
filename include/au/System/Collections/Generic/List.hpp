//au/System/Collections/Generic/List
#pragma once
#include <ark/class.hpp>
#include <cs/array.hpp>
struct object;
namespace System::Collections::Generic{ template <class...> struct IEnumerable; }
namespace System::Collections::ObjectModel{ template <class...> struct ReadOnlyCollection; }
namespace System{ struct Array; }
namespace System{ template <class...> struct Predicate; }
namespace System{ template <class...> struct Action; }
struct Enumerator;
namespace System::Collections::Generic{ template <class...> struct IEnumerator; }
namespace System::Collections{ struct IEnumerator; }
namespace System::Collections::Generic{ template <class...> struct IComparer; }
namespace System{ template <class...> struct Comparison; }


namespace System::Collections::Generic {
template <class T>
struct List : ark::meta<List<T>, il2cpp::Il2CppObject>
{
ark_meta("System::Collections::Generic", "List", "");

    // Fields

    inline static constexpr int _defaultCapacity = 4;

    cs::array<T>* _items; // 0x0
    int _size; // 0x0
    int _version; // 0x0
    List* _syncRoot; // 0x0
    static cs::array<T>* _emptyArray(); // 0x0

    // Methods

    void ctor(); // 0x0 // public 
    void ctor1(int capacity); // 0x0 // public 
    void ctor2(System::Collections::Generic::IEnumerable<T>* collection); // 0x0 // public 
    int get_Capacity(); // 0x0 // public 
    void set_Capacity(int value); // 0x0 // public 
    int get_Count(); // 0x0 // public 
    bool SystemCollectionsIListget_IsFixedSize(); // 0x0 // private 
    bool SystemCollectionsGenericICollection_T_get_IsReadOnly(); // 0x0 // private 
    bool SystemCollectionsIListget_IsReadOnly(); // 0x0 // private 
    bool SystemCollectionsICollectionget_IsSynchronized(); // 0x0 // private 
    object SystemCollectionsICollectionget_SyncRoot(); // 0x0 // private 
    T get_Item(int index); // 0x0 // public 
    void set_Item(int index, T value); // 0x0 // public 
    bool IsCompatibleObject(List* value); // 0x0 // private static 
    object SystemCollectionsIListget_Item(int index); // 0x0 // private 
    void SystemCollectionsIListset_Item(int index, List* value); // 0x0 // private 
    void Add(T item); // 0x0 // public 
    int SystemCollectionsIListAdd(List* item); // 0x0 // private 
    void AddRange(System::Collections::Generic::IEnumerable<T>* collection); // 0x0 // public 
    System::Collections::ObjectModel::ReadOnlyCollection<T>* AsReadOnly(); // 0x0 // public 
    void Clear(); // 0x0 // public 
    bool Contains(T item); // 0x0 // public 
    bool SystemCollectionsIListContains(List* item); // 0x0 // private 
    void CopyTo(cs::array<T>* array); // 0x0 // public 
    void SystemCollectionsICollectionCopyTo(System::Array* array, int arrayIndex); // 0x0 // private 
    void CopyTo1(int index, cs::array<T>* array, int arrayIndex, int count); // 0x0 // public 
    void CopyTo2(cs::array<T>* array, int arrayIndex); // 0x0 // public 
    void EnsureCapacity(int min); // 0x0 // private 
    T Find(System::Predicate<T>* match); // 0x0 // public 
    int FindIndex(System::Predicate<T>* match); // 0x0 // public 
    int FindIndex1(int startIndex, int count, System::Predicate<T>* match); // 0x0 // public 
    void ForEach(int /* System::Action<T>*/ action); // 0x0 // public
    void* GetEnumerator(); // 0x0 // public
    System::Collections::Generic::IEnumerator<T>* SystemCollectionsGenericIEnumerable_T_GetEnumerator(); // 0x0 // private 
    System::Collections::IEnumerator* SystemCollectionsIEnumerableGetEnumerator(); // 0x0 // private 
    int IndexOf(T item); // 0x0 // public 
    int SystemCollectionsIListIndexOf(List* item); // 0x0 // private 
    void Insert(int index, T item); // 0x0 // public 
    void SystemCollectionsIListInsert(int index, List* item); // 0x0 // private 
    void InsertRange(int index, System::Collections::Generic::IEnumerable<T>* collection); // 0x0 // public 
    bool Remove(T item); // 0x0 // public 
    void SystemCollectionsIListRemove(List* item); // 0x0 // private 
    int RemoveAll(System::Predicate<T>* match); // 0x0 // public 
    void RemoveAt(int index); // 0x0 // public 
    void RemoveRange(int index, int count); // 0x0 // public 
    void Reverse(); // 0x0 // public 
    void Reverse1(int index, int count); // 0x0 // public 
    void Sort(); // 0x0 // public 
    void Sort1(System::Collections::Generic::IComparer<T>* comparer); // 0x0 // public 
    void Sort2(int index, int count, System::Collections::Generic::IComparer<T>* comparer); // 0x0 // public 
    void Sort3(System::Comparison<T>* comparison); // 0x0 // public 
    cs::array<T>* ToArray(); // 0x0 // public 
    void TrimExcess(); // 0x0 // public 
    void cctor(); // 0x0 // private static 

};

} // ns



namespace ark::method_info 
{
} // ark::method_info