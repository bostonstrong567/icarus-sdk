// /Script/Icarus.IcarusTamingData
// size 0x140, declared in Icarus/Source/Icarus/AI/Mounts/IcarusTamingData.h

USTRUCT()
struct FIcarusTamingData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UIcarusTamingComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TameDurationInSeconds;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D DesiredTemperatureRange;  // 0x0044, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DesiredShelterPercentage;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DesiredNutritionPercentage;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifierStatesRowHandle> RequiredTamingModifiers;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifierStatesRowHandle> ProhibitedTamingModifiers;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle TamedAI;  // 0x0078, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAISetupRowHandle, FIcarusStatReplicated> TamedAIOverride;  // 0x0090, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle MatureCreatureType;  // 0x00E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle JuvenileCreatureType;  // 0x00F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutomaticallySpawnJuvenileWithParent;  // 0x0110, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PercentChanceToSpawnJuvenile;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxNearbyAutoSpawnedJuveniles;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimeToSpawnDynamicCharacter;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimeToSpawnDynamicCharacterRandomDeviation;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAtmospheresEnum> TrappingSupportedAtmospheres;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GestationPeriodSeconds;  // 0x0138, size 0x4
};
