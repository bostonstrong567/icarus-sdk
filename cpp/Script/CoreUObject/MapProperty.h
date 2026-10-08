// /Script/CoreUObject.MapProperty
// Derives from: UProperty > UField > UObject
// size 0x98, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UMapProperty : public UProperty
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UProperty * KeyProp;  // 0x0070
    UProperty * ValueProp;  // 0x0078
    FScriptMapLayout MapLayout;  // 0x0080
};
