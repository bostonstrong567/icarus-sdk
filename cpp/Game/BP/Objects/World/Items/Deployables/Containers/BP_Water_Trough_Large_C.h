// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Water_Trough_Large.BP_Water_Trough_Large_C
// Derives from: ABP_Water_Trough_Base_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x799, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Water_Trough_Large_C : public ABP_Water_Trough_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0790, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Filling;  // 0x0798, size 0x1

    UFUNCTION(BlueprintCallable) void AddWater();
    UFUNCTION() void ExecuteUbergraph_BP_Water_Trough_Large(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool RequiresFilling();  // parameters 0x1
};
