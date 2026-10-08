// /Script/MotionWarping.AnimNotifyState_MotionWarping
// Derives from: UAnimNotifyState > UObject
// size 0x38, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/AnimNotifyState_MotionWarping.h

UCLASS(Const, EditInlineNew)
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) URootMotionModifier* RootMotionModifier;  // 0x0030, size 0x8

    UFUNCTION(BlueprintNativeEvent) URootMotionModifier* AddRootMotionModifier(UMotionWarpingComponent* MotionWarpingComp, UAnimSequenceBase* Animation, float StartTime, float EndTime) const;  // parameters 0x20
    UFUNCTION() void OnRootMotionModifierActivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;  // parameters 0x10
    UFUNCTION() void OnRootMotionModifierDeactivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;  // parameters 0x10
    UFUNCTION() void OnRootMotionModifierUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnWarpBegin(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnWarpEnd(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnWarpUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;  // parameters 0x10

    // Virtual functions that start here:
    //   AddRootMotionModifier_Implementation
};
