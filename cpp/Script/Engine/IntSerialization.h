// /Script/Engine.IntSerialization
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/IntSerialization.h

UCLASS()
class UIntSerialization : public UObject
{
public:
    UPROPERTY() uint16 UnsignedInt16Variable;  // 0x0028, size 0x2
    UPROPERTY() uint32 UnsignedInt32Variable;  // 0x002C, size 0x4
    UPROPERTY() uint64 UnsignedInt64Variable;  // 0x0030, size 0x8
    UPROPERTY() int8 SignedInt8Variable;  // 0x0038, size 0x1
    UPROPERTY() int16 SignedInt16Variable;  // 0x003A, size 0x2
    UPROPERTY() int64 SignedInt64Variable;  // 0x0040, size 0x8
    UPROPERTY() uint8 UnsignedInt8Variable;  // 0x0048, size 0x1
    UPROPERTY() int32 SignedInt32Variable;  // 0x004C, size 0x4
};
