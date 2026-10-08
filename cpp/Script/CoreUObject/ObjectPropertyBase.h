// /Script/CoreUObject.ObjectPropertyBase
// Derives from: UProperty > UField > UObject
// size 0x78, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UObjectPropertyBase : public UProperty
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UClass * PropertyClass;  // 0x0070
};
