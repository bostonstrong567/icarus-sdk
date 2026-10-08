// /Script/Engine.AnimNotifyState_Trail
// Derives from: UAnimNotifyState > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h

UCLASS(Const, EditInlineNew)
class UAnimNotifyState_Trail : public UAnimNotifyState
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UParticleSystem* PSTemplate;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName FirstSocketName;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName SecondSocketName;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ETrailWidthMode> WidthScaleMode;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName WidthScaleCurve;  // 0x004C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bRecycleSpawnedSystems : 1;  // 0x0054, mask 0x01

    UFUNCTION(BlueprintImplementableEvent) UParticleSystem* OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x18

    // Virtual functions that start here:
    //   GetCurveWidth, GetOverridenPSTemplate
};
