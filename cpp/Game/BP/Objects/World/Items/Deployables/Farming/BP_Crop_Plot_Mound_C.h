// /Game/BP/Objects/World/Items/Deployables/Farming/BP_Crop_Plot_Mound.BP_Crop_Plot_Mound_C
// Derives from: ABP_Crop_Plot_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x850, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Crop_Plot_Mound_C : public ABP_Crop_Plot_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0838, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFarmableComponent* Farmable;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0848, size 0x8

    UFUNCTION(BlueprintCallable) void Check();
    UFUNCTION() void ExecuteUbergraph_BP_Crop_Plot_Mound(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HarvestResource(AActor* HarvestingActor, const UStaticMeshComponent*& StaticMeshComponent, bool bUsingSickle, UInventory* NonPlayerInventoryX, bool& Harvested);  // parameters 0x21
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void SetSoilState(bool bWet);  // parameters 0x1
};
