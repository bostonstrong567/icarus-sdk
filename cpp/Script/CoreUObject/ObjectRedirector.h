// /Script/CoreUObject.ObjectRedirector
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/ObjectRedirector.h

UCLASS()
class UObjectRedirector : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UObject * DestinationObject;  // 0x0028
};
