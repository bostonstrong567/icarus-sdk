// /Script/MotionWarping.RootMotionModifier
// Derives from: UObject
// size 0xC0, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/RootMotionModifier.h

UCLASS(Abstract, EditInlineNew)
class URootMotionModifier : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadOnly) TWeakObjectPtr<UAnimSequenceBase> Animation;  // 0x0028, size 0x8
    UPROPERTY(BlueprintReadOnly) float StartTime;  // 0x0030, size 0x4
    UPROPERTY(BlueprintReadOnly) float EndTime;  // 0x0034, size 0x4
    UPROPERTY(BlueprintReadOnly) float PreviousPosition;  // 0x0038, size 0x4
    UPROPERTY(BlueprintReadOnly) float CurrentPosition;  // 0x003C, size 0x4
    UPROPERTY(BlueprintReadOnly) float Weight;  // 0x0040, size 0x4
    UPROPERTY(Transient, BlueprintReadOnly) FTransform StartTransform;  // 0x0050, size 0x30
    UPROPERTY(Transient, BlueprintReadOnly) float ActualStartTime;  // 0x0080, size 0x4
    UPROPERTY() FOnRootMotionModifierDelegate OnActivateDelegate;  // 0x0084, size 0x10
    UPROPERTY() FOnRootMotionModifierDelegate OnUpdateDelegate;  // 0x0094, size 0x10
    UPROPERTY() FOnRootMotionModifierDelegate OnDeactivateDelegate;  // 0x00A4, size 0x10
private:
    UPROPERTY() ERootMotionModifierState State;  // 0x00B4, size 0x1

    // Virtual functions that start here:
    //   OnStateChanged, ProcessRootMotion, Update
};
