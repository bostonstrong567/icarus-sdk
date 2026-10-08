// /Script/CoreUObject.PropertyWrapper
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealType.h

UCLASS()
class UPropertyWrapper : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FProperty * DestProperty;  // 0x0028, protected
};
