// /Game/BP/Objects/World/Items/Deployables/Trophies/BP_Juvenile_Ape_Trophy.BP_Juvenile_Ape_Trophy_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Juvenile_Ape_Trophy_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Trophy_Ape_Juvie_Fur;  // 0x0738, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Juvenile_Ape_Trophy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
