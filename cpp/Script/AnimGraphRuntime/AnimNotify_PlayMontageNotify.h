// /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Derives from: UAnimNotify > UObject
// size 0x40, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNotifies/AnimNotify_PlayMontageNotify.h

UCLASS(Const, EditInlineNew)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName NotifyName;  // 0x0038, size 0x8
};
