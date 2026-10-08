// /Script/CoreUObject.SetProperty
// Derives from: UProperty > UField > UObject
// size 0x90, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class USetProperty : public UProperty
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UProperty * ElementProp;  // 0x0070
    FScriptSetLayout SetLayout;  // 0x0078
};
