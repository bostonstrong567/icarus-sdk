// /Game/BP/Objects/World/Resources/Nodes/BP_OreDeposit.BP_OreDeposit_C
// Derives from: AResourceDeposit > AIcarusActor > AActor > UObject
// size 0x318, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_OreDeposit_C : public AResourceDeposit
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DrillTimeModifier;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsMapIconShown;  // 0x02FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle UpdateTimer;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NewVar_0;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Drill_Base_C* AttachedDrill;  // 0x0310, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_OreDeposit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void IsDepleted(bool& Depleted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_IsMapIconShown();
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdate();
    UFUNCTION(BlueprintCallable) void UpdateMapIconVisibility();
};
