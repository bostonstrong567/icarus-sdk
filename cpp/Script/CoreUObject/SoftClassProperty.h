// /Script/CoreUObject.SoftClassProperty
// Derives from: USoftObjectProperty > UObjectPropertyBase > UProperty > UField > UObject
// size 0x80, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class USoftClassProperty : public USoftObjectProperty
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UClass * MetaClass;  // 0x0078
};
