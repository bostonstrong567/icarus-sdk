// /Game/BP/Objects/World/Resources/Nodes/BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C
// Derives from: ABP_Deep_Mining_Ore_Deposit_Base_C > ABP_OreDeposit_C > AResourceDeposit > AIcarusActor > AActor > UObject
// size 0x420, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deep_Mining_Ore_Deposit_C : public ABP_Deep_Mining_Ore_Deposit_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FOreDepositRowHandle, float> RandomDesiredRatios;  // 0x0330, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedTotalWeight;  // 0x0380, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FOreDepositRowHandle, float> CachedCurrentRatios;  // 0x0388, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> TransformsToVector;  // 0x03D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* HighestDropship;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* NodeMaterial;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FOreDepositRowHandle LocalMaterialType;  // 0x03F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDesertDeposit;  // 0x0410, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsInCave;  // 0x0411, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* RockMaterial;  // 0x0418, size 0x8

    UFUNCTION(BlueprintCallable) void AssignType();
    UFUNCTION(BlueprintCallable) void BiomeUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) TSoftObjectPtr<UMaterialInterface> GetNodeMaterial(FOreDeposit& OreDeposit);  // parameters 0x148
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnLoaded_7A08DCE545D5B147504667BA88769DFC(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_86CD52A24289457079E06B9B6B8EE0DB(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_LocalMaterialType();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RerollType();
    UFUNCTION(BlueprintCallable) void SetMaterialType(FOreDepositRowHandle Row);  // parameters 0x18
};
