// /Script/Serialization.StructSerializerArrayTestStruct
// size 0x60, declared in Engine/Source/Runtime/Serialization/Private/Tests/StructSerializerTestTypes.h

USTRUCT()
struct FStructSerializerArrayTestStruct
{
    UPROPERTY() TArray<int32> Int32Array;  // 0x0000, size 0x10
    UPROPERTY() TArray<uint8> ByteArray;  // 0x0010, size 0x10
    UPROPERTY() int32 StaticSingleElement;  // 0x0020, size 0x4
    UPROPERTY() int32 StaticInt32Array;  // 0x0024, size 0x4
    UPROPERTY() float StaticFloatArray;  // 0x0030, size 0x4
    UPROPERTY() TArray<FVector> VectorArray;  // 0x0040, size 0x10
    UPROPERTY() TArray<FStructSerializerBuiltinTestStruct> StructArray;  // 0x0050, size 0x10
};
