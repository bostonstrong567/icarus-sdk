// /Game/BP/Objects/World/Items/Deployables/Furniture/BP_Rug_Cougar.BP_Rug_Cougar_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x738, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Rug_Cougar_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0730, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Rug_Cougar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
