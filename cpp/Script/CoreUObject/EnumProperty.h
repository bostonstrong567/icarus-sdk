// /Script/CoreUObject.EnumProperty
// Derives from: UProperty > UField > UObject
// size 0x80, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UEnumProperty : public UProperty
{
public:
    UNumericProperty * UnderlyingProp;  // 0x0070, not reflected
    UEnum * Enum;  // 0x0078, not reflected
};
