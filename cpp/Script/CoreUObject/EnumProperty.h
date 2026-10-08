// /Script/CoreUObject.EnumProperty
// Derives from: UProperty > UField > UObject
// size 0x80, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UEnumProperty : public UProperty
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UNumericProperty * UnderlyingProp;  // 0x0070
    UEnum * Enum;  // 0x0078
};
