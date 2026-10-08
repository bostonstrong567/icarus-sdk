// /Script/CoreUObject.BoolProperty
// Derives from: UProperty > UField > UObject
// size 0x78, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UBoolProperty : public UProperty
{
public:

    // Not reflected: the engine's scripting cannot see these.
    uint8 FieldSize;  // 0x0070
    uint8 ByteOffset;  // 0x0071
    uint8 ByteMask;  // 0x0072
    uint8 FieldMask;  // 0x0073
};
