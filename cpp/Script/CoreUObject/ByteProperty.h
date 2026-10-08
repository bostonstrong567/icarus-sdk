// /Script/CoreUObject.ByteProperty
// Derives from: UNumericProperty > UProperty > UField > UObject
// size 0x78, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UByteProperty : public UNumericProperty
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UEnum * Enum;  // 0x0070
};
