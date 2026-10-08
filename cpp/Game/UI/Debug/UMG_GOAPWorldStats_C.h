// /Game/UI/Debug/UMG_GOAPWorldStats.UMG_GOAPWorldStats_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GOAPWorldStats_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AISpawner_C* CachedAISpawner;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BiomeSpawnDensity;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SpawnZoneName;  // 0x027C, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStringRow_C* RowRef;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSubclassOf<ABP_IcarusNPCGOAPCharacter_C>, FAISetupRowHandle> FoundCreatureClasses;  // 0x0290, size 0x50

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_GOAPWorldStats(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetBiomeSpawnDensity();
    UFUNCTION(BlueprintCallable) void UpdateBiomeInfo();
    UFUNCTION(BlueprintCallable) void UpdateCreatureList();
};
