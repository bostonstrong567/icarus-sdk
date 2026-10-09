// /Script/CoreUObject.ClassProperty
// Derives from: UObjectProperty > UObjectPropertyBase > UProperty > UField > UObject
// size 0x80, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UClassProperty : public UObjectProperty
{
public:
    UClass * MetaClass;  // 0x0078, not reflected
};
