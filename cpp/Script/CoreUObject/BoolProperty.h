// /Script/CoreUObject.BoolProperty
// Derives from: UProperty > UField > UObject
// size 0x78, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UBoolProperty : public UProperty
{
public:
    uint8 FieldSize;  // 0x0070, not reflected
    uint8 ByteOffset;  // 0x0071, not reflected
    uint8 ByteMask;  // 0x0072, not reflected
    uint8 FieldMask;  // 0x0073, not reflected
};
