// /Script/Serialization.StructSerializerByteArray
// size 0x38, declared in Engine/Source/Runtime/Serialization/Private/Tests/StructSerializerTestTypes.h

USTRUCT()
struct FStructSerializerByteArray
{
    UPROPERTY() int32 Dummy1;  // 0x0000, size 0x4
    UPROPERTY() TArray<uint8> ByteArray;  // 0x0008, size 0x10
    UPROPERTY() int32 Dummy2;  // 0x0018, size 0x4
    UPROPERTY() TArray<int8> Int8Array;  // 0x0020, size 0x10
    UPROPERTY() int32 Dummy3;  // 0x0030, size 0x4
};
