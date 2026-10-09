// /Script/Icarus.SettlementBuildingData
// size 0x170, declared in Icarus/Source/Icarus/IcarusGenerated/SettlementBuildings/SettlementBuildingsRowHandle.h

USTRUCT()
struct FSettlementBuildingData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BuildingName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BuildingDescription;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ASettlementBuilding> BuildingClass;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> Mesh;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> BuildingStats;  // 0x0078, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer BuildingTags;  // 0x00C8, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle RequiredTalent;  // 0x00E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ConstructionTime;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESettlementBoundsBuildRule BoundaryBuildRule;  // 0x0104, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCraftingInput> ItemConstructionCost;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQueryInput> QueryItemConstructionCost;  // 0x0118, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceItem> ResourceConstructionCost;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ConstructionExperienceReward;  // 0x0138, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCTaskTypesRowHandle> DefaultTasks;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementGenerationEntry> Generation;  // 0x0160, size 0x10
};
