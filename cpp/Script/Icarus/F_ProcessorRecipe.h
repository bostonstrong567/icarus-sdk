// /Script/Icarus.ProcessorRecipe
// size 0x308, declared in Icarus/Source/Icarus/DataStructs/CraftingData.h

USTRUCT()
struct FProcessorRecipe : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bForceDisableRecipe;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle Requirement;  // 0x001C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFlagsMultiRowHandle SessionRequirement;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterFlagsRowHandle CharacterRequirement;  // 0x0050, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredMillijoules;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRecipeSetsRowHandle> RecipeSets;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> ResourceCostMultipliers;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCraftingInput> Inputs;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueryInput> QueryInputs;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceItem> ResourceInputs;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Container;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSelectOutputItemRandomly;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bContainsContainer;  // 0x00D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemIconOverride;  // 0x00D8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCraftingOutput> Outputs;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceItem> ResourceOutputs;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERefundPermission Refundable;  // 0x02E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExperienceMultiplier;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCraftingAudioDataRowHandle Audio;  // 0x02F0, size 0x18
};
