// /Script/CoreUObject.SoftClassProperty
// Derives from: USoftObjectProperty > UObjectPropertyBase > UProperty > UField > UObject
// size 0x80, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class USoftClassProperty : public USoftObjectProperty
{
public:
    UClass * MetaClass;  // 0x0078, not reflected
};
