// /Script/CoreUObject.SetProperty
// Derives from: UProperty > UField > UObject
// size 0x90, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class USetProperty : public UProperty
{
public:
    UProperty * ElementProp;  // 0x0070, not reflected
    FScriptSetLayout SetLayout;  // 0x0078, not reflected
};
