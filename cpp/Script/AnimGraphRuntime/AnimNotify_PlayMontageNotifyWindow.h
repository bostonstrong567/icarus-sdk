// /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Derives from: UAnimNotifyState > UObject
// size 0x38, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNotifies/AnimNotify_PlayMontageNotify.h

UCLASS(Const, EditInlineNew)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName NotifyName;  // 0x0030, size 0x8
};
