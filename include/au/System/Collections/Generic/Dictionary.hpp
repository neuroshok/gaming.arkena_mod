//au/System/Collections/Generic/Dictionary
#pragma once
#include <ark/class.hpp>
#include <cs/array.hpp>
namespace System::Collections::Generic{ template <class...> struct IEqualityComparer; }
struct KeyCollection;
struct ValueCollection;
struct object;
#include <cs/string.hpp>
namespace System::Collections::Generic{ template <class...> struct IDictionary; }
namespace System::Runtime::Serialization{ struct SerializationInfo; }
#include <au/System/Runtime/Serialization/StreamingContext.hpp>
namespace System::Collections::Generic{ template <class...> struct ICollection; }
namespace System::Collections::Generic{ template <class...> struct IEnumerable; }
namespace System::Collections::Generic{ template <class...> struct KeyValuePair; }
struct Enumerator;
namespace System::Collections::Generic{ template <class...> struct IEnumerator; }
#include <au/System/Collections/Generic/InsertionBehavior.hpp>
namespace System{ struct Array; }
namespace System::Collections{ struct IEnumerator; }
namespace System::Collections{ struct ICollection; }
namespace System::Collections{ struct IDictionaryEnumerator; }


namespace System::Collections::Generic {
template <class TKey, class TValue>
struct Dictionary : ark::meta<Dictionary<TKey, TValue>>
{
ark_meta("System::Collections::Generic", "Dictionary", "");

    // Fields

    cs::array<int>* buckets; // 0x0
    cs::array<System::Collections::Generic::Dictionary_Entry<TKey, TValue>*>* entries; // 0x0
    int count; // 0x0
    int version; // 0x0
    int freeList; // 0x0
    int freeCount; // 0x0
    System::Collections::Generic::IEqualityComparer<TKey>* comparer; // 0x0
    System::Collections::Generic::Dictionary_KeyCollection<TKey, TValue>* keys; // 0x0
    System::Collections::Generic::Dictionary_ValueCollection<TKey, TValue>* values; // 0x0
    Dictionary* _syncRoot; // 0x0
    inline static constexpr const char* VersionName = "Version";

    inline static constexpr const char* HashSizeName = "HashSize";

    inline static constexpr const char* KeyValuePairsName = "KeyValuePairs";

    inline static constexpr const char* ComparerName = "Comparer";


    // Methods

    void ctor(); // 0x0 // public 
    void ctor1(int capacity); // 0x0 // public 
    void ctor2(System::Collections::Generic::IEqualityComparer<TKey>* comparer); // 0x0 // public 
    void ctor3(int capacity, System::Collections::Generic::IEqualityComparer<TKey>* comparer); // 0x0 // public 
    void ctor4(System::Collections::Generic::IDictionary<TKey, TValue>* dictionary); // 0x0 // public 
    void ctor5(System::Collections::Generic::IDictionary<TKey, TValue>* dictionary, System::Collections::Generic::IEqualityComparer<TKey>* comparer); // 0x0 // public 
    void ctor6(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context); // 0x0 // protected 
    int get_Count(); // 0x0 // public 
    System::Collections::Generic::Dictionary_KeyCollection<TKey, TValue>* get_Keys(); // 0x0 // public 
    System::Collections::Generic::ICollection<TKey>* SystemCollectionsGenericIDictionary_TKey,TValue_get_Keys(); // 0x0 // private 
    System::Collections::Generic::IEnumerable<TKey>* SystemCollectionsGenericIReadOnlyDictionary_TKey,TValue_get_Keys(); // 0x0 // private 
    System::Collections::Generic::Dictionary_ValueCollection<TKey, TValue>* get_Values(); // 0x0 // public 
    System::Collections::Generic::ICollection<TValue>* SystemCollectionsGenericIDictionary_TKey,TValue_get_Values(); // 0x0 // private 
    System::Collections::Generic::IEnumerable<TValue>* SystemCollectionsGenericIReadOnlyDictionary_TKey,TValue_get_Values(); // 0x0 // private 
    TValue get_Item(TKey key); // 0x0 // public 
    void set_Item(TKey key, TValue value); // 0x0 // public 
    void Add(TKey key, TValue value); // 0x0 // public 
    void SystemCollectionsGenericICollection_SystemCollectionsGenericKeyValuePair_TKey,TValue__Add(System::Collections::Generic::KeyValuePair<TKey, TValue>* keyValuePair); // 0x0 // private 
    bool SystemCollectionsGenericICollection_SystemCollectionsGenericKeyValuePair_TKey,TValue__Contains(System::Collections::Generic::KeyValuePair<TKey, TValue>* keyValuePair); // 0x0 // private 
    bool SystemCollectionsGenericICollection_SystemCollectionsGenericKeyValuePair_TKey,TValue__Remove(System::Collections::Generic::KeyValuePair<TKey, TValue>* keyValuePair); // 0x0 // private 
    void Clear(); // 0x0 // public 
    bool ContainsKey(TKey key); // 0x0 // public 
    bool ContainsValue(TValue value); // 0x0 // public 
    void CopyTo(cs::array<System::Collections::Generic::KeyValuePair<TKey, TValue>*>* array, int index); // 0x0 // private 
    System::Collections::Generic::Dictionary_Enumerator<TKey, TValue>* GetEnumerator(); // 0x0 // public 
    System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<TKey, TValue>>* SystemCollectionsGenericIEnumerable_SystemCollectionsGenericKeyValuePair_TKey,TValue__GetEnumerator(); // 0x0 // private 
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context); // 0x0 // public virtual 
    int FindEntry(TKey key); // 0x0 // private 
    void Initialize(int capacity); // 0x0 // private 
    bool TryInsert(TKey key, TValue value, System::Collections::Generic::InsertionBehavior behavior); // 0x0 // private 
    void OnDeserialization(Dictionary* sender); // 0x0 // public virtual 
    void Resize(); // 0x0 // private 
    void Resize1(int newSize, bool forceNewHashCodes); // 0x0 // private 
    bool Remove(TKey key); // 0x0 // public 
    bool TryGetValue(TKey key, /*out*/ TValue value); // 0x0 // public 
    bool TryAdd(TKey key, TValue value); // 0x0 // public 
    bool SystemCollectionsGenericICollection_SystemCollectionsGenericKeyValuePair_TKey,TValue__get_IsReadOnly(); // 0x0 // private 
    void SystemCollectionsGenericICollection_SystemCollectionsGenericKeyValuePair_TKey,TValue__CopyTo(cs::array<System::Collections::Generic::KeyValuePair<TKey, TValue>*>* array, int index); // 0x0 // private 
    void SystemCollectionsICollectionCopyTo(System::Array* array, int index); // 0x0 // private 
    System::Collections::IEnumerator* SystemCollectionsIEnumerableGetEnumerator(); // 0x0 // private 
    bool SystemCollectionsICollectionget_IsSynchronized(); // 0x0 // private 
    object SystemCollectionsICollectionget_SyncRoot(); // 0x0 // private 
    bool SystemCollectionsIDictionaryget_IsFixedSize(); // 0x0 // private 
    bool SystemCollectionsIDictionaryget_IsReadOnly(); // 0x0 // private 
    System::Collections::ICollection* SystemCollectionsIDictionaryget_Keys(); // 0x0 // private 
    System::Collections::ICollection* SystemCollectionsIDictionaryget_Values(); // 0x0 // private 
    object SystemCollectionsIDictionaryget_Item(Dictionary* key); // 0x0 // private 
    void SystemCollectionsIDictionaryset_Item(Dictionary* key, Dictionary* value); // 0x0 // private 
    bool IsCompatibleKey(Dictionary* key); // 0x0 // private static 
    void SystemCollectionsIDictionaryAdd(Dictionary* key, Dictionary* value); // 0x0 // private 
    bool SystemCollectionsIDictionaryContains(Dictionary* key); // 0x0 // private 
    System::Collections::IDictionaryEnumerator* SystemCollectionsIDictionaryGetEnumerator(); // 0x0 // private 
    void SystemCollectionsIDictionaryRemove(Dictionary* key); // 0x0 // private 

};

} // ns



namespace ark::method_info 
{
} // ark::method_info