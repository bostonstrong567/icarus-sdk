// /Script/Icarus.IcarusMount
// size 0x1C0, declared in Icarus/Source/Icarus/AI/Mounts/IcarusMount.h

USTRUCT()
struct FIcarusMount : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMountVariation> Variations;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle RelevantSaddleQuery;  // 0x0068, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EMountCombatBehaviourState> SupportedCombatStates;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EMountMovementBehaviourState> SupportedMovementStates;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EMountConsumptionBehaviourState> SupportedConsumptionStates;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EMountGrazingBehaviourState> SupportedGrazingStates;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGameplayTag, TSoftObjectPtr<UAnimMontage>> Animations;  // 0x00C0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPreviewCameraSettingsRowHandle InventoryPreviewCameraSettings;  // 0x0110, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> DefaultNames;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapIconsRowHandle MapIcon;  // 0x0138, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeFeetOffset;  // 0x0150, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeHandsOffset;  // 0x015C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeLightOffset;  // 0x0168, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpringArmTargetDistance;  // 0x0174, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentArchetypesRowHandle MountTalentArchetype;  // 0x0178, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterGrowthRowHandle GrowthCurve;  // 0x0190, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseTemperature;  // 0x01A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ComfortableTemperatureRange;  // 0x01AC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ColdTemperatureResistance;  // 0x01B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HotTemperatureResistance;  // 0x01B8, size 0x4
};
