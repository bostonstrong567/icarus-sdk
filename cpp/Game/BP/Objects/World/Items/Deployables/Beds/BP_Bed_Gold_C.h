// /Game/BP/Objects/World/Items/Deployables/Beds/BP_Bed_Gold.BP_Bed_Gold_C
// Derives from: ABP_BedBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x770, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Bed_Gold_C : public ABP_BedBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0768, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Bed_Gold(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
