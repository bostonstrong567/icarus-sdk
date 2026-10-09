// /Script/Serialization.StructSerializerObjectTestStruct
// size 0xA0, declared in Engine/Source/Runtime/Serialization/Private/Tests/StructSerializerTestTypes.h

USTRUCT()
struct FStructSerializerObjectTestStruct
{
public:
    UPROPERTY() TSubclassOf<UObject> Class;  // 0x0000, size 0x8
    UPROPERTY() TSubclassOf<UMetaData> SubClass;  // 0x0008, size 0x8
    UPROPERTY() TSoftClassPtr<UMetaData> SoftClass;  // 0x0010, size 0x28
    UPROPERTY() UObject* Object;  // 0x0038, size 0x8
    UPROPERTY() TWeakObjectPtr<UMetaData> WeakObject;  // 0x0040, size 0x8
    UPROPERTY() TSoftObjectPtr<UMetaData> SoftObject;  // 0x0048, size 0x28
    UPROPERTY() FSoftClassPath ClassPath;  // 0x0070, size 0x18
    UPROPERTY() FSoftObjectPath ObjectPath;  // 0x0088, size 0x18
};
